#include <jni.h>
#include <string>
#include "handle.hh"

#include "mathlib.hh"
#include "strlib.hh"


using Common::MathLib;
using Common::StringLib;


extern "C" {

    JNIEXPORT void JNICALL
    Java_com_factual_examplelib_MathLib_initializeNative(JNIEnv *env, jobject instance) {
      MathLib *m = new MathLib();
      setHandle(env, instance, m);
    }

    JNIEXPORT jdouble JNICALL
    Java_com_factual_examplelib_MathLib_dotProduct(JNIEnv *env, jobject instance,
                                        jdoubleArray x_, jdoubleArray y_,
                                        jlong length) {
      jdouble *x = env->GetDoubleArrayElements(x_, nullptr);
      jdouble *y = env->GetDoubleArrayElements(y_, nullptr);

      MathLib *m = getHandle<MathLib>(env, instance);
      jdouble result = m->dotProduct(x, y, length);

      env->ReleaseDoubleArrayElements(x_, x, 0);
      env->ReleaseDoubleArrayElements(y_, y, 0);
      return result;
    }

    JNIEXPORT void JNICALL
    Java_com_factual_examplelib_StringLib_initializeNative(JNIEnv *env, jobject instance, jstring s_) {
      const char *s = env->GetStringUTFChars(s_, 0);
      StringLib* fs = new StringLib(std::string(s));
      setHandle(env, instance, fs);
      env->ReleaseStringUTFChars(s_, s);
    }

    JNIEXPORT jstring JNICALL
    Java_com_factual_examplelib_StringLib_concat(JNIEnv *env, jobject instance, jstring s_) {
      const char *s = env->GetStringUTFChars(s_, 0);
      StringLib *fs = getHandle<StringLib>(env, instance);
      string result = fs->concat(std::string(s));
      env->ReleaseStringUTFChars(s_, s);
      return env->NewStringUTF(result.c_str());
    }

    JNIEXPORT jstring JNICALL
    Java_com_factual_examplelib_StringLib_getStr(JNIEnv *env, jobject instance) {
      StringLib *fs = getHandle<StringLib>(env, instance);
      string *result = fs->getInternal();
      return env->NewStringUTF(result->c_str());
    }

}
