# Metode Avansate de Programare
## *Proiect Sincretic - 8 Queens Problem*

***The eight queens puzzle is the problem of placing eight chess queens on an 8×8 chessboard so that no two queens threaten each other; thus, a solution requires that no two queens share the same row, column, or diagonal.***

1. **C Program:**
- Developed a C program to solve the 8 Queens problem.
- This program uses backtracking to solve the problem. It recursively explores all possible queen placements on an N×N chessboard, 
  ensuring no two queens threaten each other. 
- There are 92 solutions, of which 12 are different for reasons of symmetry.

2. **Dockerfile:**
- Developed a Dockerfile to establish the environment and outline the build procedure.
- Set the base image to the latest version of Alpine Linux for the AMD64 architecture.
- Copy the source code file main.c .
- Compile the C program (main.c) using the GCC compiler and create an executable named "queens".

3. **Docker Image:**
- Used the docker command ```docker build -t queens-image -f Dockerfile .```

# How to run the Docker image
- Docker pull command ```docker pull basti24/queens:latest```

*The project is inspired by:*
- https://www.geeksforgeeks.org/8-queen-problem/
- https://en.wikipedia.org/wiki/Eight_queens_puzzle/
- https://www.youtube.com/watch?v=z-ohGoIW_uM/
