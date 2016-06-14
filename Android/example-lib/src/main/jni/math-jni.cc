#include <jni.h>
#include "handle.hh"

extern "C" {

  JNIEXPORT jlong JNICALL
  Java_example_lib_Math_initializeNative(JNIEnv *env, jobject instance) {

    // TODO

  }

  JNIEXPORT jint JNICALL
  Java_example_lib_Math_getNumImpl(JNIEnv *env, jobject instance) {

    return 32;

  }
}
