/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_jme3_bullet_PhysicsSpace */

#ifndef _Included_com_jme3_bullet_PhysicsSpace
#define _Included_com_jme3_bullet_PhysicsSpace
#ifdef __cplusplus
extern "C" {
#endif
#undef com_jme3_bullet_PhysicsSpace_AXIS_X
#define com_jme3_bullet_PhysicsSpace_AXIS_X 0L
#undef com_jme3_bullet_PhysicsSpace_AXIS_Y
#define com_jme3_bullet_PhysicsSpace_AXIS_Y 1L
#undef com_jme3_bullet_PhysicsSpace_AXIS_Z
#define com_jme3_bullet_PhysicsSpace_AXIS_Z 2L
/*
 * Class:     com_jme3_bullet_PhysicsSpace
 * Method:    createPhysicsSpace
 * Signature: (FFFFFFIZ)J
 */
JNIEXPORT jlong JNICALL Java_com_jme3_bullet_PhysicsSpace_createPhysicsSpace
  (JNIEnv *, jobject, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jint, jboolean);

/*
 * Class:     com_jme3_bullet_PhysicsSpace
 * Method:    stepSimulation
 * Signature: (JFIF)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_PhysicsSpace_stepSimulation
  (JNIEnv *, jobject, jlong, jfloat, jint, jfloat);

/*
 * Class:     com_jme3_bullet_PhysicsSpace
 * Method:    addCollisionObject
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_PhysicsSpace_addCollisionObject
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jme3_bullet_PhysicsSpace
 * Method:    removeCollisionObject
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_PhysicsSpace_removeCollisionObject
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jme3_bullet_PhysicsSpace
 * Method:    addRigidBody
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_PhysicsSpace_addRigidBody
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jme3_bullet_PhysicsSpace
 * Method:    removeRigidBody
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_PhysicsSpace_removeRigidBody
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jme3_bullet_PhysicsSpace
 * Method:    addCharacterObject
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_PhysicsSpace_addCharacterObject
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jme3_bullet_PhysicsSpace
 * Method:    removeCharacterObject
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_PhysicsSpace_removeCharacterObject
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jme3_bullet_PhysicsSpace
 * Method:    addAction
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_PhysicsSpace_addAction
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jme3_bullet_PhysicsSpace
 * Method:    removeAction
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_PhysicsSpace_removeAction
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jme3_bullet_PhysicsSpace
 * Method:    addVehicle
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_PhysicsSpace_addVehicle
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jme3_bullet_PhysicsSpace
 * Method:    removeVehicle
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_PhysicsSpace_removeVehicle
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jme3_bullet_PhysicsSpace
 * Method:    addConstraint
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_PhysicsSpace_addConstraint
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jme3_bullet_PhysicsSpace
 * Method:    addConstraintC
 * Signature: (JJZ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_PhysicsSpace_addConstraintC
  (JNIEnv *, jobject, jlong, jlong, jboolean);

/*
 * Class:     com_jme3_bullet_PhysicsSpace
 * Method:    removeConstraint
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_PhysicsSpace_removeConstraint
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_jme3_bullet_PhysicsSpace
 * Method:    setGravity
 * Signature: (JLcom/jme3/math/Vector3f;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_PhysicsSpace_setGravity
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_jme3_bullet_PhysicsSpace
 * Method:    rayTest_native
 * Signature: (Lcom/jme3/math/Vector3f;Lcom/jme3/math/Vector3f;JLjava/util/List;)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_PhysicsSpace_rayTest_1native
  (JNIEnv *, jobject, jobject, jobject, jlong, jobject, jint);

/*
 * Class:     com_jme3_bullet_PhysicsSpace
 * Method:    initNativePhysics
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_PhysicsSpace_initNativePhysics
  (JNIEnv *, jclass);

/*
 * Class:     com_jme3_bullet_PhysicsSpace
 * Method:    finalizeNative
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_jme3_bullet_PhysicsSpace_finalizeNative
  (JNIEnv *, jobject, jlong);


/*
* Class:     com_jme3_bullet_PhysicsSpace
* Method : sweepTest_native
* Signature: (J;L;Lcom/jme3/math/Transform;Lcom/jme3/math/Transform;L;JLjava/util/List;F)V
*/
JNIEXPORT void JNICALL Java_com_jme3_bullet_PhysicsSpace_sweepTest_1native
(JNIEnv *, jobject, jlong, jobject, jobject, jlong, jobject, jfloat);

#ifdef __cplusplus
}
#endif
#endif
