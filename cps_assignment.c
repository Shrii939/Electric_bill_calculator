 // Write a program to display the electricity bill of your house.
 //Author shridhar ,code version v0.1 ,15/07/21 --12.51
 //available in  https://github.com/Shrii939/Electric_bill_calculator_  

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void main(){

    // clrscr();
    
    char name[20];
    int ac_no,yy,mm,units_consumed,prev_rdng,pres_rdng;
    float fix,unit_cost,arrears,subsidy,credit,ttl_amnt,tax,enrg_chrg,bill_amnt, credit_a;
    // float* prev_rdng  = (float *)&x;
    
    printf("Enter your name: ");
    scanf("%s[20]",*&name);

    printf("Enter the RR/Account Number: ");
    scanf("%d",&ac_no);

    printf("Enter the Month and Year (MM-YY): ");
    scanf("%d-%d",&mm,&yy);

    printf("What is the fixed charges in Rs: ");
    scanf("%f",&fix);

    printf("Enter the previous Reading: ");
    scanf("%d",&prev_rdng);

    printf("Enter the present reading: ");
    scanf("%d",&pres_rdng);    
    
    printf("Enter the arrears: ");
    scanf("%f",&arrears);

    // char arrs[2]; 
    // printf("Do you have any arreys? (Y/N) : ");
    // scanf("%s[2]",*&arrs);
    // toupper(*arrs);

    // char yes[] = 'Y';

    // if (arrs == yes){
    //    printf("Enter the arrears: ");
    //    scanf("%f",&arrears);
    // }else{
    //     break;
    // }

    printf("Enter the subsidy amount: ");
    scanf("%f",&subsidy);

    // char sub 
    // char no[2] = "N ";
    // printf("Does you're recident eligible for subsidy? (Y/N): ");
    // scanf("%s[2]",*&sub);
    // toupper(*sub);

    // if (sub != no){
    //     printf("Enter the subsidy ammount: ");
    //     scanf("%f",&subsidy);      
    // }else{
    //     break;
    // }    

    printf("Enter the advance amount: ");
    scanf("%f",&credit);

    // char crdt, 
    // char n[2] = "N";
    // printf("Do you have advance? (Y?N): ");
    // scanf("%s",*&crdt);
    // toupper(*crdt);

    // if (crdt != n){
    //     printf("Enter the advance amount: ");
    //     scanf("%f",&credit);
    // }else{
    //     break;
    // }
    

    // printf("Enter tax amount: ");
    // scanf("%f",&tax);

    // printf("The cost for 1-unit of electricity: ");
    // scanf("%f",&unit_cost);

    // calculation

    units_consumed = pres_rdng - prev_rdng;    

    //   char a[100];char b[100];char d[100];char c[100];
    if (units_consumed >= 0 && units_consumed <= 30){
        enrg_chrg = units_consumed * 3.85;
        // a[100] = *"Energy charge = %.2f x 3.85";
        
    }else if (units_consumed >= 31 && units_consumed <= 130 ){ 
        enrg_chrg = 30 * 3.85 + (units_consumed - 30) * 5.15;
        // b[100]= *"Energy charge = 30 x 3.85 + %.2f x 5.15";
        
    }else if (units_consumed >= 131 && units_consumed <= 230){
        enrg_chrg = 30 * 3.85 + 100  * 5.15 + (units_consumed - 130) * 6.70;
        // c[100] = *"Energy charge = 30 x 3.85 + 100 x 5.15 + %.2f x 6.70";
        
    }else {
        enrg_chrg = 30 * 3.85 + 100 * 5.15 + 200 * 6.70 + (units_consumed - 330)* 7.55;
        // d[100] = *"Energy charge = 30 x 3.85 + 100 x 5.15 + 200 x 6.70 + %.2f x 7.55";
        
    }
    

    // tax
    tax = enrg_chrg * 0.09; // its currently 9% here

    bill_amnt = enrg_chrg + fix + tax;

    float c = credit + subsidy;

    ttl_amnt = ((bill_amnt + arrears ) - c);

    if (ttl_amnt <= 0 && ttl_amnt < -1){
        credit = ttl_amnt;
        // fabsf(credit); //its suppose to make -ve to +ve 
        ttl_amnt = 0;
    }   
  

    // output
    printf("\n\n\n--------------Bill------------------------\n\n");
    printf("Name of the customer    :   %s \n",name);
    printf("Account number          :   %d \n",ac_no);
    printf("Date                    :   %02d/%02d \n",mm,yy);
    printf("previous reading        :   %d \n",prev_rdng);
    printf("Current reading         :   %d \n",pres_rdng);
    printf("Unit consumed           :   %d \n",units_consumed);
    printf("Fixed charges           :   %.2f Rs \n",fix);
    printf("Energy charges          :   %.2f Rs \n",enrg_chrg);
    printf("Tax                     :   %.2f Rs \n",tax);
    printf("Bill amount             :   %.2f RS \n",bill_amnt);
    printf("Arrears                 :   %.2f Rs \n",arrears);
    printf("subsidy                 :   %.2f Rs  \n",subsidy);
    printf("credit                  : - %.2f Rs \n",credit);
    printf("Total Bill Amount       :   %.2f Rs \n",ttl_amnt); 
    printf("--------------------END-------------------------------\n");


    prev_rdng = pres_rdng;
    
    // getch();
}


               
