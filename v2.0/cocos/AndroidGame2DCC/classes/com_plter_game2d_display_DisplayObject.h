/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_plter_game2d_display_DisplayObject */

#ifndef _Included_com_plter_game2d_display_DisplayObject
#define _Included_com_plter_game2d_display_DisplayObject
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_plter_game2d_display_DisplayObject
 * Method:    nativeSetVisible
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_plter_game2d_display_DisplayObject_nativeSetVisible
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     com_plter_game2d_display_DisplayObject
 * Method:    nativeSetRotation
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_plter_game2d_display_DisplayObject_nativeSetRotation
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_plter_game2d_display_DisplayObject
 * Method:    nativeGetBoundingBox
 * Signature: (J)[F
 */
JNIEXPORT jfloatArray JNICALL Java_com_plter_game2d_display_DisplayObject_nativeGetBoundingBox
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_plter_game2d_display_DisplayObject
 * Method:    nativeSetPosition
 * Signature: (JFF)V
 */
JNIEXPORT void JNICALL Java_com_plter_game2d_display_DisplayObject_nativeSetPosition
  (JNIEnv *, jobject, jlong, jfloat, jfloat);

/*
 * Class:     com_plter_game2d_display_DisplayObject
 * Method:    nativeSetPositionX
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_plter_game2d_display_DisplayObject_nativeSetPositionX
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_plter_game2d_display_DisplayObject
 * Method:    nativeSetPositionY
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_plter_game2d_display_DisplayObject_nativeSetPositionY
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_plter_game2d_display_DisplayObject
 * Method:    nativeSetAnchorPoint
 * Signature: (JFF)V
 */
JNIEXPORT void JNICALL Java_com_plter_game2d_display_DisplayObject_nativeSetAnchorPoint
  (JNIEnv *, jobject, jlong, jfloat, jfloat);

#ifdef __cplusplus
}
#endif
#endif