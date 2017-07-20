LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
  cred.c \
  kallsyms.c \
  main.c \
  mm.c \
  ptmx.c

LOCAL_MODULE := get_essential_address
LOCAL_MODULE_TAGS := optional
LOCAL_STATIC_LIBRARIES := libdevice_database
LOCAL_STATIC_LIBRARIES += libexploit
LOCAL_STATIC_LIBRARIES += libdiagexploit
LOCAL_STATIC_LIBRARIES += libperf_event_exploit
LOCAL_STATIC_LIBRARIES += libmsm_acdb_exploit
LOCAL_STATIC_LIBRARIES += libfj_hdcp_exploit
LOCAL_STATIC_LIBRARIES += libfb_mem_exploit
LOCAL_STATIC_LIBRARIES += libmsm_cameraconfig_exploit
LOCAL_STATIC_LIBRARIES += libput_user_exploit
LOCAL_STATIC_LIBRARIES += libget_user_exploit
LOCAL_STATIC_LIBRARIES += libkallsyms
LOCAL_STATIC_LIBRARIES += libcutils libc
LOCAL_LDFLAGS += -static

TOP_SRCDIR := $(abspath $(LOCAL_PATH))
TARGET_C_INCLUDES += \
  $(TOP_SRCDIR)/device_database

include $(BUILD_EXECUTABLE)

include $(call all-makefiles-under,$(LOCAL_PATH))
