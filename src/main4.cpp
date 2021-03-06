/*
 Написать программу, которая находит сумму чисел во введённой строке
 Пояснение
 
 Программа рассматривает непрерывные последовательности цифр в строке как числа и обрабатывает их как единое целое. В программе предусмотреть ограничение на максимальное число разрядов, то есть если пользователь вводит очень длинную последовательность цифр, её нужно разбить на несколько групп.
 
 Пример:
 
 "ab12cd45e" -> 57
 
 Состав
 
 Программа должна состоять из функций:
 
 - int getSum(char buf[]) - нахождение суммы
 - main()
 */
#include <stdio.h>
#include <string.h>
#include "task4.h"
#define N 256

int main(void){
    char buf[N];
    printf("Just enter some string, please\n");
    fgets(buf, N, stdin);
    printf("Summ of numbers is:\t%d\n", getSum(buf));
    
}
