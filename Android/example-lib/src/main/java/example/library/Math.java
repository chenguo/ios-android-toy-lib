package example.library;

public class Math {

  private long nativeHandle;

  public Math() {
    // this.long = this.initializeNative();
  }

  public int basic() {
    return 42;
  }

  // public double dotProduct(double x[], double y[]) {
  //   return this.dotProduct(x, y, x.length);
  // }

  public int getNum() {
    return this.getNumImpl();
  }

  static {
    String javaLibPath = System.getProperty("java.library.path");
    System.out.println("LIB PATH " + javaLibPath);
    System.loadLibrary("math-jni");
  }

  private native int getNumImpl();

  // private native long initializeNative();
  // private native double dotProduct(double x[], double y[], long length);
}
