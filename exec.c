#include <stdio.h>

#define EXEC 0x04
#define READ 0x01
#define WRITE 0x02
int main(void) {
    unsigned int permission = READ | WRITE;
    permission |= EXEC;
    
    printf("Permission: 0x%02X\n", permission);
   
    return 0; 
}
