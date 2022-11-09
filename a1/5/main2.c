#include <stdio.h>

int main(){
	int coins[] = {5,2,1}, amount, minCoinsUsed=0, i=0;
	printf("Enter the amount: ");
	scanf("%d", &amount);
	while(amount){
		if( amount -  coins[i] >= 0){
			amount -= coins[i];
			minCoinsUsed++;
		}
		else i++;
	}
	printf("Minimum number of coins to pay the given amount is: %d",minCoinsUsed);
	return 0;
}
