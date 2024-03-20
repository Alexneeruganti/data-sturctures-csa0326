#include<stdio.h>
int main(){
	int a[10][10],m,n,i,j;
	int b[10][10],p,q,k;
	int c[10][10];
	printf("enter rows and columns in a matrix a");
	scanf("%d%d",&m,&n);
	printf("enter the elements");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter rows and columns in matrix b");
	scanf("%d%d",&p,&q);
	printf("enter the elements");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			c[i][j]=0;
			for(k=0;k<p;k++){
				c[i][j]=a[i][k]+b[k][j];
			}
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			printf("%3d",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
