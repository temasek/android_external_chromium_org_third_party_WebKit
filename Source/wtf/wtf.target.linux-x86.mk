# This file is generated by gyp; do not edit.

include $(CLEAR_VARS)

LOCAL_MODULE_CLASS := STATIC_LIBRARIES
LOCAL_MODULE := third_party_WebKit_Source_wtf_wtf_gyp
LOCAL_MODULE_SUFFIX := .a
LOCAL_MODULE_TAGS := optional
gyp_intermediate_dir := $(call local-intermediates-dir)
gyp_shared_intermediate_dir := $(call intermediates-dir-for,GYP,shared)

# Make sure our deps are built first.
GYP_TARGET_DEPENDENCIES := \
	$(call intermediates-dir-for,GYP,third_party_WebKit_Source_wtf_wtf_config_gyp)/wtf_config.stamp \
	$(call intermediates-dir-for,GYP,third_party_WebKit_Source_config_gyp)/config.stamp \
	$(call intermediates-dir-for,GYP,third_party_icu_icui18n_gyp)/icui18n.stamp \
	$(call intermediates-dir-for,GYP,third_party_icu_icuuc_gyp)/icuuc.stamp

GYP_GENERATED_OUTPUTS :=

# Make sure our deps and generated files are built first.
LOCAL_ADDITIONAL_DEPENDENCIES := $(GYP_TARGET_DEPENDENCIES) $(GYP_GENERATED_OUTPUTS)

$(gyp_intermediate_dir)/bignum-dtoa.cpp: $(LOCAL_PATH)/third_party/WebKit/Source/wtf/dtoa/bignum-dtoa.cc
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/bignum.cpp: $(LOCAL_PATH)/third_party/WebKit/Source/wtf/dtoa/bignum.cc
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/cached-powers.cpp: $(LOCAL_PATH)/third_party/WebKit/Source/wtf/dtoa/cached-powers.cc
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/diy-fp.cpp: $(LOCAL_PATH)/third_party/WebKit/Source/wtf/dtoa/diy-fp.cc
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/double-conversion.cpp: $(LOCAL_PATH)/third_party/WebKit/Source/wtf/dtoa/double-conversion.cc
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/fast-dtoa.cpp: $(LOCAL_PATH)/third_party/WebKit/Source/wtf/dtoa/fast-dtoa.cc
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/fixed-dtoa.cpp: $(LOCAL_PATH)/third_party/WebKit/Source/wtf/dtoa/fixed-dtoa.cc
	mkdir -p $(@D); cp $< $@
$(gyp_intermediate_dir)/strtod.cpp: $(LOCAL_PATH)/third_party/WebKit/Source/wtf/dtoa/strtod.cc
	mkdir -p $(@D); cp $< $@
LOCAL_GENERATED_SOURCES := \
	$(gyp_intermediate_dir)/bignum-dtoa.cpp \
	$(gyp_intermediate_dir)/bignum.cpp \
	$(gyp_intermediate_dir)/cached-powers.cpp \
	$(gyp_intermediate_dir)/diy-fp.cpp \
	$(gyp_intermediate_dir)/double-conversion.cpp \
	$(gyp_intermediate_dir)/fast-dtoa.cpp \
	$(gyp_intermediate_dir)/fixed-dtoa.cpp \
	$(gyp_intermediate_dir)/strtod.cpp

GYP_COPIED_SOURCE_ORIGIN_DIRS := \
	$(LOCAL_PATH)/third_party/WebKit/Source/wtf/dtoa

LOCAL_SRC_FILES := \
	third_party/WebKit/Source/wtf/ArrayBuffer.cpp \
	third_party/WebKit/Source/wtf/ArrayBufferBuilder.cpp \
	third_party/WebKit/Source/wtf/ArrayBufferContents.cpp \
	third_party/WebKit/Source/wtf/ArrayBufferView.cpp \
	third_party/WebKit/Source/wtf/Assertions.cpp \
	third_party/WebKit/Source/wtf/BitVector.cpp \
	third_party/WebKit/Source/wtf/CryptographicallyRandomNumber.cpp \
	third_party/WebKit/Source/wtf/CurrentTime.cpp \
	third_party/WebKit/Source/wtf/DataLog.cpp \
	third_party/WebKit/Source/wtf/DateMath.cpp \
	third_party/WebKit/Source/wtf/DecimalNumber.cpp \
	third_party/WebKit/Source/wtf/DynamicAnnotations.cpp \
	third_party/WebKit/Source/wtf/FastMalloc.cpp \
	third_party/WebKit/Source/wtf/FilePrintStream.cpp \
	third_party/WebKit/Source/wtf/GregorianDateTime.cpp \
	third_party/WebKit/Source/wtf/HashTable.cpp \
	third_party/WebKit/Source/wtf/InstanceCounter.cpp \
	third_party/WebKit/Source/wtf/MainThread.cpp \
	third_party/WebKit/Source/wtf/NullPtr.cpp \
	third_party/WebKit/Source/wtf/PageAllocator.cpp \
	third_party/WebKit/Source/wtf/PartitionAlloc.cpp \
	third_party/WebKit/Source/wtf/PrintStream.cpp \
	third_party/WebKit/Source/wtf/RefCountedLeakCounter.cpp \
	third_party/WebKit/Source/wtf/SHA1.cpp \
	third_party/WebKit/Source/wtf/SizeLimits.cpp \
	third_party/WebKit/Source/wtf/ThreadIdentifierDataPthreads.cpp \
	third_party/WebKit/Source/wtf/Threading.cpp \
	third_party/WebKit/Source/wtf/ThreadingPthreads.cpp \
	third_party/WebKit/Source/wtf/TypeTraits.cpp \
	third_party/WebKit/Source/wtf/WTF.cpp \
	third_party/WebKit/Source/wtf/WTFThreadData.cpp \
	third_party/WebKit/Source/wtf/dtoa.cpp \
	third_party/WebKit/Source/wtf/text/AtomicString.cpp \
	third_party/WebKit/Source/wtf/text/Base64.cpp \
	third_party/WebKit/Source/wtf/text/CString.cpp \
	third_party/WebKit/Source/wtf/text/StringBuilder.cpp \
	third_party/WebKit/Source/wtf/text/StringImpl.cpp \
	third_party/WebKit/Source/wtf/text/StringStatics.cpp \
	third_party/WebKit/Source/wtf/text/TextCodec.cpp \
	third_party/WebKit/Source/wtf/text/TextCodecICU.cpp \
	third_party/WebKit/Source/wtf/text/TextCodecLatin1.cpp \
	third_party/WebKit/Source/wtf/text/TextCodecUTF16.cpp \
	third_party/WebKit/Source/wtf/text/TextCodecUTF8.cpp \
	third_party/WebKit/Source/wtf/text/TextCodecUserDefined.cpp \
	third_party/WebKit/Source/wtf/text/TextEncoding.cpp \
	third_party/WebKit/Source/wtf/text/TextEncodingRegistry.cpp \
	third_party/WebKit/Source/wtf/text/TextPosition.cpp \
	third_party/WebKit/Source/wtf/text/WTFString.cpp \
	third_party/WebKit/Source/wtf/unicode/UTF8.cpp \
	third_party/WebKit/Source/wtf/unicode/icu/CollatorICU.cpp


# Flags passed to both C and C++ files.
MY_CFLAGS_Debug := \
	--param=ssp-buffer-size=4 \
	-Werror \
	-fno-exceptions \
	-fno-strict-aliasing \
	-Wall \
	-Wno-unused-parameter \
	-Wno-missing-field-initializers \
	-fvisibility=hidden \
	-pipe \
	-fPIC \
	-msse2 \
	-mfpmath=sse \
	-mmmx \
	-m32 \
	-fuse-ld=gold \
	-ffunction-sections \
	-funwind-tables \
	-g \
	-fno-short-enums \
	-finline-limit=64 \
	-Wa,--noexecstack \
	-U_FORTIFY_SOURCE \
	-Wno-extra \
	-Wno-ignored-qualifiers \
	-Wno-type-limits \
	-Wno-unused-but-set-variable \
	-fno-stack-protector \
	-Os \
	-g \
	-fomit-frame-pointer \
	-fdata-sections \
	-ffunction-sections \
	-funwind-tables

MY_DEFS_Debug := \
	'-DV8_DEPRECATION_WARNINGS' \
	'-DBLINK_SCALE_FILTERS_AT_RECORD_TIME' \
	'-D_FILE_OFFSET_BITS=64' \
	'-DNO_TCMALLOC' \
	'-DDISABLE_NACL' \
	'-DCHROMIUM_BUILD' \
	'-DUSE_LIBJPEG_TURBO=1' \
	'-DUSE_PROPRIETARY_CODECS' \
	'-DENABLE_CONFIGURATION_POLICY' \
	'-DDISCARDABLE_MEMORY_ALWAYS_SUPPORTED_NATIVELY' \
	'-DSYSTEM_NATIVELY_SIGNALS_MEMORY_PRESSURE' \
	'-DENABLE_EGLIMAGE=1' \
	'-DCLD_VERSION=1' \
	'-DENABLE_PRINTING=1' \
	'-DENABLE_MANAGED_USERS=1' \
	'-DWTF_IMPLEMENTATION=1' \
	'-DENABLE_CUSTOM_SCHEME_HANDLER=0' \
	'-DENABLE_SVG_FONTS=1' \
	'-DWTF_USE_CONCATENATED_IMPULSE_RESPONSES=1' \
	'-DENABLE_FAST_MOBILE_SCROLLING=1' \
	'-DENABLE_INPUT_SPEECH=0' \
	'-DENABLE_MEDIA_CAPTURE=1' \
	'-DENABLE_OPENTYPE_VERTICAL=1' \
	'-DU_USING_ICU_NAMESPACE=0' \
	'-DUSE_OPENSSL=1' \
	'-D__STDC_CONSTANT_MACROS' \
	'-D__STDC_FORMAT_MACROS' \
	'-DANDROID' \
	'-D__GNU_SOURCE=1' \
	'-DUSE_STLPORT=1' \
	'-D_STLP_USE_PTR_SPECIALIZATIONS=1' \
	'-DCHROME_BUILD_ID=""' \
	'-DDYNAMIC_ANNOTATIONS_ENABLED=1' \
	'-DWTF_USE_DYNAMIC_ANNOTATIONS=1' \
	'-D_DEBUG'


# Include paths placed before CFLAGS/CPPFLAGS
LOCAL_C_INCLUDES_Debug := \
	$(gyp_shared_intermediate_dir)/shim_headers/icuuc/target \
	$(gyp_shared_intermediate_dir)/shim_headers/icui18n/target \
	$(LOCAL_PATH)/third_party/WebKit/Source \
	$(LOCAL_PATH)/third_party/WebKit \
	$(PWD)/external/icu4c/common \
	$(PWD)/external/icu4c/i18n \
	$(PWD)/frameworks/wilhelm/include \
	$(PWD)/bionic \
	$(PWD)/external/stlport/stlport


# Flags passed to only C++ (and not C) files.
LOCAL_CPPFLAGS_Debug := \
	-Wno-c++0x-compat \
	-fno-rtti \
	-fno-threadsafe-statics \
	-fvisibility-inlines-hidden \
	-Wsign-compare \
	-Wno-c++0x-compat \
	-Wno-non-virtual-dtor \
	-Wno-sign-promo


# Flags passed to both C and C++ files.
MY_CFLAGS_Release := \
	--param=ssp-buffer-size=4 \
	-Werror \
	-fno-exceptions \
	-fno-strict-aliasing \
	-Wall \
	-Wno-unused-parameter \
	-Wno-missing-field-initializers \
	-fvisibility=hidden \
	-pipe \
	-fPIC \
	-msse2 \
	-mfpmath=sse \
	-mmmx \
	-m32 \
	-fuse-ld=gold \
	-ffunction-sections \
	-funwind-tables \
	-g \
	-fno-short-enums \
	-finline-limit=64 \
	-Wa,--noexecstack \
	-U_FORTIFY_SOURCE \
	-Wno-extra \
	-Wno-ignored-qualifiers \
	-Wno-type-limits \
	-Wno-unused-but-set-variable \
	-fno-stack-protector \
	-Os \
	-fno-ident \
	-fdata-sections \
	-ffunction-sections \
	-fomit-frame-pointer \
	-funwind-tables

MY_DEFS_Release := \
	'-DV8_DEPRECATION_WARNINGS' \
	'-DBLINK_SCALE_FILTERS_AT_RECORD_TIME' \
	'-D_FILE_OFFSET_BITS=64' \
	'-DNO_TCMALLOC' \
	'-DDISABLE_NACL' \
	'-DCHROMIUM_BUILD' \
	'-DUSE_LIBJPEG_TURBO=1' \
	'-DUSE_PROPRIETARY_CODECS' \
	'-DENABLE_CONFIGURATION_POLICY' \
	'-DDISCARDABLE_MEMORY_ALWAYS_SUPPORTED_NATIVELY' \
	'-DSYSTEM_NATIVELY_SIGNALS_MEMORY_PRESSURE' \
	'-DENABLE_EGLIMAGE=1' \
	'-DCLD_VERSION=1' \
	'-DENABLE_PRINTING=1' \
	'-DENABLE_MANAGED_USERS=1' \
	'-DWTF_IMPLEMENTATION=1' \
	'-DENABLE_CUSTOM_SCHEME_HANDLER=0' \
	'-DENABLE_SVG_FONTS=1' \
	'-DWTF_USE_CONCATENATED_IMPULSE_RESPONSES=1' \
	'-DENABLE_FAST_MOBILE_SCROLLING=1' \
	'-DENABLE_INPUT_SPEECH=0' \
	'-DENABLE_MEDIA_CAPTURE=1' \
	'-DENABLE_OPENTYPE_VERTICAL=1' \
	'-DU_USING_ICU_NAMESPACE=0' \
	'-DUSE_OPENSSL=1' \
	'-D__STDC_CONSTANT_MACROS' \
	'-D__STDC_FORMAT_MACROS' \
	'-DANDROID' \
	'-D__GNU_SOURCE=1' \
	'-DUSE_STLPORT=1' \
	'-D_STLP_USE_PTR_SPECIALIZATIONS=1' \
	'-DCHROME_BUILD_ID=""' \
	'-DNDEBUG' \
	'-DNVALGRIND' \
	'-DDYNAMIC_ANNOTATIONS_ENABLED=0' \
	'-D_FORTIFY_SOURCE=2'


# Include paths placed before CFLAGS/CPPFLAGS
LOCAL_C_INCLUDES_Release := \
	$(gyp_shared_intermediate_dir)/shim_headers/icuuc/target \
	$(gyp_shared_intermediate_dir)/shim_headers/icui18n/target \
	$(LOCAL_PATH)/third_party/WebKit/Source \
	$(LOCAL_PATH)/third_party/WebKit \
	$(PWD)/external/icu4c/common \
	$(PWD)/external/icu4c/i18n \
	$(PWD)/frameworks/wilhelm/include \
	$(PWD)/bionic \
	$(PWD)/external/stlport/stlport


# Flags passed to only C++ (and not C) files.
LOCAL_CPPFLAGS_Release := \
	-Wno-c++0x-compat \
	-fno-rtti \
	-fno-threadsafe-statics \
	-fvisibility-inlines-hidden \
	-Wsign-compare \
	-Wno-c++0x-compat \
	-Wno-non-virtual-dtor \
	-Wno-sign-promo


LOCAL_CFLAGS := $(MY_CFLAGS_$(GYP_CONFIGURATION)) $(MY_DEFS_$(GYP_CONFIGURATION))
LOCAL_C_INCLUDES := $(GYP_COPIED_SOURCE_ORIGIN_DIRS) $(LOCAL_C_INCLUDES_$(GYP_CONFIGURATION))
LOCAL_CPPFLAGS := $(LOCAL_CPPFLAGS_$(GYP_CONFIGURATION))
LOCAL_ASFLAGS := $(LOCAL_CFLAGS)
### Rules for final target.

LOCAL_LDFLAGS_Debug := \
	-Wl,--fatal-warnings \
	-Wl,-z,now \
	-Wl,-z,relro \
	-Wl,-z,noexecstack \
	-fPIC \
	-m32 \
	-fuse-ld=gold \
	-nostdlib \
	-Wl,--no-undefined \
	-Wl,--exclude-libs=ALL \
	-Wl,--gc-sections \
	-Wl,--warn-shared-textrel \
	-Wl,-O1 \
	-Wl,--as-needed


LOCAL_LDFLAGS_Release := \
	-Wl,--fatal-warnings \
	-Wl,-z,now \
	-Wl,-z,relro \
	-Wl,-z,noexecstack \
	-fPIC \
	-m32 \
	-fuse-ld=gold \
	-nostdlib \
	-Wl,--no-undefined \
	-Wl,--exclude-libs=ALL \
	-Wl,-O1 \
	-Wl,--as-needed \
	-Wl,--gc-sections \
	-Wl,--warn-shared-textrel


LOCAL_LDFLAGS := $(LOCAL_LDFLAGS_$(GYP_CONFIGURATION))

LOCAL_STATIC_LIBRARIES :=

# Enable grouping to fix circular references
LOCAL_GROUP_STATIC_LIBRARIES := true

LOCAL_SHARED_LIBRARIES := \
	libstlport \
	libdl

# Add target alias to "gyp_all_modules" target.
.PHONY: gyp_all_modules
gyp_all_modules: third_party_WebKit_Source_wtf_wtf_gyp

# Alias gyp target name.
.PHONY: wtf
wtf: third_party_WebKit_Source_wtf_wtf_gyp

include $(BUILD_STATIC_LIBRARY)
