
						/*This Program Prints the Numeral Time in Words*/


#include <iostream>
using namespace std ;

int main ()

{
	cout <<"Please Enter The Time Below in Hours and Minutes Respectively\n" ;
	
	int H , M  ;
	
	cout <<"\nEnter Hour(s): ";
	cin >>H;

	
	cout <<"\nEnter Minute(s): ";
	cin >>M;
	
	cout<<"\n";
	
		if (H<1 || H>12 && M<0 || M>60)
		{
			cout <<"				**Please Enter The Valid Time**";
			return 0;
	    }
		
		
		


if ( M<30 && M>0 && M!=15 && M!=30 && M!=45 && M!=0 && H>=1 && H<=11 )
{
    if (M==1) cout<<"One minute past"<<" ";
    
    if (M==2) cout<<"Two minutes past"<<" ";
    
	if (M==3)  cout<<"Three minutes past"<<" ";
       
    if (M==4) cout<<"Four minutes past"<<" ";
    
    if (M==5) cout<<"Five minutes past"<<" ";
    
    if (M==6) cout<<"Six minutes past"<<" ";
    
    if (M==7) cout<<"Seven minutes past"<<" ";
    
    if (M==8) cout<<"Eight minutes past"<<" ";
    
    if (M==9) cout<<"Nine minutes past"<<" ";
    
    if (M==10) cout<<"Ten minutes past"<<" ";
    
    if (M==11) cout<<"Eleven minutes past"<<" ";
    
	if (M==12) cout<<"Twelve minutes past"<<" ";
    
	if (M==13) cout<<"Thirteen minutes past"<<" ";
    
	if (M==14) cout<<"Fourteen minutes past"<<" ";
   
    if (M==16) cout<<"Sixteen minutes past"<<" ";
     
	if (M==17) cout<<"Seventeen minutes past"<<" ";
    
	if (M==18) cout<<"Eighteen minutes past"<<" ";
    
	if (M==19) cout<<"Nineteen minutes past"<<" ";
    
	if (M==20) cout<<"Twenty minutes past"<<" ";
    
	if (M==21) cout<<"Twenty One minutes past"<<" ";
   
    if (M==22) cout<<"Twenty Two minutes past"<<" ";
   
    if (M==23) cout<<"Twenty Three minutes past"<<" ";
    
	if (M==24) cout<<"Twenty Four minutes past"<<" ";
    
	if (M==25) cout<<"Twenty Five minutes past"<<" ";
	
	if (M==26) cout<<"Twenty Six minutes past"<<" ";
    
	if (M==27) cout<<"Twenty Seven minutes past"<<" ";
    
	if (M==28) cout<<"Twenty Eight minutes past"<<" ";
    
	if (M==29) cout<<"Twenty Nine minutes past"<<" ";
    
	
	if (H==1) cout<<"One";
    
	if (H==2) cout<<"Two";
    
	if (H==3) cout<<"Three";
    
	if (H==4) cout<<"Four";
    
	if (H==5) cout<<"Five";
    
	if (H==6) cout<<"Six";
    
	if (H==7) cout<<"Seven";

	if (H==8) cout<<"Eight";
    
	if (H==9) cout<<"Nine";
    
	if (H==10) cout<<"Ten";
   
    if (H==11) cout<<"Eleven";
    
	if (H==12) cout<<"Twelve";
}

	
if ( M==15 || M==30 && H>=1 && H<=11 )	
	
{   

	if (M==15) cout<<"Quater Past ";
	
	if (M==30) cout<<"Half Past ";      
	
	if (H==1) cout<<"One";
    
	if (H==2) cout<<"Two";
    
	if (H==3) cout<<"Three";
	
	if (H==4) cout<<"Four";
	
	if (H==5) cout<<"Five";
    
	if (H==6) cout<<"Six";
    
	if (H==7) cout<<"Seven";
    
	if (H==8) cout<<"Eight";
    
	if (H==9) cout<<"Nine";
	
	if (H==10) cout<<"Ten";
    
	if (H==11) cout<<"Eleven";
	
    if (H==12)cout<<"Twelve";      
	       
}


if (M==45 && H>=1 && H<=11)

{
    cout<<"Quater to ";

     if (H==1) cout<<"Two";
    
	if (H==2) cout<<"Three";
    
	if (H==3) cout<<"Four";
    
	if (H==4) cout<<"Five";
    
	if (H==5) cout<<"Six";

	if (H==6) cout<<"Seven";
    
	if (H==7) cout<<"Eight";
    
	if (H==8) cout<<"Nine";
    
	if (H==9) cout<<"Ten";
    
	if (H==10) cout<<"Eleven";
    
	if (H==11) cout<<"Twelve";
    
}


if (M==0 && H>=1 && H<=11)
{   

	if (H==1) cout<<"One";
    
	if (H==2) cout<<"Two";
    
	if (H==3) cout<<"Three";
    
	if (H==4) cout<<"Four";
	
	if (H==5) cout<<"Five";
	
	if (H==6) cout<<"Six";
    
	if (H==7) cout<<"Seven";
    
	if (H==8) cout<<"Eight";
    
	if (H==9) cout<<"Nine";
    
	if (H==10) cout<<"Ten";
    
	if (H==11) cout<<"Eleven";
    
	if (H==12) cout<<"Twelve";      

			cout<<" 'o clock";    

}



if (M>30 && M<60 && M!=45 && H>=1 && H<=11)

{

	M = 60 - M;
   
    if (M==29) cout<<"Twenty nine minute(s) to " ;
    
    if (M==28) cout<< "Twenty eight minute(s) to " ;
    
    if (M==27) cout<<"Twenty seven minute(s) to " ;
    
    if (M==26) cout<< "Twenty six minute(s) to " ;
	
	if (M==25) cout<<"Twenty five minute(s) to " ;
    
    if (M==24) cout<< "Twenty fourur minute(s) to " ;
    
    if (M==23) cout<<"Twenty three minute(s) to " ;
    
    if (M==22) cout<< "Twenty two minute(s) to " ;
    
    if (M==21)  cout<<"Twenty one minute(s) to " ;
    
    if (M==20)  cout<< "Twenty minute(s) to " ;
    
	if (M==19) cout<<"Nineteen minute(s) to " ;
    
    if (M==18) cout<< "Eighteen minute(s) to " ;

    if (M==17) cout<<"Seventeen minute(s) to " ;
    
    if (M==16) cout<< "Sixteen minute(s) to " ;
    
    if (M==14) cout<< "Fourteen minute(s) to " ;
    
	if (M==13) cout<<"Thirteen minute(s) to " ;
    
    if (M==12) cout<< "Twelve minute(s) to " ;
    
    if (M==11) cout<<"Eleven minute(s) to " ;
    
    if (M==10) cout<< "Ten minute(s) to " ;

    if (M==9) cout<< "Nine minute(s) to " ;
    
    if (M==8) cout<<"Eight minute(s) to " ;
    
    if (M==7) cout<< "Seven minute(s) to " ;
    
    if (M==6) cout<<"Six minute(s) to " ;
    
    if (M==5) cout<< "Five minute(s) to " ;
    
	if (M==4) cout<< "Four minute(s) to " ;
    
    if (M==3) cout<<"Three minute(s) to " ;
    
    if (M==2) cout<< "Two minute(s) to " ;
    
    if (M==1) cout<<"One minute to " ;
    
    

    if (H==1) cout<<"Two";
    
	if (H==2) cout<<"Three";
    
	if (H==3) cout<<"Four";
    
	if (H==4) cout<<"Five";
   
    if (H==5)  cout<<"Six";
    
	if (H==6) cout<<"Seven";
   
    if (H==7) cout<<"Eight";
   
    if (H==8) cout<<"Nine";
    
	if (H==9) cout<<"Ten";
   
    if (H==10) cout<<"Eleven";
    
	if (H==11) cout<<"Twelve";
    
}
    return 0;
}
