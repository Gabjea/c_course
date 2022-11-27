//Write a program to read a set of integers and print the maximum and minimum value.

#include <stdio.h>
#include <limits.h>
int main(){
    int maxi= INT_MIN, mini= INT_MAX, n;
    printf("Choose a number of integeres: ");
    if(scanf("%d", &n) != 1){
        printf("Input not recognised as an integer");
        return;
    }
    int a[n];
    for(int i =0; i < n; i++){
        if(scanf("%d", &a[i]) != 1){
           printf("Input not recognised as an integer");
           return;
        }
    }
    for(int i= 0; i < n; i++){
        if( a[i] < mini )
            mini = a[i];
        else if ( a[i] > maxi){
            maxi = a[i];
        }
    }
    printf("Smallest number: is %d and the largest is %d ",mini,maxi);


}