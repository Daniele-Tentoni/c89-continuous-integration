# c89-continuous-integration

## Table of contents

- [Introduction](#introduction)
- [Continuous Integration](#continuous-integration)
- [Testing](#testing)
  - Unit (missing)
  - [E2E](#e2e-testing)
- [Compile](#compile)
  - [Linux](#linux)
- [Test](#test)

## Introduction

This template project want to be a starting point for an academic exercise with c89 language. You can easy clone this template and start code your program without any overhead from create from zero any continuous integration environment and testing script. You can add your tests in both script form (for "endpoint" testing) and cmocka c library (for "unit" testing). For each test type, check their sections in this file.

## Continuous Integration

This project use Github Actions to accomplish this task. By design, _push_ and _pull_request_ to Github trigger the default workflow (named _Test_), that run only _test.sh_ script. This to keep the ci rules as simpler as possible. Feel free to contribute opening issues or pull requests to enhance this feature.

## Testing

In this project, for academic purpouse, I use those two types of testing to check each aspect of an exercise. You can check with fine granulation code functions and program outputs. Following guides will help you (and remember me) how to configure those features.

### Unit Testing

This section missing at the moment.

### E2E Testing

Add to test.sh, after the compilation code, the argument number check and after that, all your endpoints tests. Use the `$?` special shell variable to store the last command used return value and output in main.error or main.log files to check some other outputs from your program.

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

to force all warnings, extras too, and use the c89 language dialect. You can use the makefile utility with:

```sh
make
```

You can finally clean your project with the clean target:

```sh
make clean
```

## Test

Run

```sh
./test.sh
```

and wait for the results. Even in this case, you can use the makefile utility with:

```sh
make run-tests
```

Made by Daniele Tentoni.
