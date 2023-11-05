#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,aq,uaq,rq,wq,r,w;
    cout<<"Enter the total no. of questions:";
    cin>>n;
    cout<<"Enter the no. of attempted questions:";
    cin>>aq;
    // uaq=n-aq;
    cout<<"Enter the no. of Right answered questions:";
    cin>>rq;
    cout<<"Enter the score for each right answer question:";
    cin>>r;
    cout<<"Enter the score of the each wrong answer question";
    cin>>w;
    wq=aq-rq;

    if(n<0){
        cout<<"Enter valid value";
    }
    else{
        cout<<"your score is"<<" "<<(rq*r-wq*w)<<"/"<<n*r;

    }
    return 0;
    

}