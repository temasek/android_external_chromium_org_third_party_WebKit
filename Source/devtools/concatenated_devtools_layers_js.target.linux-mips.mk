# This file is generated by gyp; do not edit.

include $(CLEAR_VARS)

LOCAL_MODULE_CLASS := GYP
LOCAL_MODULE := third_party_WebKit_Source_devtools_concatenated_devtools_layers_js_gyp
LOCAL_MODULE_STEM := concatenated_devtools_layers_js
LOCAL_MODULE_SUFFIX := .stamp
LOCAL_MODULE_TAGS := optional
gyp_intermediate_dir := $(call local-intermediates-dir)
gyp_shared_intermediate_dir := $(call intermediates-dir-for,GYP,shared)

# Make sure our deps are built first.
GYP_TARGET_DEPENDENCIES :=

### Rules for action "concatenate_devtools_layers_js":
$(gyp_shared_intermediate_dir)/resources/inspector/LayersPanel.js: gyp_local_path := $(LOCAL_PATH)
$(gyp_shared_intermediate_dir)/resources/inspector/LayersPanel.js: gyp_intermediate_dir := $(abspath $(gyp_intermediate_dir))
$(gyp_shared_intermediate_dir)/resources/inspector/LayersPanel.js: gyp_shared_intermediate_dir := $(abspath $(gyp_shared_intermediate_dir))
$(gyp_shared_intermediate_dir)/resources/inspector/LayersPanel.js: export PATH := $(subst $(ANDROID_BUILD_PATHS),,$(PATH))
$(gyp_shared_intermediate_dir)/resources/inspector/LayersPanel.js: $(LOCAL_PATH)/third_party/WebKit/Source/devtools/scripts/inline_js_imports.py $(LOCAL_PATH)/third_party/WebKit/Source/devtools/front_end/LayersPanel.js $(LOCAL_PATH)/third_party/WebKit/Source/devtools/front_end/LayerTreeModel.js $(LOCAL_PATH)/third_party/WebKit/Source/devtools/front_end/LayerTree.js $(LOCAL_PATH)/third_party/WebKit/Source/devtools/front_end/Layers3DView.js $(LOCAL_PATH)/third_party/WebKit/Source/devtools/front_end/LayerDetailsView.js $(LOCAL_PATH)/third_party/WebKit/Source/devtools/front_end/PaintProfilerView.js $(LOCAL_PATH)/third_party/WebKit/Source/devtools/front_end/TransformController.js $(GYP_TARGET_DEPENDENCIES)
	@echo "Gyp action: third_party_WebKit_Source_devtools_devtools_gyp_concatenated_devtools_layers_js_target_concatenate_devtools_layers_js ($@)"
	$(hide)cd $(gyp_local_path)/third_party/WebKit/Source/devtools; mkdir -p $(gyp_shared_intermediate_dir)/resources/inspector; python scripts/inline_js_imports.py front_end/LayersPanel.js front_end "$(gyp_shared_intermediate_dir)/resources/inspector/LayersPanel.js"



GYP_GENERATED_OUTPUTS := \
	$(gyp_shared_intermediate_dir)/resources/inspector/LayersPanel.js

# Make sure our deps and generated files are built first.
LOCAL_ADDITIONAL_DEPENDENCIES := $(GYP_TARGET_DEPENDENCIES) $(GYP_GENERATED_OUTPUTS)

### Rules for final target.
# Add target alias to "gyp_all_modules" target.
.PHONY: gyp_all_modules
gyp_all_modules: third_party_WebKit_Source_devtools_concatenated_devtools_layers_js_gyp

# Alias gyp target name.
.PHONY: concatenated_devtools_layers_js
concatenated_devtools_layers_js: third_party_WebKit_Source_devtools_concatenated_devtools_layers_js_gyp

LOCAL_MODULE_PATH := $(PRODUCT_OUT)/gyp_stamp
LOCAL_UNINSTALLABLE_MODULE := true

include $(BUILD_SYSTEM)/base_rules.mk

$(LOCAL_BUILT_MODULE): $(LOCAL_ADDITIONAL_DEPENDENCIES)
	$(hide) echo "Gyp timestamp: $@"
	$(hide) mkdir -p $(dir $@)
	$(hide) touch $@
