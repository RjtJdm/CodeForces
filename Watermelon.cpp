#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
void fun(){
	long long int n;
	cin>>n;
	if(n==2||n==0)
	{
		cout<<"NO"; 
		return;
	}
	if(n%2==0){
		cout<<"YES";
		return;
	}
	
	cout<<"NO";
}
int main()
{
    	fun();
    return 0;
}
