#include<stdio.h>

int main(){

    // int a,b,c,d;
    // scanf("%d %d %d %d",&a,&b,&c,&d);
    // // printf("%d %d %d %d\n",a,b,c,d);
    // if ((a+b-c==d)||(a-b+c==d) ||(a+(b*c)==d)||((a*b)+c==d)||(a-(b*c)==d) ||((a*b)-c==d)){
    //     printf("Yes\n") ;
    // }
    // else{
    //     printf("No\n") ;
    // }


    char i;
    scanf("%c",&i);
    if(i>='a' && i<='z'){
        if(i=='z'){
            printf("a");
        }
        else{
            i++;
            printf("%c",i);
        }
    }
    else{
        printf("No");
    }
    return 0;
}



/*
a+b-c=d   
a-b+c=d

a+b*c==d
a*b+c==d

a-b*c==d
a*b-c==d
*/