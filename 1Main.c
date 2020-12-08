#include <stdio.h>
#include <conio.h>
void buyer();
int buy(char[], int, int);
void seller();
void iphone11(); 
void iphoneXs();
void iphone8();
void iphone7();
void samsungS10();
void samsungS9();
void samsungS8();
void samsungS7();
void samsungS6();
void oneplus3t();
void oneplus4t();
void oneplus5t();
void oppof9();
void oppof10();
void oppof11();
void huaweiy9();
void huaweiy10();
int initial(); 
int carddetails(char s[20],float,float,int,int,float);
int address(char s[20],float,float,int,int);
int password();
void repairment();
void repair();

void first(){
    int row,col,r,c,q;
    system("cls");
    system("color f3");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t");
    printf("      Loging Success..\n       Loading Please Wait...");
    printf("\n\n\t\t\t");
    for(r=1;r<=20;r++){
    for(q=0;q<=50000000;q++);//to display the character slowly
    printf("%c",178);}
    system("cls");
    initial();
    
}



int main() {
	password();
}


int password (){
	int i,m,x,v;
	long long int d;
	char pass[6],c,user[50];
	
	pass:
	
	printf("\n\n\t\t\tENTER USER NAME: ");
	scanf("%s",&user);
	printf("\n\t\t\tENTER PASSWORD: ");
	i=0;
	while(i!=5)
	{
		c=(getch());
		pass[i]=c;
		printf("*");
		i++;
	}
if((strcmp(user,"admin")==0)&&(strcmp(pass,"12345")==0))
	{
		system("cls");
		first();
	}
		else 
	{
		system("cls");
	    
	printf("\n\n\t\t\tINVALID USERNAME OR PASSWORD......\n\n\t\t\tPLEASE TRY AGAIN");
		for(d=0;d<320000000;d++);
		main();
		printf("\n\n\t\t\tPRESS ANY KEY TO ENTER AGAIN:");
		getch();
		system("cls");
			goto pass;
	}
}


int initial(){
	system("color 2");

	int op,a;
   	printf("\n");
   	printf("Hi Customer!\t\t\t\n");
   	printf("\nPress 1-- To buy a new phone");
   	printf("\nPress 2-- To sell a phone");
   	printf("\nPress 3-- To repair your phone \n");
   	scanf("%d",&op);
   	switch (op){
   	case 1 :{
   	   	system("cls");
   	   	buyer();
   	   	break;
		}
		  
	case 2 : {
	   	system("cls");
   	   	seller();
		break;
		}
	case 3 : {
		system("cls");
   	   	repair();
		break;
	   	}        
    }
	   
	getch();
  return 0;
}	
	   
	 
void buyer(){
   	
	system("color 6 ");

   	FILE *fp;
   	char info[500];
   	int ar,cat,mobile,type,finaldec;
   	
   	printf("          CATERGORY              \n");
   	printf("Press 1 FOR APPLE\n");
   	printf("Press 2 FOR SAMSUNG\n");
   	printf("Press 3 FOR One Plus\n");
   	printf("Press 4 FOR Oppo\n");
   	printf("Press 5 FOR Huawei\n");
   	
	printf("Press 0 to exit.\n");
   	scanf("%d",&cat);
   	
   	if(cat==1){
   	system("cls");
	system("color 5");   	
   	int ar;
   	printf("SELECT-ONE\n\n\n");
   	printf("Press 1 for iphone 11\n");
   	printf("Press 2 for iphone XS \n");
   	printf("Press 3 for iphone 8 \n");
   	printf("Press 4-FOR-IPHONE 7 \n");
   	
   	scanf("%d",&ar);
   	 
   	switch(ar){
   	case 1:{
	   	system("cls");
		iphone11();
		break;
		}
	case 2:{
		system("cls");
		iphoneXs();
		break;
		}
	case 3:{
		system("cls");
		iphone8();
		break;
		}
	case 4:{
		system("cls");
		iphone7();
		break;
		}
	
	default :{
		system("cls");
		printf("There is no ssuch phone in our shop");
		buyer();
		}    
   			
   		}
   		
	}
   

   	else if(cat==2)
   	{
   	system("cls");		
   	system("color 5");   	
   	printf("SELECT-ONE\n\n\n");

   	printf("Press 1 FOR-sasmsungS10 \n");
   	printf("Press 2 FOR-sasmsungS9 \n");
   	printf("Press 3 FOR-sasmsungS8 \n"); 
   	printf("Press 4 FOR-sasmsungS7 \n"); 
   	printf("ENTER-5 FOR-sasmsungS6 \n");
	     
   	scanf("%d",&ar);
   	switch(ar){
   	case 1:{
	    system("cls");
		samsungS10();
		break;
		}
	case 2:{
		system("cls");
		samsungS9();
		break;
		}
	case 3:{
		system("cls");
		samsungS8();
		break;
		}
			
	case 4:{
		system("cls");
		samsungS7();
		break;
		}
	case 5:{
		system("cls");
		samsungS6();
		break;
		}
		
	default :{
		system("cls");
		printf("There is no such phone in our scope");
		buyer();
		}    
   			
   		}
   		
   	}
   	else if(cat==3){
   	system("cls");
	system("color 5");   	
   	int ar;
   	printf("SELECT-ONE\n\n\n");
   	printf("Press 1 for One Plus 3t\n");
   	printf("Press 2 for One Plus 4t \n");
   	printf("Press 3 for One Plus 5t \n");
   	
   	scanf("%d",&ar);
   	 
   	switch(ar){
   		case 1:{
	   	system("cls");
		oneplus3t();
		break;
		}
	case 2:{
		system("cls");
		oneplus4t();
		break;
		}
	case 3:{
		system("cls");
		oneplus5t();
		break;
		}
	default :{
		system("cls");
		printf("There is no such phone in our scope");
		buyer();
		} 
   		
	}
   	
}
if(cat==4){
   	system("cls");
	system("color 5");   	
   	int ar;
   	printf("SELECT-ONE\n\n\n");
   	printf("Press 1 for Oppo f9\n");
   	printf("Press 2 for Oppo f10 \n");
   	printf("Press 3 for Oppo f11 \n");
   	
   	scanf("%d",&ar);
   	 
   	switch(ar){
   	case 1:{
	   	system("cls");
		oppof9();
		break;
		}
	case 2:{
		system("cls");
		oppof10();
		break;
		}
	case 3:{
		system("cls");
		oppof11();
		break;
		}
	
	
	default :{
		system("cls");
		printf("There is no ssuch phone in our shop");
		buyer();
		}    
   			
   	}
   		
}

if(cat==5){
   	system("cls");
	system("color 5");   	
   	int ar;
   	printf("SELECT-ONE\n\n\n");
   	printf("Press 1 for Huawei Y9\n");
   	printf("Press 2 for Huawei Y10\n");

   	
   	scanf("%d",&ar);
   	 
   	switch(ar){
   	case 1:{
	   	system("cls");
		huaweiy9();
		break;
		}
	case 2:{
		system("cls");
		huaweiy9();
		break;
		}
	
	default :{
		system("cls");
		printf("There is no ssuch phone in our shop");
		buyer();
		}    
   			
	}
   		
	}
   
}


int storagetypes(){
   	
   	int type;
   	printf("CATEGORY\n\n\n");
   	printf("Press 1 FOR-STORAGE 32GB\n");
   	printf("Press 2 FOR-STRORAGE 64GB\n");
   	printf("Press 3 FOR-STORAGE 128GB\n");
   	scanf("%d",&type);
   	return type;
}

void huaweiy9(){
   	FILE *fp;
   	int p1=32,p2=64,p3=128;
   	char name[]="Huawei Y9";
   	char info[500];
   	int type;
   	type=storagetypes();
   	switch(type){  
   	case 1 :{
   		printf("-------------------------\n");
   		fp=fopen("hy91.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p1,55000);
   	    break;
		} 
   	   	
   	case 2 :{
   	    printf("-------------------------\n");
   	    fp=fopen("hy92.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p2,75000);
   	    break;
		} 
   	   	    
   	case 3 :{
   	    printf("-------------------------\n");
   	    fp=fopen("hy93.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p3,95000);
   	    break;
		} 
				  
   	default :{
   	   	printf("No such option\n");
   	   	buyer();
   	   	break;
		} 
   	}
}

void huaweiy10(){
   	FILE *fp;
   	int p1=32,p2=64,p3=128;
   	char name[]="Huawei Y10";
   	char info[500];
   	int type;
   	type=storagetypes();
   	switch(type){  
   	case 1 :{
   		printf("-------------------------\n");
   		fp=fopen("hy101.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p1,55000);
   	    break;
		} 
   	   	
   	case 2 :{
   	    printf("-------------------------\n");
   	    fp=fopen("hy102.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p2,55000);
   	    break;
		} 
   	   	    
   	case 3 :{
   	    printf("-------------------------\n");
   	    fp=fopen("hy103.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p3,55000);
   	    break;
		} 
				  
   	default :{
   	   	printf("No such option\n");
   	   	buyer();
   	   	break;
		} 
   	}
}



void oppof9(){
   	FILE *fp;
   	int p1=32,p2=64,p3=128;
   	char name[]="OPPO F9";
   	char info[500];
   	int type;
   	type=storagetypes();
   	switch(type){  
   	case 1 :{
   		printf("-------------------------\n");
   		fp=fopen("oppof91.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p1,65000);
   	    break;
		} 
   	   	
   	case 2 :{
   	    printf("-------------------------\n");
   	    fp=fopen("oppof92.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p2,85000);
   	    break;
		} 
   	   	    
   	case 3 :{
   	    printf("-------------------------\n");
   	    fp=fopen("oppof93.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p3,95000);
   	    break;
		} 
				  
   	default :{
   	   	printf("No such option\n");
   	   	buyer();
   	   	break;
		} 
   	}
}

void oppof10(){
   	FILE *fp;
   	int p1=32,p2=64,p3=128;
   	char name[]="OPPO F10";
   	char info[500];
   	int type;
   	type=storagetypes();
   	switch(type){  
   	case 1 :{
   		printf("-------------------------\n");
   		fp=fopen("oppof101.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p1,65000);
   	    break;
		} 
   	   	
   	case 2 :{
   	    printf("-------------------------\n");
   	    fp=fopen("oppof102.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p2,85000);
   	    break;
		} 
   	   	    
   	case 3 :{
   	    printf("-------------------------\n");
   	    fp=fopen("oppof103.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p3,85000);
   	    break;
		} 
				  
   	default :{
   	   	printf("No such option\n");
   	   	buyer();
   	   	break;
		} 
   	}
}

void oppof11(){
   	FILE *fp;
   	int p1=32,p2=64,p3=128;
   	char name[]="OPPO F11";
   	char info[500];
   	int type;
   	type=storagetypes();
   	switch(type){  
   	case 1 :{
   		printf("-------------------------\n");
   		fp=fopen("oppof111.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p1,65000);
   	    break;
		} 
   	   	
   	case 2 :{
   	    printf("-------------------------\n");
   	    fp=fopen("oppof112.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p2,65000);
   	    break;
		} 
   	   	    
   	case 3 :{
   	    printf("-------------------------\n");
   	    fp=fopen("oppof113.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p3,65000);
   	    break;
		} 
				  
   	default :{
   	   	printf("No such option\n");
   	   	buyer();
   	   	break;
		} 
   	}
}



void oneplus3t(){
   	FILE *fp;
   	int p1=32,p2=64,p3=128;
   	char name[]="One plust 3t";
   	char info[500];
   	int type;
   	type=storagetypes();
   	switch(type){  
   	case 1 :{
   		printf("-------------------------\n");
   		fp=fopen("1plus3t1.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p1,65000);
   	    break;
		} 
   	   	
   	case 2 :{
   	    printf("-------------------------\n");
   	    fp=fopen("1plus3t2.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p2,91000);
   	    break;
		} 
   	   	    
   	case 3 :{
   	    printf("-------------------------\n");
   	    fp=fopen("1plus3t3.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p3,120000);
   	    break;
		} 
				  
   	default :{
   	   	printf("No such option\n");
   	   	buyer();
   	   	break;
		} 
   	}
}

void oneplus4t(){
   	FILE *fp;
   	int p1=32,p2=64,p3=128;
   	char name[]="One plust 4t";
   	char info[500];
   	int type;
   	type=storagetypes();
   	switch(type){  
   	case 1 :{
   		printf("-------------------------\n");
   		fp=fopen("1plus4t1.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p1,65000);
   	    break;
		} 
   	   	
   	case 2 :{
   	    printf("-------------------------\n");
   	    fp=fopen("1plus4t2.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p2,65000);
   	    break;
		} 
   	   	    
   	case 3 :{
   	    printf("-------------------------\n");
   	    fp=fopen("1plus4t3.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p3,65000);
   	    break;
		} 
				  
   	default :{
   	   	printf("No such option\n");
   	   	buyer();
   	   	break;
		} 
   	}
}

void oneplus5t(){
   	FILE *fp;
   	int p1=32,p2=64,p3=128;
   	char name[]="One plust 5t";
   	char info[500];
   	int type;
   	type=storagetypes();
   	switch(type){  
   	case 1 :{
   		printf("-------------------------\n");
   		fp=fopen("1plus5t1.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p1,65000);
   	    break;
		} 
   	   	
   	case 2 :{
   	    printf("-------------------------\n");
   	    fp=fopen("1plus5t2.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p2,65000);
   	    break;
		} 
   	   	    
   	case 3 :{
   	    printf("-------------------------\n");
   	    fp=fopen("1plus5t3.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p3,65000);
   	    break;
		} 
				  
   	default :{
   	   	printf("No such option\n");
   	   	buyer();
   	   	break;
		} 
   	}
}

    
void iphone11(){
   	   
   	FILE *fp;
   	char info[500];
   	char name[100]="IPHONE 11";
   	int p1=32,p2=64,p3=128;
   	int type;
   	type=storagetypes();
   	switch(type){  
   	case 1 :{
   	    printf("-------------------------\n");
   	    fp=fopen("iphone11.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p1,248499);
   	    break;
		} 
   	   	
   	case 2 :{
   	    printf("-------------------------\n");
   	    fp=fopen("iphone112.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p2,269499);
   	    break;
		} 
   	   	    
   	case 3 :{
   		printf("-------------------------\n");
   	    fp=fopen("iphone113.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p3,299499);
   	    break;
		} 
				  
   	default : {
   	   	printf("No such option\n");
   	   	buyer();
   	   	break;
		} 
   	}
}
   	

void iphoneXs(){
   	   
   	FILE *fp;
   	char info[500];
	char name[100]="IPHONE X";
   	int p1=32,p2=64,p3=128;
   	int type;
   	type=storagetypes();
   	switch(type){  
   	case 1 :{
   		printf("-------------------------\n");
   	    fp=fopen("iphoneXs.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p1,146999);
   	    break;
		} 
   	   	
   	case 2 :{
   	    printf("-------------------------\n");
   	    fp=fopen("iphoneXs2.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p2,169999);
   	    break;
		} 
   	   	    
   	case 3 :{
   	    printf("-------------------------\n");
   	    fp=fopen("iphoneXs3.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p3,199999);
   	    break;
		} 
				  
   	default : {
   	   	printf("No such option\n");
   		buyer();
   	   	break;
		} 
   	}
}
   	
   	

void iphone8(){
   	FILE *fp;
   	char info[500];
   	char name[100]="IPHONE 7";
   	int p1=32,p2=64,p3=128;
   	int type;
   	type=storagetypes();
   	switch(type){  
   	case 1 :{
   	    printf("-------------------------\n");
   	    fp=fopen("iphone8.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p1,84999);
   	    break;
		} 
   	   	
   	case 2 :{
   	    printf("-------------------------\n");
   	    fp=fopen("iphone82.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p2,94999);
   	    break;
		} 
   	   	    
   	case 3 :{
   	    printf("-------------------------\n");
   	    fp=fopen("iphone83.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p3,104999);
   	    break;
		} 
				  
   	default : {
   	   	printf("No such option\n");
   	   	buyer();
   	   	break;
		} 
   	}
}
   	
void iphone7(){
   	FILE *fp;
   	int p1=32,p2=64,p3=128;
   	char name[]="IPHONE 7";
   	char info[500];
   	int type;
   	type=storagetypes();
   	switch(type){  
   	case 1 :{
   		printf("-------------------------\n");
   		fp=fopen("iphone7.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p1,69999);
   	    break;
		} 
   	   	
   	case 2 :{
   	    printf("-------------------------\n");
   	    fp=fopen("iphone72.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p2,73999);
   	    break;
		} 
   	   	    
   	case 3 :{
   	    printf("-------------------------\n");
   	    fp=fopen("iphone73.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p3,79999);
   	    break;
		} 
				  
   	default :{
   	   	printf("No such option\n");
   	   	buyer();
   	   	break;
		} 
   	}
}
   

void samsungS10(){
   	   
   	FILE *fp;
   	char info[500];
   	char name[100]="Samsung G S10";
   	int p1=32,p2=64,p3=128;
   	int type;
   	type=storagetypes();
	switch(type){  
   	case 1:{
   	    printf("-------------------------\n");
   	    fp=fopen("samsungS10.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p1,124999);
   	    break;
		} 
   	   	
   	case 2 :{
   	    printf("-------------------------\n");
   	    fp=fopen("samsungS102.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p2,144999);
   	    break;
		} 
   	   	    
   	case 3 :{
   	    printf("-------------------------\n");
   	    fp=fopen("samsungS103.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	        puts(info);
   	        }
   	        fclose(fp);
   	        buy(name,p3,164999);
   	        break;
			} 
				  
   	default :{
   	   	printf("No such option\n");
   	   	buyer();
   	   	break;
		} 
   	}
}
   	
void samsungS9(){
   	FILE *fp;
   	char info[500];
   	char name[100]="Samsung G S9";
   	int p1=32,p2=64,p3=128;
   	int type;
   	type=storagetypes();
   	switch(type){  
   	case 1:{
   	    printf("-------------------------\n");
   	    fp=fopen("samsungS9.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	        fclose(fp);
   	        buy(name,p1,79999);
   	        break;
			} 
   	   	
   	case 2 :{
   	    printf("-------------------------\n");
   	    fp=fopen("samsungS92.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	        fclose(fp);
   	        buy(name,p2,83999);
   	        break;
			} 
   	   	    
   	case 3 :{
   	    printf("-------------------------\n");
   	    fp=fopen("samsungS93.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	        fclose(fp);
   	        buy(name,p3,99999);
   	        break;
			} 
				  
   	default :{
   	   	printf("No such option\n");
   	   	buyer();
   	   	break;
		} 
   	}
}
   	
void samsungS8(){
   	FILE *fp;
   	char info[500];
   	char name[100]="Samsung G S8";
   	int p1=32,p2=64,p3=128;
   	int type;
   	type=storagetypes();
   	switch(type){  
   	case 1:{
   		printf("-------------------------\n");
   	    fp=fopen("samsungS8.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p1,55000);
   	    break;
		} 
   	   	
   	case 2 :{
   		printf("-------------------------\n");
   	    fp=fopen("samsungS82.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p2,60000);
   	    break;
		} 
   	   	    
   	case 3:{
   		printf("-------------------------\n");
   	    fp=fopen("samsungS83.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p3,63000);
   	    break;
		} 
				  
   	default:{
   	   	printf("No such option\n");
   	   	buyer();
   	   	break;
		} 
   	}
}
   	
void samsungS7(){
   	   
   	FILE *fp;
   	char info[500];
   	char name[100]="Samsung G S9";
   	int p1=32,p2=64,p3=128;
   	int type;
   	type=storagetypes();
   	switch(type){  
   	case 1:{
   	    printf("-------------------------\n");
   	    fp=fopen("samsungS7.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p1,45000);
   	    break;
		} 
   	   	
   	case 2 :{
   	    printf("-------------------------\n");
   	    fp=fopen("samsungS72.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p2,50000);
   	    break;
		} 
   	   	    
   	case 3 :{
   	    printf("-------------------------\n");
   	    fp=fopen("samsungS73.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	puts(info);
   	        }
   	    fclose(fp);
   	    buy(name,p3,57000);
   	    break;
		} 
				  
   	default:{
   	   	printf("No such option\n");
   	   	buyer();
   	   	break;
		} 
   	}
}
   	
void samsungS6(){   
   	FILE *fp;
   	char info[500];
   	char name[100]="Samsung G S9";
   	int p1=32,p2=64,p3=128;
   	int type;
   	type=storagetypes();
	switch(type){  
   	case 1:{
   	    printf("-------------------------\n");
   	    fp=fopen("samsungS6.txt","r");
   	    while(!feof(fp)){
   	    	fgets(info,500,fp);
   	       	puts(info);
   	    }
   	
   		fclose(fp);
   	    buy(name,p1,35000);
   	    break;
	} 
   	   	
   	case 2:{
   		printf("-------------------------\n");
   		fp=fopen("samsungS62.txt","r");
   		while(!feof(fp)){
   	    	fgets(info,500,fp);
   	       	puts(info);
   	    }
   	        fclose(fp);
   	        buy(name,p2,45000);
   	        break;
	} 
   	   	    
   	case 3:{
   	    printf("-------------------------\n");
   	    fp=fopen("samsungS63.txt","r");
   	    while(!feof(fp)){
   	       	fgets(info,500,fp);
   	       	    puts(info);
   	    }
   	        fclose(fp);
   	        buy(name,p3,40000);
   	        break;
	} 
				  
   	default:{
   	   	printf("No such option\n");
   	   	buyer();
   	   	break;
	} 
   	   	  }
   	}
   	
int buy(char s[], int storage, int price){
    system("color 0");   	
    char confirm;
    int option,ourprice,yourprice,com,ex,pay,reject,r,q;
    printf("\n----------------------\n");
    printf("Press 1 to buy the Phone\n");
    printf("Press 2 to return to the main menu\n");    
    printf("Press 0 to exit\n");
    scanf("%d",&option);
    switch(option){
    case 1 :{	
                printf("\n\n----------------------------------------------------------------------------------");
                printf("\nHow do you want to pay?\n");
                printf("Press 1- For Credit/Debit card (Get 10percent discount with Credit/Debit card)\n");
                printf("Press 2- Cash on delivery\n");
                scanf("%d",&pay);
                
                if(pay==1){
                	float discount=price-(price*0.1);
                    printf("\n\n\t\t\t   CONFIRM PAYMENT\n");
                    printf("*************************\n");
        	        printf("Product\t\t\t\t Price\n");
            	    printf("%s %dGB\t\t%.1f Rs (after discount)",s,storage,discount);
            	    float GST=price*0.05;
            	    printf("\n\nGST (5percent)\t\t\t %.1f Rs",GST);
            	    float total=(GST+discount);
            	    printf("\n\n\nTOTAL: \t\t\t  %.1f Rs",total);

					printf("\n\nConfirm payment (y/n)\n");
					fflush(stdin);
					scanf("%c",&confirm);
					if(confirm=='y'){
						system("cls");
						system("color f3");
    					printf("\n\n\n\n\n\n\n\n\n\t\t\t");
   						printf("      Processing Please Wait...");
   						printf("\n\n\t\t\t");
    					for(r=1;r<=20;r++){
    					for(q=0;q<=50000000;q++);//to display the character slowly
    					printf("%c",178);}
						system("cls");
						carddetails(s,GST,total,price,storage,discount);
						//reciept(s,price);
					}
					else if(confirm=='n'){
						printf("\n Press 1 to go to main menu \nPress 2 to exi\nt");
						scanf("%d",&reject);
						int reject;
						if(reject==1){
							system("cls");
							initial();
						}
						else if(reject==2){
							system("cls");
							printf("/n/n/t/t/t	Thankyou for visiting Mobile Mania.\nWe will be expacting you again :)");
						}
					}            	
				}
				else if(pay==2){
					printf("\n\n\t\t\t   CONFIRM PAYMENT\n");
                    printf("*************************\n");
        	        printf("Product\t\t\t\t Price\n");
            	    printf("%s %dGB\t\t\t %d Rs ",s,storage,price);
            	    float GST=price*0.05;
            	    printf("\n\nGST (5percent)\t\t\t %.1f Rs",GST);
            	    float total=GST+price;
            	    printf("\n\n\nTOTAL: \t\t\t  %.1f Rs",total);

					printf("\n\nConfirm Order (y/n)\n");
					fflush(stdin);
					scanf("%c",&confirm);
					if(confirm=='y'){
						system("cls");
						system("color f3");
    					printf("\n\n\n\n\n\n\n\n\n\t\t\t");
   						printf("      Processing Please Wait...");
   						printf("\n\n\t\t\t");
    					for(r=1;r<=20;r++){
    					for(q=0;q<=50000000;q++);//to display the character slowly
    					printf("%c",178);}
						system("cls");

						address(s,GST,total,price,storage);
					}
					else if(confirm=='n'){
						printf("\n Press 1 to go to main menu \nPress 2 to exit\n");
						scanf("%d",&reject);
						int reject;
						if(reject==1){
							system("cls");
							initial();
						}
						else if(reject==2){
							system("cls");
							printf("/n/n/t/t/t	Thankyou for visiting Mobile Mania.\nWe will be expacting you again :)");
					
				}
            }
	}
	else
	printf("Not such option available");
	break;
	}
	
        case 2 :{
            system("cls");
            buyer();
            break;
        }
        
        default:{
            system("cls");
            printf("Thankyou for visiting Mobile Mania.\nWe will be expacting you again :)");
            return;
            break;
                        
        }
    }
}

void seller(){
    FILE *ptr;
    char sel[500],cardet[80],pname[50],cname;
    int r,q,select,pridet,sell,months;
    //select=details();
    //if(select==1){
    system("cls");
	system("color f3");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t");
   	printf("      Processing Please Wait...");
   	printf("\n\n\t\t\t");
    for(r=1;r<=20;r++){
    for(q=0;q<=50000000;q++);//to display the character slowly
    printf("%c",178);}
    system("cls");
    ptr=fopen("Phone Ad.txt","a");
    char name[20];
	int phone;
    printf("\n\n***TELL US A LITTLE ABOUT YOUSELF***");
    printf("\nEnter your full name: ");
	fflush(stdin);
	gets(name);
	printf("\nEnter your Mobile Number (+92): ");
	scanf("%d",&phone);
	
	char addresss[20],country[20], city[20], area[20],st_name[20],house_no[20]; 
	printf("\n\n\n*********Address Details***************");
//	gets(addresss);
	printf("\nEnter your Country: ");
	fflush(stdin);
	gets(country);
	printf("\nEnter your City: ");
	gets(city);
	printf("\nEnter your Area's Name: ");
	gets(area);
	printf("\nEnter your Street Name: ");
	gets(st_name);
	printf("\nEnter your House Number: ");
	gets(house_no);
	printf("\n\n***PHONE DESCRIPTION***");
    printf("\nEnter the name of your mobile phone: ");
    gets(pname);
    printf("Enter the selling Price (in Rupees): ");
    scanf("%d",&sell);
    printf("\nHow old is your phone (in months): ");
    scanf("%d",&months);
    
	fprintf(ptr,"\n**Seller Details**\nUser Name : %s",name);
	fprintf(ptr,"\nPhone Number : %d",phone);
	fprintf(ptr,"\nCountry : %s",country);
	fprintf(ptr,"\nCity : %s",city);
	fprintf(ptr,"\nArea Name : %s",area);
	fprintf(ptr,"\nStreet Name : %s",st_name);
	fprintf(ptr,"\nHouse number : %s\n",house_no);
	fprintf(ptr,"\n**Phone Details**\nPhone Name : %s",pname);
	fprintf(ptr,"\nSelling Price : %d",sell);
	fprintf(ptr,"\nPhone was bought %d months ago",months);
	fclose(ptr);
	system("cls");
	system("color f3");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t");
   	printf("      Processing Please Wait...");
   	printf("\n\n\t\t\t");
    for(r=1;r<=20;r++){
    for(q=0;q<=50000000;q++);//to display the character slowly
    printf("%c",178);}
    system("cls");
	
	printf("Your AD has been recorded,\nYou will be contacted on your phone number.");
	int ccc;
	printf("\n\n\nPress 1 to go the th main menu again");
	printf("\nPress 2 to exit the program\n");
	scanf("%d",&ccc);
	if(ccc==1){
	system("cls");
	system("color f3");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t");
   	printf("      Processing Please Wait...");
   	printf("\n\n\t\t\t");
    for(r=1;r<=20;r++){
    for(q=0;q<=50000000;q++);//to display the character slowly
    printf("%c",178);}
    system("cls");
	initial();
	}	
	else if(ccc==2){
	system("cls");
	system("color f3");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t");
   	printf("      Processing Please Wait...");
   	printf("\n\n\t\t\t");
    for(r=1;r<=20;r++){
    for(q=0;q<=50000000;q++);//to display the character slowly
    printf("%c",178);}
    system("cls");
	printf("\n\n\n\t\t\t\tThank you for visiting!!\n");
	}
}


int details(){
    int a;
    printf("SELECT-ONE\n");
    printf("ENTER-1-FOR-IPHONE \n");
    printf("ENTER-2-FOR-SAMSUNG \n");
    scanf("%d",&a);
    return a;
}	

int compare(int op,int yp){
    int per;
    per=(yp*100)/op;
    if(per>=80){
        return 1;
    }
    else if(per<=80){
        return 2;
    }
}

int carddetails(char s[20],float GST,float total,int price,int storage, float discount){
	int no,pin,r,q;
	char name[20];
	int phone;
	FILE *ptr;
	printf("\n\n\n");
	printf("******PERSONAL DETAILS*************");
	printf("\nEnter your full name: ");
	fflush(stdin);
	gets(name);
	printf("\nEnter your Mobile Number (+92): ");
	scanf("%d",&phone);
	
	printf("\n\n\n*****CARD DETAILS******");
	printf("\nEnter your card number: ");
	scanf("%d",&no);
	printf("\nEnter the 4 digit security pin: ");
	scanf("%d",&pin);
	ptr=fopen("carddetails.txt","a");
	char addresss[20],country[20], city[20], area[20],st_name[20],house_no[20]; 
	printf("\n\n\n*********Address Details***************");
	gets(addresss);
	printf("\nEnter your Country: ");
	gets(country);
	printf("\nEnter your City: ");
	gets(city);
	printf("\nEnter your Area's Name: ");
	gets(area);
	printf("\nEnter your Street Name: ");
	gets(st_name);
	printf("\nEnter your House Number: ");
	gets(house_no);
	
	
	fprintf(ptr,"\nUser Name : %s",name);
	fprintf(ptr,"\nPhone Number : %d",phone);
	fprintf(ptr,"\nCard Number : %d",no);
	fprintf(ptr,"\nPin : %d",pin);
	fprintf(ptr,"\nCountry : %s",country);
	fprintf(ptr,"\nCity : %s",city);
	fprintf(ptr,"\nArea Name : %s",area);
	fprintf(ptr,"\nStreet Name : %s",st_name);
	fprintf(ptr,"\nHouse number : %s\n",house_no);
	fclose(ptr);
	system("cls");
	system("color f3");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t");
   	printf("      Processing Please Wait...");
   	printf("\n\n\t\t\t");
    for(r=1;r<=20;r++){
    for(q=0;q<=50000000;q++);//to display the character slowly
    printf("%c",178);}
    system("cls");
    
	
	
	printf("\n\n\nYour order has been confirmed. The reciept is attached below. Thank you for shopping with us!");
	printf("\nWe will deliver your order to the given location in 2,3 days\n For further assistance call 911");
	printf("\n\n\n\t\t\tRECIEPT\n");
	printf("*******************************************************************\n");
	
	printf("MOBILE NAME: \t%s ",s);
	printf("\nSTORAGE: \t%dGB",storage);
	printf("\nMOBILE PRICE: \t%d Rs ",price);
	printf("\nTAX (5 percent): \t%.1f Rs ",GST);
	printf("\nDISCOUNT(10 percent): \t%.1f Rs",price-discount);
	printf("\n\n\nTOTOAL: \t%.1f Rs",total);
	
	int ccc;
	printf("\n\n\nPress 1 to go the th main menu again");
	printf("\nPress 2 to exit the program\n");
	scanf("%d",&ccc);

	if(ccc==1){
	system("cls");
	system("color f3");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t");
   	printf("      Processing Please Wait...");
   	printf("\n\n\t\t\t");
    for(r=1;r<=20;r++){
    for(q=0;q<=50000000;q++);//to display the character slowly
    printf("%c",178);}
    system("cls");
	initial();
	}	
	else if(ccc==2){
	system("cls");
	system("color f3");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t");
   	printf("      Processing Please Wait...");
   	printf("\n\n\t\t\t");
    for(r=1;r<=20;r++){
    for(q=0;q<=50000000;q++);//to display the character slowly
    printf("%c",178);}
    system("cls");
		printf("\n\n\n\t\t\tThank you for visiting!!");
	}

}

int address(char s[20],float GST,float total,int price,int storage){
	int i,q,r;
	FILE *ptr;
	system("cls");
	system("color f3");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t");
   	printf("      Processing Please Wait...");
   	printf("\n\n\t\t\t");
    for(r=1;r<=20;r++){
    for(q=0;q<=50000000;q++);//to display the character slowly
    printf("%c",178);}
    system("cls");
    char name[20];
	int phone;
	ptr=fopen("address.txt","a");
	printf("\n\n\n");
	printf("******PERSONAL DETAILS*************");
	printf("\nEnter your full name: ");
	fflush(stdin);
	gets(name);
	printf("\nEnter your Mobile Number (+92): ");
	scanf("%d",&phone);
	
	char addresss[20],country[20], city[20], area[20],st_name[20],house_no[20]; 
	printf("\n\n\n*********Address Details***************");
	gets(addresss);
	printf("\nEnter your Country: ");
	gets(country);
	printf("\nEnter your City: ");
	gets(city);
	printf("\nEnter your Area's Name: ");
	gets(area);
	printf("\nEnter your Street Name: ");
	gets(st_name);
	printf("\nEnter your House Number: ");
	gets(house_no);
	
	fprintf(ptr,"\nUser Name : %s",name);
	fprintf(ptr,"\nPhone Number : %d",phone);
	fprintf(ptr,"\nCountry : %s",country);
	fprintf(ptr,"\nCity : %s",city);
	fprintf(ptr,"\nArea Name : %s",area);
	fprintf(ptr,"\nStreet Name : %s",st_name);
	fprintf(ptr,"\nHouse number : %s\n",house_no);
	fclose(ptr);
	
	
	system("cls");
	system("color f3");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t");
   	printf("      Processing Please Wait...");
   	printf("\n\n\t\t\t");
    for(r=1;r<=20;r++){
    for(q=0;q<=50000000;q++);//to display the character slowly
    printf("%c",178);}
    system("cls");
    printf("\n\n\nYour order has been confirmed. The reciept is attached below. Thank you for shopping with us!");
	printf("\nWe will deliver your order to the given location in 2,3 days\n For further assistance call 911");
	printf("\t\t\tRECIEPT\n");
	printf("*******************************************************************\n");
	
    printf("MOBILE NAME:\t %s ",s);
	printf("\nSTORAGE:\t %d GB",storage);
	printf("\nMOBILE PRICE:\t %d Rs ",price);
	printf("\nTAX (5 percent):\t %.1f Rs ",GST);
	printf("\nDISCOUNT:      \t 0 Rs");
	printf("\n\n\nTOTOAL:\t %.1f Rs",total);
	
	int ccc;
	printf("\n\n\nPress 1 to go the th main menu again");
	printf("\nPress 2 to exit the program\n");
	scanf("%d",&ccc);
	if(ccc==1){
	system("cls");
	system("color f3");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t");
   	printf("      Processing Please Wait...");
   	printf("\n\n\t\t\t");
    for(r=1;r<=20;r++){
    for(q=0;q<=50000000;q++);//to display the character slowly
    printf("%c",178);}
    system("cls");
		initial();
	}	
	else if(ccc==2){
	system("cls");
	system("color f3");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t");
   	printf("      Processing Please Wait...");
   	printf("\n\n\t\t\t");
    for(r=1;r<=20;r++){
    for(q=0;q<=50000000;q++);//to display the character slowly
    printf("%c",178);}
    system("cls");
	printf("\n\n\n\t\t\t\tThank you for visiting!!\n");
	}
}

 void repair(){
    system("color 6 ");

    int n;
	printf("ENTER 1 for Samsung");
	printf("\nENTER 2 for Apple");
	printf("\nENTER 3 for One Plus");
	printf("\nENTER 4 for OPPO");
	printf("\nENTER 5 for Huawei\n");
	
	scanf("%d",&n);
	switch (n){
		case 1:
		repairment();
		break; 
		
		case 2:
		repairment();
		break;
		
		case 3:
		repairment();
		break;
		
		case 4:
		repairment();
		break;
		
		case 5:
		repairment();
		break;
	}
}
	
void repairment(){
	int i,opt;
	char sel[500],cardet[80],pname[50],cname;
    int r,q,select,pridet,sell,months;
    system("cls");
	system("color f3");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t");
   	printf("      Processing Please Wait...");
   	printf("\n\n\t\t\t");
    for(r=1;r<=20;r++){
    for(q=0;q<=50000000;q++);//to display the character slowly
    printf("%c",178);}
    system("cls");
	FILE *ptr;
	char issue[50];
	char data[11][100]={"Smart Phone Is Running Slowly" ,
							"Poor Battery Life",
							"Storage Space Problem" ,
							"Phone or App Crashes" ,
							"Overheating" ,
							"Apps not downloading" ,
							"Connecting problem with Bluetooth, wifi, cellular network" ,
							"Synchronization Issue" ,
							"MicroSD Card Not Working On Your Smartphone" ,
							"Cracked Screen or Immersion in Water",
							"If any other issue"
						};
						
	char name[20];
	int phone;
	int ccc;
	ptr=fopen("repair.txt","w");
	printf("\n\n\t\tREPAIRMENT PAGE\n\n\n");
	printf("\nEnter your full name: ");
	fflush(stdin);
	gets(name);
	printf("\nEnter your Mobile Number (+92): ");
	scanf("%d",&phone);
	printf("\nEnter the model name of your mobile phone: ");
	fflush(stdin);
    gets(pname);

    printf("\nHow old is your phone (in months): ");
    scanf("%d",&months);
    

	fflush(stdin);
	system("cls");
		system("color f3");
    	printf("\n\n\n\n\n\n\n\n\n\t\t\t");
   		printf("      Processing Please Wait...");
   		printf("\n\n\t\t\t");
    	for(r=1;r<=20;r++){
    	for(q=0;q<=50000000;q++);//to display the character slowly
    	printf("%c",178);}
    	system("cls");
	printf("HERE ARE SOME POSSIBLE PROBLEMS\n\n");
	printf("*****************************************************************************");
	for(i=0;i<11;i++){
		printf("\nPress %d : %s",i+1,data[i]);
	}
	printf("\n\nSelect issue you want to repair if it's not mentioned in the list write it manually by pressing 11:\n\n");	
	printf("\nEnter :");
	scanf("%d",&opt);
		
	if(opt==11){
		printf("\nEnter your phone's problem': ");
		scanf("%s",issue);
		fprintf(ptr,"\nPHONE REPAIRMENT\n\n\nCustomer name:%s",name);
		fprintf(ptr,"\nPhone Number : %d",phone);
		fprintf(ptr,"\n\nIssue:%s",issue);
		fprintf(ptr,"\n\nPhone Model Name : %s",pname);
		fprintf(ptr,"\nPhone was bought %d months ago",months);
		fclose(ptr);
		system("cls");
		system("color f3");
    	printf("\n\n\n\n\n\n\n\n\n\t\t\t");
   		printf("      Processing Please Wait...");
   		printf("\n\n\t\t\t");
    	for(r=1;r<=20;r++){
    	for(q=0;q<=50000000;q++);//to display the character slowly
    	printf("%c",178);}
    	system("cls");
		printf("\n\nyour detail has been recorded ");
		printf("\n\nWe will call you very soon.\n\n");
		printf("\n\n\nPress 1 to go the th main menu again");
		printf("\nPress 2 to exit the program\n");
		scanf("%d",&ccc);

		if(ccc==1){
		system("cls");
		system("color f3");
    	printf("\n\n\n\n\n\n\n\n\n\t\t\t");
   		printf("      Processing Please Wait...");
   		printf("\n\n\t\t\t");
    	for(r=1;r<=20;r++){
    	for(q=0;q<=50000000;q++);//to display the character slowly
    	printf("%c",178);}
    	system("cls");
		initial();
		}	
		else if(ccc==2){

		printf("\n\n\n\t\t\tThank you for visiting!!");
	}
		
	}
	else
		fprintf(ptr,"\nPHONE REPAIRMENT\n\n\nCustomer name:%s",name);
		fprintf(ptr,"\nPhone Number : %d",phone);
		fprintf(ptr,"\nIssue %d: %s",opt,data[opt-1]);
		fprintf(ptr,"\n\nPhone Model Name : %s",pname);
		fprintf(ptr,"\nPhone was bought %d months ago",months);	
		fclose(ptr);
		system("cls");
		system("color f3");
    	printf("\n\n\n\n\n\n\n\n\n\t\t\t");
   		printf("      Processing Please Wait...");
   		printf("\n\n\t\t\t");
    	for(r=1;r<=20;r++){
    	for(q=0;q<=50000000;q++);//to display the character slowly
    	printf("%c",178);}
    	system("cls");
		printf("\n\nyour details has been recorded ");
		printf("\n\nWe will contact you soon\n\n");
		
		printf("\n\n\nPress 1 to go the th main menu again");
		printf("\nPress 2 to exit the program\n");
		scanf("%d",&ccc);

		if(ccc==1){
		system("cls");
		system("color f3");
    	printf("\n\n\n\n\n\n\n\n\n\t\t\t");
   		printf("      Processing Please Wait...");
   		printf("\n\n\t\t\t");
    	for(r=1;r<=20;r++){
    	for(q=0;q<=50000000;q++);//to display the character slowly
    	printf("%c",178);}
    	system("cls");
		initial();
		}	
		else if(ccc==2){

		printf("\n\n\n\t\t\tThank you for visiting!!");
	}

}
