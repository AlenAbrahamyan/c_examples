#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find_min(int arr[3][3]);

int main() {
	int i, j, n;
	printf("Enter the dimension of the matrix: ");
	//we are declaring our matrix size
    scanf("%d", &n);
	int arr[n][n];
	time_t t1;
    
    srand ( (unsigned) time (&t1));

    for(i = 0; i < n;i++) {
    	for(j = 0; j < n;j++) {
            arr[i][j]=rand()%40-20;
    		printf("%d ", arr[i][j]);        
    		//we geting number in -20>i<20 range
    	}
    	printf("\n");
    }
    printf("------------------\n");
find_min(arr);
printf("------------------\n");
printf("%d ", find_min(arr));
	return 0;
}

int find_min(int arr[3][3]) {

   int i, j, result=11;
 
    for(i = 0; i < 5;i++) {
    	for(j = 0; j < 5;j++) {
    		printf("%d ", arr[i][j]);
    	}
    	printf("\n");
    }
    return result;
}