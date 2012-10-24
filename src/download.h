#ifndef _DOWNLOAD_H
#define _DOWNLOAD_H

#include <stdbool.h>

typedef struct {
    FILE *handle;
    char downloadingFilename[1024 * 2];
    char lovedFilename[1024 * 2];
    char unlovedFilename[1024 * 2];
    unsigned int loveSong;
    bool cleanup;
} BarDownload_t;

#endif /* _DOWNLOAD_H */
