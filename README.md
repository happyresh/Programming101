# 💻 Programming 101 - First Year College

**Polytechnic University of the Philippines - Manila**  
**Group 14: C Language Lab Activities & Homework**  
> *A compilation of our coding exercises and projects from the 1st Year of college in the subject of Programming 101.*

---

## 📂 Table of Contents
1. [Lab Activities](#lab-activities)
   - [Lab Activity 1](#lab-activity-1---2nd-semester)
   - [Lab Activity 2](#lab-activity-2---2nd-semester)
   - [Lab Activity 3](#lab-activity-3---2nd-semester)
2. [Individual Programs](#individual-programs)
   - [Age Program](#age-program)
   - [Divisible by 9](#divisible-by-9)
   - [Pizza Program](#pizza-program)
3. [Group Activities](#group-activities)
   - [CD Program](#cd-program)
   - [Decibel Program](#decibel-program)
   - [Jedi Academy](#jedi-academy)
   - [Pollution Index](#pollution-index)

---

## 💻 Lab Activities

### Lab Activity 1 - 2nd Semester
> A basic introduction to C programming covering data types, operators, and simple input/output.

### Lab Activity 2 - 2nd Semester
> More advanced topics including control structures such as loops and conditionals.

### Lab Activity 3 - 2nd Semester
> Focuses on creating and manipulating **pointers** in C.

---

## 📝 Individual Programs

### Age Program
- **File**: [age.c](./age.c)
- **Description**: A program that calculates the user's age based on their birth year.

```c
#include <stdio.h>
int main() {
    int birth_year, current_year, age;
    printf("Enter birth year: ");
    scanf("%d", &birth_year);
    printf("Enter current year: ");
    scanf("%d", &current_year);
    age = current_year - birth_year;
    printf("Your age is: %d", age);
    return 0;
}
```

### Divisible by 9
- **File**: [divisible-by-9.c](./divisible-by-9.c)
- **Description**: This program checks if a given number is divisible by 9.

```c
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 9 == 0)
        printf("%d is divisible by 9\n", number);
    else
        printf("%d is not divisible by 9\n", number);
    return 0;
}
```

### Pizza Program
- **File**: [pizza.c](./pizza.c)
- **Description**: Calculates the cost of a pizza based on the diameter and type of toppings chosen.

---

## 🤝 Group Activities

### CD Program
- **File**: [cd.c](./cd.c)
- **Description**: Group activity focused on simulating a simple inventory system for CDs. It allows users to add, remove, and display CD details.

### Decibel Program
- **File**: [decibel.c](./decibel.c)
- **Description**: A program that calculates decibel levels and provides feedback based on the input.

### Jedi Academy
- **File**: [jedi-academy.c](./jedi-academy.c)
- **Description**: An educational simulation where students can enroll in a Jedi Academy and undergo training.

### Pollution Index
- **File**: [pollution-index.c](./pollution-index.c)
- **Description**: This program calculates the pollution index of a city based on various factors and provides a recommendation for action.

---

## 👨‍💻 Contributors

- **Eliniel Recio** ([happyresh](https://github.com/happyresh))  
- **Sandy Lorraine** ([ssamdy](https://github.com/ssamdy))

---

## 📄 License

This repository is licensed under the MIT License - see the [LICENSE](./LICENSE) file for details.
