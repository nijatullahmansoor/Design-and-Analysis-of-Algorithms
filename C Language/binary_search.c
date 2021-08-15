# include<stdio.h>

int main(){

	int value,n,i,length,low=0,high,result;
	printf("Enter the length of the list:\n");
	scanf("%d",&n);
	int list[n];
	printf("Enter the element of the list:\n");
	for (i=0; i<n; i++){
		scanf("%d",&list[i]);
	}
	
	printf("Please enter the element you want to find in the above list:\n");
	scanf("%d",&value);
	
	length = sizeof(list)/sizeof(int);
	
	high = length -1;
	
	result = binary_search1(list,low,high,value);
	
	if (result != -1){
		printf("The element present at %d index position.\n",result);
	}
	else{
	
		printf("The element does not present in the list.\n");
	}
return 0;

}

 //this is recursive function. 
int binary_search(int list[],int low, int high, int value){

	int found = 0;
	int mid = 0;
	
	if (low == high){
		if (list[low] == value){
			return low;
		}
		else{
			return -1;
		}
	}	
	
	else{
		mid = (low+high)/2;
		if (list[mid] == value){
			return mid;
		}
		else if(list[mid]>value){
			return binary_search(list,low,mid-1,value);
		}
		else{
			return binary_search(list,mid+1,high,value);
		}
	}
	
}

// this is itrative function.
int binary_search1(int list[],int low, int high,int value){
	
	int found = 0;
	int mid = 0;
	while(low<=high && found == 0){
		mid = (low+high)/2;
		
		if (list[mid] == value){
			found=1;
		}
		else{
			if (list[mid]>value){
				high = mid-1;
			}
			else{
				low = mid+1;
			}
		}
	}
	
	if (found == 0){
		return -1;
	}
	else{
		return mid;
	}
	
}








