#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
    char c;
    int in,out;
    
    in = open("file.in", O_RDONLY);
    out = open("file.out", O_WRONLY);
    while(read(in, &c, 1) == 1)
    write(out, &c, 1);
    
    exit(0);
}
