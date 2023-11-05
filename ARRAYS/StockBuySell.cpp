#include<bits/stdc++.h>
using namespace std;
int StockBuySell(int price[],int n){
    int profit=0;
    for(int i=1;i<n;i++){
        if(price[i]>price[i-1]){
            profit=profit+price[i]-price[i-1];
        }
  
    }
    return profit;
}
int main(){
    int i,n;
    cout<<"Enter the size of the array ";
    cin>>n;
    int price[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>price[i];
    }
    cout<<StockBuySell(price,n);


}