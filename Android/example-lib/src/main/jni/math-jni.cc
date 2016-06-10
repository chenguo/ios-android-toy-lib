#include <jni.h>
#include "common/math.hh"

#include "handle.hh"

JNIEXPORT jdouble JNICALL
Java_com_example_Math_dotProduct(JNIEnv *env, jobject instance, jdoubleArray x_, jdoubleArray y_) {
    jdouble *x = (*env)->GetDoubleArrayElements(env, x_, NULL);
    jdouble *y = (*env)->GetDoubleArrayElements(env, y_, NULL);

    // TODO

    (*env)->ReleaseDoubleArrayElements(env, x_, x, 0);
    (*env)->ReleaseDoubleArrayElements(env, y_, y, 0);
}
