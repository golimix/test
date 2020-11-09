#include <stdio.h>

//void gotoxy(int x, int y){printf("%c[%d;%df", 0x1B, y, x);}

void memshow(const char *prefix, void *ptr, ssize_t size)
{
//  format:  
//	0x0000:  4500 0034 fcd2 4000 4006 3fef 7f00 0001
//	0x0010:  7f00 0001 988e 268f 2b67 f87a 7d08 8461
//	0x0020:  8010 01f8 fe28 0000 0101 080a a355 7aed
    unsigned char *byte = (unsigned char *)ptr;
    unsigned char *line_hdr=NULL;
    int i=0, j=0, cnt=0;
    int line=0;
    for(i=0;i<size;i++){
        if(cnt%16==0) {
            line=printf("%s0x%04x:  ", prefix, cnt);
            line_hdr = byte;
        }

        printf("%02x", *byte);
        
        
        if(cnt%2)printf(" ");
        byte++;

        cnt++;
        if(cnt%16==0) {
            printf(" | ");
            for(j=0;j<16;j++){
                if(i+j<size){
                    printf("%c", isascii(*line_hdr)?*line_hdr:'.');
                    line_hdr++;
                }
                
            }
            printf("\n");
            fflush(stdout);
        }
    }
    printf("\n");
    fflush(stdout);
}


int main()
{
    char str[] = {
        "134134'\sad\'f;\[12341\32['41\2341\23'42#\"$5@#$\"5\234'5\4'51\3'4132\'4;1\3'4;"
    };

    memshow(">>  ", str, 64);
}
