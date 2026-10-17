
#include<iostream>
using namespace std;
/*
void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }cout<<endl;
    }
}
int main(){
    int t;     //test case for how many times program will run how many patterns
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern1(n);
    }

}
    
//pattern 2
void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"";
        }cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern2(n);
    }
    
}
//pattern 3
void pattern3(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        } cout<<endl;
        }
    }
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern3(n);
    }
    
}

//pattern4
void pattern4(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        pattern4(n);
    }
}

//pattern 5
void pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern5(n);
    }
}   

//pattern6
void pattern6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        pattern6(n);
    }
}

//pattern7
void pattern7(int n){
    for(int i=0;i<n;i++){
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
        }cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern7(n);
    }
}
   
//pattern 8;
void pattern8(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=0;j<2*n-(2*i+1);j++)
        {
            cout<<"*";
        }
        //space
        for(int j=0;j< i;j++)
        {
            cout<<" ";
        }cout<<endl;     
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern8(n);
    }
}
 */ 
//pattern9 
void pattern7(int n){
    for(int i=0;i<n;i++){
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
        }cout<<endl;
    }
}
void pattern8(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=0;j<2*n-(2*i+1);j++)
        {
            cout<<"*";
        }
        //space
        for(int j=0;j< i;j++)
        {
            cout<<" ";
        }cout<<endl;     
    }
}
void pattern10(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    }
}
void pattern11(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }cout<<endl;
    }
}
//pattern 10 and 11 also print
void patternn10(int n){
    for(int i=1;i<=2*n-1;i++){
        int start=i;
        if(i>n) start=2*n-i;
        for(int j=1;j<=start;j++){
            cout<<"*";
        }cout<<endl;
    }
}
void patternn11(int n){
    for(int i=1;i<2*n-1;i++){
        int stars=i;
        if(i>n)stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
    }
}
void pattern12(int n){
    int start=1;
    for(int i=0;i<=n;i++){
        if(i%2==0)start=1;
        else start=0;
        for(int j=0;j<i;j++){
            cout<<start;
            start=1-start;
        }cout<<endl;
    }
}
void pattern13(int n){
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        //number
        for(int j=1 ;j<=i;j++){
            cout<<j;
        }
        //space
        for(int j=1 ;j<=space;j++){
            cout<<" ";
        }
        //number
        for(int j=i;j>=1;j--){
            cout<<j;
        }cout<<endl;
        space -=2;
    }
}
void pattern14(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num ;
            num =num+1;
        }cout<<endl;
    }
}
void pattern15(int n){
    for(int i=0;i<=n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }cout<<endl;
    }
}
void pattern16(int n){
    
    for(int i=1;i<n;i++){
        for(char ch='A';ch<='A'+(n-i);ch++){
            cout<<ch;
        }cout<<endl;
    }
}
void pattern17(int n){
    char start='A';
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch;
        }cout<<endl;
    }
}
void pattern18(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        //char
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=0;j<2*i+1;j++)
        {
            cout<<ch;
            if(j<breakpoint) ch++;
            else ch--;
        }
        //space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }cout<<endl;
    }
}
void pattern19(int n){
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch;
        }cout<<endl;
        }
    }
void pattern20(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++)
        {
            cout<<".";
        }
        for(int j=0;j<=i*2;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<".";
        }cout<<endl;
    }
}
void pattern21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
        {
            cout<<".";
        }
        for(int j=0;j<=2*(n-i-1);j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<".";
        }cout<<endl;
    }
}
void pattern22(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
        {
            cout<<".";
        }
        for(int j=0;j<2*(n-i-1);j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<".";
        }cout<<endl;
    }
}
void pattern23(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++)
        {
            cout<<".";
        }
        for(int j=1;j<=i*2;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++)
        {
            cout<<".";
        }cout<<endl; 
    }
}
//pattern 22 and 23 also print
void pattern24(int n){
    int space=2*n-2; 
    for(int i=1;i<=2*n-1;i++){
        int start=i;
        if(i>n)start=2*n-i;
        //star
        for(int j=1;j<=start;j++)
        {
            cout<<".";
        }
        //space

        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        //start
        for(int j=1;j<=start;j++)
        {
            cout<<".";
        }cout<<endl;
         if(i<n) space -=2;
        else space +=2;
    }
}
void pattern25(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0|| i==n-1|| j==n-1){
                cout<<"*";
            }
            else cout<<" ";
        }cout<<endl;
    }
}
void pattern26(int n){
    for(int i =0;i<2*n-1;i++){
        for(int j=0;j<2*n-1 ;j++){
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int down=(2*n-2)-i;
            cout<<(n-min(min(top,down),min(left,right)));

        }cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern26(n);

    }
}

//rectangle/
/*
void ptrn1(int l,int b){
    for(int i=0;i<l;i++){
        for(int j=0;j<b;j++){
            if(i==0||i==l-1||j==0||j==b-1){
                cout<<"*";
            }
            else cout<<" ";
        }cout<<endl;
    }
}
int main(){
    int l,b;
    cin>>l;
    cin>>b;
    ptrn1(l,b);
    return 0;

}
*/