#include <stdio.h>
#include <stdlib.h>
#define N 6

int new_element(int arr[N][N], int i, int j){
    if(j==0 || i==0){
        return 1;
    }else{
        return (arr[i-1][j]+arr[i][j-1]);
    }
}

int main()
{
    FILE* fp;
    int arr[N][N];
    
    fp = fopen("baza.txt","w");
    fprintf(fp," ");
    fclose(fp);
    
    for(int i =0; i<N; i++){
        for(int j = 0; j<N; j++){

            arr[i][j]=new_element(arr,i,j);

            fp = fopen("baza.txt","a");
            fprintf(fp,"%d, ", arr[i][j]);
            fclose(fp);
            
        }
        fp = fopen("baza.txt","a");
        fprintf(fp,"\n");
        fclose(fp);
    }
    
    return 0;
}
