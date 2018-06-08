# Getting Started with JNI and C++ on 

#CREDITS : http://mrjoelkemp.com/2012/01/getting-started-with-jni-and-c-on-osx-lion/

My System:
System Version:	macOS 10.13.2 (17C88)
Kernel Version:	Darwin 17.3.0
Boot Volume:	Macintosh HD

Above is a very simple nice tutorial from Joel Kemp, describing how to write JNI on Mac OSX. To me the moral of the story was to name the final C++ library to be used as JNI to be named with extension .jnilib not .so. The name MUST have lib prefix as well. E.g libBLAHBLAH.jnilib


You may go through the Joels tutorial, I have put all the tutorial steps oragnized into a makefile. just issue the command

jvsingh: ~/work/github/java/java-jni-tut  -> make

Step 01 - Compiling HelloWorld.java to HelloWorld.class ..
javac HelloWorld.java
-------------------------------------------------------
Step 02 - Creating JNI C++ Headers ..
javah -jni HelloWorld
-------------------------------------------------------
Step 03 - You are manually creating the HelloWorld.cpp. Nothing done in makefile
-------------------------------------------------------
Step 04 -  Creating native C++  HelloWorld.cpp into HelloWorld.o
g++ -I/System/Library//Frameworks/JavaVM.framework/Versions/A/Headers -c HelloWorld.cpp
-------------------------------------------------------
Step 05 - Generate the JNI dynamic library(this is C++ shared object library)
g++ -dynamiclib -o libhelloworld.jnilib HelloWorld.o

## Finally to run
jvsingh: ~/work/github/java/java-jni-tut  -> java HelloWorld
Oh JNI, how cumbersome you are!
