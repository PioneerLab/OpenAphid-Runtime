/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_openaphid_gl_AphidRenderer */

#ifndef _Included_org_openaphid_gl_AphidRenderer
#define _Included_org_openaphid_gl_AphidRenderer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_openaphid_gl_AphidRenderer
 * Method:    nativeOnSurfaceCreated
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_openaphid_gl_AphidRenderer_nativeOnSurfaceCreated
  (JNIEnv *, jobject);

/*
 * Class:     org_openaphid_gl_AphidRenderer
 * Method:    nativeOnSurfaceChanged
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_openaphid_gl_AphidRenderer_nativeOnSurfaceChanged
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_openaphid_gl_AphidRenderer
 * Method:    nativeOnDrawFrame
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_openaphid_gl_AphidRenderer_nativeOnDrawFrame
  (JNIEnv *, jobject);

/*
 * Class:     org_openaphid_gl_AphidRenderer
 * Method:    nativeOnSurfaceDestroyed
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_openaphid_gl_AphidRenderer_nativeOnSurfaceDestroyed
  (JNIEnv *, jobject);

/*
 * Class:     org_openaphid_gl_AphidRenderer
 * Method:    nativeOnTouch
 * Signature: (Lorg/openaphid/gl/AphidTouchEvent;)V
 */
JNIEXPORT void JNICALL Java_org_openaphid_gl_AphidRenderer_nativeOnTouch
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_openaphid_gl_AphidRenderer
 * Method:    nativeEvaluateScriptFile
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_openaphid_gl_AphidRenderer_nativeEvaluateScriptFile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_openaphid_gl_AphidRenderer
 * Method:    nativeBindJavaObject
 * Signature: (Ljava/lang/String;Lorg/openaphid/internal/AphidJSBinder;Z)V
 */
JNIEXPORT void JNICALL Java_org_openaphid_gl_AphidRenderer_nativeBindJavaObject
  (JNIEnv *, jobject, jstring, jobject, jboolean);

#ifdef __cplusplus
}
#endif
#endif
