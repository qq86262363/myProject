LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := uninstalllisten-jni
LOCAL_SRC_FILES := uninstalllisten-jni.c

include $(BUILD_SHARED_LIBRARY)
