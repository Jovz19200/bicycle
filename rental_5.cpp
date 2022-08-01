#include<iostream>
using namespace std;

class rentalMenu{
	public:
		int amount;
		int startTime, endTime;
		void rentDeals(){
    cout<<"in this program You will enter your starting and\n ending time and the program will output your due according to the duration\n";
	cout<<"enter your starting time\n";
	cin>>startTime;
	cout<<"enter your ending time\n";
	cin>>endTime;
	
     if ( startTime<0 || startTime>23 && endTime<1 || endTime>24 ){
    
     	cout<<"invalid time input\n";
	} 
	else if(startTime>endTime){
		cout<<"invalid Time input\n";
	}
	else if (startTime>=0 && endTime<=7 || startTime>=21 && endTime<=24)  {
		
	    
	       	amount = (endTime-startTime)*500;
	       	cout<< "your due is "<<amount <<"rwf\n";
	       	
		   
	       
		
	}
	else if(startTime>=7 && endTime<=14 || startTime>=19 && endTime<=21 ){
		
		amount = (endTime-startTime)*1000;
		cout<< "your due is "<<amount<<"rwf\n";
	    
	}
	else if (startTime>=14 && endTime<=19){
		
		amount = (endTime-startTime)*1500;
		cout<< "your due is "<<amount <<"rwf\n";
		
	}
	else if(startTime>=0 && endTime>=7 && endTime<=14){ // 0-7-14
		
		amount= (7-startTime)*500 + (endTime-7)*1000; 
		cout<< "your due is "<<amount <<"rwf\n";
	}
	else if(startTime>=0 && endTime>=14 && endTime<=19){  // between 0 and 19
		if(startTime>7){                                 // >7-<14   and   >14-<19
			amount = (14-startTime)*1000+(endTime-14)*1500;
			cout<< "your due is "<<amount <<"rwf\n";
		}
		else {                                              // >0-<7  and >14-<19
		
		amount = (7-startTime)*500+7000+(endTime-14)*1500;
		cout<< "your due is "<<amount <<"rwf\n";
	}
	}
	else if(startTime>=0 && endTime>=19 && endTime<=21){               //  between 0 and 21    
		if(startTime>7 && startTime<14){                                // between >7-<14 and   >19-<21
			amount = (14-startTime)*1000 +7500 + (endTime-19)*1000;
			cout<< "your due is "<<amount <<"rwf\n";
		} 
		else if (startTime>14) {                        //                       >14-<19    and   >19-<21
			amount = (19-startTime)*1500 + (endTime-19)*1000;
			cout<< "your due is "<<amount <<"rwf\n";
		}
		else if(startTime<=7){                                                 //      >0-<7   and   >19-<21
		
		amount = (7-startTime)*500+7000+7500+(endTime-19)*1000;
		cout<< "your due is "<<amount <<"rwf\n";
	}
	}
	else if(startTime>=0 && endTime>=21 && endTime<=24){                // between 0 and 24 
	     if(startTime>7 && startTime<=14){                                       // >7-<14 and  >21-<24
		 
		 amount = (14-startTime)*1000 + 7500 + 2000 + (endTime-21)*500;
		 cout<< "your due amount is "<<amount <<"rwf\n";
		 
		 }
		 else if(startTime>14 && startTime<=19){                              //   >14-<19    and >21-24     
		 	
		 	amount = (19-startTime)*1500 + 2000 + (endTime-21)*500;
		 	cout<< "your due amount is "<<amount <<"rwf\n";
		 	
		 } 
	      if(startTime>19){                                              // >19-<21    and >21-<24
	     	  
	     	  amount = (21 - startTime)*1000 + (endTime-21)*500;
	     	  cout<< "your due amount is "<<amount <<"rwf\n";
	     	  
		 }
		 else if(startTime<=7){
		 
		amount = (7 - startTime)*500+7000+7500+2000+(endTime-21)*500;  // >0-<7 and >21-<24
		cout<< "your due amount is "<<amount <<"rwf\n";
	}
	}
	
	else {
		cout<<"let's go again\n";
	}
}
		
		
};
int main(){
	int a=3;
	
	while (a=3) {
	
	rentalMenu obj;

	 
	 	obj.rentDeals();
		 	  
	 }
	
	return 0;
}

