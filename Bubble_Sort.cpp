#include<iostream>
using namespace std;

void Bubble_Sort(int arr[], int size){
	int temp,i,j;
	
	//forming adjascent pairs//  
for(i = 0; i<size; i++) {
   for(j = i+1; j<size; j++)
   {
   	
   	//comparing and swap adjascent elements//
      if(arr[j] < arr[i]) {
         temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
      }
   }
}
cout <<"Sorted Element : ";
for(i = 0; i<size; i++) {
   cout <<arr[i]<<" ";
   }	
}


int main ()
{
   int i, j,temp,size;
   int arr[30];
   
   cout<<"enter size of elements to be sorted"<<"\n";
	cin>>size;
	cout<<"enter "<< size <<" elements to be sorted"<<"\n";
	for(int m=0; m<size; m++){
		cin>>arr[m];
	}
   Bubble_Sort(arr,size);

return 0;
}

