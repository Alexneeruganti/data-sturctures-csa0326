#include<stdio.h>
int main(){
	int a[10],i,k,n;
	printf("enter no of elements:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++){
		int key=a[i];
		int j=i-1;
		while(j>=0&&a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
		printf("iteration %d: ",i);
		for(k=0;k<n;k++){
			printf("%d",a[k]);
			printf(" ");
		
		}
			printf("\n");
		
	}
	
	return 0;
}
