#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>

/* jug a is of 4L and jug b is of 3L */

void main()
{
int juga=0, jugb=0,capa=4,capb=3;
clrscr();

T:
 if((juga==2)||(jugb==2))
    {
    cout<<"Success!!!!";
    exit(0);
    }

if(juga==0&&jugb==0)
	{
      int choice;
      cout<<"states of jug a and jug b are "<<juga<<" "<<jugb<<endl;
      cout<<"Select One of the choices :"<<endl;
      cout<<" 1 Fill jug A"<<endl<<"2 --> Fill Jug B"<<endl;
      cin>>choice;
      switch(choice)
      {
      case 1:juga=4;break;
      case 2:jugb=3;break;
      default:cout<<"enter valid choice "<<endl;
      }
	}

if(juga>0&&jugb==0)
	{

     int choice;

     cout<<"now states of jug a and jub b are "<<juga<<" "<<jugb<<endl;
     cout<<"select one of the choice :"<<endl;
     cout<<" 1 Tranfer water to jug B "<<endl;
     cout<<" 2 Fill jug B"<<endl;
     cout<<" 3 empty jug A"<<endl;
     cin>>choice;
     switch(choice)
     {
     case 1:
  	   {
       if(juga<=capb)
     	  {jugb=juga;juga=0;}
     	 else
     	  {juga=juga-capb;jugb=capb;}
     	} break;
     case 2:{jugb=capb;}break;
     case 3:juga=0;break;
     }
     //cout<<"now states of jug a and jub b are "<<juga<<" "<<jugb<<endl;
     goto T;
	}

 if(juga==0&&jugb>0)
	{

     int choice;

     cout<<"now states of jug a and jub b are "<<juga<<" "<<jugb<<endl;
     cout<<"select one of the choice :"<<endl;
     cout<<" 1 Tranfer water to jug A "<<endl;
     cout<<" 2 Fill jug A"<<endl;
     cout<<" 3 empty jug B"<<endl;
     cin>>choice;
     switch(choice)
     {
     case 1:
  	   {
        juga=jugb;
        jugb=0;
      }  break;
     case 2: juga=capa;break;
     case 3: jugb=0;break;
     }
    // cout<<"now states of jug a and jub b are "<<juga<<" "<<jugb<<endl;
     goto T;
	}
 if(juga>0&&jugb>0)
 {

     if(juga<capa&&jugb==capb)
     {
        int choice=0;
      cout<<"now state of jug a and jug b are :"<<juga<<" "<<jugb<<endl;
     	cout<<"Select one of the choices :"<<endl;
     	cout<<"1 empty jug A"<<endl;
     	cout<<"2 empty jug B"<<endl;
      cout<<"3 fill jug A"<<endl;
      cout<<"4 transfer from B to A"<<endl;
     	cin>>choice;
     	switch(choice)
     		{
          case 1:juga=0;break;
          case 2: jugb=0;break;
          case 3: juga=capa;break;
          case 4:
           {jugb=jugb-(capa-juga);
            juga=capa;
           };break;
     		}
   	goto T;

     }

     if((juga==capa)&&(jugb==capb))
   	{

      int choice=0;

     	cout<<"now state of jug a and jug b are :"<<juga<<" "<<jugb<<endl;
     	cout<<"Select one of the choices :"<<endl;
     	cout<<"1 empty jug A"<<endl;
     	cout<<"2 empty jug B"<<endl;
     	cin>>choice;
     	switch(choice)
     		{
          case 1:juga=0;break;
          case 2: jugb=0;break;
     		}
   	goto T;
    	}
      if((juga==capa)&&(jugb<capb))
      {

      int choice=0;

      cout<<"now state of jug a and jug b are :"<<juga<<" "<<jugb<<endl;
     	cout<<"Select one of the choices :"<<endl;
     	cout<<"1 empty jug A"<<endl;
     	cout<<"2 empty jug B"<<endl;
      cout<<"3 transfer from jug A to B"<<endl;
      cout<<"4 fill jug B";
     	cin>>choice;
     	switch(choice)
     		{
          case 1:juga=0;break;
          case 2: jugb=0;break;
          case 3: {juga=juga-(capb-jugb);jugb=capb;};break;
          case 4: jugb=capb;break;
     		}
   		goto T;
      }
     		if((juga<capa)&&(jugb<=capb))
     		{

          int choice=0;
          int temp=0;
      	cout<<"now state of jug a and jug b are :"<<juga<<" "<<jugb<<endl;
     		cout<<"Select one of the choices :"<<endl;
     		cout<<"1 empty jug A"<<endl;
     		cout<<"2 empty jug B"<<endl;
         cout<<"3 fill jug A"<<endl;
         cout<<"4 fill jug B"<<endl;
      	cout<<"5 transfer from jug A to B"<<endl;
         cout<<"6  tranfer from jug B to A"<<endl;
     		cin>>choice;
     		switch(choice)
     		{
          case 1:juga=0;break;
          case 2: jugb=0;break;
          case 3: juga=capa;break;
          case 4: jugb=capb;break;
          case 5:
          {
          	temp=capb-jugb;
          	if(juga>=temp)
          	{
          	jugb=jugb+temp;
          	juga=juga-temp;
          	}
          	else
          	{
          	jugb=jugb+juga;
          	juga=0;
          	}
          };break;
          case 6:
          {
           temp=capa-juga;
          	if(jugb>=temp)
          	{
          	juga=juga+temp;
          	jugb=jugb-temp;
          	}
          	else
          	{
          	juga=juga+jugb;
          	jugb=0;
            }
          };break;
     		}
   		goto T;
      }

  }

 cout<<"now states of jug a and jub b are "<<juga<<" "<<jugb<<endl;
 getch();
}
