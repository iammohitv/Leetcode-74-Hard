#include <bits/stdc++.h>

int solve(vector<int> weight, vector<int> value, int n, int maxWeight, vector<vector<int>>&t){
	if(n==0 || maxWeight==0){
		t[n][maxWeight]=0;
		return t[n][maxWeight];
	}
	if(t[n][maxWeight]!=-1){
		return t[n][maxWeight];
	}
	if(weight[n-1]<=maxWeight){
		t[n][maxWeight]=max(value[n-1] + solve(weight, value, n-1, maxWeight-weight[n-1],t),solve(weight, value, n-1, maxWeight,t));
		return t[n][maxWeight];
	}
	else if(weight[n-1]>maxWeight){
		t[n][maxWeight] = solve(weight, value, n-1, maxWeight,t); 
		return t[n][maxWeight];
	}
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	vector<vector<int>>t(n+1,vector<int>(maxWeight+1,-1));
	return solve(weight,value,n,maxWeight,t);
}