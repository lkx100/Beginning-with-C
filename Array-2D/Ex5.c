#include <stdio.h>
int main(){
    int i, j;
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for ( j = 0; j < 3; j++){
        if ( j % 2 == 0 ){
            for ( i = 2; i >= 0; i--){
                printf("%d  ", arr[i][j]);
            }
            //printf("\n");
        }
        else {
            for ( i = 0; i < 3; i++){
                printf("%d  ", arr[i][j]);
            }
            //printf("\n");
        }
    }
    
    return 0;
}