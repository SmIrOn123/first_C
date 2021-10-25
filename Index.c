#define _CRT_SECURE_NO_WARNINGS // для возможности использования scanf
#include <stdio.h>
#include <stdlib.h> // для перехода на русский язык
#include <stdio.h> //Стринг
#include <stdbool.h>
#include <math.h>


int main()
{
    int a;
    int b;
    int res;
    char znak;

    //int arr[] = {5, -67, 0, -2, 6};
    //int min = arr[0];
    //for(int i = 0; i < 5; i++){
        //if(arr[i] < min)
            //min = arr[i];
    //}
    //printf("%d", min);

   
    printf("Введите 1 число >");
    scanf("%d", &a);
    printf("Знак (+ - * / ^ - степень) >");
    scanf("%s", &znak);
    printf("Введите 2 число >");
    scanf("%d", &b);

    if(znak == '^'){
        int i;
        for(i = 0; i == b; i++){
            res = a * a;
            printf("%d", res);
        }
    }
    if(znak == '-'){
        res = a - b;
        printf("%d", res);
    }
    if(znak == '*'){
        res = a * b;
        printf("%d", res);
    }
    if(znak == '+'){
        res = a + b;
        printf("%d", res);
    }
    if(znak == '/'){
        res = a / b;
        printf("%d", res);
    } 
    else
        printf("ERROR");

    return 0;
}
