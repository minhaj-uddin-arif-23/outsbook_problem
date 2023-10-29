only change Arithmatic Operator
200,201,202 same only + ,- different
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,s;
    cin>>n>>m;
    s=n+m;
    cout<<s<<endl;
    return 0;
}
204
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int d=(n-m) + (a-b);
    cout<<d<<endl;
    return 0;
}
207
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int s=a+b*c;
    cout<<s<<endl;
    return 0;
}
208
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int sum_of_square = (a+b) * (a+b);
    cout<<sum_of_square<<endl;
    return 0;
}
209
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}
214
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i =0;i<=n;i++){
        sum += i*i;
    }
    cout<<sum<<endl;
    return 0;
}
208
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    n=n*567;
    n=n/9;
    n=n+7492;
    n=n*235;
    n=n/47;
    n=n-498;
    cout<<n<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    cin>>l;
    int w= l-4;
    cout<<w<<endl;
    return 0;
}
220
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int M = (x1+x2)/2;
    int L = (y1+y2)/2;
    cout<<M<<" "<<L<<endl;
    return 0;
}