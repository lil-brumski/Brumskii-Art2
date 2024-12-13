#include <Brumskii-Art2/Brumskii-Art2.hpp>
#include <jni.h>

extern "C" JNIEXPORT void JNICALL Java_Brumskii_Art2_Art_ArtOnek(JNIEnv* env, jobject obj){
    auto brumskiiart = BrumskiiArt2::Art(1);
    brumskiiart.ArtOne();
}

extern "C" JNIEXPORT void JNICALL Java_Brumskii_Art2_Art_ArtTwok(JNIEnv* env, jobject obj){
    auto brumskiiart = BrumskiiArt2::Art(1);
    brumskiiart.ArtTwo();
}