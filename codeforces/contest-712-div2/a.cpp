#include <bits/stdc++.h>
#define endl "\n"
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long int lli;

void isPalindrome(string str) {
    int l = 0;
    int h = str.length() - 1;
    int len = h;
    int pos1 = len;
    int pos2 = 0;
    int a = 0;
    while (h >= l) {
      if(str[l]=='a') a++;
      if(str[h]=='a') a++;
      if(str[l]!='a' and l < pos1) pos1=l;
      if(str[h]!='a' and h > pos2) pos2=l;
      if (str[l++] != str[h--]) {
	cout<<"YES"<<endl;
	if(str[0] =='a' and str[len]=='a'){
	  int mid;
	  if(pos1<=len/2 and pos2<=len/2) mid = pos1;
	  else mid = pos2;

	  string prs = str.substr(0,mid);
	  string sgs = str.substr(mid+1,len);
	  if(mid <= len/2){
	    cout<<prs<<str[pos1]<<'a'<<sgs<<endl;
	  }
	  else{
	    cout<<prs<<'a'<<str[pos2]<<sgs<<endl;
	  }
	} else if(str[0]!='a')
	  cout<<str<<'a'<<endl;
	else
	  cout<<'a'<<str<<endl;
        return;
      }
    }
    if(len == 0 and str[0]=='a'){
      cout<<"NO"<<endl;
    } else if(len == 0 and str[0]!='a'){
      cout<<"YES"<<endl;
      cout<<str<<'a'<<endl;
    }else if(a >= len)
      cout<<"NO"<<endl;
    else {
      cout<<"YES"<<endl;
      if(str[0]!='a')
	  cout<<str<<'a'<<endl;
      else
	  cout<<'a'<<str<<endl;
    }
}


int main() { _io
    int a;
    cin>>a;
    while(a--){
      string c;
      cin>>c;
      isPalindrome(c);
    }
    return 0;
}
