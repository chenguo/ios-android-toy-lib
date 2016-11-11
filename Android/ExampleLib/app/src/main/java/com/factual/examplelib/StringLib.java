package com.factual.examplelib;

public class StringLib {

  private long nativeHandle;

  public StringLib(String s) {
    this.initializeNative(s);
  }

  public long getHandle() {
    return this.nativeHandle;
  }

  static {
    System.loadLibrary("common-jni");
  }

  private native void initializeNative(String s);
  public native String concat(String s);
  public native String getStr();

}
