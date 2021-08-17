# include<stdio.h>

int main(){

	int n,high;
	printf("Enter the number of list elements:\n");
	scanf("%d",&n);
	printf("Enter the element to list:\n");
	int list[n];
	
	for (int i=0;i<n;i++){
		scanf("%d",&list[i]);
	}
	
	high = sizeof(list)/sizeof(int);
	printf("%d\n",high);
	stright_max_min(list,high);
	

	return 0;
	
}

void stright_max_min(int list[],int high){
	
	int low=0,max=0,min;
	min = list[low];
	max = list[low];
	
	
	
	for(int i=low+1;i<high;i++){
		
		if(list[i] < min){
			min = list[i];
		}
		if (list[i] > max){
			max = list[i];
		}
		
	}
	
	printf("The maximun element is %d \n",max);
	printf("The minium element is %d \n",min);
	

}
