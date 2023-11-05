    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int m,n;
        cout<<"Enter the no.of rows :";
        cin>>m;
        cout<<"Enter the no.of columns :";
        cin>>n;
        int arr[m][n];
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                arr[i][j]=i*j;
            }
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }