#include <stdio.h>

/*
 * This is a program that shows the Fibonacci Sequence written in C by Resul Ucar
 * You can compile on a linux machine using (gcc gradecalc.c -o gradecalculator)
 * After compiling you can run the program by using (./gradecalculator)
 * IMPORTANT: make sure you have gcc installed before compiling
 * You can use (sudo apt install gcc) to install it and then run the command above
 * If you would like to make life easier when coding in C, I suggest you use JetBrain's CLion IDE, you can download CLion and the GNU compiler here: https://sourceforge.net/projects/mingw/ and https://www.jetbrains.com/clion/download/#section=windows
 */

//Fibonacci Function
int fib(int n)
{
    int i, t1 = 0, t2 = 1, nextTerm;
    printf("The Fibonacci Series is: ");
    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

}

//main function calls Fibonacci Function, thinking about adding more functions
int main() {
    int z = 1;

    while (z ==1 ) {
        int n;
        printf("\n\nWelcome to the Fibonacci Sequence\n");
        printf("Please enter how many iterations you would like\n");
        scanf("%d", &n);
        int outputF = fib(n);
    }
}
