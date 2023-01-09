#include<stdio.h>
int main( )

{
    int amt,note ,ans;
    ans=0;
    printf(" Enter the amount = " );
    scanf( "%d",&amt );
    note=amt/2000;
    printf("\nNumber of rupees 2000 note is %d ",note);
    ans+=note;
    amt=amt%2000;
    note=amt/1000;
    printf("\nNumber of rupees 1000 note is %d ",note);
    ans+=note;
    amt=amt%1000;
    note=amt/500;
    printf("\nNumber of rupees 500  note is %d ",note);
    ans+=note;
    amt=amt%500;
    note=amt/100;
    printf("\nNumber of rupees 100  note is %d ",note);
    ans+=note;
    amt=amt%100;
    note=amt/50;
    printf("\nNumber of rupees 50   note is %d ",note);
    ans+=note;
    amt=amt%50;
    note=amt/10;
    printf("\nNumber of rupees 10   note is %d ",note);
    ans+=note;
    amt=amt%10;
    note=amt/5;
    printf("\nNumber of rupees 5    note is %d ",note);
    ans+=note;
    amt=amt%5;
    note=amt/1;
    printf("\nNumber of rupees 1    note is %d ",note);
    return 0;
}

