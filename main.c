#include "tools/floppy.h"
#include "tools/fileinfo.h"

int main() {
    char* bootFilePath = "/home/bruce/CLionProjects//kernel/boot";

    Floppy* floppy = create_floppy();

    Fileinfo* bootFileInfo = read_file(bootFilePath);
    write_bootloader(floppy, bootFileInfo);


    create_image("/home/bruce/CLionProjects//kernel/a.img", floppy);
}
