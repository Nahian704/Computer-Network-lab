# include<iostream>
using namespace std;
int main (){
    int n,i, sum =0;
    cout<<" Enter the number :";
    cin>>n;
    cout<<"first number"<< n <<"the nutral number:" <<endl;
    for(int i=1; i<= n; i++)
    cout << i << " ";
    sum += i;
    cout<<" The sum of the nutral numbers are: " << sum<< endl;
    return 0;
}

