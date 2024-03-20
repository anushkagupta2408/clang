/*#include<iostream>
using namespace std;
int main()
{
	int size,num,i;
	int arr[size];
	cout<<"enter the size of an array"<<endl;
	cin>>size;
	cout<<"enter the elements of an array"<<endl;
	for(int i=0;i<=size-1;i++){
		cin>>arr[i];
	}
	cout<<"elements of an array are"<<endl;
	for(int i=0;i<=size-1;i++){
		cout<<arr[i]<<endl;
	}
	cout<<"enter the element to be search"<<endl;
	cin>>num;
	for(int i=0;i<=size-1;i++){
		if(arr[i]==num){
			cout<<"index of element is"<<i<<endl;	
	    }
	}
	return 0;	
}*/
//binary search
/*#include<iostream>
using namespace std;
int main()
{
	int size,num,i;
	int beg=0;
	
	cout<<"enter the size of an array"<<endl;
	cin>>size;
	int end=size-1;
	int arr[size];
	cout<<"enter the elements of an array"<<endl;
	for(int i=0;i<=size-1;i++){
		cin>>arr[i];
	}
	cout<<"elements of an array are"<<endl;
	for(int i=0;i<=size-1;i++){
		cout<<arr[i]<<endl;
	}
	cout<<"enter the element to be search"<<endl;
	cin>>num;
	int mid=0;
	int flag=0;
	while(beg<end){
		mid=(beg+end)/2;
		if(arr[mid]==num){
		    cout<<arr[mid]<<"at index"<<mid+1<<endl;	
		    flag=1;
		    break;
	    }
	    else if(arr[mid]>num){
	    	end=mid-1;	
		}
		else {
	    	beg=mid+1;	
		}
	}
	if(flag==0){
		cout<<"Element not found";
	}
	return 0;
}*/

//sorting
/*#include<iostream>
using namespace std;
int main(){
    int size,num,i,temp,p;
	cout<<"enter the size of an array"<<endl;
	cin>>size;
	int arr[size];
	cout<<"enter the elements of an array"<<endl;
	for(int i=0;i<=size-1;i++){
		cin>>arr[i];
	}
	cout<<"elements of an array are"<<endl;
	for(int i=0;i<=size-1;i++){
		cout<<arr[i]<<",";
	}
	int n=size;
	for(p=0;p<n;p++){
		for(i=0;i<(n-p);i++){
			if(arr[i]>arr[i+1]){
				temp=arr[i];
			    arr[i]=arr[i+1];
			    arr[i+1]=temp;
		    }
		}
    }   
    cout<<"bubble sort"<<endl;
	for(int i=1;i<=size;i++){
		cout<<arr[i]<<",";
	}
	
	
}*/

//selection sort	
#include<iostream>
using namespace std;
int main(){	
int a[]={45,32,11,78,98,41}
int n=sizeof(a)/sizeof(int)


	


	
