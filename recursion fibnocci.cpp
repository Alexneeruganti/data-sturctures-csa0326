#include<stdio.h>
int fibnocci(int n){
	if(n<=1)
	return n;
	else
	return fibnocci(n-1)+fibnocci(n-2);
}
int main(){
	int n,i;
	printf("enter no of terms :");
	scanf("%d",&n);
	printf("fibnocci series is:");
	for(i=0;i<n;i++){
		printf("%d",fibnocci(i));
		printf(",");
	}
	return 0;
}
