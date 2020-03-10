#include <iostream>
using namespace std;

void selection_sort(int arr[], int size){  
	int  i, j, min,temp; 
	
//finding the minimum element//
cout<<"sorted elements : "<<" ";
for (int i=0; i<size; i++){
		min=i;
		for (int j=i+1; j<size; j++)
		if(arr[j]<arr[i]){
			min=j;
			
//swap minimum element and the first element//
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
		
		cout<<arr[i]<<" ";
	}
} 

int main(){
	int arr[30];
	int size;
	
	cout<<"enter size of elements to be sorted"<<endl;
	cin>>size;
	cout<<"enter "<< size <<" elements to be sorted"<<"\n";
	for(int m=0; m<size; m++){
		cin>>arr[m];
	}
	selection_sort(arr, size);
	
	

return 0;
}


