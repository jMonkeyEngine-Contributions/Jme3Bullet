# Jme3Bullet
The old physics libraries for JMonkeyEngine3, which were included in v3.3.2-stable and earlier versions of the Engine:
 + jme3-bullet: Java code to simulate physics using (native) Bullet Physics via JNI
 + jme3-bullet-native: native libraries for Bullet Physics on desktop platforms
 + jme3-bullet-native-android: native libraries for Bullet Physics on Android
 + jme3-jbullet: Java code to simulate physics using a version of JBullet

To build the project from source:
 1. Install a Java Development Kit (JDK), if you don't already have one.
 2. Download and extract the Jme3Bullet source code from GitHub:
   + `git clone https://github.com/jMonkeyEngine-Contributions/Jme3Bullet.git`
   + `cd Jme3Bullet`
 3. Set the `JAVA_HOME` environment variable:
   + using Bash:  `export JAVA_HOME="` *path to your JDK* `"`
   + using Windows Command Prompt:  `set JAVA_HOME="` *path to your JDK* `"`
 4. Run the Gradle wrapper:
   + using Bash:  `./gradlew assemble build`
   + using Windows Command Prompt:  `.\gradlew assemble build`

After building from source, you can launch the test chooser:
   + using Bash:  `./gradlew run`
   + using Windows Command Prompt:  `.\gradlew run`

By default, the test chooser uses native Bullet and LWJGL v2.
To test JBullet and/or LWJGL v3, edit jme3-examples/build.gradle
