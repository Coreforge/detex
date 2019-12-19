#include <stdio.h>
#include <stdlib.h>
#include "..\detex.h"

int main()
{
    FILE *f=fopen("D:\\tcf_hellcat_v-glow.dds","rb");
    char *c;
    fseek(f,0,SEEK_END);
    long size=ftell(f);
    c=(char*)malloc(size);
    fseek(f,0,SEEK_SET);
    fread(c,1,size,f);
    fclose(f);



    FILE *f2=fopen("D:\\out3.dds","wb");
    char *d=(char*)malloc(size*20);

    unsigned long size_final=detexDDSMemoryToMemoryDecompression(c,size,d);

    fwrite(d,1,size_final,f2);
    fclose(f2);

    return 0;
}
