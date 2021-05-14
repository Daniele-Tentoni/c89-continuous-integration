# c89-continuous-integration

## Table of contents

- [Compile](#compile)
  * [Linux](#linux)
- [Test](#test)

## Compile

### Linux

Run 

```sh
gcc math.c main.c -o main.exe
```

command to compile without any other option and sugar. In makefile, I use also 

```sh
-Wall -Wextra -std=c89 -pedantic
```

to force all warnings, extras too, and use the c89 language dialect.

## Test

Run 

```sh
./test.sh
```

and wait for the results.

Made by Daniele Tentoni.
