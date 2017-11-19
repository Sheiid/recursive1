#include <stdio.h>
#include <stdlib.h>
#define DIM 3
void anagram(int *,int *,int *,int);

int main(){

int arr[DIM]={1,2,3};
int buff[DIM];
int used[DIM]={0,0,0};
anagram(arr,buff,used,0);


	return 0;
}

void anagram(int *arr,int *buff,int *used,int level){

	int i,j;

	if(level==DIM){
		for(j=0;j<DIM;j++){
			printf("%d",buff[j]);
		}
		printf("\n");
		return;
	}else{
		for(i=0;i<DIM;i++){
			if(used[i]==0){
				buff[level]=arr[i];
				used[i]=1;
				anagram(arr,buff,used,level+1);
				used[i]=0;
			}

		}

	}


}

