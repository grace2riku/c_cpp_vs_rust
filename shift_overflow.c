#include <stdio.h>
#include <stdlib.h>

int main() 
{
    unsigned char uc = 0x00;
    
    uc = 0x01 << 7;    
    printf("uc << 7 = %02x\n", uc); 

    uc = 0x01 << 8;
    printf("uc << 8 = %02x\n", uc); 
} 
