#include "task1.h"

int wordCount(char buf[]) {
    int count = 0, flag = 1; // count - счетчик слов; flag - индикатор нахождения нас внутри слова (1 - внутри слова; 0 - снаружи)
    for (int i = 0; buf[i] != '\n'; i++){
        if(buf[i] != ' ' && flag == 1){
            count ++; // счетчик срабатывает только внутри слова
            flag = 0; // флаг опустился, т.к. в слове не может быть больше пробелов
        }
        if(buf [i] == ' ' && flag == 0) //если встретим пробел после того, как мы посчитали слово, то флаг поднимается, чтобы посчитать другое, когда встретиться символ, отличный от пробела
            flag = 1;
    }
    return count;
}

    