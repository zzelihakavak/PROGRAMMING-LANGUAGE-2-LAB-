#include <stdio.h>
 
int main()
{
    float height;
    int weight;
    int conclusion;
     
    printf("Enter Your Height: ");
    scanf("%f",&height);
    printf("Enter Your Weight: ");
    scanf("%d",&weight);
     
    conclusion = weight / (height * height);
    printf("Body Index = %d\n",conclusion);
     
    if(conclusion < 18){
        printf("YOU ARE WEAK");
    }
    else if(conclusion < 25){
        printf("YOU ARE NORMAL");
    }
    else if(conclusion < 30){
        printf("YOU ARE FAT");
    }
    else if(conclusion >30){
        printf("YOU ARE OBESE");
    
    }
}
