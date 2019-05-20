#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
#include<time.h>
struct Tipografia{
	char a;
	char b;
	char c;
	char d;
	char e;
	char f;
	char g;
	char h;
	char i;
	char j;
	char k;
	char l;
	char m;
	char n;
	char o;
	char p;
	char q;
	char r;
	char s;
	char t;
	char u;
	char v;
	char w;
	char x;
	char y;
	char z;
};
Tipografia diseñartipografia(Tipografia tipografiabase);
int almacenartipografia(Tipografia tipografia,int exit);
Tipografia cargartipografia(Tipografia tipografia);
Tipografia importartipografia(Tipografia tipografia);
int exportartipografia(Tipografia tipografia,int exit);
void mostrarbanner(Tipografia tipografia);
int salir(Tipografia tipografia,int exit);

int main(){
	int opcionmenu,salirmenu=0,exit=0,q=0;
	struct Tipografia tipografia={'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'};
	printf("#####      ##     #    #   #    #   #######   #####    ##\n");   
	printf("#    #    #  #    ##   #   ##   #   #         #    #   ##\n");		
	printf("#####    #    #   # #  #   # #  #   #######   #    #   ##\n");  
	printf("#    #   ######   #  # #   #  # #   #         #####      \n");
	printf("######   #    #   #   ##   #   ##   #######   #    #   ##\n");
	printf("\nBIENVENIDO AL PROGRAMA DE DISENO DE BANNERS.\n");
	do{
		printf("\n");
		printf("**********\n");
		printf("*  MENU  *\n");
		printf("**********\n");
		printf("\n1-Disenar tipografia.\n2-Almacenar tipografia en disco.\n3-Cargar tipografia desde disco.\n4-Importar tipografia.\n5-Exportar tipografia.\n6-Mostrar Banner.\n7-Salir del programa.\n");
		printf("_____._____._____._____._____\n");
		printf("\nIntroduzca la opcion: ");
		scanf("%d",&opcionmenu);
		switch(opcionmenu){
			case 1:
				tipografia=diseñartipografia(tipografia);
				break;
			case 2:
				exit=almacenartipografia(tipografia,exit);
				break;
			case 3:
				tipografia=cargartipografia(tipografia);
				break;
			case 4:
				tipografia=importartipografia(tipografia);
				break;
			case 5:
				exit=exportartipografia(tipografia,exit);
				break;
			case 6:
				mostrarbanner(tipografia);
				break;
			case 7:
				exit=salir(tipografia,exit);
				salirmenu=exit;
				break;
			default:
				printf("\nADVERTENCIA: Usted ha elegido una opcion incorrecta.\n");
		}
	}while(salirmenu==0);
	system("pause\n");
	getchar();
}
Tipografia diseñartipografia(Tipografia tipografia){
	char letra[2],caracter[2];
	printf("Introduzca la letra: ");
	scanf("%s",&letra);
	printf("Introduzca un caracter: ");
	scanf("%s",&caracter);
	printf("\nADVERTENCIA: La tipografia de la letra '%s' ha sido cambiada. La nueva tipografia es '%s'\n", letra,caracter);

	switch(letra[0]){
	case 'a':
		tipografia.a=caracter[0];
		break;
	case 'b':
		tipografia.b=caracter[0];
		break;
	case 'c':
		tipografia.c=caracter[0];
		break;
	case 'd':
		tipografia.d=caracter[0];
		break;
	case 'e':
		tipografia.e=caracter[0];
		break;
	case 'f':
		tipografia.f=caracter[0];
		break;
	case 'g':
		tipografia.g=caracter[0];
		break;
	case 'h':
		tipografia.h=caracter[0];
		break;
	case 'i':
		tipografia.i=caracter[0];
		break;
	case 'j':
		tipografia.j=caracter[0];
		break;
	case 'k':
		tipografia.k=caracter[0];
		break;
	case 'l':
		tipografia.l=caracter[0];
		break;
	case 'm':
		tipografia.m=caracter[0];
		break;
	case 'n':
		tipografia.n=caracter[0];
		break;
	case 'o':
		tipografia.o=caracter[0];
		break;
	case 'p':
		tipografia.p=caracter[0];
		break;
	case 'q':
		tipografia.q=caracter[0];
		break;
	case 'r':
		tipografia.r=caracter[0];
		break;
	case 's':
		tipografia.s=caracter[0];
		break;
	case 't':
		tipografia.t=caracter[0];
		break;
	case 'u':
		tipografia.u=caracter[0];
		break;
	case 'v':
		tipografia.v=caracter[0];
		break;
	case 'w':
		tipografia.w=caracter[0];
		break;
	case 'x':
		tipografia.x=caracter[0];
		break;
	case 'y':
		tipografia.y=caracter[0];
		break;
	case 'z':
		tipografia.z=caracter[0];
		break;
	}
	return tipografia;
	system("pause");
}
int almacenartipografia(Tipografia tipografia,int exit){
	FILE *pf;
	int i, j;
	pf=fopen("ALMACENARTIP.txt","w");

    for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(i==3 && j<=5 || j==0 && i>=2 || j==5 && i>=2 || i==0 && j==3 || i==0 && j==2 || i==1 && j==1 || i==1 && j==4)
				   fprintf( pf,"%c",tipografia.a);
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(j==0||(i==0&&j<=4)||(i==2&&j<=4)||(i==5&&j<=4)||(i==1&&j==5)||(i==3&&j==5)||(i==4&&j==5))
				   fprintf( pf,"%c",tipografia.b );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(j==5 && i==1 || j==5 && i==4 || j==0 && i==2 || j==0 && i==3 || i==1 && j==1 || i==4 && j==1 || i==0 && j==2
				   || i==0 && j==3 || i==0 && j==4 || i==5 && j==2 || i==5 && j==3 || i==5 && j==4)
				   fprintf( pf,"%c",tipografia.c );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(j==0 && i>=0 || i==0 && j<=3 || i==5 && j<=3 ||i==1 && j==4 || i==4 && j==4 || i==2 && j==5 || i==3 && j==5)
				   fprintf( pf,"%c",tipografia.d );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(i==0 && j<=5 || i==3 && j<=5 || i==5 && j<=5 || j==0 && i<=5)
				   fprintf( pf,"%c",tipografia.e );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(i==0 && j<=5 || i==2 && j<=4 || j==0 && i<=5)
				   fprintf( pf,"%c",tipografia.f );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(j==5 && i==1 || j==5 && i>=3 || j==0 && i==2 || j==0 && i==3 || i==1 && j==1 || i==4 && j==1 || i==0 && j==2
				   || i==0 && j==3 || i==0 && j==4 || i==5 && j==2 || i==5 && j==3 || i==3 && j>=3)
				   fprintf( pf,"%c",tipografia.g);
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(i<=5 && j==0 || i<=5 && j==5 || i==2 && j<=5)
				   fprintf( pf,"%c",tipografia.h );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(i==0 || i==5 || j==2 || j==3)
				   fprintf( pf,"%c",tipografia.i );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(i==3 && j<=2 || i==4 && j==1 || i==5 && j==2 || i==5 && j==3 || i==5 && j==4 || j==5 && i<=4)
				   fprintf( pf,"%c",tipografia.j );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(j==0 || i==2 && j<=2 || i==3 && j<=2 || i==0 && j>=4 || i==5 && j>=4 || i==1 && j==3 || i==4 && j==3)
				   fprintf( pf,"%c",tipografia.k );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(i<=4 && j==0 || i==5 && j>=0)
				   fprintf( pf,"%c",tipografia.l );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(j==0||j==5||(i==1&&j==1)||(i==2&&j==2)||(i==2&&j==3)||(i==1&&j==4)){
				fprintf( pf,"%c",tipografia.m );
			}else{
				fprintf( pf," ");
			}
			if(j==5){
			fprintf( pf,"\n");
			}
		}
	}
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(j==0||j==5||i==j){
				fprintf( pf,"%c",tipografia.n );
			}else{
				fprintf( pf," ");
			}
			if(j==5){
			fprintf( pf,"\n");
			}
		}
	}
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(j==0||j==5){
				if(i==0||i==5){
					fprintf( pf," ");
				}else{
					fprintf( pf,"%c",tipografia.o );
				}
			}else if(i==0||i==5){
				fprintf( pf,"%c",tipografia.o );
			}else{
				fprintf( pf," ");
			}
			if(j==5){
			fprintf( pf,"\n");
			}
		}
		
	}
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(j==0||(i==1&&j==5)||(i==2&&j==5)){
				fprintf( pf,"%c",tipografia.p );
			}else if(i==0||i==3){
				if(j==5){
					fprintf( pf," ");
				}else{
					fprintf( pf,"%c",tipografia.p );
				}
			}else{
				fprintf( pf," ");
			}
			if(j==5){
			fprintf( pf,"\n");
			}
		}
		
	}
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(j==0||j==5){
				if(i==0||i==4||(i==5&&j==0)){
					fprintf( pf," ");
				}else{
					fprintf( pf,"%c",tipografia.q );
				}
			}else if(i==0||i==4||(i==3&&j==3)){
				fprintf( pf,"%c",tipografia.q );
			}else{
				fprintf( pf," ");
			}
			if(j==5){
			fprintf( pf,"\n");
			}
		}
		
	}
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(j==0||(i==1&&j==5)||(i==2&&j==5)||(i==4&&j==4)||(i==5&&j==5)){
				fprintf( pf,"%c",tipografia.r );
			}else if(i==0||i==3){
				if(j==5){
					fprintf( pf," ");
				}else{
					fprintf( pf,"%c",tipografia.r );
				}
			}else{
				fprintf( pf," ");
			}
			if(j==5){
			fprintf( pf,"\n");
			}
		}
		
	}
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(i==0 || i==2 || i== 5 || j==0 && i<=2 || j==5 && i>=2)
				   fprintf( pf,"%c",tipografia.s );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(i==0){
				fprintf( pf,"%c",tipografia.t );
			}
			else if(j==2||j==3){
				fprintf( pf,"%c",tipografia.t );
			}else {
				fprintf( pf," ");
			}
			if(j==5){
			fprintf( pf,"\n");
			}
		}
		
	}
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(j==0&&i==5||j==5&&i==5){
				fprintf( pf," ");
			}
			else if(j==0||j==5||i==5){
				fprintf( pf,"%c",tipografia.u );
			}else{
				fprintf( pf," ");
			 }
			if(j==5){
			fprintf( pf,"\n");
			
			}
		}
	}
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(j==1&&i==4||j==2&&i==5||j==3&&i==4){
				fprintf( pf,"%c",tipografia.v );
				}
			if(j==2&&i==5){
				fprintf( pf,"%c",tipografia.v );
			}
			if(j==0&&i==5||j==5&&i==5||j==0&&i==4||j==5&&i==4){
				fprintf( pf," ");
			}
			else if(j==0||j==5){
				fprintf( pf,"%c",tipografia.v );
			}else{
				fprintf( pf," ");
			 }
			if(j==5){
			fprintf( pf,"\n");
			
			}
		}
	}
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(j==0&&i==5||j==5&&i==5){
				fprintf( pf," ");
			}
			else if(j==0||j==5||i==5&&j==1||i==5&&j==4){
				fprintf( pf,"%c",tipografia.w );
			}else if(j==2&&i==4||j==3&&i==4){
				fprintf( pf,"%c",tipografia.w );
			}else if(j==2&&i==3||j==3&&i==3){
				fprintf( pf,"%c",tipografia.w );
			}else{
				fprintf( pf," ");
			 }
			if(j==5){
			fprintf( pf,"\n");
			
			}
		}	
	}
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(i==0 && j==0 || i== 0 && j==5 || i==1 && j==1 || i==1 && j==4 || i==2 && j==2 || i==2 && j==3 || i==3 && j==2 || i==3 && j==3
				    || i==4 && j==1 || i==4 && j==4 || i==5 && j==0 || i==5 && j==5)
					fprintf( pf,"%c",tipografia.x );
               else
                    fprintf( pf," " );
          }
         fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(j==2 && i>=2 || j==3 && i>=2 || i==0 && j==0 || i==0 && j==5 || i==1 && j==1 || i==0 && j==5 ||i==1 && j==4)
				   fprintf( pf,"%c",tipografia.y );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(i==0 && j>=0 || i==5 && j>=0 || i== 0 && j==5 || i==1 && j==4 || i==2 && j==3 || i==3 && j==2
				    || i==4 && j==1 || i==5 && j==0)
					fprintf( pf,"%c",tipografia.z );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fclose(pf);
	 printf("La tipografia ha sido guardada.\n");
	 exit=1;
	 return exit;
}
Tipografia cargartipografia(Tipografia tipografia){
	FILE *pf;
	char caracter[2];
	int i=0;
	pf=fopen("CARGARTIP.txt","r");
	if(pf==NULL){
		perror("ERROR AL ABRIR EL FICHERO.\n");
	}
	printf("EL fichero se ha abierto correctamente.\n");
		while(fscanf(pf,"%s",&caracter[0])!=EOF){
			printf("%s",caracter);
			if(i==0){
				tipografia.a=caracter[0];
			}
			if(i==1){
				tipografia.b=caracter[0];
			}
			if(i==2){
				tipografia.c=caracter[0];
			}
			if(i==3){
				tipografia.d=caracter[0];
			}
			if(i==4){
				tipografia.e=caracter[0];
			}
			if(i==5){
				tipografia.f=caracter[0];
			}
			if(i==6){
				tipografia.g=caracter[0];
			}
			if(i==7){
				tipografia.h=caracter[0];
			}
			if(i==8){
				tipografia.i=caracter[0];
			}
			if(i==9){
				tipografia.j=caracter[0];
			}
			if(i==10){
				tipografia.k=caracter[0];
			}
			if(i==11){
				tipografia.l=caracter[0];
			}
			if(i==12){
				tipografia.m=caracter[0];
			}
			if(i==13){
				tipografia.n=caracter[0];
			}
			if(i==14){
				tipografia.o=caracter[0];
			}
			if(i==15){
				tipografia.p=caracter[0];
			}
			if(i==16){
				tipografia.q=caracter[0];
			}
			if(i==17){
				tipografia.r=caracter[0];
			}
			if(i==18){
				tipografia.s=caracter[0];
			}
			if(i==19){
				tipografia.t=caracter[0];
			}
			if(i==20){
				tipografia.u=caracter[0];
			}
			if(i==21){
				tipografia.v=caracter[0];
			}
			if(i==22){
				tipografia.w=caracter[0];
			}
			if(i==23){
				tipografia.x=caracter[0];
			}
			if(i==24){
				tipografia.y=caracter[0];
			}
			if(i==25){
				tipografia.z=caracter[0];
			}
			i++;
		}
		if(ferror(pf))
		{
			perror("ERROR DE LECTURA.\n");
			clearerr(pf);
		}
		else
			printf("Lectura correcta.\n");
		    printf("La tipografia ha sido cargada.\n");
		fclose(pf);
		return tipografia;
}
Tipografia importartipografia(Tipografia tipografia){
	FILE *pf;
	char caracter[2];
	int i=0;
	pf=fopen("IMPORTARTIP.txt","r");
	if(pf==NULL){
		perror("ERROR AL ABRIR EL FICHERO.\n");
	}
	printf("EL fichero se ha abierto correctamente.\n");
		while(fscanf(pf,"%s",&caracter[0])!=EOF){
			printf("%s",caracter);
			tipografia.a=caracter[0];
			tipografia.b=caracter[0];
			tipografia.c=caracter[0];
			tipografia.d=caracter[0];
			tipografia.e=caracter[0];
			tipografia.f=caracter[0];
			tipografia.g=caracter[0];
			tipografia.h=caracter[0];
			tipografia.i=caracter[0];
			tipografia.j=caracter[0];
			tipografia.k=caracter[0];
			tipografia.l=caracter[0];
			tipografia.m=caracter[0];
			tipografia.n=caracter[0];
			tipografia.o=caracter[0];
			tipografia.p=caracter[0];
			tipografia.q=caracter[0];
			tipografia.r=caracter[0];
			tipografia.s=caracter[0];
			tipografia.t=caracter[0];
			tipografia.u=caracter[0];
			tipografia.v=caracter[0];
			tipografia.w=caracter[0];
			tipografia.x=caracter[0];
			tipografia.y=caracter[0];
			tipografia.z=caracter[0];
			i++;
		}
		if(ferror(pf))
		{
			perror("ERROR DE LECTURA.\n");
			clearerr(pf);
		}
		else
			printf("Lectura correcta.\n");
		    printf("La tipografia ha sido importada.\n");
		fclose(pf);
		return tipografia;
}
int exportartipografia(Tipografia tipografia,int exit){
	FILE *pf;
	int i, j;
	pf=fopen("EXPORTARTIP.txt","w");
    for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(i==3 && j<=5 || j==0 && i>=2 || j==5 && i>=2 || i==0 && j==3 || i==0 && j==2 || i==1 && j==1 || i==1 && j==4)
				   fprintf( pf,"%c",tipografia.a);
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(j==0||(i==0&&j<=4)||(i==2&&j<=4)||(i==5&&j<=4)||(i==1&&j==5)||(i==3&&j==5)||(i==4&&j==5))
				   fprintf( pf,"%c",tipografia.b );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(j==5 && i==1 || j==5 && i==4 || j==0 && i==2 || j==0 && i==3 || i==1 && j==1 || i==4 && j==1 || i==0 && j==2
				   || i==0 && j==3 || i==0 && j==4 || i==5 && j==2 || i==5 && j==3 || i==5 && j==4)
				   fprintf( pf,"%c",tipografia.c );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(j==0 && i>=0 || i==0 && j<=3 || i==5 && j<=3 ||i==1 && j==4 || i==4 && j==4 || i==2 && j==5 || i==3 && j==5)
				   fprintf( pf,"%c",tipografia.d );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(i==0 && j<=5 || i==3 && j<=5 || i==5 && j<=5 || j==0 && i<=5)
				   fprintf( pf,"%c",tipografia.e );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(i==0 && j<=5 || i==2 && j<=4 || j==0 && i<=5)
				   fprintf( pf,"%c",tipografia.f );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(j==5 && i==1 || j==5 && i>=3 || j==0 && i==2 || j==0 && i==3 || i==1 && j==1 || i==4 && j==1 || i==0 && j==2
				   || i==0 && j==3 || i==0 && j==4 || i==5 && j==2 || i==5 && j==3 || i==3 && j>=3)
				   fprintf( pf,"%c",tipografia.g);
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(i<=5 && j==0 || i<=5 && j==5 || i==2 && j<=5)
				   fprintf( pf,"%c",tipografia.h );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(i==0 || i==5 || j==2 || j==3)
				   fprintf( pf,"%c",tipografia.i );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(i==3 && j<=2 || i==4 && j==1 || i==5 && j==2 || i==5 && j==3 || i==5 && j==4 || j==5 && i<=4)
				   fprintf( pf,"%c",tipografia.j );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(j==0 || i==2 && j<=2 || i==3 && j<=2 || i==0 && j>=4 || i==5 && j>=4 || i==1 && j==3 || i==4 && j==3)
				   fprintf( pf,"%c",tipografia.k );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(i<=4 && j==0 || i==5 && j>=0)
				   fprintf( pf,"%c",tipografia.l );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(j==0||j==5||(i==1&&j==1)||(i==2&&j==2)||(i==2&&j==3)||(i==1&&j==4)){
				fprintf( pf,"%c",tipografia.m );
			}else{
				fprintf( pf," ");
			}
			if(j==5){
			fprintf( pf,"\n");
			}
		}
	}
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(j==0||j==5||i==j){
				fprintf( pf,"%c",tipografia.n );
			}else{
				fprintf( pf," ");
			}
			if(j==5){
			fprintf( pf,"\n");
			}
		}
	}
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(j==0||j==5){
				if(i==0||i==5){
					fprintf( pf," ");
				}else{
					fprintf( pf,"%c",tipografia.o );
				}
			}else if(i==0||i==5){
				fprintf( pf,"%c",tipografia.o );
			}else{
				fprintf( pf," ");
			}
			if(j==5){
			fprintf( pf,"\n");
			}
		}
		
	}
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(j==0||(i==1&&j==5)||(i==2&&j==5)){
				fprintf( pf,"%c",tipografia.p );
			}else if(i==0||i==3){
				if(j==5){
					fprintf( pf," ");
				}else{
					fprintf( pf,"%c",tipografia.p );
				}
			}else{
				fprintf( pf," ");
			}
			if(j==5){
			fprintf( pf,"\n");
			}
		}
		
	}
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(j==0||j==5){
				if(i==0||i==4||(i==5&&j==0)){
					fprintf( pf," ");
				}else{
					fprintf( pf,"%c",tipografia.q );
				}
			}else if(i==0||i==4||(i==3&&j==3)){
				fprintf( pf,"%c",tipografia.q );
			}else{
				fprintf( pf," ");
			}
			if(j==5){
			fprintf( pf,"\n");
			}
		}
		
	}
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(j==0||(i==1&&j==5)||(i==2&&j==5)||(i==4&&j==4)||(i==5&&j==5)){
				fprintf( pf,"%c",tipografia.r );
			}else if(i==0||i==3){
				if(j==5){
					fprintf( pf," ");
				}else{
					fprintf( pf,"%c",tipografia.r );
				}
			}else{
				fprintf( pf," ");
			}
			if(j==5){
			fprintf( pf,"\n");
			}
		}
		
	}
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(i==0 || i==2 || i== 5 || j==0 && i<=2 || j==5 && i>=2)
				   fprintf( pf,"%c",tipografia.s );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(i==0){
				fprintf( pf,"%c",tipografia.t );
			}
			else if(j==2||j==3){
				fprintf( pf,"%c",tipografia.t );
			}else {
				fprintf( pf," ");
			}
			if(j==5){
			fprintf( pf,"\n");
			}
		}
		
	}
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(j==0&&i==5||j==5&&i==5){
				fprintf( pf," ");
			}
			else if(j==0||j==5||i==5){
				fprintf( pf,"%c",tipografia.u );
			}else{
				fprintf( pf," ");
			 }
			if(j==5){
			fprintf( pf,"\n");
			
			}
		}
	}
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(j==1&&i==4||j==2&&i==5||j==3&&i==4){
				fprintf( pf,"%c",tipografia.v );
				}
			if(j==2&&i==5){
				fprintf( pf,"%c",tipografia.v );
			}
			if(j==0&&i==5||j==5&&i==5||j==0&&i==4||j==5&&i==4){
				fprintf( pf," ");
			}
			else if(j==0||j==5){
				fprintf( pf,"%c",tipografia.v );
			}else{
				fprintf( pf," ");
			 }
			if(j==5){
			fprintf( pf,"\n");
			
			}
		}
	}
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(j==0&&i==5||j==5&&i==5){
				fprintf( pf," ");
			}
			else if(j==0||j==5||i==5&&j==1||i==5&&j==4){
				fprintf( pf,"%c",tipografia.w );
			}else if(j==2&&i==4||j==3&&i==4){
				fprintf( pf,"%c",tipografia.w );
			}else if(j==2&&i==3||j==3&&i==3){
				fprintf( pf,"%c",tipografia.w );
			}else{
				fprintf( pf," ");
			 }
			if(j==5){
			fprintf( pf,"\n");
			
			}
		}	
	}
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(i==0 && j==0 || i== 0 && j==5 || i==1 && j==1 || i==1 && j==4 || i==2 && j==2 || i==2 && j==3 || i==3 && j==2 || i==3 && j==3
				    || i==4 && j==1 || i==4 && j==4 || i==5 && j==0 || i==5 && j==5)
					fprintf( pf,"%c",tipografia.x );
               else
                    fprintf( pf," " );
          }
         fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(j==2 && i>=2 || j==3 && i>=2 || i==0 && j==0 || i==0 && j==5 || i==1 && j==1 || i==0 && j==5 ||i==1 && j==4)
				   fprintf( pf,"%c",tipografia.y );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fprintf( pf,"\n" );
	fflush(stdin);
	 for(i = 0; i < 6; i++)
     {
          for(j = 0; j < 6; j++)
          {
               if(i==0 && j>=0 || i==5 && j>=0 || i== 0 && j==5 || i==1 && j==4 || i==2 && j==3 || i==3 && j==2
				    || i==4 && j==1 || i==5 && j==0)
					fprintf( pf,"%c",tipografia.z );
               else
                    fprintf( pf," " );
          }
          fprintf( pf,"\n" );
     }
	 fclose(pf);
	 printf("La tipografia ha sido exportada.\n");
	 exit=1;
	 return exit;
}
void mostrarbanner(Tipografia tipografia){
	char palabrasbanner[100];
	int contadorletra=0,i,j;
	printf("Que desea mostrar en el banner?: ");
	scanf("%s",palabrasbanner);

	while(palabrasbanner[contadorletra]!='\0'){
		switch(tolower(palabrasbanner[contadorletra])){
		case'a':
			printf("\n");
			for(i = 0; i < 6; i++){
				for(j = 0; j < 6; j++){
					if(i==3 && j<=5 || j==0 && i>=2 || j==5 && i>=2 || i==0 && j==3 || i==0 && j==2 || i==1 && j==1 || i==1 && j==4)
						printf( "%c", tipografia.a);
					else
						printf( " " );
				}
				printf( "\n" );
			}
			contadorletra++;
			break;
		case'b':
			printf("\n");
			for(i = 0; i < 6; i++){
				for(j = 0; j < 6; j++){
					if(j==0||(i==0&&j<=4)||(i==2&&j<=4)||(i==5&&j<=4)||(i==1&&j==5)||(i==3&&j==5)||(i==4&&j==5))
						printf( "%c", tipografia.b);
					else
						printf( " " );
				}
				printf( "\n" );
			}
			contadorletra++;
			break;
		case'c':
			printf("\n");
			for(i = 0; i < 6; i++){
				for(j = 0; j < 6; j++){
					if(j==5 && i==1 || j==5 && i==4 || j==0 && i==2 || j==0 && i==3 || i==1 && j==1 || i==4 && j==1 || i==0 && j==2|| i==0 && j==3 || i==0 && j==4 || i==5 && j==2 || i==5 && j==3 || i==5 && j==4)
						printf( "%c", tipografia.c);
					else
						printf( " " );
				}
				printf( "\n" );
			}
			contadorletra++;
			break;
		case'd':
			printf("\n");
			for(i = 0; i < 6; i++){
				for(j = 0; j < 6; j++){
					if(j==0 && i>=0 || i==0 && j<=3 || i==5 && j<=3 ||i==1 && j==4 || i==4 && j==4 || i==2 && j==5 || i==3 && j==5)
						printf( "%c", tipografia.d);
					else
						printf( " " );
				}
				printf( "\n" );
			}
			contadorletra++;
			break;
		case'e':
			printf("\n");
			for(i = 0; i < 6; i++){
				for(j = 0; j < 6; j++){
					if(i==0 && j<=5 || i==2 && j<=5 || i==5 && j<=5 || j==0 && i<=5)
						printf( "%c", tipografia.e);
					else
						printf( " " );
				}
				printf( "\n" );
			}
			contadorletra++;
			break;
		case'f':
			printf("\n");
			for(i = 0; i < 6; i++){
				for(j = 0; j < 6; j++){
					if(i==0 && j<=5 || i==2 && j<=4 || j==0 && i<=5)
						printf( "%c", tipografia.f);
					else
						printf( " " );
				}
				printf( "\n" );
			}
			contadorletra++;
			break;
		case'g':
			printf("\n");
			for(i = 0; i < 6; i++){
				for(j = 0; j < 6; j++){
					if(j==5 && i==1 || j==5 && i>=3 || j==0 && i==2 || j==0 && i==3 || i==1 && j==1 || i==4 && j==1 || i==0 && j==2|| i==0 && j==3 || i==0 && j==4 || i==5 && j==2 || i==5 && j==3 || i==3 && j>=3)
						printf( "%c", tipografia.g);
					else
						printf( " " );
				}
			printf( "\n" );
			}
			contadorletra++;
			break;
		case'h':
			printf("\n");
			for(i = 0; i < 6; i++){
				for(j = 0; j < 6; j++){
					if(i<=5 && j==0 || i<=5 && j==5 || i==2 && j<=5)
						printf( "%c", tipografia.h);
					else
						printf( " " );
				}
				printf( "\n" );
			}
			contadorletra++;
			break;
		case'i':
			printf("\n");
			for(i = 0; i < 6; i++){
				for(j = 0; j < 6; j++){
					if(i==0 || i==5 || j==2 || j==3)
						printf( "%c", tipografia.i);
					else
						printf( " " );
				}
				printf( "\n" );
			}
			contadorletra++;
			break;
		case'j':
			printf("\n");
			for(i = 0; i < 6; i++){
				for(j = 0; j < 6; j++){
					if(i==3 && j<=2 || i==4 && j==1 || i==5 && j==2 || i==5 && j==3 || i==5 && j==4 || j==5 && i<=4)
						printf( "%c", tipografia.j);
					else
						printf( " " );
				}
			printf( "\n" );
			}
			contadorletra++;
			break;
		case'k':
			printf("\n");
			for(i = 0; i < 6; i++){
				for(j = 0; j < 6; j++){
					if(j==0 || i==2 && j<=2 || i==3 && j<=2 || i==0 && j>=4 || i==5 && j>=4 || i==1 && j==3 || i==4 && j==3)
						printf( "%c", tipografia.k);
					else
						printf( " " );
				}
				printf( "\n" );
			}
			contadorletra++;
			break;
		case'l':
			printf("\n");
			for(i = 0; i < 6; i++){
				for(j = 0; j < 6; j++){
					if(i<=4 && j==0 || i==5 && j>=0)
						printf( "%c", tipografia.l);
					else
						printf( " " );
				}
				printf( "\n" );
			}
			contadorletra++;
			break;
		case'm':
			printf("\n");
			for(i=0;i<6;i++){
				for(j=0;j<6;j++){
					if(j==0||j==5||(i==1&&j==1)||(i==2&&j==2)||(i==2&&j==3)||(i==1&&j==4)){
						printf( "%c", tipografia.m);
					}else{
						printf(" ");
					}
					if(j==5){
						printf("\n");
					}
				}
			}
			contadorletra++;
			break;
		case'n':
			printf("\n");
			for(i=0;i<6;i++){
				for(j=0;j<6;j++){
					if(j==0||j==5||i==j){
						printf( "%c", tipografia.n);
					}else{
						printf(" ");
					}
					if(j==5){
					printf("\n");
					}
				}
			}
			contadorletra++;
			break;
		case'o':
			printf("\n");
			for(i=0;i<6;i++){
				for(j=0;j<6;j++){
					if(j==0||j==5){
						if(i==0||i==5){
							printf(" ");
						}else{
							printf( "%c", tipografia.o);
						}
					}else if(i==0||i==5){
						printf( "%c", tipografia.o);
					}else{
						printf(" ");
					}
					if(j==5){
						printf("\n");
					}
				}
		
			}
			contadorletra++;
			break;
		case'p':
			printf("\n");
			for(i=0;i<6;i++){
				for(j=0;j<6;j++){
					if(j==0||(i==1&&j==5)||(i==2&&j==5)){
						printf( "%c", tipografia.p);
					}else if(i==0||i==3){
						if(j==5){
							printf(" ");
						}else{
							printf( "%c", tipografia.p);
						}
					}else{
						printf(" ");
					}
					if(j==5){
						printf("\n");
					}
				}
		
			}
			contadorletra++;
			break;
		case'q':
			printf("\n");
			for(i=0;i<6;i++){
				for(j=0;j<6;j++){
					if(j==0||j==5){
						if(i==0||i==4||(i==5&&j==0)){
							printf(" ");
						}else{
							printf( "%c", tipografia.q);
						}
					}else if(i==0||i==4||(i==3&&j==3)){
						printf( "%c", tipografia.q);
					}else{
						printf(" ");
					}
					if(j==5){
					printf("\n");
					}
				}
		
			}
			contadorletra++;
			break;
		case'r':
			printf("\n");
			for(i=0;i<6;i++){
				for(j=0;j<6;j++){
					if(j==0||(i==1&&j==5)||(i==2&&j==5)||(i==4&&j==4)||(i==5&&j==5)){
						printf( "%c", tipografia.r);
					}else if(i==0||i==3){
						if(j==5){
							printf(" ");
						}else{
							printf( "%c", tipografia.r);
						}
					}else{
						printf(" ");
					}
					if(j==5){
						printf("\n");
					}
				}	
			}
			contadorletra++;
			break;
		case's':
			printf("\n");
			for(i=0;i<6;i++){
				for(j=0;j<6;j++){
					if((j==0&&i==0)||(i==2&&j==0)||(i==2&&j==5)||(i==5&&j==5)){
						printf(" ");
					}else if(i==0||i==2||i==5){
						printf( "%c", tipografia.s);
					}
					if((i==1&&j==0)){
						printf( "%c", tipografia.s);
					}else if((i==3&&j==5)||(i==4&&j==5)){
						printf( "     %c", tipografia.s);
					}
					if(j==5){
						printf("\n");
					}
				}
		
			}
			contadorletra++;
			break;
		case't':
			printf("\n");
			for(i=0;i<6;i++){
				for(j=0;j<6;j++){
					if(i==0){
						printf( "%c", tipografia.t);
					}
					else if(j==2||j==3){
						printf( "%c", tipografia.t);
					}else {
						printf(" ");
					}
					if(j==5){
						printf("\n");
					}
				}
		
			}
			contadorletra++;
			break;
		case'u':
			printf("\n");
			for(i=0;i<6;i++){
				for(j=0;j<6;j++){
					if(j==0&&i==5||j==5&&i==5){
						printf(" ");
					}
					else if(j==0||j==5||i==5){
						printf( "%c", tipografia.u);
					}else{
						printf(" ");
					}
					if(j==5){
						printf("\n");
			
					}
				}
		
			}
			contadorletra++;
			break;
		case'v':
			printf("\n");
			for(i=0;i<6;i++){
				for(j=0;j<6;j++){
					if(j==1&&i==4||j==2&&i==5||j==3&&i==4){
						printf( "%c", tipografia.v);
					}
					if(j==2&&i==5){
						printf( "%c", tipografia.v);
					}
					if(j==0&&i==5||j==5&&i==5||j==0&&i==4||j==5&&i==4){
						printf(" ");
					}
					else if(j==0||j==5){
						printf( "%c", tipografia.v);
					}else{
						printf(" ");
					}
					if(j==5){
						printf("\n");
			
					}
				}
		
			}
			contadorletra++;
			break;
		case'w':
			printf("\n");
			for(i=0;i<6;i++){
				for(j=0;j<6;j++){
					if(j==0&&i==5||j==5&&i==5){
						printf(" ");
					}
					else if(j==0||j==5||i==5&&j==1||i==5&&j==4){
						printf( "%c", tipografia.w);
					}else if(j==2&&i==4||j==3&&i==4){
						printf( "%c", tipografia.w);
					}else if(j==2&&i==3||j==3&&i==3){
						printf( "%c", tipografia.w);
					}else{
						printf(" ");
					}
					if(j==5){
						printf("\n");
			
					}
				}
		
			}
			contadorletra++;
			break;
		case'x':
			printf("\n");
			for(i = 0; i < 6; i++){
				for(j = 0; j < 6; j++){
					if(i==0 && j==0 || i== 0 && j==5 || i==1 && j==1 || i==1 && j==4 || i==2 && j==2 || i==2 && j==3 || i==3 && j==2 || i==3 && j==3|| i==4 && j==1 || i==4 && j==4 || i==5 && j==0 || i==5 && j==5)
						printf( "%c", tipografia.x);
					else
						printf( " " );
					}
				printf( "\n" );
			}
			contadorletra++;
			break;
		case'y':
			printf("\n");
			for(i = 0; i < 6; i++){
				for(j = 0; j < 6; j++){
					if(j==2 && i>=2 || j==3 && i>=2 || i==0 && j==0 || i==0 && j==5 || i==1 && j==1 || i==0 && j==5 ||i==1 && j==4)
						printf( "%c", tipografia.y);
					else
						printf( " " );
					}
				printf( "\n" );
			}
			contadorletra++;
			break;
		case'z':
			printf("\n");
			 for(i = 0; i < 6; i++){
				for(j = 0; j < 6; j++){
					if(i==0 && j>=0 || i==5 && j>=0 || i== 0 && j==5 || i==1 && j==4 || i==2 && j==3 || i==3 && j==2|| i==4 && j==1 || i==5 && j==0)
						printf( "%c", tipografia.z);
					else
						printf( " " );
				}
				printf( "\n" );
			}
			contadorletra++;
			break;
		case ' ':
			printf("\n\n\n\n\n");
			contadorletra++;
			break;
		default:
			printf("\n");
			for(i = 0; i < 6; i++){
				for(j = 0; j < 6; j++){
					printf("#");
				}
				printf("\n");
			}
			contadorletra++;
			break;
		}
	}
	printf("\n");
	system("pause\n");
}
int salir(Tipografia tipografia,int exit)
{
	char op[5];
	int i=0;
	if(exit==0){

		printf("El documento no ha sido guardado.¿Desea guardarlo,s/n?.\n");
		scanf("%s",op);

	if(op[0]=='s'){
		exit=almacenartipografia(tipografia,exit);
		exit=exportartipografia(tipografia,exit);
	}

	printf("Gracias por utilizar nuestro programa de diseno de banners\n");
	exit = 1;

	return exit;
}

}
