//
// Created by yuanhao on 20-6-10.
//

#ifndef ZOETICAICHALLENGE_FACE_DETECTION_IMG_PROCESS_H
#define ZOETICAICHALLENGE_FACE_DETECTION_IMG_PROCESS_H

#include <jni.h>
#include <opencv2/core/mat.hpp>

int ConvertBitmap2Mat(JNIEnv* env, jobject bitmap, cv::Mat& out);

void Yuv420sp2bgr(unsigned char* data, int width, int height, int orientation, cv::Mat& dst);

void RotateClockWise90(cv::Mat& image);

void RotateAntiClockWise90(cv::Mat& image);

#endif //ZOETICAICHALLENGE_FACE_DETECTION_IMG_PROCESS_H
