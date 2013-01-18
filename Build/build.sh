#!/bin/bash

echo "inside the shell";

WORKSPACEDIR=/Users/aartimunjal/.jenkins/jobs/Glimmpse_Lite_iPhone_1_0/workspace/

PRODUCTDIR=/Users/aartimunjal/.jenkins/jobs/Glimmpse_Lite_iPhone_1_0/workspace/GlimmpseiPhone/Build/artifacts

TARGET="GLIMMPSE Lite"

PROVISIONING_PROFILE="/Users/aartimunjal/Developer/DevelopmentGlueckLabAdHocProfileForDevices.mobileprovision"

xcodebuild -workspace GlimmpseiPhoneWorkspace.xcworkspace -scheme "GlimmpseiPhone" -configuration Release -sdk iphoneos CONFIGURATION_BUILD_DIR="${PRODUCTDIR}/"

/usr/bin/xcrun -sdk iphoneos PackageApplication -v "${PRODUCTDIR}/${TARGET}.app" -o "${PRODUCTDIR}/${TARGET}.ipa" --embed "${PROVISIONING_PROFILE}"

cd ${PRODUCTDIR}/

zip glimmpseiPhone-1.0.0-binary.zip ${TARGET}.ipa

cd $WORKSPACEDIR

zip -r ${PRODUCTDIR}/glimmpseiPhone-1.0.0-src.zip GlimmpseiPhone/ GlimmpseiPhoneWorkspace.xcworkspace/ WebServiceCommonObjectiveC/
