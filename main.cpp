#include <stdio.h>
/**
 * @author Brendna Warnick
 * @version CIS 263 Winter 2018
 * 263 Extra Credit Knapsack Problem
 */
int max(int a, int b){
	return (a > b)? a : b; 
}

int knapSack(int W, int wt[], int val[], int n){
	if (n == 0 || W == 0)
		return 0;
	if (wt[n-1] > W)
		return knapSack(W, wt, val, n-1);

	else return max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1), knapSack(W, wt, val, n-1));
}

int main(){
	int val[] = {100, 350, 225, 67, 275, 168};
	int wt[] = {15, 25, 45, 30, 23, 37};
	int W = 50;
	int n = sizeof(val)/sizeof(val[0]);
	printf("%d \n", knapSack(W, wt, val, n));
	return 0;
}

