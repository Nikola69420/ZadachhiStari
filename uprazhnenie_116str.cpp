#include<iostream>
using namespace std;
void zad10 ()
{
    int n, b=0;
    cin>>n;
    char arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]=='a')
        {
            b++;
        }
    }
    cout<<b;
}
///////////////////////////////////////////
void zad11 ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int x;
    bool dali;
    cin>>x;
    for(int j=0; j<n; j++)
    {
        if(arr[j]==x)
        {
            dali=true;
            break;
        }
        else
        {
            dali=false;
        }
    }
    if(dali==true)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}
///////////////////////////////////////////
void zad12 ()
{
    int n;
    cin>>n;
    double arr[n];
    double sum=0, otr=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
        {
            otr=arr[i];
            sum=sum+otr;
        }
    }
    cout<<sum;
}
//////////////////////////////////////////
void zad13()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int x, br=0;
    bool dali;
    cin>>x;
    for(int j=0; j<n; j++)
    {
        if(arr[j]==x)
        {
            dali=true;
            br=arr[j];
            break;
        }
        else
        {
            dali=false;
        }
    }
    if(dali==true)
    {
        cout<<br;
    }
    else
    {
        cout<<"no";
    }
}
//////////////////////////////////////
void zad14 ()
{
    int n;
    int br=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            br++;
        }
    }
    cout<<br;
}
////////////////////////////////////////
void zad15 ()
{
    int n, sum=0, br=0, chislo=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            br++;
            chislo=arr[i];
            sum=sum+chislo;
        }
    }
    cout<<sum/br;
}
//////////////////////////////////////////
void zad16 ()
{
    int n, proizw=1, br=0, chislo=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%7==0)
        {
            br++;
            chislo=arr[i];
            proizw=proizw*chislo;
        }
    }
    if(br>0)
    {
        cout<<proizw;
    }
    else
    {
        cout<<"no";
    }
}
///////////////////////////////////////
void zad17 ()
{
    int n, maks=0, mqsto;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>maks)
        {
            maks=arr[i];
            mqsto=i;
        }
    }
    cout<<maks<<"   "<<mqsto;
}
////////////////////////////////
void zad18 ()
{
    int n, maks=0, mini;
    cin>>n;
    double arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>maks)
        {
            maks=arr[i];
        }
    }
    mini=maks;
    for(int j=0;j<n;j++)
    {
        if(arr[j]<mini)
        {
            mini=arr[j];
        }
    }
    cout<<maks*mini<<"   "<<maks-mini;
}
//////////////////////////////////////////
void zad19 ()
{
    int n, maks=0, mini;
    cin>>n;
    double arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>maks)
        {
            maks=arr[i];
        }
    }
    mini=maks;
    for(int j=0;j<n;j++)
    {
        if(arr[j]<mini)
        {
            mini=arr[j];
        }
    }
    for(int k=0;k<n;k++)
    {
        if(maks==arr[k])
        {
             arr[k]=mini;
        }

    }
    for(int h=0;h<n;h++)
    {
        if(mini==arr[h])
        {
             arr[h]=maks;
        }

    }
    cout<<arr;
}
int main ()
{
    //zad10();
    //zad11();
    //zad12();
    //zad13();
    //zad14();
    //zad15();
    //zad16();
    //zad17();
    //zad18();
    zad19();
    return 0;
}
