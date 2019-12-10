//
//  main.cpp
//  blah
//
//  Created by Brandon Johns on 11/8/17.
//  Copyright © 2017 Brandon Johns. All rights reserved.
//

#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
void enableFlushAfterPrintf()
{
    setvbuf(stdout, 0, _IONBF, 0);
    setvbuf(stdin, 0, _IONBF, 0);
}
typedef struct _userinfo
{
    float maxscores;
    float userscores;
    char firstname[100];
    char lastname[100];
    char lettergrade;
 
    
} user;


_userinfo studentinfo()
{
    _userinfo user;
    printf("what is your first name?: \n");
    scanf("%s",user.firstname);
    
    printf("what is your last name?: \n");
    scanf("%s",user.lastname);
    

    printf("what was the max score?: \n");
    scanf("%f",&user.maxscores);
    
    printf("what was your score? : \n");
    scanf("%f", &user.userscores);
    
    return user;
}



void lettergrade()
{
    _userinfo user;
    if (user.userscores>=90 && user.userscores<=99)
    {
        user.lettergrade='A';
        
    }
    else if (user.userscores>=80 && user.userscores<=89)
    {
        user.lettergrade='B';
        
    }
    
    else if (user.userscores>=70 && user.userscores<=79)
    {
        user.lettergrade='C';
        
    }
    else if (user.userscores>=60 && user.userscores<=69)
    {
        user.lettergrade='D';
        
    }
    else
    {
        user.lettergrade='F';
        
    }
    printf("your letter grade is %c \n", user.lettergrade);
    
}


void percentage()
{
    _userinfo user;
    float percent=0;
    percent= (user.userscores /user.maxscores)*100;
    printf("your percentage is %.2f: ", percent);
}

void printstudentinfo(user *ptr)
{
  
    printf("%s ", ptr->firstname);
    printf("%s \n", ptr->lastname);
    printf("%.2f \n ", ptr-> maxscores);
    printf("%.2f\n ", ptr-> userscores);
    lettergrade();
    percentage();
    
}



int main()
{
enableFlushAfterPrintf();
    
    printf("how many students?: \n");
    int student=0;
    
  

    scanf("%i", &student);
   _userinfo user[student];
    
    
    for (int i=0; i<student; i++)
    {
        user[i]= studentinfo();
    }
    for (int i=0; i<student; i++)
    {
        printstudentinfo(&user[i]);
        printf("\n");
    }
   
    
    
    
    
    
    
  
    
    

}

