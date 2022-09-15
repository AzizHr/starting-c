#include <stdio.h>
#include <stdbool.h>
int main(){
        // selection sort
        int arr[5] = {5,6,2,9,1} , i , j , help;
            for(i = 0 ; i < 5 ; i++){
                for(j = i + 1 ; j < 5 ; j++){
                    if(arr[i] > arr[j]){
                        help = arr[i];
                        arr[i] = arr[j];
                        arr[j] = help;
                    }
                }
            }

        for(i = 0 ; i < 5 ; i++){
            printf("| %d |" , arr[i]);
        }
        // insertion sort
        int arr[5] = {5,6,2,9,1} , i , help;
        int con;
        do{
            con = 0;
            for(i = 1 ; i < 5 ; i++){
                if(arr[i] < arr[i-1]){
                    con = 1;
                    help = arr[i-1];
                    arr[i-1] = arr[i];
                    arr[i] = help;
                }
            }
        }while(con == 1);

        for(i = 0 ; i < 5 ; i++){
            printf("| %d |" , arr[i]);
        }

    // bubble sort 
    int arr[5] = {5,6,2,9,1} , i , help;
    int con;
    do{
        con = 0;
        for(i = 0 ; i < 4 ; i++){
            if(arr[i] > arr[i+1]){
                con = 1;
                help = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = help;
            }
        }
    }while(con == 1);

    for(i = 0 ; i < 5 ; i++){
        printf("| %d |" , arr[i]);
    }
    return 0;
}