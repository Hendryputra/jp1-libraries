/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_hifiremote_jp1_io_JP12Serial */

#ifndef _Included_com_hifiremote_jp1_io_JP12Serial
#define _Included_com_hifiremote_jp1_io_JP12Serial
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_hifiremote_jp1_io_JP12Serial
 * Method:    getInterfaceName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_hifiremote_jp1_io_JP12Serial_getInterfaceName
  (JNIEnv *, jobject);

/*
 * Class:     com_hifiremote_jp1_io_JP12Serial
 * Method:    getInterfaceVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_hifiremote_jp1_io_JP12Serial_getInterfaceVersion
  (JNIEnv *, jobject);

/*
 * Class:     com_hifiremote_jp1_io_JP12Serial
 * Method:    getJP12InterfaceType
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_hifiremote_jp1_io_JP12Serial_getJP12InterfaceType
  (JNIEnv *, jobject);

/*
 * Class:     com_hifiremote_jp1_io_JP12Serial
 * Method:    getJP2info
 * Signature: ([BI)Z
 */
JNIEXPORT jboolean JNICALL Java_com_hifiremote_jp1_io_JP12Serial_getJP2info
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     com_hifiremote_jp1_io_JP12Serial
 * Method:    getPortNames
 * Signature: ()[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_hifiremote_jp1_io_JP12Serial_getPortNames
  (JNIEnv *, jobject);

/*
 * Class:     com_hifiremote_jp1_io_JP12Serial
 * Method:    openRemote
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_hifiremote_jp1_io_JP12Serial_openRemote
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_hifiremote_jp1_io_JP12Serial
 * Method:    closeRemote
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_hifiremote_jp1_io_JP12Serial_closeRemote
  (JNIEnv *, jobject);

/*
 * Class:     com_hifiremote_jp1_io_JP12Serial
 * Method:    getRemoteSignature
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_hifiremote_jp1_io_JP12Serial_getRemoteSignature
  (JNIEnv *, jobject);

/*
 * Class:     com_hifiremote_jp1_io_JP12Serial
 * Method:    getRemoteEepromAddress
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_hifiremote_jp1_io_JP12Serial_getRemoteEepromAddress
  (JNIEnv *, jobject);

/*
 * Class:     com_hifiremote_jp1_io_JP12Serial
 * Method:    getRemoteEepromSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_hifiremote_jp1_io_JP12Serial_getRemoteEepromSize
  (JNIEnv *, jobject);

/*
 * Class:     com_hifiremote_jp1_io_JP12Serial
 * Method:    readRemote
 * Signature: (I[BI)I
 */
JNIEXPORT jint JNICALL Java_com_hifiremote_jp1_io_JP12Serial_readRemote
  (JNIEnv *, jobject, jint, jbyteArray, jint);

/*
 * Class:     com_hifiremote_jp1_io_JP12Serial
 * Method:    writeRemote
 * Signature: (I[BI)I
 */
JNIEXPORT jint JNICALL Java_com_hifiremote_jp1_io_JP12Serial_writeRemote
  (JNIEnv *, jobject, jint, jbyteArray, jint);

#ifdef __cplusplus
}
#endif
#endif
