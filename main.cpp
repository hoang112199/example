#include <iostream>
using namespace std;
typedef struct
{

int a, b;

}PS;

ostream& operator<< (ostream& os, PS p);

istream& operator>> (istream& is, PS& p);

int uscln(int x, int y);

PS rutgon(PS p);

PS operator+(PS p1, PS p2);

PS operator-(PS p1, PS p2);

PS operator*(PS p1, PS p2);

PS operator/(PS p1, PS p2);

int main()

{

PS p, q, z, u, v;

PS s;

cout << "\nNhap cac phan so p, q, z, u, v\n";

cin>>p>>q>>z>>u>>v;

s = (p - q * z) / (u + v);

cout << "\n Phan so s = " << s;

}

ostream& operator<< (ostream& os, PS p)
{
    os<<p.a<<"/"<<p.b;
    return os;
}

istream& operator>>(istream& is,PS &p)
{
    cout<<"\nTu va Mau: ";
    is>>p.a>>p.b;
    return is;
}
int uscln(int x, int y)
{
    if(y==0)return x;
    return uscln(y,x%y);
}
PS rutgon(PS p)
{
    int m=uscln(p.a,p.b);
    p.a=p.a/m;
    p.b=p.b/m;
    return p;
}
PS operator+(PS p1, PS p2)
{
    PS p;
    int g=p1.b;
    int h=p2.b;
    p1.a=p1.a*h;
    p1.b=p1.b*h;
    p2.a=p2.a*g;
    p2.b=p2.b*g;
    p.a=p1.a+p2.a;
    p.b=p1.b;
    p=rutgon(p);
    return p;
}
PS operator-(PS p1, PS p2)
{
    PS p;
    int g=p1.b;
    int h=p2.b;
    p1.a=p1.a*h;
    p1.b=p1.b*h;
    p2.a=p2.a*g;
    p2.b=p2.b*g;
    p.a=p1.a-p2.a;
    p.b=p1.b;
    p=rutgon(p);
    return p;
}
PS operator*(PS p1, PS p2)
{
    PS p;
    p.a=p1.a*p2.a;
    p.b=p1.b*p2.b;
    p=rutgon(p);
    return p;
}
PS operator/(PS p1, PS p2)
{
    PS p;
    p.a=p1.a*p2.b;
    p.b=p1.b*p2.a;
    p=rutgon(p);
    return p;
}
