#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void empdetails();
void add();  //FUNCTIONS
void list();
void edit();  //GLOBALLY DECLARED FUNCTIONS N VARIABLE
void delete1();
void search();
int calc();
void dailyprofitcalc();
void petrolfun();
void dieselfun();

void setcolor(int ForgC)
{ WORD wColor;
HANDLE hStdOut=GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO csbi;

if(GetConsoleScreenBufferInfo(hStdOut,&csbi))
{
	wColor=(csbi.wAttributes & 0xB0)+(ForgC & 0x0B);
//	SetConsoleTextAttributes(hStdOut,wColor);
	SetConsoleTextAttribute(hStdOut,wColor);
	
}
}

void login()
{
	
	int a=0,i=0;
    char uname[10],c=' '; 
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="pass";
    do
{
	system("cls");
	
    printf("\n  **************************  LOGIN FORM  **************************  ");
    printf(" \n                       ENTER USERNAME:-");
	scanf("%s", &uname); 
	printf(" \n                       ENTER PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	//char code=pword;
	i=0;
	//scanf("%s",&pword); 
		if(strcmp(uname,user)==0 && strcmp(pword,pass)==0)
	{
	printf("  \n\n\n       WELCOME !!!! LOGIN IS SUCCESSFUL");
	
	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;
		
		getch();
		
	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");
		
		getch();
		
		}
		system("cls");	
}

struct EmployeeDetails   //STRUCTURE DECLARATION
{
	char EID[10];
	char name[20];
	char address[25];
	char phonenumber[15];
	char nationality[15];	
	char email[20];
}s;

int main(){     // MAIN FUNCTION	
	int i=0;
	
	time_t t;
	time(&t);
	char choice;

	system("cls");   // FOR CLEARING SCREEN
	setcolor(15);
 	printf("\t\t*************************************************************\n");
	printf("\t\t*                                                           *\n");
	printf("\t\t*       -----------------------------------------           *\n");
	printf("\t\t*        WELCOME TO PETROL BUNK MANAGEMENT SYSTEM           *\n");
	printf("\t\t*       -----------------------------------------           *\n");
	printf("\t\t*                                                           *\n");
	printf("\t\t*                                                           *\n");
	printf("\t\t*                                                           *\n");
	printf("\t\t*         Brought To You By MEGHAN, KARTHEEK, HARINI        *\n");
	printf("\t\t*                                                           *\n");
	printf("\t\t*                                                           *\n");
	printf("\t\t*************************************************************\n\n\n");
		for(i=0;i<80;i++){
		printf("-");}
	    printf("\nCurrent date and time : %s",ctime(&t));
	    for(i=0;i<80;i++){
		printf("-");}
	printf(" \n Press any key to continue:");
	
	getch();	
    system("cls");
    login();
    system("cls");
	while (1)      // INFINITE LOOP
	{
		system("cls");
		setcolor(10);
		 for(i=0;i<80;i++){
		printf("-");}
		printf("\n");
		printf("   ******************************  |MAIN MENU|  ***************************** \n");
		for(i=0;i<80;i++){
		printf("-");}
		printf("\n");
		setcolor(10);
		printf("\t\t *Please enter your choice for menu*:");
		printf("\n\n");
		printf(" \n Enter 1 ->  Employee Details");
		printf("\n-----------------------------------");
		printf(" \n Enter 2 -> Petrol sale calculator");
		printf("\n----------------------------------");
		printf(" \n Enter 3 -> Diesel Sale Calculator");
		printf("\n-----------------------------------");
		printf(" \n Enter 4 -> Daily Profit Estimator");
		printf("\n-----------------------------------");
		printf(" \n Enter 5 -> Basic Calculator");
		printf("\n-----------------------");
		printf(" \n Enter 6 -> Exit");
		printf("\n-----------------");
		printf("\n");
		for(i=0;i<80;i++){
		printf("-");}
	    printf("\nCurrent date and time : %s",ctime(&t));
	    for(i=0;i<80;i++){
		printf("-");}
		
		choice=getche();
		choice=toupper(choice);
		switch(choice)           // SWITCH STATEMENT
		{	
			case '1':
				empdetails();break;
			case '2':
				petrolfun();break;
			case '3':
				dieselfun();break;
			case '4':
				dailyprofitcalc();break;
			case '5':
				calc();break;
			case '6':
				system("cls");
				printf("\n\n\t *****THANK YOU*****");
			//	Sleep(2000);
				exit(0);
				break;
			default:
				system("cls");
				printf("Incorrect Input");
				printf("\n Press any key to continue");
				getch();
		}
	}
}

void empdetails()
{
    system("cls");
	setcolor(10);
    time_t t;
	time(&t);
	char choice;
    printf("   ******************************  |Employee Menu|  ***************************** \n");
		for(int i=0;i<80;i++){
		printf("-");}
		printf("\n");
		setcolor(10);
		printf("\t\t *Please enter your choice for menu*:");
		printf("\n\n");
		printf(" \n Enter 1 ->  Add Employee Details");
		printf("\n-----------------------------------");
		printf(" \n Enter 2 -> List Employee Details");
		printf("\n----------------------------------");
		printf(" \n Enter 3 -> Delete Employee Record");
		printf("\n-----------------------------------");
		printf(" \n Enter 4 -> Search Employee Record");
		printf("\n-----------------------------------");
		printf(" \n Enter 5 -> Edit Record");
		printf("\n-----------------------");
		printf(" \n Enter 6 -> Exit");
		printf("\n-----------------");
		printf("\n");
        int i;
		for(i=0;i<80;i++){
		printf("-");}
	    printf("\nCurrent date and time : %s",ctime(&t));
	    for(i=0;i<80;i++){
		printf("-");}
		
		choice=getche();
		choice=toupper(choice);
		switch(choice)           // SWITCH STATEMENT
		{	
			case '1':
				add();break;
			case '2':
				list();break;
			case '3':
				delete1();break;
			case '4':
				search();break;
			case '5':
				edit();break;
			case '6':
			break;
			default:
				system("cls");
				printf("Incorrect Input");
				printf("\n Press any key to continue");
				getch();
		}
}
void add()
{
	FILE *f;
	char test;
	f=fopen("add.txt","a+");
	if(f==0)
	{   f=fopen("add.txt","w+");
		system("cls");
		printf("Please hold on while we set our database in your computer!!");
		printf("\n Process completed press any key to continue!! ");
		getch();
	}
	while(1)
	{
		system("cls");
		printf("\n Enter Employee Details:");
		printf("\n**************************");
		printf("\n Enter EID number:\n");
		scanf("\n%s",s.EID);
		fflush(stdin);
		printf("Enter Name:\n");
		scanf("%s",s.name);
		printf("Enter Address:\n");
		scanf("%s",s.address);
		printf("Enter Phone Number:\n");
		scanf("%s",s.phonenumber);
		printf("Enter Nationality:\n");
		scanf("%s",s.nationality);
		printf("Enter Email:\n");
		scanf(" %s",s.email);
		fwrite(&s,sizeof(s),1,f);
		fflush(stdin);
		printf("\n\n1 Employee is successfully Added!!");
		printf("\n Press esc key to exit,  any other key to add another employee detail:");
		test=getche();
		if(test==27)
			break;
			
	}
	fclose(f);
}

void list()
{
	FILE *f;
	int i;
	if((f=fopen("add.txt","r"))==NULL)
		exit(0);
	system("cls");
	printf("EID    ");
	printf("NAME\t ");
	printf("\tADDRESS ");
	printf("\tPHONENUMBER ");
	printf("\tNATIONALITY ");
	printf("\tEMAIL ");
	

	while(fread(&s,sizeof(s),1,f)==1)
	{
		/*printf("EID :\t%s\n",s.EID);
		printf("NAME:\t%s\n",,s.name);
		printf("ADDRESS:\t%s\n",s.address);
		printf("PHONENUMBER:\t%s\n",s.phonenumber);
		printf("NATIONALITY \n");*/
		printf("\n%s \t%s \t\t%s \t\t%s \t%s  \t%s \t ",s.EID, s.name , s.address , s.phonenumber ,s.nationality ,s.email);
	}


	fclose(f);
	getch();
}

void delete1()
{
	FILE *f,*t;
	int i=1;
	char eid[20];
	if((t=fopen("temp.txt","w"))==NULL)
	exit(0);
	if((f=fopen("add.txt","r"))==NULL)
	exit(0);
	system("cls");
	printf("Enter the EId Number of the Employee to be deleted from the database: \n");
	fflush(stdin);
	scanf("%s",eid);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.EID,eid)==0)
		{       i=0;
			continue;
		}
		else
			fwrite(&s,sizeof(s),1,t);
	}
	if(i==1)
	{       
		printf("\n\n Records of Employee in this  EID number is not found!!");
		//remove("E:/file.txt");
	   //rename("E:/temp.txt","E:/file.txt");
		getch();
		fclose(f);
		fclose(t);
		main();
	}
	fclose(f);
	fclose(t);
	remove("add.txt");
	rename("temp.txt","add.txt");
	printf("\n\nThe Employee is successfully removed....");
	fclose(f);
	fclose(t);
	getch();
}

void search()
{
system("cls");
	FILE *f;
	char eid[20];
	int flag=1;
	f=fopen("add.txt","r+");
	if(f==0)
		exit(0);
	fflush(stdin);
	printf("Enter EID number of the Employee to search its details: \n");
	scanf("%s", eid);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.EID,eid)==0){
			flag=0;
			printf("\n\tRecord Found\n ");
			printf("\nEID Number:\t%s",s.EID);
			printf("\nName:\t%s",s.name);
			printf("\nAddress:\t%s",s.address);
			printf("\nPhone number:\t%s",s.phonenumber);
			printf("\nNationality:\t%s",s.nationality);
			printf("\nEmail:\t%s",s.email);
			flag=0;
			break;
		}
	}
	if(flag==1){	
		printf("\n\tRequested Employee could not be found!");
	}
	getch();
	fclose(f);
}

void edit()
{
	FILE *f;
	int k=1;
	char eid[20];
	long int size=sizeof(s);
	if((f=fopen("add.txt","r+"))==NULL)
		exit(0);
	system("cls");
	printf("Enter EID number of the employee to edit:\n\n");
	scanf("%[^\n]",eid);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.EID,eid)==0)
		{
			k=0;
			printf("\nEnter EID Number     :");
			gets(s.EID);
			printf("\nEnter Name    :");
			fflush(stdin);
			scanf("%s",&s.name);
			printf("\nEnter Address        :");
			scanf("%s",&s.address);
			printf("\nEnter Phone number :");
			scanf("%f",&s.phonenumber);
			printf("\nEnter Nationality :");
			scanf("%s",&s.nationality);
			printf("\nEnter Email :");
			scanf("%s",&s.email);
			fseek(f,size,SEEK_CUR);  //to go to desired position infile
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	if(k==1){
		printf("\n\nTHE RECORD DOESN'T EXIST!!!!");
		fclose(f);
		getch();
	}else{
	fclose(f);
	printf("\n\n\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!");
	getch();
}
} 
int calc()
{
    system("cls");
    printf("   ******************************  |Basic Calculator|  ***************************** \n");
	for(int i=0;i<80;i++){
	printf("-");}
    int num1, num2;
    int result;
    char op;
	char quit = 'n';
    while(quit != 'y')
    {
    printf("\nEnter e in operator section to exit form the calculator");
    printf("\nEnter first Number: ");
    scanf("%d", &num1);

    printf("\nEnter second Number: ");
    scanf("%d", &num2);

    printf("Choose operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("Result: %d", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result: %d", result);
        break;
    case '*':
        result = num1 * num2;
        printf("%d", result);
        break;
    case '/':
        result = num1 / num2;
        printf("Result: %d", result);
        break;
    default:
        printf("Error!");
        break;
    }
	printf("\n Do you want to exit? (y/n): ");
		scanf(" %c", &quit);
		if(quit == 'y')
		{
			break;
		}
    }   

    return 0;
}

void dailyprofitcalc()
{
    system("cls");
    printf("   ******************************  |Daily Profit Estimator|  ***************************** \n");
	for(int i=0;i<80;i++){
	printf("-");}
    float petrol_sales, diesel_sales,petrol_comission,diesel_comission,net_daily_profit;
    char choice;
	char quit = 'n';
    while(quit != 'y')
	{

        printf("\nEnter the Petrol sales in ltr: ");
        scanf("%f",&petrol_sales);
        printf("\nEnter the Diesel sales in ltr: ");
        scanf("%f",&diesel_sales);
        printf("\nEnter the comission earned on petrol per ltr: ");
        scanf("%f",&petrol_comission);
        printf("\nEnter the comission earned on Diesel per ltr: ");
        scanf("%f",&diesel_comission);
        net_daily_profit = ((petrol_comission * petrol_sales)+(diesel_comission * diesel_sales));
        printf("\n Net daily profit earned on todays sales is : %.2f",net_daily_profit);
	    printf("\n Do you want to exit? (y/n): ");
		scanf(" %c", &quit);
		if(quit == 'y')
		{
			break;
		}
    }   

     
}

void petrolfun()
{
        system("cls");
    printf("   ******************************  |Petrol Sale Calculator|  ***************************** \n");
	for(int i=0;i<80;i++){
	printf("-");}
    float opening_petrol, closing_petrol,netsale_petrol, retailprice_petrol,oil_sales_petrol,total_amount_petrol, petrol_grandtotal, 
    advance1_petrol, advance2_petrol,swiping_petrol,onlinepayments_petrol,expenditure_petrol,totalded_petrol,
    total_petrol,netcash_petrol,totalcash_petrol;
    int petrol_2000,petrol_500,petrol_200,petrol_100,petrol_50,petrol_20,petrol_10;
    char quit = 'n';
    while(quit != 'y')
    {
        printf("\nEnter the petrol opening (ltr) : ");
        scanf("%f",&opening_petrol);
        printf("\nEnter the petrol closing (ltr) : ");
        scanf("%f",&closing_petrol);
        netsale_petrol = opening_petrol - closing_petrol;
        printf("\n Total sale of petrol (ltr): %.2f ", netsale_petrol);
        printf("\nEnter the retail petrol price (per ltr) : ");
        scanf("%f",&retailprice_petrol);
        printf("\nEnter the oil sales(petrol Counter) : ");
        scanf("%f",&oil_sales_petrol);
        total_amount_petrol = retailprice_petrol * netsale_petrol;
        petrol_grandtotal = total_amount_petrol + oil_sales_petrol;
        printf("\nThe total amount to be collected from petrol: %.2f",petrol_grandtotal);
        printf("\n***********  |Deductions|  **********");
        printf("\nFirst advance amount: ");
        scanf("%f",&advance1_petrol);
        printf("\nSecond advance amount: ");
        scanf("%f",&advance2_petrol);
        printf("\nAmount recieved via swiping: "); 
        scanf("%f",&swiping_petrol);
        printf("\nAmount received via online payments: ");
        scanf("%f",&onlinepayments_petrol);
        printf("\nExpenditure and other daily deductions: ");
        scanf("%f",&expenditure_petrol);
        totalded_petrol = advance1_petrol + advance2_petrol + swiping_petrol + onlinepayments_petrol +expenditure_petrol;
        printf("\nTotal deductions in petrol counter from the total amount : %.2f",totalded_petrol);
        printf("\n***********  |cash collection|  **********");
        printf("\n Enter the total number of 2000 rupees : ");
        scanf("%d",&petrol_2000);
        printf("\n Enter the total number of 500 rupees : ");
        scanf("%d",&petrol_500);
        printf("\n Enter the total number of 200 rupees : ");
        scanf("%d",&petrol_200);
        printf("\n Enter the total number of 100 rupees : ");
        scanf("%d",&petrol_100);
        printf("\n Enter the total number of 50 rupees : ");
        scanf("%d",&petrol_50);
        printf("\n Enter the total number of 20 rupees : ");
        scanf("%d",&petrol_20);
        printf("\n Enter the total number of 10 rupees : ");
        scanf("%d",&petrol_10);

        totalcash_petrol = ((2000*petrol_2000)+(500*petrol_500)+(200*petrol_200)+(100*petrol_100)+(50*petrol_50)+(20*petrol_20)+(10*petrol_10));
        netcash_petrol = petrol_grandtotal - totalded_petrol;
        if(netcash_petrol > totalcash_petrol)
        {
            printf("There is the amount of %d missing from the cash to be colleced",netcash_petrol - totalcash_petrol);
        }
		else
		{
			printf("The amount collected is valid.");
		}
        printf("\n Do you want to exit? (y/n): ");
		scanf(" %c", &quit);
		if(quit == 'y')
		{
			break;
		}
    }     
}
void dieselfun()
{
        system("cls");
    printf("   ******************************  |Diesel Sale Calculator|  ***************************** \n");
	for(int i=0;i<80;i++){
	printf("-");}
    float opening_diesel, closing_diesel,netsale_diesel, retailprice_diesel,oil_sales_diesel,total_amount_diesel, diesel_grandtotal, 
    advance1_diesel, advance2_diesel,swiping_diesel,onlinepayments_diesel,expenditure_diesel,totalded_diesel,
    total_diesel,netcash_diesel,totalcash_diesel;
    int diesel_2000,diesel_500,diesel_200,diesel_100,diesel_50,diesel_20,diesel_10;
    char quit = 'n';
    while(quit != 'y')
    {
        printf("\nEnter the diesel opening (ltr) : ");
        scanf("%f",&opening_diesel);
        printf("\nEnter the diesel closing (ltr) : ");
        scanf("%f",&closing_diesel);
        netsale_diesel = opening_diesel - closing_diesel;
        printf("\n Total sale of diesel (ltr): %.2f ", netsale_diesel);
        printf("\nEnter the retail diesel price (per ltr) : ");
        scanf("%f",&retailprice_diesel);
        printf("\nEnter the oil sales(diesel Counter) : ");
        scanf("%f",&oil_sales_diesel);
        total_amount_diesel = retailprice_diesel * netsale_diesel;
        diesel_grandtotal = total_amount_diesel + oil_sales_diesel;
        printf("\nThe total amount to be collected from diesel: %.2f",diesel_grandtotal);
        printf("\n***********  |Deductions|  **********");
        printf("\nFirst advance amount: ");
        scanf("%f",&advance1_diesel);
        printf("\nSecond advance amount: ");
        scanf("%f",&advance2_diesel);
        printf("\nAmount recieved via swiping: "); 
        scanf("%f",&swiping_diesel);
        printf("\nAmount received via online payments: ");
        scanf("%f",&onlinepayments_diesel);
        printf("\nExpenditure and other daily deductions: ");
        scanf("%f",&expenditure_diesel);
        totalded_diesel = advance1_diesel + advance2_diesel + swiping_diesel + onlinepayments_diesel +expenditure_diesel;
        printf("\nTotal deductions in diesel counter from the total amount : %.2f",totalded_diesel);
        printf("\n***********  |cash collection|  **********");
        printf("\n Enter the total number of 2000 rupees : ");
        scanf("%d",&diesel_2000);
        printf("\n Enter the total number of 500 rupees : ");
        scanf("%d",&diesel_500);
        printf("\n Enter the total number of 200 rupees : ");
        scanf("%d",&diesel_200);
        printf("\n Enter the total number of 100 rupees : ");
        scanf("%d",&diesel_100);
        printf("\n Enter the total number of 50 rupees : ");
        scanf("%d",&diesel_50);
        printf("\n Enter the total number of 20 rupees : ");
        scanf("%d",&diesel_20);
        printf("\n Enter the total number of 10 rupees : ");
        scanf("%d",&diesel_10);

        totalcash_diesel = ((2000*diesel_2000)+(500*diesel_500)+(200*diesel_200)+(100*diesel_100)+(50*diesel_50)+(20*diesel_20)+(10*diesel_10));
        netcash_diesel = diesel_grandtotal - totalded_diesel;
        if(netcash_diesel > totalcash_diesel)
        {
            printf("There is the amount of %d missing from the cash to be colleced",netcash_diesel - totalcash_diesel);
        }
		else
		{
			printf("The amount collected is valid.");
		}
        printf("\n Do you want to exit? (y/n): ");
		scanf(" %c", &quit);
		if(quit == 'y')
		{
			break;
		}
    }     
}