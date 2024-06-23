#ifndef IMAGE_EXPORT_OPTION_H
#define IMAGE_EXPORT_OPTION_H

#ifdef __cplusplus
extern "C" {
#endif


enum ApiReturnCode {
    SUCCESS = 0,
    INIT_HANDLE_IS_NOT_NULLPTR = 1,
    HANDLE_INSTANCE_IS_NULLPTR = 2,
    EXCEPTION_1 = 3,
    EXCEPTION_2 = 4,
    EXCEPTION_3 = 5,
    EXCEPTION_4 = 6,
    WRONG_EXPORT_FILE_TYPE = 7,
    BOX_PARAMETER_ERROR = 8,
};


typedef void* HANDLE;




typedef struct api_dbox {
    double x1;
    double y1;
    double x2;
    double y2;
} ApiBox;



struct ImageExportOption
{
    const char* exportFilePath;
    const char* exportImageType;
    double x1;
    double y1;
    double x2;
    double y2;
    double width;
    double height;
    int linewidth;
    int oversampling;
    double resolution;
};

#ifdef __cplusplus
}
#endif
#endif // IMAGE_EXPORT_OPTION_H