#include <spede/stdio.h>

void main(void) {

    printf("Hello, world!\n");
    printf("Welcome to %s!\n", OS_NAME);

    *(unsigned int *)0xB8000 = 0x0748;
    *(unsigned int *)0xB8002 = 0x0765;
    *(unsigned int *)0xB8004 = 0x076C;
    *(unsigned int *)0xB8006 = 0x076C;
    *(unsigned int *)0xB8008 = 0x076F;
    *(unsigned int *)0xB800a = 0x0720;
    *(unsigned int *)0xB800c = 0x0757;
    *(unsigned int *)0xB800e = 0x076F;
    *(unsigned int *)0xB8010 = 0x0772;
    *(unsigned int *)0xB8012 = 0x076C;  
    *(unsigned int *)0xB8014 = 0x0764;
    *(unsigned int *)0xB8016 = 0x0721;
}
