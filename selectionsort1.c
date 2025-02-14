#include<stdio.h>
void Selection_sort(int A[],int n){
	int i , j;
		for(i=0;i<n;i++){
		int index = i;
		//select the indexes in the order
		for(j=i;j<n;j++){
			if(A[index]>A[j]){//find the minimum element in the index
				index = j;
			}
		}
		 int temp = A[index];// swap the number with the small element in the index
			A[index] = A[i];
			A[i] = temp;
	}
	
}
int main(){
	int n,i,j;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	int B[n];
	Selection_sort(A,n);
	for(i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	return 0;
}
