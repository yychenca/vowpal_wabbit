/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class vw_VW */

#ifndef _Included_vw_VW
#define _Included_vw_VW
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     vw_VW
 * Method:    version
 * Signature: ()V
 */
JNIEXPORT jstring JNICALL Java_vw_VW_version
  (JNIEnv *, jobject);

/*
 * Class:     vw_VW
 * Method:    initialize
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT jlong JNICALL Java_vw_VW_initialize
  (JNIEnv *, jobject, jstring);

/*
 * Class:     vw_VW
 * Method:    predict
 * Signature: (Ljava/lang/String;)F
 */
JNIEXPORT jfloat JNICALL Java_vw_VW_predict
  (JNIEnv *, jobject, jstring, jboolean, jlong);

/*
 * Class:     vw_VW
 * Method:    closeInstance
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_vw_VW_closeInstance
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
