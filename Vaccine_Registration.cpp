#include <stdio.h>
#include<string.h>
#include <stdlib.h>
int main() {	

int randomMonth;
int randomDays;
 
int age;
int btemp;
char gender;
char name[500];
char surname[500];
char address[500];
char mobileNumber[600];
char vaccinetype[1000];
char username[500];
char password[500];
char username2[500];
char password2[500];
char patient;
int tempcheck;
int st;
int vacdecision;
int vacdate;
int sinamo=100;
int bioamo=100;
int astamo=100;
int jhonamo=100;
int patientnumber= 0;
int preregpatnum = 0;
int d, m, year;
int id;		
int vacbefore;
char name2[500];
char surname2[500];
char vactype2[500];	
	
do{
	
printf("\n\t\t\t *Welcome to TRNC Vaccine Registration System by Ege Kolcu*\n");
puts("");
printf("Enter 1 for New Registration\n");
printf("Enter 2 for View Your Documents If you Registrated Before\n");	
printf("Enter 3 If you took the COVID-19 vaccine before but didnt registered the system: \n");
		   
scanf("%d", &st);

switch(st){
	
case 1:

printf("You Selected New Registration\n");
patientnumber = patientnumber + 1;
printf("We need few  information to create your health account:\n");
puts("Please fill the form carefully\n");
printf("Enter your Gender (M / F)");
scanf(" %c", &gender);
printf("Enter Your Age: ");
scanf("%d", &age );
printf("Please enter your Name: ");
scanf(" %s", &name);
printf("Enter your surname: ");
scanf(" %s", &surname);

printf("Please check your body temperature and pres 1 to continue and enter your result: ");
scanf("%d", &tempcheck);
if(tempcheck == 1){
puts("Good. Now enter your body temperature");	
scanf("%d", &btemp);}
else{
	puts("Invalid input entered. Please register again. ");
	break;
}

printf("Enter your phone number to contanct you: ");
scanf("%s" , &mobileNumber);

printf("Please enter your current address: ");
scanf("%s", &address);


printf("Total number of vaccines available is:\n");
printf(" %d Sinovac\n %d Biontech\n %d Astrazeneka\n %d Jhonson&Jhonson\n", sinamo, bioamo, astamo, jhonamo);
printf("Press 1 or Sinovac, 2 for Biontech, 3 for Astrazeneca, 4 for Jhonson and Jhonson");
printf("Which vaccine do you want to take? ");
scanf("%d", &vacdecision);



if (vacdecision == 1) {
puts("");	
printf("\t\t\t**Here is your timetable for all Sinovac doses**\n\n" );
puts("");
printf("Enter your preffered vaccination day(day only): ");
scanf("%d", &randomDays);
printf("Enter your preffered vaccination month(month only): ");
scanf("%d" , &randomMonth);
printf("Your second Sinovac dose time is: %d / %d (1 month later)\n\n ", randomDays+1, randomMonth+1);
puts("IMPORTANT: YOUR THIRD DOSE WILL NOT BE SINOVAC, YOU HAVE TO TAKE BIONTECH OR ASTRAZENECA after 3 month from your second dose.");
sinamo = sinamo - 1;
printf("Number of remaining Sinovacs are: %d\n\n", sinamo);
puts(""); }

else if (vacdecision == 2) {
	puts("");
	printf("\t\t\t**Here is your timetable for all Biontech doses**\n\n" );
	puts("");
printf("Enter your preffered vaccination day(day only): ");
scanf("%d", &randomDays);
printf("Enter your preffered vaccination month(month only): ");
scanf("%d" , &randomMonth);
printf("\nYour second Biontech dose time is: %d / %d  (2 month later)\n ", randomDays+1 , randomMonth+1);
bioamo = bioamo -1;
printf("Number of remaining Biontechs are: %d\n\n", bioamo);
}

else if (vacdecision == 3) {
	puts("");
	printf("\t\t\t**Here is your timetable for all Astrazeneca doses**\n\n" );
	puts("");
printf("Enter your preffered vaccination day(day only): ");
scanf("%d\n", &randomDays);
printf("Enter your preffered vaccination month(month only): ");
scanf("%d\n", &randomMonth);
printf("Your second Astrazeneca dose time is: %d / %d (3 month later)\n\n ", randomDays+1, randomMonth+1);
astamo = astamo - 1;
printf("Number of remaining Astrazenecas are: %d\n\n", astamo);
}


else if (vacdecision == 4) {
	puts("");
	printf("\t\t\t**Here is your timetable for all Jhonson&Jhonson doses**\n\n" );
	puts("");
printf("Enter your preffered vaccination day(day only): ");
scanf("%d\n", &randomDays);
printf("Enter your preffered vaccination month(month only): ");
scanf("%d\n", &randomMonth);
	puts("\n**IMPORTANT: IF YOU ARE OLDER THAN 55 JHONSON&JHONSON CAN BE DANGEROUS FOR YOUR HEALTH. PLEASE SEE A DOCTOR FIRST**");	
printf("\n\n Your second Jhonson&Jhonson dose time is: %d / %d (1 month later)\n\n ", randomDays+1, randomMonth+1);
jhonamo = jhonamo - 1;
printf("Number of remaining Jhonson&Jhonsons are: %d\n\n", jhonamo);
}

printf("Please enter an username to create your account: ");
scanf(" %s", &username);

printf("Enter a password for your new account: ");
scanf(" %s", &password);

printf("Your informations has been saved. Please login to your account to see your informations.\n\n ");	

case 2:
{

printf(" To view your documents please login to your account.\n");
printf(" If you didnt register before please register first and take your username and password.\n\n");	

	
printf("Enter your username: ");	
scanf(" %s", &username2);
printf("Enter your password: ");
scanf(" %s", &password2);


if( (strcmp(username,username2)==0) && (strcmp(password,password2)==0) ){
        printf("\nUser and password correct!\n");
		printf("Gender: %c\n Age: %d\n Name: %s\n Surname: %s\n Body Temperature: %d\n Mobile Number(for contact): %s\n Address: %s\n Vaccine Type: %d\n Vaccine Date: %d / %d\n ", gender, age, name,surname, btemp, mobileNumber, address, vacdecision, randomDays, randomMonth );
}
	else{       
	printf("\nUsername or password incorrect!\n\n");
	}
 


break;

}

case 3:
	{

		
printf("\t\t\t**You selected Pre-Registered for Vaccine**\n ");
preregpatnum = preregpatnum + 1;

printf("Please enter your ID number: ");
scanf("%d", &id);

printf("Enter your Name: ");
scanf(" %s", &name2);

printf("Enter your Surname: ");
scanf(" %s", &surname2);

printf("Enter your Vaccine Type.(Sinovac, Astrazeneca, Biontech, Jhonson&Jhonson)");
scanf(" %s", &vactype2);

 printf("Please Enter the date you were previously vaccinated: (dd/mm/yy): ");
 scanf("%d/%d/%d", &d,&m,&year);
 
 printf("If you had only 1 doses enter 1 for enter new date for next COVID-19 vaccine otherwise enter any number to continue: \n");
 scanf("%d", &vacbefore);
 
 if(vacbefore == 1){
 printf("Your next vaccination %s will be on this date, (day / month)\n: ", vactype2);
printf("Enter next vaccination day (ex: 03 , 28):");
scanf("%d", &randomDays);
printf("Enter next vaccination month (ex, 10, 04)");
scanf("%d", &randomMonth);

printf("\nPlease go to nearist hospital on this date for next vaccination: %d / %d\n", randomDays, randomMonth);

}

		
break;

	}
default:
	
printf("Incorrect input. Check your input.");

break;	


}

printf ("\nDo you want to add new patient? (Y-y for yes , N-n for no)");
scanf (" %c", &patient);


}
while (patient != 'N'&& patient != 'n');
printf("\n\n\n\nHere is final document!\n\n");
printf("Total new patient number is: %d \n" , patientnumber);
printf("Total Pre-Vaccined patient number is: %d\n", preregpatnum );
printf("Total Number of Remaining Sinovac: %d\n ", sinamo);
printf("Total Number of Remaining Biontech: %d\n", bioamo);
printf("Total Number of Remaining Astrazeneca: %d\n", astamo);
printf("Total Number of Remaining Jhonson&Jhonson: %d", jhonamo);

if(st == 1) {
printf(" Gender: %c\n Age: %d\n Name: %s\n Body Temperature: %d\n Mobile Number(for contact): %s\n Address: %s\n Vaccine Type: %d\n Vaccine Date: %d / %d\n ", gender, age, name,btemp, mobileNumber, address, vacdecision, randomDays, randomMonth );
}

else if (st == 3) {
	
printf("ID NUM: %d\n Name-Surname %s %s\n Vaccine Type: %s\n Previous Vac Date: %d / %d / %d, \n Next Vaccine Date: %d / %d ", id, name2, surname2, vactype2, d, m, year, randomDays, randomMonth);
}

return 0;
	
}
