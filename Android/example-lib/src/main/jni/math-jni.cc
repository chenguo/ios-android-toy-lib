#include <jni.h>

extern "C" {
JNIEXPORT jint JNICALL
Java_example_library_Math_getNumImpl(JNIEnv *env, jobject instance) {

  return 32;

}
}