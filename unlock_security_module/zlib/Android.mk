LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

# measurements show that the ARM version of ZLib is about x1.17 faster
# than the thumb one...
LOCAL_ARM_MODE := arm

zlib_files := \
	adler32.c \
	compress.c \
	crc32.c \
	gzclose.c \
	gzlib.c \
	gzread.c \
	gzwrite.c \
	uncompr.c \
	deflate.c \
	trees.c \
	zutil.c \
	inflate.c \
	infback.c \
	inftrees.c \
	inffast.c \
	slhash.c

zlib_arm_files :=
zlib_arm_flags :=

ifeq ($(ARCH_ARM_HAVE_NEON),true)
	zlib_arm_files += contrib/inflateneon/inflate_fast_copy_neon.s
	zlib_arm_flags += -D__ARM_HAVE_NEON
endif

include $(CLEAR_VARS)

LOCAL_ARM_MODE := arm
LOCAL_MODULE := libz_static
LOCAL_MODULE_TAGS := optional
LOCAL_CFLAGS += -O3 -DUSE_MMAP $(zlib_arm_flags)
LOCAL_SRC_FILES := $(zlib_files) $(zlib_arm_files)
include $(BUILD_STATIC_LIBRARY)
