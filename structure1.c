#include <iostream>

struct CA
{
    int no,rate,qty,amt,dis,billamt,gst,netbill;
};

int main()
{
    struct CA den[3];

    for(int i=0;i<3;i++)

    {
        cout("enter %d CA :\n",i+1);
        cout("enter rate value :");
        cin("%d",&den[i].rate);
        cout("enter qty value :");
        cin("%d",&den[i].qty);
        cout("enter amt value :");
        cin("%d",&den[i].amt);
        cout("enter dis value :");
        cin("%d",&den[i].dis);
        cout("enter billamt value :");
        cin("%d",&den[i].billamt);

        den[i].gst= den[i].billamt*0.18;
        den[i].netbill =den[i].billamt + den[i].gst;
        
    }
    cout("\nNo.\trate.\tqty.\tamt.\tdis.\tbillamt.\tgst.\tnetbill\n");

    for (int i = 0; i < 3; i++)
    {
        cout("%d\t%d\t%d\t%d\t%d\t%d\t\t%d\t%d\n",i+1,den[i].rate,den[i].qty,den[i].amt,den[i].dis,den[i].billamt,den[i].gst,den[i].netbill);
   
    }
    
   
}