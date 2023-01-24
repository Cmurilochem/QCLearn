# QCLearn
An educational software to learn fundamental quantum chemistry problems

## Compilation

To configure:

```bash
cmake -S . -B build
```

To build:

```bash
cmake --build build
```

To test (`--target` can be written as `-t` in CMake 3.15+):

```bash
cmake --build build --target test
```

