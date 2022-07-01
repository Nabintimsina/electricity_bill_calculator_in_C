#include<stdio.h>
#include<conio.h>
void main(){
  int A,PR,PsR,Unit,RemainU,RemainAmt;
  float Amount,TAmount,f30Amt,f50Amt,f20Amt,f100Amt,f150Amt,f250Amt,f400Amt;
  printf("Program to find Electricity Bill\n");
  printf("Program By: Nabin timsina(www.nabintimsina.com.np)\n");
  printf("-------------------------------------------------------------------------------------------\n");
  printf("Enter the Ampere of your Meter Box in Ampere :(5 or 10 or 15) \n");
  scanf("%d",&A);
  printf("-------------------------------------------------------------------------------------------------------------\n");
  printf("\nEnter the previous RDG and present RDG :");
  scanf("%d%d",&PR,&PsR);
  Unit= PsR-PR;
  printf("------------------------------------------------------------------\n");
  printf("your unit is %d\n",Unit);
  printf("---------------------------------------------------------------------------------------------------------------\n");
  switch(A){
  	case 5:
  		if(Unit<=10){
  			printf("Minimum charge= Rs 30\n Your bill Amount = Rs.30");
		  }
		else if(Unit<=20){
			Amount=Unit*3;
			TAmount=Amount+30;
			printf("Minimum charge=Rs 30\nEnergy charge=Rs %.2f \nYour bill Amount = Rs %.2f",Amount,TAmount);
		}
  		else if(Unit<=30){
  		f20Amt=20*3;
		RemainU=Unit-20;
		RemainAmt= RemainU*6.5;
		Amount=f20Amt+RemainAmt;	
  		TAmount=Amount+50;
  		printf("Minimum charge= Rs 50\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
		  }
  	  	else if(Unit<=50){
  		f20Amt=20*3;
  		f30Amt=10*6.5;
		RemainU=Unit-30;
		RemainAmt= RemainU*8;
		Amount=f20Amt+RemainAmt+f30Amt;	
  		TAmount=Amount+50;
  		printf("Minimum charge= Rs 50\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
			}
		else if(Unit<=100){
		f20Amt=20*3;
  		f30Amt=10*6.5;
  		f50Amt=20*8;
		RemainU=Unit-50;
		RemainAmt= RemainU*9.5;
		Amount=f20Amt+RemainAmt+f30Amt+f50Amt;	
  		TAmount=Amount+75;
  		printf("Minimum charge= Rs 75\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
		}
		else if(Unit<=150){
		f20Amt=20*3;
  		f30Amt=10*6.5;
  		f50Amt=20*8;
  		f100Amt=50*9.5;
		RemainU=Unit-100;
		RemainAmt= RemainU*9.5;
		Amount=f20Amt+RemainAmt+f30Amt+f50Amt+f100Amt;	
  		TAmount=Amount+100;
  		printf("Minimum charge= Rs 100\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
		}
		else if(Unit<=250){
		f20Amt=20*3;
  		f30Amt=10*6.5;
  		f50Amt=20*8;
  		f100Amt=50*9.5;
  		f150Amt=50*9.5;  // or 100*9.5 without writing above line
		RemainU=Unit-150;
		RemainAmt= RemainU*10;
		Amount=f20Amt+RemainAmt+f30Amt+f50Amt+f100Amt+f150Amt;	
  		TAmount=Amount+125;
  		printf("Minimum charge= Rs 125\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
  		
		}
		
		else if(Unit<=400){
		f20Amt=20*3;
  		f30Amt=10*6.5;
  		f50Amt=20*8;
  		f100Amt=50*9.5;
  		f150Amt=50*9.5;
  		f250Amt=100*10;
		RemainU=Unit-250;
		RemainAmt= RemainU*11;
		Amount=f20Amt+RemainAmt+f30Amt+f50Amt+f100Amt+f150Amt+f250Amt;	
  		TAmount=Amount+150;
  		printf("Minimum charge= Rs 150\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
		}
		else{
		f20Amt=20*3;
  		f30Amt=10*6.5;
  		f50Amt=20*8;
  		f100Amt=50*9.5;
  		f150Amt=50*9.5;
  		f250Amt=100*10;
  		f400Amt=150*11;
		RemainU=Unit-400;
		RemainAmt= RemainU*12;
		Amount=f20Amt+RemainAmt+f30Amt+f50Amt+f100Amt+f150Amt+f250Amt+f400Amt;	
  		TAmount=Amount+175;
  		printf("Minimum charge= Rs 175\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
		}
		break;
		
		case 15:
			if(Unit<=10){
			Amount=Unit*4;	
			TAmount=Amount+50;
  			printf("Minimum charge= Rs 50\nEnergy chrage= %.2f\n Your bill Amount = Rs %.2f",Amount,TAmount);
		  }
		else if(Unit<=20){
			Amount=Unit*4;
			TAmount=Amount+50;
			printf("Minimum charge=Rs 50\nEnergy charge=Rs %.2f \nYour bill Amount = Rs %.2f",Amount,TAmount);
		}
  		else if(Unit<=30){
  		f20Amt=20*4;
		RemainU=Unit-20;
		RemainAmt= RemainU*6.5;
		Amount=f20Amt+RemainAmt;	
  		TAmount=Amount+75;
  		printf("Minimum charge= Rs 75\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
		  }
  	  	else if(Unit<=50){
  		f20Amt=20*4;
  		f30Amt=10*6.5;
		RemainU=Unit-30;
		RemainAmt= RemainU*8;
		Amount=f20Amt+RemainAmt+f30Amt;	
  		TAmount=Amount+75;
  		printf("Minimum charge= Rs 75\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
			}
		else if(Unit<=100){
		f20Amt=20*4;
  		f30Amt=10*6.5;
  		f50Amt=20*8;
		RemainU=Unit-50;
		RemainAmt= RemainU*9.5;
		Amount=f20Amt+RemainAmt+f30Amt+f50Amt;	
  		TAmount=Amount+100;
  		printf("Minimum charge= Rs 100\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
		}
		else if(Unit<=150){
		f20Amt=20*4;
  		f30Amt=10*6.5;
  		f50Amt=20*8;
  		f100Amt=50*9.5;
		RemainU=Unit-100;
		RemainAmt= RemainU*9.5;
		Amount=f20Amt+RemainAmt+f30Amt+f50Amt+f100Amt;	
  		TAmount=Amount+125;
  		printf("Minimum charge= Rs 125\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
		}
		else if(Unit<=250){
		f20Amt=20*4;
  		f30Amt=10*6.5;
  		f50Amt=20*8;
  		f100Amt=50*9.5;
  		f150Amt=50*9.5;
		RemainU=Unit-150;
		RemainAmt= RemainU*10;
		Amount=f20Amt+RemainAmt+f30Amt+f50Amt+f100Amt+f150Amt;	
  		TAmount=Amount+150;
  		printf("Minimum charge= Rs 150\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
  		
		}
		
		else if(Unit<=400){
		f20Amt=20*4;
  		f30Amt=10*6.5;
  		f50Amt=20*8;
  		f100Amt=50*9.5;
  		f150Amt=50*9.5;
  		f250Amt=100*10;
		RemainU=Unit-250;
		RemainAmt= RemainU*11;
		Amount=f20Amt+RemainAmt+f30Amt+f50Amt+f100Amt+f150Amt+f250Amt;	
  		TAmount=Amount+175;
  		printf("Minimum charge= Rs 175\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
		}
		else{
		f20Amt=20*4;
  		f30Amt=10*6.5;
  		f50Amt=20*8;
  		f100Amt=50*9.5;
  		f150Amt=50*9.5;
  		f250Amt=100*10;
  		f400Amt=150*11;
		RemainU=Unit-400;
		RemainAmt= RemainU*12;
		Amount=f20Amt+RemainAmt+f30Amt+f50Amt+f100Amt+f150Amt+f250Amt+f400Amt;	
  		TAmount=Amount+200;
  		printf("Minimum charge= Rs 200\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
		}
		break;
		
		case 30:
			if(Unit<=10){
			Amount=Unit*5;	
			TAmount=Amount+75;
  			printf("Minimum charge= Rs 75\nEnergy chrage= %.2f\n Your bill Amount = Rs %.2f",Amount,TAmount);
		  }
		else if(Unit<=20){
			Amount=Unit*5;
			TAmount=Amount+75;
			printf("Minimum charge=Rs 75\nEnergy charge=Rs %.2f \nYour bill Amount = Rs %.2f",Amount,TAmount);
		}
  		else if(Unit<=30){
  		f20Amt=20*5;
		RemainU=Unit-20;
		RemainAmt= RemainU*6.5;
		Amount=f20Amt+RemainAmt;	
  		TAmount=Amount+100;
  		printf("Minimum charge= Rs 100\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
		  }
  	  	else if(Unit<=50){
  		f20Amt=20*5;
  		f30Amt=10*6.5;
		RemainU=Unit-30;
		RemainAmt= RemainU*8;
		Amount=f20Amt+RemainAmt+f30Amt;	
  		TAmount=Amount+100;
  		printf("Minimum charge= Rs 100\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
			}
		else if(Unit<=100){
		f20Amt=20*5;
  		f30Amt=10*6.5;
  		f50Amt=20*8;
		RemainU=Unit-50;
		RemainAmt= RemainU*9.5;
		Amount=f20Amt+RemainAmt+f30Amt+f50Amt;	
  		TAmount=Amount+125;
  		printf("Minimum charge= Rs 125\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
		}
		else if(Unit<=150){
		f20Amt=20*5;
  		f30Amt=10*6.5;
  		f50Amt=20*8;
  		f100Amt=50*9.5;
		RemainU=Unit-100;
		RemainAmt= RemainU*9.5;
		Amount=f20Amt+RemainAmt+f30Amt+f50Amt+f100Amt;	
  		TAmount=Amount+150;
  		printf("Minimum charge= Rs 150\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
		}
		else if(Unit<=250){
		f20Amt=20*5;
  		f30Amt=10*6.5;
  		f50Amt=20*8;
  		f100Amt=50*9.5;
  		f150Amt=50*9.5;
		RemainU=Unit-150;
		RemainAmt= RemainU*10;
		Amount=f20Amt+RemainAmt+f30Amt+f50Amt+f100Amt+f150Amt;	
  		TAmount=Amount+175;
  		printf("Minimum charge= Rs 175\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
  		
		}
		
		else if(Unit<=400){
		f20Amt=20*5;
  		f30Amt=10*6.5;
  		f50Amt=20*8;
  		f100Amt=50*9.5;
  		f150Amt=50*9.5;
  		f250Amt=100*10;
		RemainU=Unit-250;
		RemainAmt= RemainU*11;
		Amount=f20Amt+RemainAmt+f30Amt+f50Amt+f100Amt+f150Amt+f250Amt;	
  		TAmount=Amount+200;
  		printf("Minimum charge= Rs 200\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
		}
		else{
		f20Amt=20*5;
  		f30Amt=10*6.5;
  		f50Amt=20*8;
  		f100Amt=50*9.5;
  		f150Amt=50*9.5;
  		f250Amt=100*10;
  		f400Amt=150*11;
		RemainU=Unit-400;
		RemainAmt= RemainU*12;
		Amount=f20Amt+RemainAmt+f30Amt+f50Amt+f100Amt+f150Amt+f250Amt+f400Amt;	
  		TAmount=Amount+225;
  		printf("Minimum charge= Rs 225\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
		}
		break;
			
		case 60:
			if(Unit<=10){
			Amount=Unit*6;	
			TAmount=Amount+125;
  			printf("Minimum charge= Rs 125\nEnergy chrage= %.2f\n Your bill Amount = Rs %.2f",Amount,TAmount);
		  }
		else if(Unit<=20){
			Amount=Unit*6;
			TAmount=Amount+125;
			printf("Minimum charge=Rs 125\nEnergy charge=Rs %.2f \nYour bill Amount = Rs %.2f",Amount,TAmount);
		}
  		else if(Unit<=30){
  		f20Amt=20*6;
		RemainU=Unit-20;
		RemainAmt= RemainU*6.5;
		Amount=f20Amt+RemainAmt;	
  		TAmount=Amount+125;
  		printf("Minimum charge= Rs 125\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
		  }
  	  	else if(Unit<=50){
  		f20Amt=20*6;
  		f30Amt=10*6.5;
		RemainU=Unit-30;
		RemainAmt= RemainU*8;
		Amount=f20Amt+RemainAmt+f30Amt;	
  		TAmount=Amount+125;
  		printf("Minimum charge= Rs 125\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
			}
		else if(Unit<=100){
		f20Amt=20*6;
  		f30Amt=10*6.5;
  		f50Amt=20*8;
		RemainU=Unit-50;
		RemainAmt= RemainU*9.5;
		Amount=f20Amt+RemainAmt+f30Amt+f50Amt;	
  		TAmount=Amount+150;
  		printf("Minimum charge= Rs 150\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
		}
		else if(Unit<=150){
		f20Amt=20*6;
  		f30Amt=10*6.5;
  		f50Amt=20*8;
  		f100Amt=50*9.5;
		RemainU=Unit-100;
		RemainAmt= RemainU*9.5;
		Amount=f20Amt+RemainAmt+f30Amt+f50Amt+f100Amt;	
  		TAmount=Amount+200;
  		printf("Minimum charge= Rs 200\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
		}
		else if(Unit<=250){
		f20Amt=20*6;
  		f30Amt=10*6.5;
  		f50Amt=20*8;
  		f100Amt=50*9.5;
  		f150Amt=50*9.5;
		RemainU=Unit-150;
		RemainAmt= RemainU*10;
		Amount=f20Amt+RemainAmt+f30Amt+f50Amt+f100Amt+f150Amt;	
  		TAmount=Amount+200;
  		printf("Minimum charge= Rs 200\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
  		
		}
		
		else if(Unit<=400){
		f20Amt=20*6;
  		f30Amt=10*6.5;
  		f50Amt=20*8;
  		f100Amt=50*9.5;
  		f150Amt=50*9.5;
  		f250Amt=100*10;
		RemainU=Unit-250;
		RemainAmt= RemainU*11;
		Amount=f20Amt+RemainAmt+f30Amt+f50Amt+f100Amt+f150Amt+f250Amt;	
  		TAmount=Amount+250;
  		printf("Minimum charge= Rs 250\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
		}
		else{
		f20Amt=20*6;
  		f30Amt=10*6.5;
  		f50Amt=20*8;
  		f100Amt=50*9.5;
  		f150Amt=50*9.5;
  		f250Amt=100*10;
  		f400Amt=150*11;
		RemainU=Unit-400;
		RemainAmt= RemainU*12;
		Amount=f20Amt+RemainAmt+f30Amt+f50Amt+f100Amt+f150Amt+f250Amt+f400Amt;	
  		TAmount=Amount+275;
  		printf("Minimum charge= Rs 275\nEnergy charge= Rs %2.f\nYour bill Amount=Rs %.2f",Amount,TAmount);
		}
		break;	
			
  	   default:
  	  	printf("sorry! This Ampere box is not found in nepal,Enter the accurate value");
  	  	break;
  }
  

getch();
}
