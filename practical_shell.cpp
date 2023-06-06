#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++) cin>>arr[i];
    
    int gap = n/2;
    
    while(gap != 0)
    {
        for(int i=0; i<n; i++){
            int j = i + gap;
            
            if(j < n)
            {
                if(arr[i] > arr[j]) // Swap
                {
                    int temp = arr[i]; 
                    arr[i] = arr[j];
                    arr[j] = temp;
                    
                    j = i;
                    int k = i - gap;
                    
                    while( (arr[k] > arr[j]) && (k >= 0) )
                    {
                        int tm = arr[j];
                        arr[j] = arr[k];
                        arr[k] = tm;
                            
                        j = k;
                        k = i - gap;
                    }
                }
            }
            else break;
            
        }
        gap = gap/2;
    }
    
    
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}

