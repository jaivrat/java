class HelloWorld {
   private native void print();
   public static void main(String[] args) {
        new HelloWorld().print();
   }
   static {
           System.loadLibrary("HelloWorld");
   }
}
/*
 * The above code details a simple Java class that has a very important
 * native method print(). The fact that this method is native signifies 
 * that it should be implemented in C++. We’ll get to that implementation in a bit.
 *
 * The static section gets executed first, which expects to load a JNI 
 * shared or dynamic library known as HelloWorld.
 * */
