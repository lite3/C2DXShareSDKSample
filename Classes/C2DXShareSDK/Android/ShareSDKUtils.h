/* DO NOT EDIT THIS FILE - it is machine generated */
#include "AppDelegate.h"
#include "cocos2d.h"
#include "CCEventType.h"
#include "platform/android/jni/JniHelper.h"
#include <jni.h>
#include <android/log.h>
#include "C2DXShareSDKTypeDef.h"

USING_NS_CC;

/* Header for class ShareSDKUtils */
#ifndef _Included_ShareSDKUtils
#define _Included_ShareSDKUtils
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     ShareSDKUtils
 * Method:    onCancel
 * Signature: (Lcn/sharesdk/framework/Platform;I)V
 */
JNIEXPORT void JNICALL Java_cn_sharesdk_ShareSDKUtils_onCancel
		(JNIEnv * env, jobject thiz, jobject platform, jint action);

/*
 * Class:     ShareSDKUtils
 * Method:    onComplete
 * Signature: (Lcn/sharesdk/framework/Platform;ILjava/util/HashMap;)V
 */
JNIEXPORT void JNICALL Java_cn_sharesdk_ShareSDKUtils_onComplete
		(JNIEnv * env, jobject thiz, jobject platform, jint action, jobject res);

/*
 * Class:     ShareSDKUtils
 * Method:    onError
 * Signature: (Lcn/sharesdk/framework/Platform;ILjava/lang/Throwable;)V
 */
JNIEXPORT void JNICALL Java_cn_sharesdk_ShareSDKUtils_onError
		(JNIEnv * env, jobject thiz, jobject platform, jint action, jobject res);

bool getMethod(JniMethodInfo &mi, const char *methodName, const char *paramCode);

void releaseMethod(JniMethodInfo &mi);

void hashmapToCCDictionary(jobject hashmap, CCDictionary *dic);

void CCDictionaryToHashMap(CCDictionary *info, jobject &hashmap);

const std::string throwableToString(jobject t);

CCDictionary* parseShareError(int platformId, jobject err);

bool initShareSDK(const char* appKey, bool useAppTrusteeship);

bool stopSDK();

bool setPlatformDevInfo(int platformId, CCDictionary *info);

bool doAuthorize(int platformId, C2DXAuthResultEvent callback);

bool removeAccount(int platformId);

bool isValid(int platformId);

bool showUser(int platformId, C2DXGetUserInfoResultEvent callback);

bool doShare(int platformId, CCDictionary *content, C2DXShareResultEvent callback);

bool multiShare(CCArray *platTypes, CCDictionary *content, C2DXShareResultEvent callback);

bool onekeyShare(CCArray *platTypes, CCDictionary *content, C2DXShareResultEvent callback);

int getJObjectType(jobject value);

double jObjectToJDouble(jobject value);

bool jObjectToJBoolean(jobject value);

const std::string jObjectToJString(JNIEnv *env, jobject value);

void arraylistToCCArray(jobject arraylist, CCArray* arr);

#ifdef __cplusplus
}
#endif
#endif
