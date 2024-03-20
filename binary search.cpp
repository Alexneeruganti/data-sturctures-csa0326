#include<stdio.h>
int main(){
	int n,a,i,low,high,mid;
	printf("enter no of elements");
	scanf("%d",&n);
	int ar[n];
	printf("enter  the elments:");
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	printf("enter the element to find:");
	scanf("%d",&a);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<high){
		if(ar[mid]<a){
			low=mid+1;
		}
		else if(ar[mid]==a){
			printf("%d is found at the position of %d.",a,mid+1);
			break;
		}
		else
		high=mid-1;
		mid=(low+high)/2;
			
		
	}
	if(low>high){
		printf("element is not found");
	}
	return 0;
}
