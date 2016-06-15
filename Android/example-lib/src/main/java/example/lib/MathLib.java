package example.lib;

public class MathLib {

  private long nativeHandle;

  public MathLib() {
    this.initializeNative();
  }

  public double dotProduct(double x[], double y[]) {
    return this.dotProduct(x, y, x.length);
  }

  public long getHandle() {
    return this.nativeHandle;
  }

  static {
    System.loadLibrary("common-jni");
  }

  private native void initializeNative();
  private native double dotProduct(double x[], double y[], long length);
}
