#include<stdio.h>
void bubble_sort(int A[],int i,int j,int n){
	if(i>=n) return;
	// if i greater than total elements it return
	if(j>=n-1) return;
	// if j greater than total elements it return
		if(j < n-1 && A[j] > A[j+1]){
		//check the two consecutives in first one is smaller than the second one if not there they will swap
			int temp = A[j];
			A[j] = A[j+1];
			A[j+1] = temp;
		}
	bubble_sort(A,i,j+1,n);
	// call for next elements to check
	bubble_sort(A,i+1,0,n);
}
int main(){
	int a;
	scanf("%d",&a);
	int A[a],;
	for(i=0;i<a;i++){
		scanf("%d",&A[i]);
	}
	bubble_sort(A,0,0,a);	
}
