
all: CompileToClass_01 GenerateJNICPP_02 ManuallyCreateCPPImplemetation_03 CompileToJNILib_04 JNILibraryGen_05 

#Step 01 - Compiling the Java Class
#We use the javac command to generate the class file that is needed to generate the appropriate JNI C++ classes. You can’t skip the generation of the class file!
CompileToClass_01: HelloWorld.java
	@echo  "Step 01 - Compiling HelloWorld.java to HelloWorld.class .."
	javac HelloWorld.java
	@echo  "-------------------------------------------------------"


#To create the JNI C++ files, you can just type the following command into the terminal:
#outoput: HelloWorld.h
GenerateJNICPP_02: HelloWorld.class
	@echo  "Step 02 - Creating JNI C++ Headers .."
	javah -jni HelloWorld
	@echo  "-------------------------------------------------------"

#Step 03 - You should create/implement your function in .cpp file
#I have done it. Just for sake of completenesss, i am mentioning it here.
ManuallyCreateCPPImplemetation_03:
	@echo "Step 03 - You are manually creating the HelloWorld.cpp. Nothing done in makefile"
	@echo  "-------------------------------------------------------"

#After writing cpp file, ie implementation of JNI function. We need to compile our native C++
#code into dynamic library
#Outout: HelloWorld.o
CompileToJNILib_04: HelloWorld.cpp
	@echo "Step 04 -  Creating native C++  HelloWorld.cpp into HelloWorld.o"
	g++ -I/System/Library//Frameworks/JavaVM.framework/Versions/A/Headers -c HelloWorld.cpp
	@echo  "-------------------------------------------------------"

#Now we generate JNI Library
#Output: libhelloworld.jnilib
JNILibraryGen_05: HelloWorld.o
	@echo "Step 05 - Generate the JNI dynamic library(this is C++ shared object library)"
	g++ -dynamiclib -o libhelloworld.jnilib HelloWorld.o

clean:
	rm libhelloworld.jnilib
	rm HelloWorld.o
	rm HelloWorld.h
	rm HelloWorld.class
