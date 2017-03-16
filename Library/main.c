#include "data_validate.h"
#include <stdio.h>

int main()                                                                 //defining main
{
	printf ( "\nCreate your Google account at LNMIIT !!\n" );
	input_first_name();                                                     //main calling all functions
	input_last_name();
	input_username();
	input_password();
    input_valid_gender();
    input_mobile();
    input_date_of_birth();
    input_country();
    input_agreement();
    print_details();

    return 0;
}
