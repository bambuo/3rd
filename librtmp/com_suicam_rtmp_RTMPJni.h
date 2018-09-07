/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_suicam_rtmp_RTMPJni */

#ifndef _Included_com_suicam_rtmp_RTMPJni
#define _Included_com_suicam_rtmp_RTMPJni
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_suicam_rtmp_RTMPJni
 * Method:    getVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_suicam_rtmp_RTMPJni_getVersion
  (JNIEnv *, jclass);

/*
 * Class:     com_suicam_rtmp_RTMPJni
 * Method:    open
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_suicam_rtmp_RTMPJni_open
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_suicam_rtmp_RTMPJni
 * Method:    close
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_suicam_rtmp_RTMPJni_close
  (JNIEnv *, jobject);

/*
 * Class:     com_suicam_rtmp_RTMPJni
 * Method:    sendVideo
 * Signature: (Ljava/nio/ByteBuffer;JJ)I
 */
JNIEXPORT jint JNICALL Java_com_suicam_rtmp_RTMPJni_sendVideo
  (JNIEnv *, jobject, jobject, jlong, jlong);

/*
 * Class:     com_suicam_rtmp_RTMPJni
 * Method:    sendAudio
 * Signature: (Ljava/nio/ByteBuffer;JJ)I
 */
JNIEXPORT jint JNICALL Java_com_suicam_rtmp_RTMPJni_sendAudio
  (JNIEnv *, jobject, jobject, jlong, jlong);

/*
 * Class:     com_suicam_rtmp_RTMPJni
 * Method:    setHeader
 * Signature: (Ljava/nio/ByteBuffer;III)I
 */
JNIEXPORT jint JNICALL Java_com_suicam_rtmp_RTMPJni_setHeader
  (JNIEnv *, jobject, jobject, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif