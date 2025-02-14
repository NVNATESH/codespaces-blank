#include<stdio.h>
void Insertion_sort(int A[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<=i;j++){
			int con = A[i+1];
			//select the element using con 
			if(A[j]>con){
			//if con is less the its preveious number it will swap
				int temp = A[j];
				A[j] = A[i+1];
				A[i+1] = temp;
			}
		}
	}
}
int main(){
	int n,i;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	Insertion_sort(A,n);
	for(i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	return 0;
}
