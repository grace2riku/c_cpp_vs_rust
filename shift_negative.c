#include <stdio.h>
#include <stdlib.h>

void main() 
{
    unsigned char uc = 0x00;
    
    uc = 0x01 >> 1;    
    printf("uc >> 1 = %02x\n", uc); 

    uc = 0x01;
    printf("uc = %02x\n", uc); 

    uc = 0x01 >> -1;
    printf("uc >> -1 = %02x\n", uc); 
} 
