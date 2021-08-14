#include <stdio.h>

int main() {
   
   int i, x, n;
   
   printf("How many elements?\n");
   scanf("%d",&n);
   int a[n];
   printf("Enter the array elements:\n");
   for (i=0;i<n;i++){
   	scanf("%d",&a[i]);
   }
   printf("Enter element to search:\n");
   scanf("%d",&x);
   
   int length = sizeof(a)/sizeof(int);
   printf("%d",length);
   
   int low=0;
   int high = length-1; // because low is 0 so array start from 0
   int find = linear_search(a,low,high,x);
   
   if (find == -1){
   	printf("\nElement does not found:\n");
   }
   else{
   	printf("\nElement has found in the list at index position %d.\n",find);
   }
   
   return 0;
   
}

int linear_search(int a[],int low,int high, int key_value){
	int found = 0;
	while(low<=high && found==0){
		if (a[low] == key_value){
			found = 1;
		}
		else{
			low = low+1;
		}
		
	}
	if (found==0){
		return -1;
	}
	else{
		return low;
	}
}


