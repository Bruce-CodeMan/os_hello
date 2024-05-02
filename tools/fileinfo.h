//
// Created by ziya on 2022/5/11.
//

#ifndef OS_KERNEL_FILEINFO_H
#define OS_KERNEL_FILEINFO_H

typedef struct {
    char*   name;
    int     size;
    char*   content;
}Fileinfo;

Fileinfo* read_file(const char* filename);

#endif //OS_KERNEL_FILEINFO_H
