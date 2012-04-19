#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "hrt.h"

int main(int argc, char *argv[]) {
    printf("Going to sleep for 2 seconds...\n");

    hrt_start();
    sleep(2);
    hrt_stop();

    printf("I was asleep for %s.\n", hrt_string());

    return EXIT_SUCCESS;
}
