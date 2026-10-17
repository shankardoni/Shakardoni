
/*
//1 D array
#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cin>>arr[0] >>arr[1] >>arr[2] >>arr[3] >>arr[4];
    arr[3]=10;
    arr[3]+=10;
    cout<<"value of arr[3]="<< arr[3];

    return 0;
}
*/

//2 D array
/*
#include<iostream>
using namespace std;
int main(){
    int arr[3][5];
    arr[1][3]=10;
    cout<<"value of arr[1][3]="<<arr[1][3];
    return 0;
}
 */

//Array in string
#include<iostream>
using namespace std;
int main(){
    string n="shankar";
    int len=n.size();
    n[0]='S';
    cout<<n[0]<<endl<<n<<"\n"<<len;
    /* print last letter
    string n="shankar";
    int len=n.size();
    n[len-1]='R';
    cout<<n[len-1];
    */

    return 0;
}
