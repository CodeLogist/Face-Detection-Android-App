//
// Created by yuanhao on 20-6-9.
//

#ifndef ZOETICAICHALLENGE_FACE_DETECTION_DEFINITION_H
#define ZOETICAICHALLENGE_FACE_DETECTION_DEFINITION_H

#include <string>

#define JAVA_ARRAY_LIST_CLASSPATH           "java/util/ArrayList"
#define ANDROID_FACE_BOX_CLASSPATH          "com/codelogist/engine/FaceBox"

#define FACE_DETECTOR_METHOD(METHOD_NAME) \
    Java_com_codelogist_engine_FaceDetector_##METHOD_NAME


#define LIVE_METHOD(METHOD_NAME) \
    Java_com_codelogist_engine_Live_##METHOD_NAME

struct FaceBox {
    float confidence;
    float x1;
    float y1;
    float x2;
    float y2;
};

struct ModelConfig {
    float scale;
    float shift_x;
    float shift_y;
    int height;
    int width;
    std::string name;
    bool org_resize;
};

#endif //ZOETICAICHALLENGE_FACE_DETECTION_DEFINITION_H
