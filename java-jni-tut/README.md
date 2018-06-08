# Getting Started with JNI and C++ on 

#CREDITS : http://mrjoelkemp.com/2012/01/getting-started-with-jni-and-c-on-osx-lion/

My System:
System Version:	macOS 10.13.2 (17C88)
Kernel Version:	Darwin 17.3.0
Boot Volume:	Macintosh HD

Above is a very simple nice tutorial from Joel Kemp, describing how to write JNI on Mac OSX. To me the moral of the story was to name the final C++ library to be used as JNI to be named with extension .jnilib not .so. The name MUST have lib prefix as well. E.g libBLAHBLAH.jnilib
