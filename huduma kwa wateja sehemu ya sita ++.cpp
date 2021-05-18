#include<iostream>
#include<string>
using namespace std;

int main(){
	string  y = "*149*01#";
	
	
	string nummenu;
	cout<<"please enter *149*01# to get in the menue"<<endl;
	cin>>nummenu;
	if(nummenu ==y){	
		cout<<"\n\n\n"<<endl;
		cout<<"\t\t  			1. Ofa maalumu"<<endl;
        cout<<" \t\t 			 2. Ya kwako Tu"<<endl;
        cout<<" \t\t			3. Nunua Bando "<<endl;
        cout<<" \t\t			 4. Mnunulie Rafiki"<<endl;
        cout<<" \t\t			    5. Nipige Tafu"<<endl;
        cout<<"  \t\t				 6. Tuzo"<<endl;
       	cout<<" \t\t 			 7. Huduma Extra"<<endl;
   		cout<<"	\t\t		8. Huduma Kwa Wateja"<<endl;
   		
		int option;
	    cout<<"\n\n   			 Reply......:";
	    cin>>option;

   		if(option==1)//															SWITCH YA KWANZA ILI KUINGIA KATIKA MUNU KUU
		   {
        	
		
		    cout<<"\n\n\n"<<endl;
    		cout<<"        	          1. JIMIXIE"<<endl;
   			cout<<"  		       2. Nunua Vifurushi"<<endl;
   			cout<<" 		     3. Islamic Offer "<<endl;
   			cout<<" 		  4. Tsh1000=100 Units/saa24"<<endl;
    		cout<<" 		5. Tsh1000=DK60+Dk40+SMS20/saa24"<<endl;
   			cout<<"  		  6. TUSUA MAPENE(Shinda Mil.100)"<<endl;
			cout<<"  			   00 back"<<endl;
    		cout<<"			      99 Menu Kuu"<<endl;
    		
    		int chaguo;
             cout<<"\n\n   			 Reply......:";
             cin>>chaguo;
    		 switch(chaguo){//														SWITCH KWA AJILI YA OFA MAALUMU
    		 	case 1:{
    		 		cout<<"\n\n\n"<<endl;
    		 		cout<<"    	          1. huduma ya JIMIXIE inafanyiwa maboleso mpaka tar 06/04/2021. piga *149*01#"<<endl;
					break;
				 }
				 case 2:{
				 	cout<<"\n\n\n"<<endl;
				 	cout<<"\n\n\n 		  1. Tsh2000=DK30Voda+DK70(mingine)+30sms+MB400/siku7"<<endl;
                    cout<<" 		2. Tsh500=DK60+Dk40+SMS20/saa24"<<endl;
                    cout<<"  		  3. Tsh500=130MB/saa24 "<<endl;
                                int choice;
   								cout<<"\n\n   			 Reply......:";
    							cin>>choice;
    							if(choice>3){
									cout<<"\n\n\n"<<endl;
									cout<<"\t\t\t CHAGUO ULILO INGIZA HALIPO!"<<endl;
								}
								
    							if(choice==1){
    								cout<<"\n\n\n 	    Nunua kifurushi kupitia"<<endl;
  				                 	cout<<"  		  1. Muda Wa maongezi"<<endl;
	     		                    cout<<"  		  2. MPesa"<<endl;
	     		                    int choice;
   								cout<<"\n\n   			 Reply......:";
    							cin>>choice;
    							if(choice > 2){
    								    cout<<"\n\n\n"<<endl;
    									cout<<"chaguo ulilo ingiza sio sahihi"<<endl;
									}
    								
    							if(choice==1){
    								cout<<"\n\n\n"<<endl;
    								cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								
								}
								if(choice==2){
    								cout<<"\n\n\n 	    INGIZA PIN"<<endl;
    								int pin;
    								cout<<"\n\n   			 Reply......:";
    								cin>>pin;
    								if(pin != 123){
    									    cout<<"\n\n\n"<<endl;
    										cout<<"ndugu mteja pin uliyoingiza sio sahihi"<<endl;
										}
    								if(pin==123){
    									cout<<"\n\n\n"<<endl;
    									cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    									
    									
									}
    								
								}
						
								}
								if(choice==2){
									cout<<"\n\n\n"<<endl;
    								cout<<" 	    Nunua kifurushi kupitia"<<endl;
  				                 	cout<<"  		  1. Muda Wa maongezi"<<endl;
	     		                    cout<<"  		  2. MPesa"<<endl;
	     		                int choice;
   								cout<<"\n\n   			 Reply......:";
    							cin>>choice;
    							if(choice > 2){
    							cout<<"\n\n\n"<<endl;	
    							cout<<"chaguo ulilo ingiza sio sahihi"<<endl;
									}
    							if(choice==1){
    								cout<<"\n\n\n"<<endl;
    								cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								 
    								
								}
								if(choice==2){
    								cout<<"\n\n\n 	    INGIZA PIN"<<endl;
    								int pin;
    								cout<<"\n\n   			 Reply......:";
    								cin>>pin;
    								if(pin != 123){
    									    cout<<"\n\n\n"<<endl;
    										cout<<"ndugu mteja pin uliyoingiza sio sahihi"<<endl;
    										
										}
    								if(pin==123){
    									cout<<"\n\n\n"<<endl;
    									cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    									
    									
									}
									
    								
								}

								}
								if(choice==3){
									cout<<"\n\n\n"<<endl;
    								cout<<" 	    Nunua kifurushi kupitia"<<endl;
  				                 	cout<<"  		  1. Muda Wa maongezi"<<endl;
	     		                    cout<<"  		  2. MPesa"<<endl;
	     		                    int choice;
   								cout<<"\n\n   			 Reply......:";
    							cin>>choice;
    							if(choice >2){
    								    cout<<"\n\n\n"<<endl;
    									cout<<"chaguo ulilo ingiza sio sahihi"<<endl;
									}
    							if(choice==1){
    								cout<<"\n\n\n"<<endl;
    								cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								 
    								
								}
								if(choice==2){
									cout<<"\n\n\n"<<endl;
    								cout<<"	    INGIZA PIN"<<endl;
    								int pin;
    								cout<<"\n\n   			 Reply......:";
    								cin>>pin;
    								if(pin==123){
    									cout<<"\n\n\n"<<endl;
    									cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								}
									if(pin != 123){
										    cout<<"\n\n\n"<<endl; 
    										cout<<"ndugu mteja pin uliyoingiza sio sahihi"<<endl;
										}
									
    								
								}

								}
								
						
			
					break;
				 }
				 case 3:{
				 	cout<<"\n\n\n"<<endl;
				 	cout<<"              		   MAUDHUI ISLAMU BURE"  <<endl;
   					cout<<" 		  1. Tsh1000=dk50(mitandao yote),sms 20+10MB/saa24"<<endl;	
   					cout<<" 		2. Tsh1000=100 Units/saa24/saa24"<<endl;
  					cout<<"  		  3. Tsh2500=dk 60(mitandao yote),SMS 100+20MB/siku7"<<endl;
	     		    cout<<"  		  4. Voda-Ihsan"<<endl; 
	     		        int choice;
   						cout<<"\n\n   			 Reply......:";
    					cin>>choice;
    					if(choice>4){
							cout<<"\n\n\n"<<endl;
							cout<<"\t\t\t CHAGUO ULILO INGIZA HALIPO!"<<endl;
							}
						if(choice==1){
    								cout<<"\n\n\n 	    Nunua kifurushi kupitia"<<endl;
  				                 	cout<<"  		  1. Muda Wa maongezi"<<endl;
	     		                    cout<<"  		  2. MPesa"<<endl;
	     		                    int choice;
   								cout<<"\n\n   			 Reply......:";
    							cin>>choice;
    							if(choice > 2){
    								    cout<<"\n\n\n"<<endl;
    									cout<<"chaguo ulilo ingiza sio sahihi"<<endl;
									}
    								
    							if(choice==1){
    								cout<<"\n\n\n"<<endl;
    								cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								
								}
								if(choice==2){
    								cout<<"\n\n\n 	    INGIZA PIN"<<endl;
    								int pin;
    								cout<<"\n\n   			 Reply......:";
    								cin>>pin;
    								if(pin != 123){
    									    cout<<"\n\n\n"<<endl;
    										cout<<"ndugu mteja pin uliyoingiza sio sahihi"<<endl;
										}
    								if(pin==123){
    									cout<<"\n\n\n"<<endl;
    									cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    									
    									
									}
    								
								}
						
								}
						if(choice==2){
									cout<<"\n\n\n"<<endl;
    								cout<<" 	    Nunua kifurushi kupitia"<<endl;
  				                 	cout<<"  		  1. Muda Wa maongezi"<<endl;
	     		                    cout<<"  		  2. MPesa"<<endl;
	     		                int choice;
   								cout<<"\n\n   			 Reply......:";
    							cin>>choice;
    							if(choice > 2){
    							cout<<"\n\n\n"<<endl;	
    							cout<<"chaguo ulilo ingiza sio sahihi"<<endl;
									}
    							if(choice==1){
    								cout<<"\n\n\n"<<endl;
    								cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								 
    								
								}
								if(choice==2){
    								cout<<"\n\n\n 	    INGIZA PIN"<<endl;
    								int pin;
    								cout<<"\n\n   			 Reply......:";
    								cin>>pin;
    								if(pin != 123){
    									    cout<<"\n\n\n"<<endl;
    										cout<<"ndugu mteja pin uliyoingiza sio sahihi"<<endl;
    										
										}
    								if(pin==123){
    									cout<<"\n\n\n"<<endl;
    									cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    									
    									
									}
									
    								
								}

								}			
						if(choice==3){
									cout<<"\n\n\n"<<endl;
    								cout<<" 	    Nunua kifurushi kupitia"<<endl;
  				                 	cout<<"  		  1. Muda Wa maongezi"<<endl;
	     		                    cout<<"  		  2. MPesa"<<endl;
	     		                    int choice;
   								cout<<"\n\n   			 Reply......:";
    							cin>>choice;
    							if(choice >2){
    								    cout<<"\n\n\n"<<endl;
    									cout<<"chaguo ulilo ingiza sio sahihi"<<endl;
									}
    							if(choice==1){
    								cout<<"\n\n\n"<<endl;
    								cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								 
    								
								}
								if(choice==2){
									cout<<"\n\n\n"<<endl;
    								cout<<"	    INGIZA PIN"<<endl;
    								int pin;
    								cout<<"\n\n   			 Reply......:";
    								cin>>pin;
    								if(pin==123){
    									cout<<"\n\n\n"<<endl;
    									cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								}
									if(pin != 123){
										    cout<<"\n\n\n"<<endl; 
    										cout<<"ndugu mteja pin uliyoingiza sio sahihi"<<endl;
										}
									
    								
								}

								}
						if(choice==4){
							        cout<<"\n\n\n"<<endl;
    								cout<<" 	    1.Taarifa kuhusu huduma"<<endl;
  				                 	cout<<"  		  2. Jiunge"<<endl;
  				                 	int islam;
  				                 	cout<<"\n\n   			 Reply......:";
    								cin>>islam;
    								if(islam > 2){
    									cout<<"\n\n\n"<<endl;
    									cout<<"\t\t\tUMEKOSEA KUCHAGUA"<<endl;
									}
									if(islam == 1){
										cout<<"\n\n\n"<<endl;
    									cout<<"\t\t\t Voda-islam inakupatia jumbe za kukumbusha kuswali, mistari ya quran na mafundisho ya kiislam.  Jiweke karibu na Allah"<<endl;
									}
									
									if(islam == 2){
										cout<<"\n\n\n"<<endl;
    									cout<<"                         1. Siku-Tsh 200(Mafundisho ya Kiislam)"<<endl;
    									cout<<"                         2. Wiki-Tsh 1000(Mafundisho ya Kiislam)"<<endl;
    									cout<<"                         3. Mwezi-Tsh 3000(Mafundisho ya Kiislam)"<<endl;
    									int mafundisho;
  				                 		cout<<"\n\n   			 Reply......:";
    									cin>>mafundisho;
    									if(mafundisho>3){
    										cout<<"\n\n\n"<<endl;
    										cout<<"         SAMAHANI UMEKOSEA KUINGIZA CHAGUO!.  JARIBU TENA"<<endl;
    										
										}
    									if(mafundisho<=3){
    										cout<<"\n\n\n"<<endl;
    								cout<<" 	    Nunua kifurushi kupitia"<<endl;
  				                 	cout<<"  		  1. Muda Wa maongezi"<<endl;
	     		                    cout<<"  		  2. MPesa"<<endl;
	     		                    int choice;
   								cout<<"\n\n   			 Reply......:";
    							cin>>choice;
    							if(choice >2){
    								    cout<<"\n\n\n"<<endl;
    									cout<<"chaguo ulilo ingiza sio sahihi"<<endl;
									}
    							if(choice==1){
    								cout<<"\n\n\n"<<endl;
    								cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								 
    								
								}
								if(choice==2){
									cout<<"\n\n\n"<<endl;
    								cout<<"	    INGIZA PIN"<<endl;
    								int pin;
    								cout<<"\n\n   			 Reply......:";
    								cin>>pin;
    								if(pin==123){
    									cout<<"\n\n\n"<<endl;
    									cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								}
									if(pin != 123){
										    cout<<"\n\n\n"<<endl; 
    										cout<<"ndugu mteja pin uliyoingiza sio sahihi"<<endl;
										}
									
    								
								}
    										
    										
										}
    									
    									
									}
  				                 	
	     		                
								}		
    					
					break;
				}
				 
				 case 4:{
				 	cout<<"\n\n\n"<<endl;
				 	cout<<" 	    Nunua kifurushi kupitia"<<endl;
  				                 	cout<<"  		  1. Muda Wa maongezi"<<endl;
	     		                    cout<<"  		  2. MPesa"<<endl;
	     		                    int choice;
   								cout<<"\n\n   			 Reply......:";
    							cin>>choice;
    							if(choice >2){
    								    cout<<"\n\n\n"<<endl;
    									cout<<"chaguo ulilo ingiza sio sahihi"<<endl;
									}
    							if(choice==1){
    								cout<<"\n\n\n"<<endl;
    								cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								 
    								
								}
								if(choice==2){
									cout<<"\n\n\n"<<endl;
    								cout<<"	    INGIZA PIN"<<endl;
    								int pin;
    								cout<<"\n\n   			 Reply......:";
    								cin>>pin;
    								if(pin==123){
    									cout<<"\n\n\n"<<endl;
    									cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								}
									if(pin != 123){
										    cout<<"\n\n\n"<<endl; 
    										cout<<"ndugu mteja pin uliyoingiza sio sahihi"<<endl;
										}
									
    								
								}
					break;
				 }
				 case 5:{
				 	cout<<"\n\n\n"<<endl;
				 	cout<<" 	    Nunua kifurushi kupitia"<<endl;
  				                 	cout<<"  		  1. Muda Wa maongezi"<<endl;
	     		                    cout<<"  		  2. MPesa"<<endl;
	     		                    int choice;
   								cout<<"\n\n   			 Reply......:";
    							cin>>choice;
    							if(choice >2){
    								    cout<<"\n\n\n"<<endl;
    									cout<<"chaguo ulilo ingiza sio sahihi"<<endl;
									}
    							if(choice==1){
    								cout<<"\n\n\n"<<endl;
    								cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								 
    								
								}
								if(choice==2){
									cout<<"\n\n\n"<<endl;
    								cout<<"	    INGIZA PIN"<<endl;
    								int pin;
    								cout<<"\n\n   			 Reply......:";
    								cin>>pin;
    								if(pin==123){
    									cout<<"\n\n\n"<<endl;
    									cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								}
									if(pin != 123){
										    cout<<"\n\n\n"<<endl; 
    										cout<<"ndugu mteja pin uliyoingiza sio sahihi"<<endl;
										}
									
    								
								}
					break;
				 }
				 case 6:{
				 	cout<<"\n\n\n"<<endl;
				 	cout<<" 		  1. Tsh1800=Tiketi 7"<<endl;
   					cout<<" 		2. Tsh6000=Tiketi 30"<<endl;
  					cout<<"  		  3. Tsh500=Tiketi 2"<<endl;
	     		    cout<<"  		  4. Tiketi/Dakika?MB bando"<<endl;
	     		    cout<<"  		  5. Tusua mapene Taarifa"<<endl;
	     		    
	     		    int tik;
    				cout<<"\n\n   			 Reply......:";
    				cin>>tik;
    				if(tik > 5){
    					cout<<"  CHAGUO ULILOINGIZA HALIPO!"<<endl;
					}
	     		    if(tik<=3){
	     		    	cout<<"\n\n\n"<<endl;
				    	cout<<" 	    Nunua kifurushi kupitia"<<endl;
  				                 	cout<<"  		  1. Muda Wa maongezi"<<endl;
	     		                    cout<<"  		  2. MPesa"<<endl;
	     		                    int choice;
   								cout<<"\n\n   			 Reply......:";
    							cin>>choice;
    							if(choice >2){
    								    cout<<"\n\n\n"<<endl;
    									cout<<"chaguo ulilo ingiza sio sahihi"<<endl;
									}
    							if(choice==1){
    								cout<<"\n\n\n"<<endl;
    								cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								 
    								
								}
								if(choice==2){
									cout<<"\n\n\n"<<endl;
    								cout<<"	    INGIZA PIN"<<endl;
    								int pin;
    								cout<<"\n\n   			 Reply......:";
    								cin>>pin;
    								if(pin==123){
    									cout<<"\n\n\n"<<endl;
    									cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								}
									if(pin != 123){
										    cout<<"\n\n\n"<<endl; 
    										cout<<"ndugu mteja pin uliyoingiza sio sahihi"<<endl;
										}
									
    								
								}
								
	     		    	
	     		    	
					 }
					 if(tik==4){
					 	cout<<"\n\n\n"<<endl;
					 	cout<<"          	    1.Tusua J4U"<<endl;
  				        cout<<"  		  2. Tusua Mapene Cheka"<<endl;
  				        cout<<"  		  3. Tusua Mapene Pindua"<<endl;
  				        int tus;
  				          cout<<"\n\n   			 Reply......:";
  				          cin>>tus;
  				          if(tus>3){
  				          	cout<<"          CHAGUO ULILOINGIZA SIO SAHIHI  "<<endl;
							}
  				          if(tus==1){//mteja atafanya uchaguzi wa tusua mapene mahari hapa
									   
  				                 	cout<<"\n\n\n 	    Tunaboresha huduma za ya kwako Tu, piga *149*01# kupata vifurushi kwa sasa."<<endl;
  				                   }
  				                   
  				          if(tus==2){
  				                   	cout<<"\n\n\n 	    1.Masaa 24"<<endl;//chaguo la pili katika kipengele cha tusua mapene
  				                 	cout<<"  		    2. Siku 7"<<endl;
  				                 	cout<<"  		    3. siku 30"<<endl;  
									int tus2;
  				                 	cout<<"\n\n   			 Reply......:";
  				                 	cin>>tus2;
  				                 	if(tus2 > 3){
  				                 		cout<<"        UMEKOSEA KUCHAGUA"<<endl;
									   }
  				                 	if(tus2=1){
  				                 	cout<<"\n\n\n 	    1. Tsh.600=Dk14(Voda-Voda)+Dk2(mitandao yote)+SMS100 Saa24+kete 1"<<endl;
  				                 	cout<<"  		    2. Tsh.700=Dk30(Voda-Voda)+Dk2(mitandao yote)+SMS100 Saa24+kete 1"<<endl;
  				                    cout<<"  		    3.  Zaidi"<<endl;
  				                    cout<<"  		    00  back"<<endl;
  				                    int chaguzi;
  				                 	cout<<"\n\n   			 Reply......:";
  				                 	cin>>chaguzi;
  				                 	if(chaguzi>3){
  				                 		cout<<"        UMEKOSEA KUCHAGUA"<<endl;
									   }
									if(chaguzi<3){
									cout<<"\n\n\n"<<endl;
				    	            cout<<" 	    Nunua kifurushi kupitia"<<endl;
  				                 	cout<<"  		  1. Muda Wa maongezi"<<endl;
	     		                    cout<<"  		  2. MPesa"<<endl;
	     		                    int choice;
   								cout<<"\n\n   			 Reply......:";
    							cin>>choice;
    							if(choice >2){
    								    cout<<"\n\n\n"<<endl;
    									cout<<"chaguo ulilo ingiza sio sahihi"<<endl;
									}
    							if(choice==1){
    								cout<<"\n\n\n"<<endl;
    								cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								 
    								
								}
								if(choice==2){
									cout<<"\n\n\n"<<endl;
    								cout<<"	    INGIZA PIN"<<endl;
    								int pin;
    								cout<<"\n\n   			 Reply......:";
    								cin>>pin;
    								if(pin==123){
    									cout<<"\n\n\n"<<endl;
    									cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								}
									if(pin != 123){
										    cout<<"\n\n\n"<<endl; 
    										cout<<"ndugu mteja pin uliyoingiza sio sahihi"<<endl;
										}
									
								}
									}
  				            if(chaguzi==3){
  				            	cout<<"\n\n\n"<<endl;
  				            	cout<<" 	    1. Tsh.1100=Dk50(Voda-Voda)+Dk5(mitandao yote)+SMS(Bilakikomo)+MB10  Saa24+kete 1"<<endl;
  				            	int zaidi;
  				            	cout<<"\n\n   			 Reply......:";
  				            	cin>>zaidi;
  				            	if(zaidi!=1){
  				            		
  				            		cout<<"\n\n\n"<<endl;
  				            		cout<<"           UMEKOSEA   KUCHAGUA"<<endl;
  				            		
								  }
  				            	if(zaidi==1){
  				            		cout<<"\n\n\n"<<endl;
				    	            cout<<" 	    Nunua kifurushi kupitia"<<endl;
  				                 	cout<<"  		  1. Muda Wa maongezi"<<endl;
	     		                    cout<<"  		  2. MPesa"<<endl;
	     		                    int choice;
   								cout<<"\n\n   			 Reply......:";
    							cin>>choice;
    							if(choice >2){
    								    cout<<"\n\n\n"<<endl;
    									cout<<"chaguo ulilo ingiza sio sahihi"<<endl;
									}
    							if(choice==1){
    								cout<<"\n\n\n"<<endl;
    								cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								 
    								
								}
								if(choice==2){
									cout<<"\n\n\n"<<endl;
    								cout<<"	    INGIZA PIN"<<endl;
    								int pin;
    								cout<<"\n\n   			 Reply......:";
    								cin>>pin;
    								if(pin==123){
    									cout<<"\n\n\n"<<endl;
    									cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								}
									if(pin != 123){
										    cout<<"\n\n\n"<<endl; 
    										cout<<"ndugu mteja pin uliyoingiza sio sahihi"<<endl;
										}
									
								}
  				            		
								  }
								  if(chaguzi == 00){
								  	cout<<"\n\n\n"<<endl; 
    							    cout<<"UNAJARIBU KURUDI NYUMA  "<<endl;
								  	
								  }
  				            	
							  }
						
								}
								if(tus2==2){
									cout<<"\n\n\n"<<endl;
									cout<<"      	    1. Tsh.2900=Dk50(Voda-Voda)+Dk5(mitandao yote)+SMS200 Siku 7+kete 7"<<endl;
  				                 	cout<<"  		    2. Tsh.4900=Dk130(Voda-Voda)+Dk5(mitandao yote)+SMS500 Siku 7+kete 7"<<endl;
  				                    cout<<"  		    00  back"<<endl;
  				                    int siku7;
    								cout<<"\n\n   			 Reply......:";
    								cin>>siku7;
    								if(siku7 > 2){
    									cout<<"\n\n\n"<<endl;
    									cout<<"          UMEKOSEA  KUCHAGUA  "<<endl;
									}
									if(siku7==1||siku7==2){
										cout<<"\n\n\n"<<endl;
					    	            cout<<" 	    Nunua kifurushi kupitia"<<endl;
	  				                 	cout<<"  		  1. Muda Wa maongezi"<<endl;
		     		                    cout<<"  		  2. MPesa"<<endl;
		     		                    int choice;
		   								cout<<"\n\n   			 Reply......:";
		    							cin>>choice;
		    							if(choice >2){
		    								    cout<<"\n\n\n"<<endl;
		    									cout<<"chaguo ulilo ingiza sio sahihi"<<endl;
											}
		    							if(choice==1){
		    								cout<<"\n\n\n"<<endl;
		    								cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
		    								 
		    								
										}
										if(choice==2){
											cout<<"\n\n\n"<<endl;
		    								cout<<"	    INGIZA PIN"<<endl;
		    								int pin;
		    								cout<<"\n\n   			 Reply......:";
		    								cin>>pin;
		    								if(pin==123){
		    									cout<<"\n\n\n"<<endl;
		    									cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
		    								}
											if(pin != 123){
											    cout<<"\n\n\n"<<endl; 
	    										cout<<"ndugu mteja pin uliyoingiza sio sahihi"<<endl;
												}
											
									    	}
											}
											if(siku7==0){
											cout<<"\n\n\n"<<endl; 
		    							    cout<<"UNAJARIBU KURUDI NYUMA  "<<endl;
										  	
												
											}
  				                    
								}
								if(tus2==3){
									cout<<"\n\n\n"<<endl;
									cout<<"  1. Tsh.15000=Dk320(Voda-Voda)+Dk20(mitandao yote)+SMS200 Siku30+kete 30"<<endl;
  				                   	cout<<"  		    00  back"<<endl;
  				                   	int siku30;
    								cout<<"\n\n   			 Reply......:";
    								cin>>siku30;
    								if(siku30!=1||siku30!=00){
    									cout<<"         UCHAGUZI ULIOUFANYA SIO SAHIHI"<<endl;
									}
    								if(siku30==1){
    								cout<<"\n\n\n"<<endl;
				    	            cout<<" 	    Nunua kifurushi kupitia"<<endl;
  				                 	cout<<"  		  1. Muda Wa maongezi"<<endl;
	     		                    cout<<"  		  2. MPesa"<<endl;
	     		                    int choice;
   								cout<<"\n\n   			 Reply......:";
    							cin>>choice;
    							if(choice >2){
    								    cout<<"\n\n\n"<<endl;
    									cout<<"chaguo ulilo ingiza sio sahihi"<<endl;
									}
    							if(choice==1){
    								cout<<"\n\n\n"<<endl;
    								cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								 
    								
								}
								if(choice==2){
									cout<<"\n\n\n"<<endl;
    								cout<<"	    INGIZA PIN"<<endl;
    								int pin;
    								cout<<"\n\n   			 Reply......:";
    								cin>>pin;
    								if(pin==123){
    									cout<<"\n\n\n"<<endl;
    									cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								}
									if(pin != 123){
										    cout<<"\n\n\n"<<endl; 
    										cout<<"ndugu mteja pin uliyoingiza sio sahihi"<<endl;
										}
									
								} 
    								
    							    
    									
									}
    								if(siku30==00){
    								cout<<"\n\n\n"<<endl; 
    							    cout<<"            UNAJARIBU KURUDI NYUMA  "<<endl;
									}
  				                   	
									
								}
							}
							if(tus==3){
							  cout<<"\n\n\n 	    1. Tsh.1000=40 Units/Saa24 + Kete 1"<<endl;
  				              cout<<"  		    2.  Tsh.6000=500 Units/Siku7 + Kete 7"<<endl;
  				              cout<<"  		    3.  Tsh.20,000=1800 Units/Siku30 + Kete 30"<<endl;
  				              cout<<"  		    00  back"<<endl;
  				              int chaguzi;
    								cout<<"\n\n   			 Reply......:";
    								cin>>chaguzi;
    								if(chaguzi>3){
    									cout<<"                try again....."<<endl;
									}
    								if(chaguzi==00){
    								cout<<"\n\n\n"<<endl; 
    							    cout<<"               UNAJARIBU KURUDI NYUMA  "<<endl;
									}
    								if(chaguzi<4){
    								cout<<"\n\n\n"<<endl;
				    	            cout<<" 	    Nunua kifurushi kupitia"<<endl;
  				                 	cout<<"  		  1. Muda Wa maongezi"<<endl;
	     		                    cout<<"  		  2. MPesa"<<endl;
	     		                    int choice;
   								cout<<"\n\n   			 Reply......:";
    							cin>>choice;
    							if(choice >2){
    								    cout<<"\n\n\n"<<endl;
    									cout<<"chaguo ulilo ingiza sio sahihi"<<endl;
									}
    							if(choice==1){
    								cout<<"\n\n\n"<<endl;
    								cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								 
    								
								}
								if(choice==2){
									cout<<"\n\n\n"<<endl;
    								cout<<"	    INGIZA PIN"<<endl;
    								int pin;
    								cout<<"\n\n   			 Reply......:";
    								cin>>pin;
    								if(pin==123){
    									cout<<"\n\n\n"<<endl;
    									cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
    								}
									if(pin != 123){
										    cout<<"\n\n\n"<<endl; 
    										cout<<"ndugu mteja pin uliyoingiza sio sahihi"<<endl;
										}
									
								} 
    									
									}
  				              
							}
							
						}
						if(tik==5){
							cout<<"\n\n\n"<<endl;
							cout<<"             1. Taarifa"<<endl;
  				            cout<<"  		    2. Kujitoa"<<endl;
  				            cout<<"  		    00.  back"<<endl;
  				            int tar;
  				            cout<<"\n\n   			 Reply......:";
    						cin>>tar;
    					    if(tar>2){
    					    	cout<<"    SAMAHANI UMEKOSEA KUFANYA UCHAGUZI    "<<endl;
							}
							if(tar==1){
								cout<<"\n\n\n 	    1. Taarifa Za Mkopo     "<<endl;
								int chaguo;
			                 	cout<<"\n\n   			 Reply......:";
			                 	cin>>chaguo;
								if(chaguo>1){
			                 		cout<<"                     error........."<<endl;
								   }
								if(chaguo==1){
			                 		cout<<"\n\n\n 	    Thank you for message! You will receive a confirmation SMS soon!"<<endl;
								   }	
						}
  				            if(tar==2){
  				            	cout<<"\n\n\n 	    1. Kujitoa kwenye mchakato"<<endl;
  				                 		 
  				                 	int taarifa;
  				                 	cout<<"\n\n   			 Reply......:";
  				                 	cin>>taarifa;
  				                 	if(taarifa>1){
  				                 		cout<<"       UMEKOSEA KUCHAGUA       "<<endl;
									   }
  				                 	if(taarifa==1){
  				                 		cout<<"\n\n\n 	    Thank you for message! You will receive a confirmation SMS soon!"<<endl;
									   }
  				            	
							  }
							  if(tar==00){
							  	cout<<"\n\n\n"<<endl; 
    							cout<<"               UNAJARIBU KURUDI NYUMA  "<<endl;
							  }
								
						}
					   
					break;
				 }
    		 	 case 00:{
    		 	 	cout<<"\n\n\n"<<endl;
    		 	 	cout<<"               UNAJARIBU KURUDI NYUMA  "<<endl;
    		 	 	
					break;
				  }
				  case 99:{
				  	cout<<"\n\n\n"<<endl;
				  	cout<<"               UNAJARIBU KURUDI NYUMA KWENYE MENU KUU "<<endl;
					break;
				  }
				  default:{
				  	cout<<"\n\n\n"<<endl;
				  	cout<<"\t\t\t	CHAGUO LAKO HATUKULIELEWA "<<endl;
					break;
				  }
				 
			
				  
				  
			 }
		}
		
     
    	if(option==2){
		 //cout<<" \t\t 			 2. Ya kwako Tu"<<endl;//HUDUMA ZA YAKWAKO TU ZINAPATIKANA MAHALI HAPA......
            cout<<"\n\n\n"<<endl;
		    cout<<"           		 Welcome:  ERASTO  CHENYA MAKELEMO "<<endl;
		    cout<<"                       		  1. Dakika "<<endl;
		    cout<<"                        		2. Intaneti "<<endl;
		    cout<<"                        		3. JIMIXIE "<<endl;
		    cout<<"                           	4. MORO SUPA UNI "<<endl;
		    cout<<"                        		5. Kijiweni "<<endl;
		    cout<<"                    		 6. Karibu Vodacom "<<endl;
		    int casetwo;
	        cout<<"\n\n   			 Reply......:";
			cin>>casetwo;
			if(casetwo>6){
				cout<<"\n\n\n ERROR!"<<endl;
				
			}
			if(casetwo==1){
				cout<<"\n\n                      		  1. 1500=Dk50(mingine)+50SMS/Siku7 "<<endl;
		        cout<<"                        		2. Tsh. 1000=Dk40Voda+Dk60(Mingine)+SMS20+MB10/saa24 "<<endl;
		        int dakika;
		        cout<<"\n\n   			 Reply......:";
				cin>>dakika;
				if(dakika<=2){
					cout<<"\n\n\n"<<endl;
    	            cout<<" 	    Nunua kifurushi kupitia"<<endl;
                 	cout<<"  		  1. Muda Wa maongezi"<<endl;
                    cout<<"  		  2. MPesa"<<endl;
                    int choice;
					cout<<"\n\n   			 Reply......:";
					cin>>choice;
					if(choice >2){
						    cout<<"\n\n\n"<<endl;
							cout<<"chaguo ulilo ingiza sio sahihi"<<endl;
						}
					if(choice==1){
						cout<<"\n\n\n"<<endl;
						cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
						 
						
					}
					if(choice==2){
						cout<<"\n\n\n"<<endl;
						cout<<"	    INGIZA PIN"<<endl;
						int pin;
						cout<<"\n\n   			 Reply......:";
						cin>>pin;
						if(pin==123){
							cout<<"\n\n\n"<<endl;
							cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
						}
						if(pin != 123){
							    cout<<"\n\n\n"<<endl; 
								cout<<"ndugu mteja pin uliyoingiza sio sahihi"<<endl;
							}
						
					} 
						
					    
							
						}
	
				
			}
		
		if(casetwo==2){
			//cout<<"this is case2"<<endl;
			cout<<"Tsh.500=130MB/Saa24"<<endl;
			cout<<"Tsh.1500=500MB/Siku7"<<endl;
			int siku;
			cout<<"\n\n   			 Reply......:";
			cin>>siku;
			if(siku > 2){
				cout<<"\n\n SAMAHANI UMEKOSEA WEKA CHAGUO"<<endl;
				
			}
			else{
				cout<<"\n\n\n"<<endl;
	            cout<<" 	    Nunua kifurushi kupitia"<<endl;
             	cout<<"  		  1. Muda Wa maongezi"<<endl;
                cout<<"  		  2. MPesa"<<endl;
                int choice;
				cout<<"\n\n   			 Reply......:";
				cin>>choice;
				if(choice >2){
					    cout<<"\n\n\n"<<endl;
						cout<<"chaguo ulilo ingiza sio sahihi"<<endl;
					}
				if(choice==1){
					cout<<"\n\n\n"<<endl;
					cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
					 
					
				}
				if(choice==2){
					cout<<"\n\n\n"<<endl;
					cout<<"	    INGIZA PIN"<<endl;
					int pin;
					cout<<"\n\n   			 Reply......:";
					cin>>pin;
					if(pin==123){
						cout<<"\n\n\n"<<endl;
						cout<<"\n\n\n 	    Ombi lako linashughurikiwa"<<endl;
					}
					if(pin != 123){
					    cout<<"\n\n\n"<<endl; 
						cout<<"ndugu mteja pin uliyoingiza sio sahihi"<<endl;
						}
					
			    	}
				
				
			}
			
			
			
		}
		if(casetwo==3){
			//cout<<"this is case2"<<endl;
			cout<<"\n\nBadili salio Kuwa:"<<endl;
			cout<<"\t\t1.Dakika "<<endl;
			cout<<" \t\t2.Internet"<<endl;
			cout<<" \t\t3.SMS"<<endl;
			cout<<" \t\t4.Mhamishie Rafiki"<<endl;
			cout<<"\t\t	00 back"<<endl;
			cout<<"\t\t 99 Menu kuu"<<endl;
			
			
		}
		if(casetwo==4){
			cout<<"this is case2"<<endl;
		}
		if(casetwo==5){
			cout<<"this is case2"<<endl;
		}
		if(casetwo==6){
			cout<<"this is case2"<<endl;
		}


	    }
        if(option==3){
        	cout<<" \t\t			3. Nunua Bando "<<endl;
    	 
    	
			
		}
    	if(option==4){
    		cout<<" \t\t			 4. Mnunulie Rafiki"<<endl;
			
		}
    	if(option==5){
			cout<<" \t\t			    5. Nipige Tafu"<<endl;
		}
    	if(option==6){
    		cout<<"  \t\t				 6. Tuzo"<<endl;
    		
			
		}
    	if(option==7){
    		cout<<" \t\t 			 7. Huduma Extra"<<endl;
    		
			
		}
		if(option==8){
			cout<<"	\t\t		8. Huduma Kwa Wateja"<<endl;
			
		}
	
	    if(option>8) {
		cout<<"\n\n\n"<<endl;
	   	cout<<"you entered a wrong choise please try again thanks."<<endl;
	   }	   	
		   
		   
		   
		   
		   
		   
		   
		   
		   
		   }
   		
    
		
		
	
	else {
		cout<<"\n\n\n"<<endl;
		cout<<"\t\t\t+--------------------------------------------+"<<endl;
		cout<<"\t\t\t|                invalid  number             |"<<endl;
		cout<<"\t\t\t|           please try again thank you!      |"<<endl;
		cout<<"\t\t\t+--------------------------------------------+"<<endl;
			
	}
	
	
	system("pause>0");
	
}
