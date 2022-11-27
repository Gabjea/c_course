//Write a program to read a set of integers and print the maximum and minimum value.

#include <stdio.h>
#include <limits.h>

int minim(int mini,int x){
    return (mini < x) ? mini : x;
}

int maxim(int maxi, int x){
    return (maxi > x) ? maxi : x;
}
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
        maxi = maxim(maxi,a[i]);
        mini = minim(mini,a[i]);
    }

    printf("Smallest number is %d and the largest is %d ",mini,maxi);

    return 0;
}
