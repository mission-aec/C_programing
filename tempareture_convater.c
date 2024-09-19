//tampareture convater using switch
#include<stdio.h>
int main()
{
    int choich;
    float c,f,k;
    
    printf("1.fahrenhight to calsius \n");
    printf("2.calsius to fahrenhight \n");
    printf("3.calsius to kalvin\n");
    printf("4.kalvin to calsius \n");
    printf("5.fahrenhight to kalvin \n");
    printf("6.kalvin to fahrenhight \n");
    printf("choice tempareture manu: ");
    scanf("%d",&choich);
    printf("you choich number is: %d\n",choich);
    switch (choich)
    {
    case 1:
        {
            printf(" Enter fahrenhight tempareture: ");
            scanf("%f",&f);
            printf("your fahrenhight tampareture : %f\n",f);
            c=(f-32)/1.8;
            printf("your calsius tampareture: %f\n",c);
            break;
        }
    case 2:
        {
            printf(" Enter calsius tampareture: ");
            scanf("%f",&c);
            printf("your calsius tampareture : %f\n",c);
            f=(c*1.8)+32;
            printf("your fahrenhight tampareture %f\n",f);
            break;
        }
    case 3:
        {
            printf(" Enter calsius tampareture: ");
            scanf("%f",&c);
            printf("your calsius tampareture : %f\n",c);
            k=c+273;
            printf("your kalvin tampareture: %f\n",k);
            break;
        }
    case 4:
        {
            printf(" Enter kalvin tampareture: ");
            scanf("%f",&k);
            printf("your kalvin tampareture : %f\n",k);
            c=k-273;
            printf("your calsius tamparteture : %f\n",c);
            break;
        }
    case 5:
        {
            printf(" Enter fahrenhight tampareture: ");
            scanf("%f",&f);
            printf("your fahrenhight tampareture : %f\n",f);
            k=((f-32)/1.8)+273;
            printf("your kalvin tampareture : %f\n",k);
            break;
        }
    case 6:
        {
            printf(" Enter kalvin tampareture: ");
            scanf("%f",&k);
            printf("your kalvin tampareture : %f\n",k);
            f=((k-273)*1.8)+32;
            printf("your fahrenhight tampareture: %f\n",f);
            break;
        }    
    default:
        {
            printf(" your choich is wrong ");
            break;
        }
        
    }    
    
return 0;         

}