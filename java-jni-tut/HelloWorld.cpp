/*
 * Let’s write an implementation file to define the behavior of the Java_HelloWorld_print() function.
 */

#include <jni.h>
#include <iostream>
#include "HelloWorld.h"
using namespace std;
 
JNIEXPORT void JNICALL 
Java_HelloWorld_print(JNIEnv *, jobject){
	    cout << "Oh JNI, how cumbersome you are!\n";
	    return;
}

/*
 * The implementation of the native function simply prints out a literal string.
 * Compiling the C++ Code
 * To include the native code in the compilation of the Java program, we need to compile our native C++ code into a dynamic library. On OSX, JNI shared/dynamic libraries have the extension .jnilib. This is a huge difference from the extensions on Windows and Solaris machines: .dll and .so, respectively.
 *
 * Before we get to the command, there’s a big problem: your compiler (g++) will need to know the location of the jni.h library. You don’t get this linking for free, so you have to specify the location of the header file within the compilation command.
 */
