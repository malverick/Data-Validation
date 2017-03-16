/* 
Corresponding C file for header file `data_validate.h`
*/

#include "data_validate.h"
#include <string.h>                                                          //preprocessor directives
#include <stdio.h>

void input_first_name()                                                     //to input first of from the user
{
	int f1,f2;
	char name[100];
	printf("\nPlease enter your first name.\n");
	gets(name);
	f1 = is_empty(name);                                                    //to check for empty input
	f2 = is_valid_name(name);                                               //validation for name
	while( f1 != 1 || f2 != 1)
	{
		printf("\nPlease enter your first name again.\n");
		gets(name);
		f1 = is_empty(name);
		if(f1 == 1)
			f2 = is_valid_name(name);
	}
	printf("\nYour first name is : %s\n",name);
    strcpy(details[0],name);
}
void input_last_name()                                                      //to input second name of the user
{
	int f1,f2;
	char name[100];
	printf("\nPlease enter your last name.\n");
	gets(name);
	f1 = is_empty(name);                                                    //to check for empty input
	f2 = is_valid_name(name);                                               //validation for name
	while( f1 != 1 || f2 != 1)
	{
		printf("\nPlease enter your second name again.\n");
		gets(name);
		f1 = is_empty(name);
		if(f1 == 1)
			f2 = is_valid_name(name);
	}
	printf("\nYour  last name is : %s\n",name);
    strcpy(details[1],name);
}
int is_valid_name(char s[])                                                   //to check validation for name
{
    int i=0,ascii,f=1;
    while(s[i] != '\0')
    {
        ascii = s[i];
        if((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122));      //RANGE check
        else
        {
            f=0;
            printf("\nName should contain only alphabets.\n");
            break;
        }
        i++;
    }
    return f;
}
void input_username()                                                           //to input username of the user
{
	int f1,f2;
	char name[100];
	printf("\nPlease enter your username.\nUsernames can contain letters (a-z), numbers (0-9) and periods (.)\n");
	gets(name);
	f1=is_empty(name);                                                           //to check for empty input
	f2=is_valid_username(name);                                                    //validation for name
	while(f1!=1 || f2!=1)
	{
		printf("\nUsernames can contain letters (a-z), numbers (0-9) and periods (.)\n");
		printf("\nPlease enter your username again.\n");
		gets(name);
		f1=is_empty(name);
		if(f1==1)
			f2=is_valid_username(name);
	}
	printf("\nYour username is : %s@lnmiit.ac.in\n",name);
    strcpy(details[2],name);
}
int is_valid_username(char s[])                                                 //validation for username
{
	int i=0,f2=1,f3=1,l,f1=1;
	l=strlen(s);
	while(s[i] != '\0')
	{
        	if(s[i]<'a' || s[i]>'z' )
                	f1++;
        	i++;
    	}
	i=0;
	if(f1 == l+1)
	{
        	printf("\nUsername should include at least one alphabetical character.\n");
	}
	while(s[i] != '\0')
	{
        	if(s[i] == '.' && s[i+1] == '.')
        	{
			f2=-1;
                    printf("\nUsername should not include consecutive periods\n");
			break;
        	}
		i++;
	}
	i=0;
	while(s[i]!='\0')
	{
		if((s[i]>='a' && s[i] <= 'z') || (s[i]>='0' && s[i]<='9')|| s[i] == '.' );
		else
		{
			f3=0;
			break;
		}
		i++;
	}
	if(f2==1 && f3==1 && f1!=(l+1))
		return 1;
	else return -1;
}
void input_password()                                                       //to input password from user
{
    int f1,f2;
	char name[100],name1[100];
	printf("\nPlease enter your password.\nYour password can contain any combination of ASCII values but should be minimum 8 characters long and should not contain any space.\n");
	gets(name);
	f1 = is_empty(name);
	f2 = is_valid_password(name);
	while( f1 != 1 || f2 != 1)
	{
		printf("\nPlease enter your password again.\nYour password can contain any combination of ASCII values but should be minimum 8 characters long and should not contain any space.\n");
		gets(name);
		f1 = is_empty(name);                                                    //check for empty input
		if(f1==1)
			f2 = is_valid_password(name);                                       //validation for password
	}
	printf("\nPlease confirm your password\n");
    gets(name1);
    while(strcmp(name,name1)!=0)                                                //confirm password from user
    {
        printf("\nPasswords do not match. Confirm your password again.\n");
        gets(name1);
    }

	printf("\nYour password is : %s\n",name);
	strcpy(details[3],name);
}
int is_valid_password(char s[])                                                  //validation for password
{
    int l;
    l=strlen(s);
    if(l<8)                                                                        //LENGTH CHECK
    {
        printf("\nPassword is too short.\n");
        return -1;
    }
    else return 1;
}
void input_valid_gender()                                                           //input and check validation for gender
{
    char s[100];
    printf("\nPlease enter your gender.\nPress 'm' for MALE and 'f' for FEMALE\n");
    gets(s);
    while((s[0]!='m'&&s[0]!='f') || s[1]!='\0')
    {
        printf("\nInvalid input.\n");
        printf("\nPlease enter your gender again.\nPress 'm' for MALE and 'f' for FEMALE\n");
        gets(s);
    }
    if(strcmp(s,"m")==0)
        {
            printf("\nYour gender is MALE\n");
            strcpy(details[4],"MALE");
        }
    else
    {
        printf("\nYour gender is FEMALE\n");
        strcpy(details[4],"FEMALE");
    }
}
void input_mobile()                                                         // input mobile number of user
{
    int f1,f2;
	char mob[100];
	printf("\nPlease enter your 10 digit mobile number.\n");
	gets(mob);
	f1 = is_empty(mob);
	f2 = is_valid_mobile(mob);
	while( f1 != 1 || f2 != 1)
	{
		printf("\nPlease enter your 10 digit mobile number again.\n");
		gets(mob);
		f1 = is_empty(mob);                                                     //for empty input
		if(f1==1)
			f2 = is_valid_mobile(mob);                                          //validation for mobile number
	}
	printf("\nYour mobile number is : %s\n",mob);
    strcpy(details[5],mob);
}
int is_valid_mobile(char s[])                                                 // validation for mobile number
{
    int l,i=0,f1=1,f2=1;
    l=strlen(s);
    while(s[i]!='\0')
    {
        if(s[i]<48 || s[i]>57)                                                  // for valid DATA TYPE
        {
            printf("\nMobile number should contain only digits.\n");
            f1=-1;
            break;
        }
        i++;
    }
    if(l!=10)                                                                   //for valid LENGTH
    {
        printf("\nMobile number should contain exactly 10 digits.\n");
        f2=-1;
    }
    if(f1==1 && f2==1)
        return 1;
    else return 0;
}
void input_country()                                                            //input country of the user
{
    int f1,f2;
	char cntry[100];
	printf("\nPlease enter your country name.\n");
	gets(cntry);
	f1 = is_empty(cntry);
	f2 = is_valid_name(cntry);                                                  //validation for country name
	while( f1 != 1 || f2 != 1)
	{
		printf("\nPlease enter your country name again.\n");
		gets(cntry);
		f1 = is_empty(cntry);                                                   //to check for empty input
		if(f1==1)
			f2 = is_valid_name(cntry);
	}
	printf("\nYour country name is : %s\n",cntry);
	strcpy(details[7],cntry);
}
void input_date_of_birth()                                                      //input date of birth
{
    int f1,f2;
	char date[100];
	printf("\nPlease enter your date of birth in dd/mm/yyyy format.\n");
	gets(date);
	f1 = is_empty(date);                                                        //check for empty input
	f2 = is_valid_date_of_birth(date);                                          //validation for date of birth
	while( f1 != 1 || f2 != 1 )
	{
	    printf("\nPlease enter your date of birth again in dd/mm/yyyy format.\n");
		gets(date);
		f1 = is_empty(date);
		if(f1==1)
			f2 = is_valid_date_of_birth(date);
	}
	printf("\nYour date of birth is %c%c/%c%c/%c%c%c%c\n",date[0],date[1],date[3],date[4],date[6],date[7],date[8],date[9]);
    strcpy(details[6],date);
}
int is_valid_date_of_birth(char s[])                                               //validation for date of birth
{
    int i=0,l,f=1,ascii,digit,date=0,month=0,year=0;
    int max_dates[13] = {1,31,28,31,30,31,30,31,31,30,31,30,31};
    l=strlen(s);
    if(l!=10)
    {
        printf("\nInvalid date\n");
        f = -1;
    }
    if (f==1)
    {
        while(s[i]!='\0')
        {
            ascii=s[i];
            if(ascii<47 || ascii >57)                                               //DATA TYPE check
            {
                printf("\nDate of birth should contain only numbers.\n");
                f = -1;
            }
            if( f == 1 )
            {
                if(  i != 2 && i != 5  && s[i] == '/' )                             //FORMAT check
                {
                    printf("%d",i);
                    printf("\nInvalid date\n");
                    f = -1;
                }
            }
            i++;
        }
    }
    i=0;
    if(f==1)
    {
        for(i=0;i<10;i++)
        {
            digit = convert_to_digit(s[i]);
            if(i<2)
                date = date*10 + digit;
            if(i>2 && i<5)
                month = month*10 + digit;
            if(i>5)
                year = year*10 + digit;
        }
        if(year < 1900 || year > 2015)                                          //RANGE check
        {
            printf("\nYear of birth not possible.\n");
            f = -1 ;
        }
    }
    if(f==1)
    {
        if(year % 4 == 0 && year != 1900)
            max_dates[2] = 29;
        if(month<1 || month>12)                                                 //RANGE check
        {
            printf("\nInvalid month of birth.\n");
            f = -1;
        }
    }
    if(f==1)
    {
        if(date == 0 || date > max_dates[month])                                //RANGE check
        {
            printf("\nInvalid date of birth\n");
            f = -1;
        }
    }
    if (f == 1)
        return 1;
    else return -1;
}
int convert_to_digit(char c)                                                       //convert numeric character to integer
{
    int i=48,ascii=c;
    while(i!=58)
    {
        if(ascii == i)
        {
            return (ascii-48);
            break;
        }
        i++;
    }
    return 0;
}
void input_agreement()
{
    char c[100];
    printf("\nDo you agree to the Google Terms of Service and Privacy Policy\n");
    printf("\nPress 'y' for YES or 'n' for NO\n");
    gets(c);
    while(c[0]!='y' || c[1]!='\0')
    {
        printf("\nIn order to use Google's services, you must agree to Google's Terms of Service.\n");
        printf("\nPress 'y' for YES or 'n' for NO\n");
        gets(c);
    }
    printf("\nYou agreed to the Google Terms of Service and Privacy Policy.\n");
}
int is_empty(char s[])                                                  //check for empty input
{
	int i=0,f1=1,ascii;
	while(s[i]!='\0')
	{
	    ascii=s[i];
	    if(ascii == 32)
            f1++;
	    i++;
	}
	if(s[0]=='\0')                                                      //for no input
	{
		printf("\ninvalid input\n");
		f1=-1;
	}

	if(f1>1)
        printf("\nSpace should not be used.\n");


	return f1;
}
void print_details()                                                       //for printing all the details entered by the user
{
    printf("\n Congratulations. !!\nYour Google account at LNMIIT is registered.\n\nYour details are as follows: \n");
    printf("\nName\t\t\t:\t\t%s %s\n",details[0],details[1]);
    printf("\nUsername\t\t:\t\t%s\n",details[2]);
    printf("\nGender\t\t\t:\t\t%s\n",details[4]);
    printf("\nMobile Number\t\t:\t\t%s\n",details[5]);
    printf("\nDate of birth\t\t:\t\t%s\n",details[6]);
    printf("\nCountry\t\t\t:\t\t%s\n",details[7]);
    printf("\nPassword\t\t:\t\t%s\n",details[3]);
    printf("\nDo not share your password with anyone.\n\nKindly log in at ''https://mail.google.com/mail/'' to access your account.\n");
}
