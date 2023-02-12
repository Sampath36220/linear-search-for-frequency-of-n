/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, flag = 0, i;
    printf("Enter n value:\n");
    scanf("%d", &n);
    int* p;
    p = (int*)malloc(n * sizeof(int));
    printf("\nEnter elements into array:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", (p + i));
    }
    int key;
    printf("\nEnter key to be searched:\n");
    scanf("%d", &key);
    for(i = 0; i < n; i++){
        if(*(p + i) == key){
            flag++;
        }
    }
    printf("\n%d is appeared %d times.", key, flag);
    return 0;
}

