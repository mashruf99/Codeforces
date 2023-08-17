#include<bits/stdc++.h>
using namespace std;

void ok(){

long long int sum=0,a;
cin>>a;
while(a>1){
    sum=sum+a;
    if(a%2==0){

        a=a/2;
    }
    else{
        a=(a-1)/2;
    }
}
cout<<sum+1<<endl;
}


int main(){
int tcase;
 cin>>tcase;

while(tcase--){

    ok();

}
return 0;
}
