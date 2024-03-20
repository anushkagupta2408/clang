/*#include<iostream>
using namespace std;

void insertionsort(int arr[],int n){
	int i,j,key;
	for(i=1;i<n;i++){
		key=arr[i];
		j=i-1;
		
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		 arr[j+1]=key; 
	}
}
int main(){
	
	int arr[]={2,5,8,12,1};
	int n =sizeof(arr)/sizeof(arr[0]);
	insertionsort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<",";
	}
	return 0;
}*/

#include<iostream>
using namespace std;

void insertionsort(int arr[],int n){
	int i,j,key;
	for(i=1;i<n;i++){
		key=arr[i];
		for(j=i-1;j>=0;j--){
			if(arr[j]>key){
				arr[j+1]=arr[j];
			}
			else{
			break;
			}		 
		}
		arr[j+1]=key;
    }
}
int main(){
	
	int arr[]={6,4,1,7,9};
	int n =sizeof(arr)/sizeof(arr[0]);
	insertionsort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<",";
	}
	return 0;
}
