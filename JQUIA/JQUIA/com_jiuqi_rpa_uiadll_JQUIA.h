/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_jiuqi_rpa_uiadll_JQUIA */

#ifndef _Included_com_jiuqi_rpa_uiadll_JQUIA
#define _Included_com_jiuqi_rpa_uiadll_JQUIA
#ifdef __cplusplus
extern "C" {
#endif
	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    _initialize
	 * Signature: ()V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA__1initialize
	(JNIEnv *, jclass);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    _finalize
	 * Signature: ()V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA__1finalize
	(JNIEnv *, jclass);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    releaseById
	 * Signature: (J)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_releaseById
	(JNIEnv *, jclass, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    releaseByIds
	 * Signature: ([J)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_releaseByIds
	(JNIEnv *, jclass, jlongArray);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    find_get
	 * Signature: (Lcom/jiuqi/rpa/lib/Point;)J
	 */
	JNIEXPORT jlong JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_find_1get
	(JNIEnv *, jclass, jobject);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    find_getWindow
	 * Signature: (Lcom/jiuqi/rpa/lib/Point;)J
	 */
	JNIEXPORT jlong JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_find_1getWindow
	(JNIEnv *, jclass, jobject);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    find_getWindowByPath
	 * Signature: (Ljava/lang/String;)J
	 */
	JNIEXPORT jlong JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_find_1getWindowByPath
	(JNIEnv *, jclass, jstring);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    find_getWindowByElement
	 * Signature: (J)J
	 */
	JNIEXPORT jlong JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_find_1getWindowByElement
	(JNIEnv *, jclass, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    find_getWindowByBrowserInfo
	 * Signature: (Lcom/jiuqi/rpa/lib/find/BrowserInfo;)J
	 */
	JNIEXPORT jlong JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_find_1getWindowByBrowserInfo
	(JNIEnv *, jclass, jobject);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    find_getRect
	 * Signature: (Lcom/jiuqi/rpa/lib/Point;Lcom/jiuqi/rpa/lib/find/UIARect;)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_find_1getRect
	(JNIEnv *, jclass, jobject, jobject);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    find_getWindowRect
	 * Signature: (Lcom/jiuqi/rpa/lib/Point;Lcom/jiuqi/rpa/lib/find/UIARect;)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_find_1getWindowRect
	(JNIEnv *, jclass, jobject, jobject);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    find_getBrowserCientRect
	 * Signature: (Lcom/jiuqi/rpa/lib/find/BrowserInfo;Lcom/jiuqi/rpa/lib/find/UIARect;)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_find_1getBrowserCientRect
	(JNIEnv *, jclass, jobject, jobject);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    find_exists
	 * Signature: (Ljava/lang/String;)Z
	 */
	JNIEXPORT jboolean JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_find_1exists
	(JNIEnv *, jclass, jstring);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    find_getPath
	 * Signature: (J)Ljava/lang/String;
	 */
	JNIEXPORT jstring JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_find_1getPath
	(JNIEnv *, jclass, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    find_getBrowserInfo
	 * Signature: (Lcom/jiuqi/rpa/lib/Point;Lcom/jiuqi/rpa/lib/find/BrowserInfo;)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_find_1getBrowserInfo
	(JNIEnv *, jclass, jobject, jobject);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    find_findFirst
	 * Signature: (Ljava/lang/String;)J
	 */
	JNIEXPORT jlong JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_find_1findFirst
	(JNIEnv *, jclass, jstring);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    find_findFirstEx
	 * Signature: (Ljava/lang/String;Ljava/util/List;)J
	 */
	JNIEXPORT jlong JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_find_1findFirstEx
	(JNIEnv *, jclass, jstring, jobject);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    find_findAll
	 * Signature: (Ljava/lang/String;)[J
	 */
	JNIEXPORT jlongArray JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_find_1findAll
	(JNIEnv *, jclass, jstring);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    tree_getRoot
	 * Signature: ()J
	 */
	JNIEXPORT jlong JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_tree_1getRoot
	(JNIEnv *, jclass);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    tree_getChildren
	 * Signature: (J)[J
	 */
	JNIEXPORT jlongArray JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_tree_1getChildren
	(JNIEnv *, jclass, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    tree_getParent
	 * Signature: (J)J
	 */
	JNIEXPORT jlong JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_tree_1getParent
	(JNIEnv *, jclass, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    tree_getText
	 * Signature: (J)Ljava/lang/String;
	 */
	JNIEXPORT jstring JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_tree_1getText
	(JNIEnv *, jclass, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    tree_getProperties
	 * Signature: (J)Ljava/lang/String;
	 */
	JNIEXPORT jstring JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_tree_1getProperties
	(JNIEnv *, jclass, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    control_getRect
	 * Signature: (JLcom/jiuqi/rpa/lib/Rect;)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_control_1getRect
	(JNIEnv *, jclass, jlong, jobject);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    control_getAttributeValue
	 * Signature: (JLjava/lang/String;)Ljava/lang/String;
	 */
	JNIEXPORT jstring JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_control_1getAttributeValue
	(JNIEnv *, jclass, jlong, jstring);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    control_ScrollIntoView
	 * Signature: (J)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_control_1ScrollIntoView
	(JNIEnv *, jclass, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    control_setFocus
	 * Signature: (J)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_control_1setFocus
	(JNIEnv *, jclass, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    control_isChecked
	 * Signature: (J)Z
	 */
	JNIEXPORT jboolean JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_control_1isChecked
	(JNIEnv *, jclass, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    control_setChecked
	 * Signature: (JZ)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_control_1setChecked
	(JNIEnv *, jclass, jlong, jboolean);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    control_getCheckState
	 * Signature: (J)I
	 */
	JNIEXPORT jint JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_control_1getCheckState
	(JNIEnv *, jclass, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    control_getText
	 * Signature: (J)Ljava/lang/String;
	 */
	JNIEXPORT jstring JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_control_1getText
	(JNIEnv *, jclass, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    control_setText
	 * Signature: (JLjava/lang/String;)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_control_1setText
	(JNIEnv *, jclass, jlong, jstring);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    control_isPassword
	 * Signature: (J)Z
	 */
	JNIEXPORT jboolean JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_control_1isPassword
	(JNIEnv *, jclass, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    control_enable
	 * Signature: (J)Z
	 */
	JNIEXPORT jboolean JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_control_1enable
	(JNIEnv *, jclass, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    control_visible
	 * Signature: (J)Z
	 */
	JNIEXPORT jboolean JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_control_1visible
	(JNIEnv *, jclass, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    control_isTable
	 * Signature: (J)Z
	 */
	JNIEXPORT jboolean JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_control_1isTable
	(JNIEnv *, jclass, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    control_clearSelection
	 * Signature: (J)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_control_1clearSelection
	(JNIEnv *, jclass, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    control_selectItems
	 * Signature: (J[Ljava/lang/String;)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_control_1selectItems
	(JNIEnv *, jclass, jlong, jobjectArray);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    control_getPageData
	 * Signature: (J[Ljava/lang/String;)Ljava/lang/String;
	 */
	JNIEXPORT jstring JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_control_1getPageData
	(JNIEnv *, jclass, jlong, jobjectArray);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    application_startProcess
	 * Signature: (Ljava/lang/String;Ljava/lang/String;)J
	 */
	JNIEXPORT jlong JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_application_1startProcess
	(JNIEnv *, jclass, jstring, jstring);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    application_getApplicationWindow
	 * Signature: (J)J
	 */
	JNIEXPORT jlong JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_application_1getApplicationWindow
	(JNIEnv *, jclass, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    application_closeApplication
	 * Signature: (J)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_application_1closeApplication
	(JNIEnv *, jclass, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    application_findProcess
	 * Signature: (Ljava/lang/String;)[J
	 */
	JNIEXPORT jlongArray JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_application_1findProcess
	(JNIEnv *, jclass, jstring);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    application_killProcess
	 * Signature: (J)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_application_1killProcess
	(JNIEnv *, jclass, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    mouse_mouseMove
	 * Signature: (Lcom/jiuqi/rpa/lib/Point;)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_mouse_1mouseMove
	(JNIEnv *, jclass, jobject);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    mouse_mouseClick
	 * Signature: (Lcom/jiuqi/rpa/lib/Point;II[I)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_mouse_1mouseClick
	(JNIEnv *, jclass, jobject, jint, jint, jintArray);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    mouse_simulateClick
	 * Signature: (J)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_mouse_1simulateClick
	(JNIEnv *, jclass, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    mouse_messageClick
	 * Signature: (JLcom/jiuqi/rpa/lib/Point;II[I)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_mouse_1messageClick
	(JNIEnv *, jclass, jlong, jobject, jint, jint, jintArray);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    keyboard_clearText
	 * Signature: (J)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_keyboard_1clearText
	(JNIEnv *, jclass, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    keyboard_typeText
	 * Signature: (Ljava/lang/String;)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_keyboard_1typeText
	(JNIEnv *, jclass, jstring);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    keyboard_simulateTypeText
	 * Signature: (JLjava/lang/String;)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_keyboard_1simulateTypeText
	(JNIEnv *, jclass, jlong, jstring);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    keyboard_sendHotKey
	 * Signature: (I[I)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_keyboard_1sendHotKey
	(JNIEnv *, jclass, jint, jintArray);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    keyboard_sendMessageHotkey
	 * Signature: (JI[I)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_keyboard_1sendMessageHotkey
	(JNIEnv *, jclass, jlong, jint, jintArray);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    window_setWindowState
	 * Signature: (JI)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_window_1setWindowState
	(JNIEnv *, jclass, jlong, jint);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    window_moveWindow
	 * Signature: (JLcom/jiuqi/rpa/lib/Rect;)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_window_1moveWindow
	(JNIEnv *, jclass, jlong, jobject);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    window_closeWindow
	 * Signature: (J)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_window_1closeWindow
	(JNIEnv *, jclass, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    dialog_inputDialog
	 * Signature: (Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Z)Ljava/lang/String;
	 */
	JNIEXPORT jstring JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_dialog_1inputDialog
	(JNIEnv *, jclass, jstring, jstring, jobjectArray, jboolean);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    dialog_messageDialog
	 * Signature: (Ljava/lang/String;Ljava/lang/String;J)Ljava/lang/String;
	 */
	JNIEXPORT jstring JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_dialog_1messageDialog
	(JNIEnv *, jclass, jstring, jstring, jlong);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    dialog_fileDialog
	 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
	 */
	JNIEXPORT jstring JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_dialog_1fileDialog
	(JNIEnv *, jclass, jstring, jstring);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    dialog_directoryDialog
	 * Signature: (Ljava/lang/String;)Ljava/lang/String;
	 */
	JNIEXPORT jstring JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_dialog_1directoryDialog
	(JNIEnv *, jclass, jstring);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    image_doScreenShot
	 * Signature: (Lcom/jiuqi/rpa/lib/Rect;)[B
	 */
	JNIEXPORT jbyteArray JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_image_1doScreenShot
	(JNIEnv *, jclass, jobject);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    drawer_startDraw
	 * Signature: (Lcom/jiuqi/rpa/lib/Rect;Ljava/lang/String;)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_drawer_1startDraw
	(JNIEnv *, jclass, jobject, jstring);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    drawer_endDraw
	 * Signature: ()V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_drawer_1endDraw
	(JNIEnv *, jclass);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    picker_startPick
	 * Signature: (Lcom/jiuqi/rpa/lib/picker/UIAPickerCallback;)V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_picker_1startPick
	(JNIEnv *, jclass, jobject);

	/*
	 * Class:     com_jiuqi_rpa_uiadll_JQUIA
	 * Method:    picker_endPick
	 * Signature: ()V
	 */
	JNIEXPORT void JNICALL Java_com_jiuqi_rpa_uiadll_JQUIA_picker_1endPick
	(JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
