#include <stdio.h>
 int main(){
     int x;
     double y;
     printf("Enter units in kwh: ");
     scanf("%d",&x);       
       if (x>0 && x<=60){
           if (x<=30){
               y=30+2.5*x;
           } else {
              y=60+30*2.5+(x-30)*4.85;
           }
        } else if (x>60 && x<=90){
            y=60*7.85+(x-60)*10+90;
        } else if (x>90 && x<=120){
            y=60*7.85+30*10+(x-90)*27.75+480;
        } else if (x>120 && x<=180){
            y=60*7.85+30*10+30*27.75+(x-20)*32+480;
        } else if (x>180){
            y=60*7.85+30*10+30*27.75+30*32+(x-180)*45+540;
       } else {
          printf("-1\n");     
       }
          printf("The total payment is %0.2f;\n",y);
       return 0;
}

