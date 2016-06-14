package example.lib;

public class Math {

  private long nativeHandle;

  public Math() {
    this.nativeHandle = this.initializeNative();
  }

  public double dotProduct(double x[], double y[]) {
    return this.dotProduct(x, y, x.length);
  }

  static {
    System.loadLibrary("math-jni");
  }

  private native long initializeNative();
  private native double dotProduct(double x[], double y[], long length);
}
