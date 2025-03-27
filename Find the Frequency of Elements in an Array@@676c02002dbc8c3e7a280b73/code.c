#include<stdio.h>
int main(){
	int n;
	printf("enter n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	int visited=-1;
	for(int i=0;i<n;i++){
		if(arr[i]==visited)
			continue;
		int count=1;
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				count++;
				arr[j]=visited;
			}
		}
		printf("\n%d %d",arr[i],count);
	}
	return 0;
}