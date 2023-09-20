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
        lint n, m, x, sum=0, y;
        cin>>n>>m;
        string s, k;
        cin>>s>>k;
        vector <lint> v;

        for(int i = 0; i <= n - m; i++){
            x = i;
            sum = 0;
            for(int j = 0; j < m; j++){
                y= abs(s[i] - k[j]);
                if(y>5){
                    y= 10-y;
                }
                sum+=y;
                i++;
            }
            i = x;
            v.push_back(sum);
        }


        sort(v.begin(), v.end());
        cout<<v[0]<<"\n";

    }
    return 0;
}