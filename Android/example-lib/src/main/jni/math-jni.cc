#include <jni.h>
#include "handle.hh"
#include "math.hh"

using Common::Math;

extern "C" {

  JNIEXPORT jlong JNICALL
  Java_example_lib_Math_initializeNative(JNIEnv *env, jobject instance) {
    Math *m = new Math();
    setHandle(env, instance, m);
  }

  JNIEXPORT jdouble JNICALL
  Java_example_lib_Math_dotProduct(JNIEnv *env, jobject instance,
                                   jdoubleArray x_, jdoubleArray y_,
                                   jlong length) {
    jdouble *x = env->GetDoubleArrayElements(x_, nullptr);
    jdouble *y = env->GetDoubleArrayElements(y_, nullptr);

    Math *m = getHandle<Math>(env, instance);
    jdouble result = m->dotProduct(x, y, length);

    env->ReleaseDoubleArrayElements(x_, x, 0);
    env->ReleaseDoubleArrayElements(y_, y, 0);
    return result;
  }

}
