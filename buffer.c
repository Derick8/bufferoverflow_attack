#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
char buffer[100];
strcpy(buffer,argv[1]);
printf("Input read: %s\n",buffer);
return 0;
}

