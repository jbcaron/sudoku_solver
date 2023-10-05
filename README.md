# Sudoku Solver

## Table of Contents

- [Project Description](#project-description)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)

## Project Description

This project is a simple Sudoku solver implemented in C. It uses backtracking to solve Sudoku puzzles.

The main function in the code allows you to run the Sudoku solver from the command line. If no arguments are provided, it reads a default Sudoku puzzle. If one argument is provided, it reads a Sudoku puzzle from a file.

## Prerequisites
Before using this project, you should have the following prerequisites installed on your system:

- C compiler
- Make
- Standard C library
- Unix system (for unistd.h)

# Installation
To install and run this Sudoku solver, follow these steps:

Clone the repository to your local machine:

```shell
$ git clone https://github.com/yourusername/sudoku-solver.git
```

Change the directory to the project folder:

```shell
$ cd sudoku-solver
```

Compile the code:

```shell
$ make
```

## Usage

To use this Sudoku solver, follow these steps:

Run the executable, optionally providing a filename as an argument if you want to solve a specific Sudoku puzzle from a file.

Example usage:

```shell
$ ./sudoku_solver
> 001004000
> 609250003
> 020000000
> 490002170
> 003106008
> 200040360
> 002008450
> 000000700
> 374060000
```

or

```shell
$ ./sudoku_solver puzzle.txt
```
## Contributing

Contributions to this project are welcome. Feel free to fork the repository, make improvements, and create a pull request.
