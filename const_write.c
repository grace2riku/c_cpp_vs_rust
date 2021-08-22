int main() 
{
    const unsigned char c_a = 12;
    unsigned char* ptr_a = &c_a;
    
    *ptr_a = 34;
    
    printf("*ptr_a = %d\n", *ptr_a);     
} 
