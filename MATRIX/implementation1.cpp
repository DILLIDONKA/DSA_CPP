    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int m,n,o;
        cout<<"Enter the size of 1st dimension :";
        cin>>m;
        cout<<"Enter the size of 2nd dimension :";
        cin>>n;
        cout<<"Enter the size of 3rd dimension :";
        cin>>o;
        int arr[m][n][o];
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                for(int k=1;k<=o;k++){
                    arr[i][j][k]=i*j*k;
                }
            }
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                for(int k=1;k<=o;k++){
                    cout<<arr[i][j][k]<<"  ";
                }
                cout<<endl;
            }
            cout<<endl;
        }
        return 0;
    }