#include <stdio.h>
int main(){
    int geo_political_zone;
    printf("Please enter your geopolitical zone:\nFor North_East Enter 1\nFor South_West Enter 2\nFor North_Central Enter 3\nFor North_West Enter 4\nFor South_South Enter 5\nFor South_East Enter 6\n ");
    scanf("%d",&geo_political_zone);
    if (geo_political_zone==1)
    {
        printf("The Fuel pump price in the North_East is N557");
    }
    else if (geo_political_zone==2)
    {
       printf("The Fuel pump price in the South_West is N500");  
    }
    else if (geo_political_zone==3)
    {
      printf("The Fuel pump price in the North_central is N515");    
    }
    else if (geo_political_zone==4)
    {
        printf("The Fuel pump price in the North_West is N540");  
    }
    else if (geo_political_zone==5)
    {
        printf("The Fuel pump price in the South_South is N511");  
    }
    else{
       printf("The Fuel pump price in the South_East is N520");   
    }
    return 0;
}