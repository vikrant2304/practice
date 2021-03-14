#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n;
        cin>>n;
        cout<<n<<"\n";

        if(n&(n-1)==0&&n!=0){

            cout<<"power of 2"<<endl;;
            break;
        }
        else{
            cout<<"not a power of 2"<<endl;
        }
    }
	return 0;
}
