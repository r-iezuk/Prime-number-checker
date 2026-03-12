/*
 * File:    isPrimeNumber.c
 * Author:  Name
 * Created: 2026-03-12
 * Purpose: Determine whether it is a prime number
 * Notes:   
 */
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool isPrimeNumber(int number)
{
    if (number < 2) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;
    for (int i = 3; i <= sqrt(number); i = i + 2) {
        if (number % i == 0) return false;
    }
    return true;
}
int main(void)
{
    int number;
    printf("Input any number:");
    scanf("%d", &number);
    if (isPrimeNumber(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.", number);
    }
    return 0;
}