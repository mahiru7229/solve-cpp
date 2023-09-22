#include<iostream>
using namespace std;
bool so_doi_xung(long long x){
    string s= to_string(x);
    for(int i=0;i<s.size()-1;i++){
        if(s[i]!=s[i+1]) return false;
        }
        return true;
    }
int main(){

    long long n,m = 0;
    cin>>n;
    if (n < 10){
        m = 11 - n; // Vì số đối xứng nguyên dương nhỏ nhất là 11 nên chỉ cần lấy 11 - n là ra
    }else{
        if (so_doi_xung(n)){
            m = 0;
        }else{
            if(so_doi_xung(n)){
                cout<<0;
            }else{
            for(int i=1; ;i++){
                long long x=n+i;
                if(so_doi_xung(x)) {
                    m=i;
                    break;
                }
            }
        }
        } 

    }
    cout<<m;
}