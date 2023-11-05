#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, i, a;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;++i){
        cout<<"Enter the element "<<i+1<<": ";
        cin>>arr[i];

    }
    cout<<endl;
    cout<<"The elements in the arrays is ";
    for (i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    a=0;
    for(i=1;i<n;i++){
        if(arr[i]>arr[a]){
            a=i;
        }
    }
    cout<<"The index of the largest element is "<<a<<" and it is "<<arr[a]<<endl;

    cout<<"The second largest element in the array is ";
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[a]){
            if(j==-1){
                j=i;
            }
            else if (arr[i]>arr[j])
            {
                j=i;
            }

            }

        }
        cout<<arr[j]<<" with index value "<<j;
        return 0;

}
