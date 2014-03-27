/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_plter_game2d_display_Stage */

#ifndef _Included_com_plter_game2d_display_Stage
#define _Included_com_plter_game2d_display_Stage
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: _00024SWITCH_TABLE_00024com_00024plter_00024game2d_00024display_00024ResolutionPolicy */
/*
 * Class:     com_plter_game2d_display_Stage
 * Method:    createNativeObject
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_plter_game2d_display_Stage_createNativeObject
  (JNIEnv *, jobject);

/*
 * Class:     com_plter_game2d_display_Stage
 * Method:    setDisplayStats
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_plter_game2d_display_Stage_setDisplayStats
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_plter_game2d_display_Stage
 * Method:    setAnimationInterval
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_plter_game2d_display_Stage_setAnimationInterval
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_plter_game2d_display_Stage
 * Method:    nativeGetVisibleSize
 * Signature: ()[F
 */
JNIEXPORT jfloatArray JNICALL Java_com_plter_game2d_display_Stage_nativeGetVisibleSize
  (JNIEnv *, jobject);

/*
 * Class:     com_plter_game2d_display_Stage
 * Method:    nativeSetDesignResolutionSize
 * Signature: (FFI)V
 */
JNIEXPORT void JNICALL Java_com_plter_game2d_display_Stage_nativeSetDesignResolutionSize
  (JNIEnv *, jobject, jfloat, jfloat, jint);

#ifdef __cplusplus
}
#endif
#endif
