#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("elements of the matrices: \n");
    int a[2][2][2], i, j, k;
    //getting the elements from the user
    for(i=0; i<2; i++){//i --> each table.
        for(j=0; j<2; j++){//j for --> row.
            for(k=0; k<2; k++){//k --> column.
                scanf("%d", &a[i][j][k]);
            }
        }
    }
    //printing the matrices
    printf("MATRICES\n");
    for(i=0; i<2; i++){
        printf("table %d:\n", i+1);
        for(j=0; j<2; j++){
            for(k=0; k<2; k++){
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
