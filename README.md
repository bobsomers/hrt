# HRT

Simple wrapper for the high-resolution timer on Linux.

## Step 1

```c
#include "hrt.h"
```

## Step 2

```c
hrt_start();
do_work();
hrt_stop();

printf("Worked for %s.\n", hrt_string());
```

## Step 3

```shell
gcc -lrt your_program.c hrt.c
```

## Profit?

Check out `hrt.h` if you need more info.
