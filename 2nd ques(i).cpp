# include<iostream>
using namespace std;
int main (){
    int n,i, sum =0;
    cout<<" Enter the number for the pattern :";
    cin>>n;

    for(int i=1; i<= n; i++){
    for (int j=1; j<=i; j++){
    cout << i ;
    }
    cout<< endl;}
    return 0;
}

