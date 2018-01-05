#include "features2d.h"

AKAZE AKAZE_Create() {
    // TODO: params
    return new cv::Ptr<cv::AKAZE>(cv::AKAZE::create());
}

void AKAZE_Close(AKAZE a) {
    delete a;
}

struct KeyPoints AKAZE_Detect(AKAZE a, Mat src) {
    std::vector<cv::KeyPoint> detected;
    (*a)->detect(*src, detected);

    KeyPoint* kps = new KeyPoint[detected.size()];
    for (size_t i = 0; i < detected.size(); ++i) {
      KeyPoint k = {detected[i].pt.x, detected[i].pt.y, detected[i].size, detected[i].angle,
        detected[i].response, detected[i].octave, detected[i].class_id};
      kps[i] = k;
    }
    KeyPoints ret = {kps, (int)detected.size()};
    return ret;
}

struct KeyPoints AKAZE_DetectAndCompute(AKAZE a, Mat src, Mat mask, Mat desc) {
    std::vector<cv::KeyPoint> detected;
    (*a)->detectAndCompute(*src, *mask, detected, *desc);

    KeyPoint* kps = new KeyPoint[detected.size()];
    for (size_t i = 0; i < detected.size(); ++i) {
      KeyPoint k = {detected[i].pt.x, detected[i].pt.y, detected[i].size, detected[i].angle,
        detected[i].response, detected[i].octave, detected[i].class_id};
      kps[i] = k;
    }
    KeyPoints ret = {kps, (int)detected.size()};
    return ret;
}

AgastFeatureDetector AgastFeatureDetector_Create() {
    // TODO: params
    return new cv::Ptr<cv::AgastFeatureDetector>(cv::AgastFeatureDetector::create());
}

void AgastFeatureDetector_Close(AgastFeatureDetector a) {
    delete a;
}

struct KeyPoints AgastFeatureDetector_Detect(AgastFeatureDetector a, Mat src) {
    std::vector<cv::KeyPoint> detected;
    (*a)->detect(*src, detected);

    KeyPoint* kps = new KeyPoint[detected.size()];
    for (size_t i = 0; i < detected.size(); ++i) {
      KeyPoint k = {detected[i].pt.x, detected[i].pt.y, detected[i].size, detected[i].angle,
        detected[i].response, detected[i].octave, detected[i].class_id};
      kps[i] = k;
    }
    KeyPoints ret = {kps, (int)detected.size()};
    return ret;
}

BRISK BRISK_Create() {
    // TODO: params
    return new cv::Ptr<cv::BRISK>(cv::BRISK::create());
}

void BRISK_Close(BRISK b) {
    delete b;
}

struct KeyPoints BRISK_Detect(BRISK b, Mat src) {
    std::vector<cv::KeyPoint> detected;
    (*b)->detect(*src, detected);

    KeyPoint* kps = new KeyPoint[detected.size()];
    for (size_t i = 0; i < detected.size(); ++i) {
      KeyPoint k = {detected[i].pt.x, detected[i].pt.y, detected[i].size, detected[i].angle,
        detected[i].response, detected[i].octave, detected[i].class_id};
      kps[i] = k;
    }
    KeyPoints ret = {kps, (int)detected.size()};
    return ret;
}

struct KeyPoints BRISK_DetectAndCompute(BRISK b, Mat src, Mat mask, Mat desc) {
    std::vector<cv::KeyPoint> detected;
    (*b)->detectAndCompute(*src, *mask, detected, *desc);

    KeyPoint* kps = new KeyPoint[detected.size()];
    for (size_t i = 0; i < detected.size(); ++i) {
      KeyPoint k = {detected[i].pt.x, detected[i].pt.y, detected[i].size, detected[i].angle,
        detected[i].response, detected[i].octave, detected[i].class_id};
      kps[i] = k;
    }
    KeyPoints ret = {kps, (int)detected.size()};
    return ret;
}

FastFeatureDetector FastFeatureDetector_Create() {
    // TODO: params
    return new cv::Ptr<cv::FastFeatureDetector>(cv::FastFeatureDetector::create());
}

void FastFeatureDetector_Close(FastFeatureDetector f) {
    delete f;
}

struct KeyPoints FastFeatureDetector_Detect(FastFeatureDetector f, Mat src) {
    std::vector<cv::KeyPoint> detected;
    (*f)->detect(*src, detected);

    KeyPoint* kps = new KeyPoint[detected.size()];
    for (size_t i = 0; i < detected.size(); ++i) {
      KeyPoint k = {detected[i].pt.x, detected[i].pt.y, detected[i].size, detected[i].angle,
        detected[i].response, detected[i].octave, detected[i].class_id};
      kps[i] = k;
    }
    KeyPoints ret = {kps, (int)detected.size()};
    return ret;
}

ORB ORB_Create() {
    // TODO: params
    return new cv::Ptr<cv::ORB>(cv::ORB::create());
}

void ORB_Close(ORB o) {
    delete o;
}

struct KeyPoints ORB_Detect(ORB o, Mat src) {
    std::vector<cv::KeyPoint> detected;
    (*o)->detect(*src, detected);

    KeyPoint* kps = new KeyPoint[detected.size()];
    for (size_t i = 0; i < detected.size(); ++i) {
      KeyPoint k = {detected[i].pt.x, detected[i].pt.y, detected[i].size, detected[i].angle,
        detected[i].response, detected[i].octave, detected[i].class_id};
      kps[i] = k;
    }
    KeyPoints ret = {kps, (int)detected.size()};
    return ret;
}

struct KeyPoints ORB_DetectAndCompute(ORB o, Mat src, Mat mask, Mat desc) {
    std::vector<cv::KeyPoint> detected;
    (*o)->detectAndCompute(*src, *mask, detected, *desc);

    KeyPoint* kps = new KeyPoint[detected.size()];
    for (size_t i = 0; i < detected.size(); ++i) {
      KeyPoint k = {detected[i].pt.x, detected[i].pt.y, detected[i].size, detected[i].angle,
        detected[i].response, detected[i].octave, detected[i].class_id};
      kps[i] = k;
    }
    KeyPoints ret = {kps, (int)detected.size()};
    return ret;
}

SimpleBlobDetector SimpleBlobDetector_Create() {
    // TODO: params
    return new cv::Ptr<cv::SimpleBlobDetector>(cv::SimpleBlobDetector::create());
}

void SimpleBlobDetector_Close(SimpleBlobDetector b) {
    delete b;
}

struct KeyPoints SimpleBlobDetector_Detect(SimpleBlobDetector b, Mat src) {
    std::vector<cv::KeyPoint> detected;
    (*b)->detect(*src, detected);

    KeyPoint* kps = new KeyPoint[detected.size()];
    for (size_t i = 0; i < detected.size(); ++i) {
      KeyPoint k = {detected[i].pt.x, detected[i].pt.y, detected[i].size, detected[i].angle,
        detected[i].response, detected[i].octave, detected[i].class_id};
      kps[i] = k;
    }
    KeyPoints ret = {kps, (int)detected.size()};
    return ret;
}

FlannBasedMatcher FlannBasedMatcher_Create() {
    //cv::flann::Index index = cv::flann::Index();

    cv::flann::LshIndexParams* lip = new cv::flann::LshIndexParams(20, 10, 2);
    // cv::FlannBasedMatcher::create()
    
    return new cv::Ptr<cv::FlannBasedMatcher>(new cv::FlannBasedMatcher(lip));
}

Mat makeContinuous(Mat in) {
    if (in->isContinuous()) {
        return in;
    }

    Mat out = new cv::Mat();
    // out->create(in->rows, in->cols, in->type);
    in->copyTo(*out);

    return out;
}

struct DMatches FlannBasedMatcher_Match(FlannBasedMatcher m, Mat src, Mat object, Mat mask) {
    std::vector<cv::DMatch> matches;

    // Check that the mats are continuous.
    Mat nsrc = makeContinuous(src);
    Mat nobject = makeContinuous(object);
    Mat nmask = makeContinuous(mask);

    if (!nsrc->isContinuous() || !nobject->isContinuous() || !nmask->isContinuous()) {
        CV_Error(CV_StsBadArg, "Making continuous didn't work :'(");
    }

    // Must be CV_32F for Flann matcher to work.
    // if (src->type() != CV_32F) {
    //     src->convertTo(*src, CV_32F);
    // }
    // if (object->type() != CV_32F) {
    //     object->convertTo(*object, CV_32F);
    // }
    // if (mask->type() != CV_32F) {
    //     mask->convertTo(*mask, CV_32F);
    // }

    (*m)->match(*nsrc, *nobject, matches, *nmask);

    // Clean up if we created additional mats for continuity.
    if (nsrc != src) {
        delete nsrc;
    }
    if (nobject != object) {
        delete nobject;
    }
    if (nmask != mask) {
        delete nmask;
    }

    DMatches ret = {new DMatch[0], 0};
    // DMatch* dms = new DMatch[matches.size()];
    // for (size_t i = 0; i < matches.size(); ++i) {
    //     DMatch cur = {matches[i].queryIdx, matches[i].trainIdx, matches[i].imgIdx, matches[i].distance};
    //     dms[i] = cur;
    // }
    // DMatches ret = {dms, (int)matches.size()};
    return ret;
}
void FlannBasedMatcher_Close(FlannBasedMatcher m) {
    delete m;
}
