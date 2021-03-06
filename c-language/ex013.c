/*
    After becoming famous, the CodeBots decided to move into a new building together. Each of the rooms has a different cost, and some of them are free, but there's a rumour that all the free rooms are haunted! Since the CodeBots are quite superstitious, they refuse to stay in any of the free rooms, or any of the rooms below any of the free rooms.

    Given matrix, a rectangular matrix of integers, where each value represents the cost of the room, your task is to return the total sum of all rooms that are suitable for the CodeBots (ie: add up all the values that don't appear below a 0).

    Example:
    
    matrix = [[0, 1, 1, 2], 
              [0, 5, 0, 0], 
              [2, 0, 3, 3]]
    The output should be matrixElementsSum(matrix) = 9.
    There are several haunted rooms, so we'll disregard them as well as any rooms beneath them. Thus, the answer is 1 + 5 + 1 + 2 = 9.

    matrix = [[1, 1, 1, 0], 
              [0, 5, 0, 1], 
              [2, 1, 3, 10]]
    The output should be matrixElementsSum(matrix) = 9.
    Note that the free room in the final column makes the full column unsuitable for bots (not just the room directly beneath it). Thus, the answer is 1 + 1 + 1 + 5 + 1 = 9.
*/

#include <stdio.h>

int matrixElementsSum(int matrix[], int tam);

int main()
{
    int matrix[] = {{1, 1, 1, 0},
                    {0, 5, 0, 1},
                    {2, 1, 3, 10}};

    int tam = sizeof(matrix) / sizeof(matrix[0]);

    system("cls");
    printf("\nTotal sum of all rooms there are suitable for the CodeBots? %d\n\n", matrixElementsSum(matrix, tam));

    return 0;
}

int matrixElementsSum(int matrix[], int tam)
{
    int result = 0;
    int vector[strlen(matrix[0])];

    for(int i=0; i<strlen(matrix[0]); i++)
        vector[i] = 0;

    for(int i=0; i<tam; i++)
    {        
        for(int j=0; j<strlen(matrix[i]; j++)
        {
            if(matrix[i][j] == 0)
                vector[j] = 1;

            if(vector[j] == 0)
                result += matrix[i][j];

            printf("%d", vector[j]);
        }
        printf("\n");
        printf("result=[%d]\n", result);
    }
    return result;
}