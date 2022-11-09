#include <stdio.h>
#include <limits.h>

int main(){
	int a, maxi = INT_MIN, mini = INT_MAX;
	printf("Enter 5 numbers: ");	
	for(int i = 0; i < 5; i++){
		scanf("%d",&a);
		if( a < mini)
			mini = a;
		else if ( a > maxi)
			maxi = a;
	}
	printf("Smallest number is %d and the largest is %d",mini,maxi);
	return 0;
}
