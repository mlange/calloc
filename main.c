#include <stdio.h>

int main(int argc, char *argv[])
{
    int bytes;

    if (! calloc(0, 0))
	perror("calloc");

    exit(0);
}

