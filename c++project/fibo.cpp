#include"iostream"
using namespace std;
int find(int,int,int,int);
int main()
{
    int n,a,b,c;
    cin>>n;
    cin>>a>>b;
    cin>>c;
    cout<<find(n,a,b,c)<<endl;


}
int find(int n,int a,int b,int c)
{
    static int next=0;
    static int i=4;
    while(i<=n)
    {
        next=a+b+c;
        a=b;
        b=c;
        c=next;
        find(n-1,a,b,c)
        i++;
    }
    return next;
}