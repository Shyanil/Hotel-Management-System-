#include<iostream>
#include<math.h>
#include<climits>
#include <Windows.h>
using namespace std;

int main () {
	int quant;
	int choice;
	//quantity
	int Qrooms=40, Qrice=150, Qbakedchiken=70, QApple=32, Qproteinshake=45, Qnoodles=20, Qpasta=20, Qbargur=50, Qshake=30, QchikenRoll=60; 
	//food item sold	
	int Srooms=0, Srice=0, Sbakedchiken=0, SApple, Sproteinshake=0, Snoodles=0, Spasta=0, Sbargur=0, Sshake=0, SchikenRoll=0; 
	//total proce of item	
	int Total_rooms=0, Total_rice=0, Total_bakedchiken=0, Total_Apple=0, Total_proteinshake=0, Total_noodles=0, Total_pasta=0, Total_bargur=0, Total_shake=0, Total_chikenRoll=0 ;
	 
	 HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(h,9);
	cout<<"\n\t\t\t\t\t WELCOME TO HAVEN LUMINA HOTEL";
	

	 SetConsoleTextAttribute(h,5);
	cout<<"\n\t Rooms available in the hotel: ";
	cout<<Qrooms<<" ";
			 		 SetConsoleTextAttribute(h,13);

		cout<<"\n\t\t\t\t\t Quantity Of Items We Have In Hotel ";
	 SetConsoleTextAttribute(h,6);
	cout <<"\n\t Quantity of rice Plates:";
	cout<<Qrice<<" ";
	cout<<"\n\t Quantity of Baked Chicken Breasts(One Piece 100 Gram): ";
	cout<<Qbakedchiken<<" ";
	cout<<"\n\t Quantity of Apple: ";
	cout<<QApple<<" ";
	cout<<"\n\t Quantity of Proteinshake: ";
	cout<<Qproteinshake<<" ";
	cout<<"\n\t Quantity of Noodles: ";
	cout<<Qnoodles<<" ";
	cout<<"\n\t Quantity of Pasta: ";
	cout<<Qpasta<<" ";
	cout<<"\n\t Quantity of Bargur: ";
	cout<<Qbargur<<" ";
	cout<<"\n\t Quantity of Shake: ";
	cout<<Qshake<<" ";
	cout<<"\n\t Quantity of ChikenRoll: ";
	cout<<QchikenRoll<<" ";	
     
	 m:
	 	
	 SetConsoleTextAttribute(h,10);
	cout<<"\n\n1) Rooms";
		cout<<"\n\t\t\t Please Select From Menu Items";
    cout<<"\n2) rice";
    cout<<"\n3) bakedchiken";
    cout<<"\n4) Apple";
    cout<<"\n5) proteinshake";
    cout<<"\n6) noodles";
    cout<<"\n7) pasta";
	cout<<"\n8) bargur";
	cout<<"\n9) shake";
	cout<<"\n10)chikenRoll";
	cout<<"\n11)Details Of Total Sales And Collection";
	cout<<"\n12)Not Interested Anything";


	
	cout<<"\n\n plesae Enter your choice- ";
	cin>>choice;
	
	switch (choice) {
		case 1: 
				 		 SetConsoleTextAttribute(h,12);

		cout<<"\n\n Enter the number of rooms you want- ";
		
		 cin>>quant;
		 if (Qrooms-Srooms>=quant){
		 	Srooms= Srooms+quant;
		 	Total_rooms= Total_rooms*quant*1200;
		 	cout<<"\n\n\t\t"<<quant <<" -Room OR Rooms has been allocted to you ";
		 	
		 }
		 else 
		 cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in hotel- ";
		 break;
		 
		 case 2: 
		 		 		 SetConsoleTextAttribute(h,15);

		cout<<"\n\n Enter plate of rice quantity- ";
		
		 cin>>quant;
		 if (Qrice-Srice>=quant){
		 	Srice= Srice+quant;
		 	Total_rice= Total_rice*quant*50;
		 	cout<<"\n\n\t\t"<<quant<<" -Rice plate is order ";
		 	
		 }
		 else 
		 cout<<"\n\tOnly"<<Qrice-Srice<<"Rice plate remaining in hotel- ";
		 break;
		 
		 
		 case 3: 
		 		 		 		 SetConsoleTextAttribute(h,15);

		cout<<"\n\n Enter plate of  bakedchiken quantity- ";
		
		 cin>>quant;
		 if (Qbakedchiken-Sbakedchiken>=quant){
		 	Sbakedchiken= Sbakedchiken+quant;
		 	Total_bakedchiken= Total_bakedchiken*quant*100;
		 	cout<<"\n\n\t\t"<<quant<<" bakedchiken plate is order ";
		 	
		 }
		 else 
		 cout<<"\n\tOnly"<<Qbakedchiken-Sbakedchiken<<"bakedchiken plate remaining in hotel- ";
		 break;
		 
		case 4: 
				 		 		 SetConsoleTextAttribute(h,15);

		cout<<"\n\n Enter Apple quantity- ";
		
		 cin>>quant;
		 if (QApple-SApple>=quant){
		 	SApple= SApple+quant;
		 	Total_Apple= Total_Apple*quant*50;
		 	cout<<"\n\n\t\t"<<quant<<" -Apple is order";
		 	
		 }
		 else 
		 cout<<"\n\tOnly"<<QApple-SApple<<"Apple remaining in hotel- ";
		 break;
		 
		 case 5: 
		 		 		 		 SetConsoleTextAttribute(h,15);

		cout<<"\n\n Enter cup of  proteinshake  quantity- ";
		
		 cin>>quant;
		 if (Qproteinshake-Sproteinshake>=quant){
		 	Sproteinshake= Sproteinshake+quant;
		 	Total_proteinshake= Total_proteinshake*quant*90;
		 	cout<<"\n\n\t\t"<<quant<<" -cup of  proteinshake is order ";
		 	
		 }
		 else 
		 cout<<"\n\tOnly"<<QApple-SApple<<"cup of  proteinshake remaining in hotel- ";
		 break;
		 
		 case 6: 
		 		 		 		 SetConsoleTextAttribute(h,15);

		cout<<"\n\n Enter plate of noodles  quantity- ";
		
		 cin>>quant;
		 if (Qnoodles-Snoodles>=quant){
		 	Snoodles= Snoodles+quant;
		 	Total_noodles= Total_noodles*quant*150;
		 	cout<<"\n\n\t\t"<<quant<<" -plate of noodles is order";
		 	
		 }
		 else 
		 cout<<"\n\tOnly"<<QApple-SApple<<"plate of  noodles remaining in hotel- ";
		 break;
		 
		 case 7: 
		 		 		 		 SetConsoleTextAttribute(h,15);

		cout<<"\n\n Enter plate of pasta  quantity- ";
		
		 cin>>quant;
		 if (Qpasta-Spasta>=quant){
		 	Spasta= Spasta+quant;
		 	Total_pasta= Total_pasta*quant*160;
		 	cout<<"\n\n\t\t"<<quant<<" -plate of pasta is order";
		 	
		 }
		 else 
		 cout<<"\n\tOnly"<<QApple-SApple<<"plate of  pasta remaining in hotel- ";
		 break;
		 
		 case 8: 
		 		 		 		 SetConsoleTextAttribute(h,15);

		cout<<"\n\n Enter plate of pasta  quantity- ";
		
		 cin>>quant;
		 if (Qbargur-Sbargur>=quant){
		 	Sbargur= Sbargur+quant;
		 	Total_bargur= Total_bargur*quant*120;
		 	cout<<"\n\n\t\t"<<quant<<" -bargur is order";
		 	
		 }
		 else 
		 cout<<"\n\tOnly"<<Qbargur-Sbargur<<"bargur remaining in hotel- ";
		 break;
		 
		 case 9: 
		 		 		 		 SetConsoleTextAttribute(h,15);

		cout<<"\n\n Enter plate of pasta  quantity- ";
		
		 cin>>quant;
		 if (Qshake-Sshake>=quant){
		 	Sshake= Sshake+quant;
		 	Total_shake= Total_shake*quant*100;
		 	cout<<"\n\n\t\t"<<quant<<"- shake is order";
		 	
		 }
		 else 
		 cout<<"\n\tOnly"<<Qshake-Sshake<<"shake remaining in hotel- ";
		 break;
		 
		 case 10: 
		 		 		 		 SetConsoleTextAttribute(h,15);

		cout<<"\n\n Enter plate of pasta  quantity- ";
		
		 cin>>quant;
		 if (QchikenRoll-SchikenRoll>=quant){
		 	SchikenRoll= SchikenRoll+quant;
		 	Total_chikenRoll= Total_chikenRoll*quant*100;
		 	cout<<"\n\n\t\t"<<quant<<" -chikenRoll is order";
		 	
		 }
		 else 
		 cout<<"\n\tOnly"<<QchikenRoll-SchikenRoll<<"chikenRoll remaining in hotel- ";
		 break;
		 
		 case 11:
		 			 		 SetConsoleTextAttribute(h,13);

		 	cout<<"\n\t\tDetails of sales and collection";
		 	cout<<"\n\t\tNumner of rooms we had : "<<Qrooms;
		 	cout<<"\n\t\tNumner of rooms we give for rent : "<<Srooms;
		 	cout<<"\n\t\tNumner of reaming rooms : "<<Qrooms - Srooms;
		 	cout<<"\n\t\tTotal rooms collection for the day : "<<Total_rooms;
		 
		 	cout<<"\n\t\tNumner of plate of rice we had : "<<Qrice;
		 	cout<<"\n\t\tNumner of plate of rice we sold : "<<Srice ;
		 	cout<<"\n\t\tNumner of plate of rice reaming : "<<Qrice - Srice;
		 	cout<<"\n\t\tTotal plate of rice collection for the day : "<<Total_rice;
	
		 	cout<<"\n\t\tNumner of plate of bakedchiken we had : "<<Qbakedchiken;
		 	cout<<"\n\t\tNumner of plate of bakedchiken we sold : "<<Sbakedchiken;
		 	cout<<"\n\t\tNumner of plate of bakedchiken reaming : "<<Qbakedchiken - Sbakedchiken;
		 	cout<<"\n\t\tTotal plate of bakedchiken collection for the day : "<<Total_bakedchiken;
		 	
		 	cout<<"\n\t\tNumner of Apple we had : "<<QApple;
		 	cout<<"\n\t\tNumner of Apple we sold : "<<SApple;
		 	cout<<"\n\t\tNumner of Apple reaming : "<<QApple - SApple;
		 	cout<<"\n\t\tTotal  Apple for the day : "<<Total_Apple;
		 	
		 	
		 	cout<<"\n\t\tNumner of proteinshake we had : "<<Qproteinshake;
		 	cout<<"\n\t\tNumner of proteinshake we sold : "<<Sproteinshake;
		 	cout<<"\n\t\tNumner of proteinshake reaming : "<<Qproteinshake - Sproteinshake;
		 	cout<<"\n\t\tTotal proteinshakefor the day : "<<Total_proteinshake;
		 	
		 	
		 	cout<<"\n\t\tNumner of plate of noodles we had : "<<Qnoodles;
		 	cout<<"\n\t\tNumner of plate of noodles we sold : "<<Snoodles;
		 	cout<<"\n\t\tNumner of plate of noodles reaming : "<<Qnoodles - Snoodles;
		 	cout<<"\n\t\tTotal plate of noodles collection for the day : "<<Total_noodles;
		 	
		 	
		 	cout<<"\n\t\tNumner of plate of pasta we had : "<<Qpasta;
		 	cout<<"\n\t\tNumner of plate of pasta we sold : "<<Spasta;
		 	cout<<"\n\t\tNumner of plate of pasta reaming : "<<Qpasta - Spasta;
		 	cout<<"\n\t\tTotal plate of pasta collection for the day : "<<Total_pasta;
		 	
		 		
		 	cout<<"\n\t\tNumner of bargur we had : "<<Qproteinshake;
		 	cout<<"\n\t\tNumner of bargur we sold : "<<Sproteinshake;
		 	cout<<"\n\t\tNumner of bargur reaming : "<<Qproteinshake - Sproteinshake;
		 	cout<<"\n\t\tTotal bargur the day : "<<Total_proteinshake;
		 	
		 	cout<<"\n\t\tNumner of bargur we had : "<<Qbargur;
		 	cout<<"\n\t\tNumner of bargur we sold : "<<Sbargur;
		 	cout<<"\n\t\tNumner of bargur reaming : "<<Qbargur - Sbargur;
		 	cout<<"\n\t\tTotal bargur the day : "<<Total_bargur;
		 	
		 	cout<<"\n\t\tNumner of shake we had : "<<Qshake;
		 	cout<<"\n\t\tNumner of shake we sold : "<<Sshake;
		 	cout<<"\n\t\tNumner of shake reaming : "<<Qshake - Sshake;
		 	cout<<"\n\t\tTotal shake the day : "<<Total_shake;
		 	
		 		
		 	cout<<"\n\t\tNumner of chikenRoll we had : "<<QchikenRoll;
		 	cout<<"\n\t\tNumner of chikenRoll we sold : "<<SchikenRoll;
		 	cout<<"\n\t\tNumner of chikenRoll reaming : "<<QchikenRoll - SchikenRoll;
		 	cout<<"\n\t\tTotal chikenRoll the day : "<<Total_chikenRoll;
		 	
		 	
		 	cout<<"\n\n\n Total collection for a day :" <<Total_rooms+Total_rice+Total_bakedchiken+Total_Apple+Total_proteinshake+Total_noodles+Total_pasta+Total_bargur+Total_shake+Total_chikenRoll;
		 	break;
			 case 12:
		 		exit(0);
		 	
		 	
		 	default :
		 				 		 SetConsoleTextAttribute(h,23);

		 	cout<<"\nplease select the numbers mentioned above !";
		 	
		 	
			}
			goto m;
			return 0;
}



