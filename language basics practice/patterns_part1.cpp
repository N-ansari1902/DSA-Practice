#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    cout<<"\n Printing pattern : 01 below \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print2(int n){
    cout<<"\n Printing pattern : 02 below \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print3(int n){
cout<<"\n Printing pattern : 03 below \n";
for(int i=1; i<n+1; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print4(int n){
   cout<<"\n Printing pattern : 04 below \n";
    for(int i=1; i<n+1; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void print5(int n){
    cout<<"\n Printing pattern : 05 below \n";
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print6(int n){
    cout<<"\n Printing pattern : 06 below \n";
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i+1; j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
//important one 'print7'
void print7(int n){
    cout<<"\n Printing pattern : 07 below \n";
    for(int i=0; i<n; i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print8(int n){
    cout<<"\n Printing pattern : 08 below \n";
    for(int i=0; i<n; i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print9(int n){
    cout<<"\n Printing pattern : 09 below \n";
    print7(n);
    print8(n);
}
void print10(int n){
      /*  for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
        for(int i=2; i<=n; i++){
        for(int j=0; j<n-i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
        }
    */
   cout<<"\n Printing pattern : 10 below \n";
   for(int i=1; i<=2*n-1; i++){
    int stars=i;
    if(i>n) stars=2*n-i;
    for(int j=1; j<=stars; j++){
        cout<<" * ";
    }
    cout<<endl;
   }
}
void print11(int n){
    cout<<"\n Printing pattern : 11 below \n";
    int start=1;
    for(int i=0; i<n; i++){
        if(i%2==0) start=1;
        else start=0;
        for(int j=0; j<=i; j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }

}
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        print1(n);
        print2(n);
        print3(n);
        print4(n);
        print5(n);
        print6(n);
        print7(n);
        print8(n);
        print9(n);
        print10(n);
        print11(n);
    }
}
