# QCLearn
An educational software to learn fundamental quantum chemistry problems. It generates iteratively wave function plots and expected energies for well-known problems like:

- Particle in a 1D box.
- Harmonic oscillator. 
- Rigid rotor.

## Program dependencies

The user must ensure that the following utilities are available:

- CMake 3.10 or better; 3.14+ highly recommended.
- A C++ compatible compiler, e.g., g++ from gcc 9.1 or an upgrade.

## Compilation & testing

To configure:

```bash
cmake -S . -B build
```

To build:

```bash
cmake --build build
```
This process will generate an executable `qclearn.x` in the main directory. 

To test (`--target` can be written as `-t` in CMake 3.15+):

```bash
cmake --build build --target test
```

