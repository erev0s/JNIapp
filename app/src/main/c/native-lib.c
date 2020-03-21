#include <jni.h>
#include <stdlib.h>
#include <time.h>


jint Jniint() {
    srand((unsigned int) time(0));
    int intrandom = (rand() % (990 - 101)) + 101;
    return intrandom;
}

JNIEXPORT jint JNICALL
Java_com_erev0s_jniapp_MainActivity_Jniint(JNIEnv *env, jobject this)
{
    return (jint) Jniint();
}


