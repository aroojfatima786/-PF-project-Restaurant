
// Restaurant Project in C++.
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
 main()
{
	int p_p=0,p_b=0,p_s=0,p_i=0,p_c=0;
	int s_p=0,s_b=0,s_s=0,s_i=0,s_c=0;
	int p=0,b=0,s=0,i=0,c=0;
	int choice,q;
	
	char coupon;
	//Creating A file
	ofstream File("totalbill.text");
	File<<p+b+c+i+s;
	File.close();
	cout<<"\n\t\t\tRestaurant Stock For The Day";
	cout<<"\n\n Number of Desi Platters In Stock : ";
	cin>>p_p;
	cout<<"\n\n Number of Barbeque Platters In Stock : ";
	cin>>p_b;
	cout<<"\n\n Number of Sea Food Platters In Stock : ";
	cin>>p_s;
	cout<<"\n\n Number of Rice Platters In Stock : ";
	cin>>p_i;
	cout<<"\n\n Number of Drinks In Stock : ";
	cin>>p_c;
	p:
	system("cls");
	cout<<"\n\t\t\tPlace Your Order Here";
	cout<<"\n\n 1. Desi Platter";
	cout<<"\n 2. Barbeque Platter";
	cout<<"\n 3. Sea Food Platter";
	cout<<"\n 4. Rice Platter";
	cout<<"\n 5. Drinks";
	cout<<"\n 6. Details";
	cout<<"\n 7. Discount Coupon";
	//cout<<"\n 8. Exit";//
	cout<<"\n\n Enter Your Choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"\n\n Enter  Quantity of Desi Platter : ";
			cin>>q;
			if(p_p-s_p >= q)
			{
				s_p += q;
				p += q*700;
				cout<<"\n\n\n\t\t\t Order Placed for "<<q<<" Desi Platters ";
				cout<<"\n\n\t\t\t\t (Makhni Handi,Daal,Roti,Salad) Per Platter";	
				
			}
			else
			cout<<"\n\n\n\t\t\tSorry "<<p_p-s_p<<" Desi Platters Remaining in Restaurant...";
			break;
		case 2:
			cout<<"\n\n Enter Barbeque Platters Quantity : ";
			cin>>q;
			if(p_b-s_b >= q)
			{
				s_b += q;
				b += q*100;
				cout<<"\n\n\n\t\t\t Order Placed for "<<q<<" Barbeque Platters";
				cout<<"\n\n\t\t\t\t  (3pcs Malai boti, 4 Beef Kebab, Naan, Salad, Raita) Per Platter"	;
			}
			else
			cout<<"\n\n\n\t\t\tSorry "<<p_b-s_b<<" Babrbeque Platters Remaining in Restaurant...";
			break;
		case 3:
			cout<<"\n\n Enter Sea Food Platter Quantity : ";
			cin>>q;
			if(p_s-s_s >= q)
			{
				s_s += q;
				s += q*150;
				cout<<"\n\n\n\t\t\t Order Placed for "<<q<<" Sea Food Platters";
				cout<<"\n\n\t\t\t\t  (4pcs Prawns, 1 Sushi Serving,Kimchi) Per Platter ";	
			}
			else
			cout<<"\n\n\n\t\t\tSorry "<<p_s-s_s<<"Sea Food Platters Remaining in Restaurant...";
			break;
		case 4:
			cout<<"\n\n Enter  Quantity of Rice Platter : ";
			cin>>q;
			if(p_i-s_i >= q)
			{
				s_i += q;
				i += q*200;
				cout<<"\n\n\n\t\t\t Order Placed for "<<q<<" Rice Platters ";
				cout<<"\n\n\t\t\t\t (Biryani ,Salad ,Raita) Per Platter"	;
			}
			else
			cout<<"\n\n\n\t\t\tSorry "<<p_i-s_i<<" Rice Platters Remaining in Restaurant...";
			break;
		case 5:
			cout<<"\n\n Enter Quantity of Drinks(Sprite): ";
			cin>>q;
			if(p_c-s_c >= q)
			{
				s_c += q;
				c += q*500;
				cout<<"\n\n\n\t\t\t Order Placed for "<<q<<" Drinks(Sprite) ";	
			}
			else
			cout<<"\n\n\n\t\t\tSorry "<<p_c-s_c<<" Drrinks Remaining in Restaurant...";
			break;
		case 6:
			system("cls");
			cout<<"\n\t\t\tDetails Panel";
			cout<<"\n\n Purchased Desi Platter  Quantity : "<<p_p;
			cout<<"\n Sales Desi Platter Quantity : "<<s_p;
			cout<<"\n Remaining Desi Platter Quantity : "<<p_p-s_p;
			cout<<"\n Total Desi Platters Bill : "<<p;
			cout<<"\n\n Purchased Barbeque Platters Quantity : "<<p_b;
			cout<<"\n Sales Desi Platter Quantity : "<<s_b;
			cout<<"\n Remaining Desi Platters Quantity : "<<p_b-s_b;
			cout<<"\n Total Barbeque Platters Price in a Day : "<<b;
			cout<<"\n\n Purchased Sea Food Platters Quantity : "<<p_s;
			cout<<"\n Sales Sea Food Platters Quantity : "<<s_s;
			cout<<"\n Remaining Sea Food Platters Quantity : "<<p_s-s_s;
			cout<<"\n Total Sea Food Platters Price  : "<<s;
			cout<<"\n\n Purchased Rice Platter Quantity : "<<p_i;
			cout<<"\n Sales Rice Platters Quantity : "<<s_i;
			cout<<"\n Remaining Rice Platters Quantity : "<<p_i-s_i;
			cout<<"\n Total Rice Platters in a Day : "<<i;
			cout<<"\n\n Purchased Drinks Quantity : "<<p_c;
			cout<<"\n Sales Drinks Quantity : "<<s_c;
			cout<<"\n Remaining Drinks Quantity : "<<p_c-s_c;
			cout<<"\n Total Cake Price in a Day : "<<c;
		
			cout<<"\n\n\n\n\n \t\t\t\t\t\t\tTOTAL BILL: "<<" Rs "<<p+b+s+i+c;
			/*if(p_p+p_b+p_s+p_i+p_c>=4)
			    cout<<"\n\n \t\t\t\t\t\t\t A free desert is on its way for you."<<endl;
			    else
			    cout<<"We are getting your order ready."<<endl;*/
			break;
		case 7:
			
		
			cout<<"Enter a discount coupon (if any) ";
			cin>>coupon;
			if(coupon=='F')
			    {
				  cout<<"Congratulations! You have been granted 10% discount "<<endl;
				  cout<<"Original Bill Rs"<<p+b+s+i+c<<endl;
			     cout<<"Your total bill after discount is Rs "<<(p+b+s+i+c)-(p+b+s+i+c)*0.1<<endl;
				 cout<<"Thankyou for placing your order \n Your order will be delivered soon";}
			else 
			     {
				 cout<<"Sorry! Invalid Coupon "<<endl;
			     cout<<"Your total bill is "<<p+b+s+i+c<<endl;
			     cout<<"Thankyou for placing your order \n Your order will be delivered soon";}
			break;
		 
		 	
			default:
			cout<<"\n\n Invalid Value";
		
			}
		
			
	getch();
	goto p;
}			   	

