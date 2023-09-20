#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}
#define lint  long long int
#define tc int t; cin>>t; while(t--)
#define vecint vector<int> 

//ALWAYS USE long long int OR lint

int main(){
fastIO();
    tc{
        lint n, h, Sum=0, s=0;
        cin>>n>>h;
        vector <lint> v;
        lint x;
        for(int i=0; i<n; i++){
            cin >>x ;
            v.push_back(x);
            Sum+=x;
        }

        if(h>Sum){
            cout<<"0\n";
        }
        else{
            sort(v.begin(), v.end());
            for(int i=0; i<n; i++){
                s+=v[i];
                Sum-=v[i];
                if(h>Sum){
                    cout<<v[i]<<"\n";
                    break;
                }
            }
        }

    }
    return 0;
}