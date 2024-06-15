// ImageExportOption.h

#ifndef IMAGE_EXPORT_OPTION_H
#define IMAGE_EXPORT_OPTION_H

struct ImageExportOption
{
    const char* importFilePath;
    const char* importFileType;
    const char* exportFilePath;
    const char* exportImageType;
    int width;
    int x1;
    int y1;
    int x2;
    int y2;
};

#endif // IMAGE_EXPORT_OPTION_H