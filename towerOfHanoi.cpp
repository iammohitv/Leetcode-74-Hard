#include <iostream>
using namespace std;

void solve(int n, char s,char h,char d){
    if(n==1){
        cout<<"Disk 1 moved from "<<s<<" to "<<d<<endl;
        return;
    }
    solve(n-1,s,d,h);
    cout<<"Disk "<<n<<" moved from "<<s<<" to "<<d<<endl;
    solve(n-1,h,s,d);
}

int main() {
	int n=0;
	cin>>n;
	char s='A';
	char h='B';
	char d='C';
	solve(n,s,h,d);
	return 0;
}
