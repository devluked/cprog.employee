/***************************
//This program finds salary raises
//Made by: Luke Duggan
//ID#: 1061931
//10/22/2017
//CS 36
//**************************/
float input();
float rate(float s);
void findRaise(float s, float rt, float *rs, float *tolraise);
void findNewSal(float s, float rt, float *newsal, float *tolnewsal);
void print(float *s, float *rs, float *rt, float *newsal);

int main()
{
char func;
float s, rs, rt, newsal, tolnewsal, tolraise;
printf("Would you like to run Salary Program? (Y/N): ");
scanf("%c",&func);
switch(func)
{
case 'Y':case 'y':

s = input();
rt = rate(s);
findRaise(s,rt,&rs,&tolraise);
findNewSal(s,rs,&newsal,&tolnewsal);
printf("Current Salary        Rate %%  Raise    New Salary\n");
print(&s,&rs,&rt,&newsal);

s = input(); //Repeat to get more then one salary, and calculate more raises
rt = rate(s);
findRaise(s,rt,&rs,&tolraise);
findNewSal(s,rs,&newsal,&tolnewsal);
printf("Current Salary        Rate %%  Raise    New Salary\n");
print(&s,&rs,&rt,&newsal);

s = input();
rt = rate(s);
findRaise(s,rt,&rs,&tolraise);
findNewSal(s,rs,&newsal,&tolnewsal);
printf("Current Salary        Rate %%  Raise    New Salary\n");
print(&s,&rs,&rt,&newsal);
break;
case 'N': case 'n':printf("END OF PROGRAM");
break;
default:printf("END OF PROGRAM");
break;
}
return 0;
}
float input() //INPUT
{
    float s;
    printf("Enter salary: ");
    scanf("%f",&s);
    return s;
}
float rate(float s) //CALC RAISE RATE
{
    if (s>0 && s<=30000)
        return .07;
    if (s>30000 && s<=40000)
       return .055;
    if (s>40000)
        return .04;
}
void findRaise(float s, float rt, float *rs, float *tolraise) //CALC RAISE
{
    *rs = (s * rt);
    *tolraise = *rs; //Could not get total sum of raises  to work
}
void findNewSal(float s, float rt, float *newsal, float *tolnewsal) //CALC NEW SALARY
{
    *newsal = s + rt;
    *tolnewsal = *newsal; //Could not get total sum of new salaries to work
}
void print(float *s, float *rs, float *rt, float *newsal) //PRINT OLD SALARY, SALARY RATE, SALARY RAISE, NEW SALARY
 {
        printf("%.2f              %.2f    %.2f     %.2f\n",*s, *rt,*rs, *newsal);
 }

//Would you like to run Salary Program? (Y/N): Y
//Enter salary: 15234.67
//Current Salary        Rate %  Raise    New Salary
//15234.67              0.07    1066.43     16301.10
//Enter salary: 78291.19
//Current Salary        Rate %  Raise    New Salary
//78291.19              0.04    3131.65     81422.84
//Enter salary: 35000.5
//Current Salary        Rate %  Raise    New Salary
//35000.50              0.05    1925.03     36925.53
//
//Process returned 0 (0x0)   execution time : 36.754 s
//Press any key to continue.

//Would you like to run Salary Program? (Y/N): N
//END OF PROGRAM
//Process returned 0 (0x0)   execution time : 0.911 s
//Press any key to continue.



