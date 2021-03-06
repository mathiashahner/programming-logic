/*
    Given an array of integers, find the pair of adjacent elements that has the largest product and return that product.

    Example:
        - For input Array = [3, 6, -2, -5, 7, 3], the output should beadjacentElementsProduct(inputArray) = 21.
        - 7 and 3 produce the largest product.
*/

#include <stdio.h>

int adjacentElementsProduct(int * inputArray, int tam);

int main()
{
    int buffer[] = {0,1,2,3,4,5,6,7,2,3,0};
    int tam = sizeof(buffer) / sizeof(buffer[0] - 1);

    system("cls");
    printf("\n\nresult=[%d]\n\n", adjacentElementsProduct(buffer, tam));

    return 0;
}

int adjacentElementsProduct(int * inputArray, int tam)
{
    int temp, result;

    result = inputArray[0] * inputArray[1];

    for( int i=0; i<tam; i++ )
    {
        temp = inputArray[i] * inputArray[i+1];

        if( temp > result )
            result = temp;
        
        printf("\ninput1=[%d] input2=[%d] temp=[%d] result=[%d]", inputArray[i], inputArray[i+1], temp, result);
    }
    
    return result;
}