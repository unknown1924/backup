#include <string.h>
#include <cstdio>

int main(int argc, char** argv){
    char buffer[500];
    strcpy(buffer, argv[1]);
    printf("%s", buffer);
    return 0;
}
