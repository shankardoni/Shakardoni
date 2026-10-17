/*
  reverse numbre the number 
  and cheak its palindrome

#include<iostream>
using namespace std;
int main(){
    int n;
    int N=n;
    cin>>n;
    int reverseNum=0;
    while(n>0){
        int ld=n%10;
        reverseNum=(reverseNum * 10)+ld; 
        n=n/10;
    }cout<<reverseNum<<endl;
    //palindrome
    if(N==reverseNum){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}


//Armstrong number
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int N=n;
    int sum=0;
    while(n>0){
        int ld=n%10;
        sum=sum+(ld*ld*ld);
        n=n/10;
    }cout<<sum<<endl;
    if(N==sum){
        cout<<"Armstrong";
    }
    else{
        cout<<"not Armstrong";
    }

}
        */

//print all divisors

#include<iostream>
using namespace std;
void rev(int n){
    for(int i=1;i<n;i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }
}
//diff method
void rev1(int n){
    vector<int>ls;
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0){
            ls.push_back(i);
            if((n/i)!=i){
                ls.push_back(n/i);
            }
        }
        }
    sort(ls.begin(),ls.end());
    for(auto Ls:ls)(cout<< Ls <<" ");

    }

//prime number
void prime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
        
    }if(count==2){
            cout<<"prime number"<<endl;
        }
        else{
            cout<<"not prime";
        
        }
}

int main(){
    int n;
    cin>>n;
    prime(n);
    
}