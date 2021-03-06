/*
 Написать программу, подсчитывающую количество слов во
 введённой пользователем строке
 Пояснение
 
 Строка, вводимая с клавиатуры может содержать любое количество пробельных и непробельных символов. Таким образом, мы рассматриваем слово как последовательность символов, разделенную любым количеством пробелов (пробелы могут находиться и в начале и в конце строки).
 
 Состав
 
 Программа должна состоять из двух функций:
 
 - int wordCount(char buf[]) - подсчет количества слов
 - main() - организация диалога.
 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task1.h"
#define N 256


int main(){
    
    char buf[N];
    printf("Enter your text:\n");
    fgets(buf, N, stdin);
    if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = '\0';
    
    printf("Number of words is %d\n", wordCount(buf));
   
    
    return 0;
}
