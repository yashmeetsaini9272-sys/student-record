# Student Marks Calculator

A simple beginner-friendly C program for storing student names and marks in
arrays, then calculating and displaying each student's total and average.

## Features

- Stores up to 50 students.
- Records marks for 3 subjects per student (each mark must be from 0 to 100).
- Calculates total marks out of 300 and the average.
- Accepts student names containing spaces.

## Requirements

- A C compiler, such as GCC.

## Build and run

Open a terminal in this project folder.

### Windows (GCC)

```powershell
gcc -std=c11 -Wall -Wextra -pedantic main.c -o student.exe
.\student.exe
```

### macOS or Linux

```sh
gcc -std=c11 -Wall -Wextra -pedantic main.c -o student
./student
```

Follow the prompts to enter the number of students, their names, and three
marks per student. Press Enter when prompted to close the program.

## Example

```text
How many students (1-50)? 1

Enter student 1 name: Sam
Enter mark for subject 1: 80
Enter mark for subject 2: 90
Enter mark for subject 3: 70

Student results:
Sam: Marks = 80, 90, 70 | Total Marks = 240/300 | Average = 80.00
```

## Project files

- `main.c` - program source code.
- `.gitignore` - excludes compiled executables from Git.
