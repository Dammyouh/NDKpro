#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jint

JNICALL
Java_com_example_ndkpro_MainActivity_stringToInt(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "da ben dan";
//    return env->NewStringUTF(hello.c_str());
    return 1;
}
