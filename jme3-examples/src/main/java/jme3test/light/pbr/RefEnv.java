package jme3test.light.pbr;

import com.jme3.app.SimpleApplication;
import com.jme3.bounding.BoundingSphere;
import com.jme3.environment.EnvironmentCamera;
import com.jme3.environment.LightProbeFactory;
import com.jme3.environment.generation.JobProgressAdapter;
import com.jme3.environment.util.EnvMapUtils;
import com.jme3.input.KeyInput;
import com.jme3.input.controls.ActionListener;
import com.jme3.input.controls.KeyTrigger;
import com.jme3.light.LightProbe;
import com.jme3.material.Material;
import com.jme3.math.ColorRGBA;
import com.jme3.math.Quaternion;
import com.jme3.math.Vector3f;
import com.jme3.scene.Geometry;
import com.jme3.scene.Node;
import com.jme3.scene.Spatial;
import com.jme3.util.MaterialDebugAppState;

/**
 * test
 *
 * @author nehon
 */
public class RefEnv extends SimpleApplication {

    private Node tex;

    public static void main(String[] args) {
        System.err.println(Math.min(1, 8192));
        System.err.println(Math.min(1 << (6), 8192));
        System.err.println(Math.min(1 << (8), 8192));
        System.err.println(Math.min(1 << (10), 8192));
        System.err.println(Math.min(1 << (12), 8192));
        System.err.println(Math.min(1 << (14), 8192));
        RefEnv app = new RefEnv();
        app.start();
    }

    @Override
    public void simpleInitApp() {

        cam.setLocation(new Vector3f(-3.0286736f, 2.8702848f, 5.153083f));
        cam.setRotation(new Quaternion(0.06595449f, 0.9340066f, -0.24384351f, 0.2526304f));
        Spatial sc = assetManager.loadModel("Scenes/PBR/spheres.j3o");
        rootNode.attachChild(sc);
        rootNode.getChild("Scene").setCullHint(Spatial.CullHint.Always);

        stateManager.attach(new EnvironmentCamera());

        inputManager.addMapping("tex", new KeyTrigger(KeyInput.KEY_SPACE));
        inputManager.addMapping("switch", new KeyTrigger(KeyInput.KEY_RETURN));
        inputManager.addListener(new ActionListener() {

            @Override
            public void onAction(String name, boolean isPressed, float tpf) {
                if (name.equals("tex") && isPressed) {
                    if (tex == null) {
                        return;
                    }
                    if (tex.getParent() == null) {
                        guiNode.attachChild(tex);
                    } else {
                        tex.removeFromParent();
                    }
                }

                if (name.equals("switch") && isPressed) {
                    switchMat(rootNode.getChild("Scene"));
                }
            }
        }, "tex", "switch");

    }

    private void switchMat(Spatial s) {
        if (s instanceof Node) {
            Node n = (Node) s;
            for (Spatial children : n.getChildren()) {
                switchMat(children);
            }
        } else if (s instanceof Geometry) {
            Geometry g = (Geometry) s;
            Material mat = g.getMaterial();
            if (((Float) mat.getParam("Metallic").getValue()) == 1f) {
                mat.setFloat("Metallic", 0);
                mat.setColor("BaseColor", ColorRGBA.Black);
            } else {
                mat.setFloat("Metallic", 1);
                mat.setColor("BaseColor", ColorRGBA.White);
            }
        }
    }

    private int frame = 0;

    @Override
    public void simpleUpdate(float tpf) {
        frame++;

        if (frame == 2) {
            final LightProbe probe = LightProbeFactory.makeProbe(stateManager.getState(EnvironmentCamera.class), rootNode, new JobProgressAdapter<LightProbe>() {

                @Override
                public void done(LightProbe result) {
                    System.err.println("Done rendering env maps");
                    tex = EnvMapUtils.getCubeMapCrossDebugViewWithMipMaps(result.getPrefilteredEnvMap(), assetManager);
                  //  guiNode.attachChild(tex);
                    rootNode.getChild("Scene").setCullHint(Spatial.CullHint.Dynamic);
                }
            });
            ((BoundingSphere) probe.getBounds()).setRadius(100);
            rootNode.addLight(probe);

        }
    }
}
