#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int godina;
    cin>>godina;
    int mesec;
    cin>>mesec;
    if(godina%4==0)
    {
        switch (mesec)
        {
        case 1:
            cout<<"31";
            break;
        case 2:
            cout<<"29";
            break;
        case 3:
            cout<<"31";
            break;
        case 4:
            cout<<"30";
            break;
        case 5:
            cout<<"31";
            break;
        case 6:
            cout<<"30";
            break;
        case 7:
            cout<<"31";
            break;
        case 8:
            cout<<"31";
            break;
        case 9:
            cout<<"30";
            break;
        case 10:
            cout<<"31";
            break;
        case 11:
            cout<<"30";
            break;
        case 12:
            cout<<"31";
            break;
        default:
            cout<<"nqma takuw mesec";
        }
    }
    else
    {
        switch (mesec)
        {
        case 1:
            cout<<"31";
            break;
        case 2:
            cout<<"28";
            break;
        case 3:
            cout<<"31";
            break;
        case 4:
            cout<<"30";
            break;
        case 5:
            cout<<"31";
            break;
        case 6:
            cout<<"30";
            break;
        case 7:
            cout<<"31";
            break;
        case 8:
            cout<<"31";
            break;
        case 9:
            cout<<"30";
            break;
        case 10:
            cout<<"31";
            break;
        case 11:
            cout<<"30";
            break;
        case 12:
            cout<<"31";
            break;
        default:
            cout<<"nqma takuw mesec";
        }
    }
    return 0;
}
