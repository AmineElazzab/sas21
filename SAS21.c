#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//   Déclaration global 

int n=3;


// Déclaration de type structe cLt
typedef struct {   // typedef which you can use to give a type a new name
      char CIN[20];
      char Nom[40];
      char Prenom[40];
      float Montant;
}clt ;

//---------compte
clt cpt[60]={{"HH123","azer","def",6000},{"HH456","amine","razi",4000},{"HH789","mehdi","vari",9000}};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Introduire_un_compte_bancaire()
{
    system("cls");
    //int i=n; // n=nomber des comptes deja enregestrer 
        printf("\n\n\t\t\t\t\t /////***** Introduire un compte bancaire *****/////\n");
        printf("\n");
        printf("\n");
        printf("** Entrer CIN ** :  ");
        scanf("%s", cpt[n].CIN);
        printf("\n");
        printf("** Entrer Nom **  : ");
        scanf("%s", cpt[n].Nom);
        printf("\n");
        printf("** Entrer Prenom ** : ");
        scanf("%s", cpt[n].Prenom);
        printf("\n");
        printf("** Entrer Montant ** : ");
        scanf("%f",&cpt[n].Montant);
        printf("\n");
        printf("--------------------------------------------------------------------------------------------------------------------\n");
        printf("\t\t\t\t\t\t **** Operation Reussi ^_^ ****\n");
        n++;
        system("pause");
}
////////////////////////////////////////////////

void Introduire_plusieurs_comptes_bancaires()
{
    int i;
    int nbrcompt;
    system("cls");
    printf("\n\n\t\t\t\t /////***** Introduire plusieurs comptes bancaires *****/////\n");
    printf("\n");
    printf("\n");
    printf("\n** Entrer le nombre des compte ** : "); 
    scanf("%d",&nbrcompt);
    printf("\n");
    printf("\n");
    for(i=n;i<n+nbrcompt;i++)
    {
        printf("** Entrer CIN ** :  ");
        scanf("%s",cpt[i].CIN);
        printf("\n");
        printf("** Entrer Nom ** : ");
        scanf("%s",cpt[i].Nom);
        printf("\n");
        printf("** Entrer Prenom ** : ");
        scanf("%s",cpt[i].Prenom);
        printf("\n");
        printf("** Entrer Montant ** : ");
        scanf("%f",&cpt[i].Montant);
        printf("\n");
        
        

    }
    n=n+nbrcompt;
    printf("--------------------------------------------------------------------------------------------------------------------\n");
        printf("\t\t\t\t\t\t **** Operation Reussi ^_^ ****\n");
    system("pause");
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Retrait()  //COMPARAISON
{
	    int i, x;
	    char cin[20];
	    float montant;
	    
	    printf("\t\t\t ********** Rerait **********\n");
	    printf("\n");
	    printf("\n");
	    printf("**Entrer CIN** :  ");
        scanf("%s",cin);
        for(i=0;i<n;i++)
        {
        	if(strcmp(cpt[i].CIN,cin)==0)
        	{
        		x=0;
        		break;
			}
			
		}
		if(x==0)
		{
			printf("**Entrer le Montant** : ");
			scanf("%f",&montant);
			printf("\n");
			printf("\n");
			cpt[i].Montant-=montant;
			printf("--------------------------------------------------------------------------------------------------------------------\n");
        	printf("\t\t\t\t\t **** Operation Reussi ^_^ ****\n");
		}
		else
		printf("** Compte Pas Trouvee ** \n");
        system("pause");
}
////////////////////////////////////////////////////
void Depot()
{
	
	    int i, x;
	    char cin[20];
	    float montant;
	    
	    printf("\t\t\t ********** Depot **********\n");
	    printf("\n");
	    printf("\n");
	    printf("**Entrer CIN** :  ");
        scanf("%s",cin);
        for(i=0;i<n;i++)
        {
        	if(strcmp(cpt[i].CIN,cin)==0)
        	{
        		x=0;
        		break; // pour sorter dans cette boucle
			}
		}
		if(x==0)
		{
			printf("**Entrer le Montant** : ");
			scanf("%f",&montant);
			printf("\n");
			printf("\n");
			cpt[i].Montant+=montant;
			printf("--------------------------------------------------------------------------------------------------------------------\n");
        	printf("\t\t\t\t\t **** Operation Reussi ^_^ ****\n");
		}
		else
		printf("** Compte Pas Trouvee ** \n");
        system("pause");
}

/////////////////////////// DECLARATION DES OPERATIONS ///////////////////////////////////////
void operations()
{
    int choix;
    system("cls");
    printf("\n\n\t\t\t\t*****////////// Operations //////////*****");
    printf("\n");
    printf("\n");
    printf("\n 1* Retrait");
    printf("\n");
	printf("\n");
	printf("\n 2* Depot");
    printf("\n");
    printf("\n");
	printf("\n ** votre choix ** : ");
    scanf("%d",&choix);

    switch(choix){

         case 1:{
              Retrait();

          };break;

         case 2:{
               Depot();

          };break;
    }
    

}
////////////////////////////////////////////////////////// AFFICHAGE /////////////////////////////////////
///// PAR ORDER ASCENDANT//////
void POA()  
{
	system("cls");
    int i,j;
    clt tmp;
    
    printf("\n\t\t\t\t ****Affichage par order ascendant**** \n");


    for(i=0;i<n;i++)//boucle pour testi le nombre des comptes
    {
        for(j=i+1;j<n;j++)
        {
            if(cpt[j].Montant<cpt[i].Montant)
            {

                tmp=cpt[i];
                cpt[i]=cpt[j];
                cpt[j]=tmp;  // TRI PAR SELECTION 
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\t%s \t%s \t%s \t%.2f\n",cpt[i].CIN,cpt[i].Nom,cpt[i].Prenom,cpt[i].Montant);
    }
    system("pause"); 
}
///////////////////////////////// Par Ordre Descendant /////////////////////////////////////
void POD()
{
	system("cls");
    int i,j;
    clt tmp;
    
    printf("\n \t\t\t\t ****Affichage Par Ordre Descendant****\n ");


    for(i=0;i<n;i++)//boucle pour testi le nombre des comptes
    {
        for(j=i+1;j<n;j++)
        {
            if(cpt[j].Montant>cpt[i].Montant)
            {

                tmp=cpt[i];
                cpt[i]=cpt[j];
                cpt[j]=tmp;  //
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\t%s \t%s \t%s \t%.2f\n",cpt[i].CIN,cpt[i].Nom,cpt[i].Prenom,cpt[i].Montant);
    }
    system("pause");  
}
///////////////////////Par Ordre Ascendant (les comptes bancaires ayant un montant supérieur à un chiffre introduit//////////////////////////////////////
void POA1()
{
	system("cls");
    int i,j;
    float y;
    clt tmp;
    
    printf("\n****Affichage Par Ordre Ascendant (les comptes bancaires ayant un montant superieur a un chiffre introduit)****\n ");
    printf("\n");
    printf("\n");
    printf("**Entrer un chiffre** : ");
    scanf("%f",&y);
    


    for(i=0;i<n;i++)//boucle pour testi le nombre des comptes
    {
        for(j=i+1;j<n;j++)
        {
            if(cpt[j].Montant>cpt[i].Montant)
            {

                tmp=cpt[i];
                cpt[i]=cpt[j];
                cpt[j]=tmp;  //
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(cpt[i].Montant>y)
        printf("\t%s \t%s \t%s \t%.2f\n",cpt[i].CIN,cpt[i].Nom,cpt[i].Prenom,cpt[i].Montant);
    }
    system("pause");  
}
//////////////////Par Ordre Descendant (les comptes bancaires ayant un montant supérieur à un chiffre introduit)////////////////////////////
void POD1()
{
	system("cls");
    int i,j;
    float y;
    clt tmp;
    
    printf("\n****Affichage Par Ordre Descendant (les comptes bancaires ayant un montant superieur a un chiffre introduit)****\n ");
    printf("**Entrer un chiffre** : ");
    scanf("%f",&y);


    for(i=0;i<n;i++)//boucle pour testi le nombre des comptes
    {
        for(j=i+1;j<n;j++)
        {
            if(cpt[j].Montant<cpt[i].Montant)
            {

                tmp=cpt[i];
                cpt[i]=cpt[j];
                cpt[j]=tmp;  //
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(cpt[i].Montant>y)
        printf("\t%s \t%s \t%s \t%.2f\n",cpt[i].CIN,cpt[i].Nom,cpt[i].Prenom,cpt[i].Montant);
    }
    system("pause");  
}
////////////////Recherche par CIN/////////////////////
void Recherche_par_CIN()
{
	 	int i, x;
	 system("cls");
	    char cin[20];
	    
	    printf("\t\t\t ********** Recherche par CIN **********\n");
	    printf("\n");
	    printf("\n");
	    printf("** Entrer CIN ** :  ");
        scanf("%s",cin);
        printf("\n");
        printf("\n");
        for(i=0;i<n;i++)
        {
        	if(strcmp(cpt[i].CIN,cin)==0)  //TRI PAR RECHERCHE  EST COMPARESON 
			{
        	
        		x=0;
        		break;
       		}
   		}
        if(x==0)
        	printf("\t%s \t%s \t%s \t%.2f\n",cpt[i].CIN,cpt[i].Nom,cpt[i].Prenom,cpt[i].Montant);
        	printf("\n");
        else
        	printf("CIN  %s n'existe pas \n",cin);
        	system("pause");
}



void Menu_Affichage()
{


    int choix;
     system("cls");
    printf("\n\n\t\t\t\t*****////////// Affichage //////////*****");
    printf("\n");
    printf("\n");
    printf("\n 1* Par Ordre Ascendant");
    printf("\n");
    printf("\n");
    printf("\n 2* Par Ordre Descendant");
    printf("\n");
    printf("\n");
    printf("\n 3* Par Ordre Ascendant (les comptes bancaires ayant un montant superieur a un chiffre introduit)");
    printf("\n");
    printf("\n");
    printf("\n 4* Par Ordre Descendant (les comptes bancaires ayant un montant superieur a un chiffre introduit)");
    printf("\n");
    printf("\n");
    printf("\n 5* Recherche par CIN");
    printf("\n");
    printf("\n");
    printf("\n\t\t\t\t\t\tvotre choix : ");
    scanf("%d",&choix);

    switch(choix){

        case 1:{
               POA();

          };break;

         case 2:{
               POD();
          };break;

           case 3:{
               POA1();
          };break;

           case 4:{
               POD1();
          };break;

           case 5:{
                 Recherche_par_CIN();
          };break;


}

}


void Fidelisation()
{
	int i,j;
	clt tmp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(cpt[j].Montant>cpt[i].Montant)
			{
				tmp=cpt[i];
				cpt[i]=cpt[j]; //TRI PAR SELECTION 
				cpt[j]=tmp;
			}
		}
		
	}
	for(i=0;i<3;i++)
	{
		cpt[i].Montant+=cpt[i].Montant*0.0013;
	}
			printf("--------------------------------------------------------------------------------------------------------------------\n");
        	printf("\t\t\t\t\t\t ****Operation Reussi****\n");
        	system("pause");
	
}


int main()
{


    int choix;
   do{
    
    printf("\n\n\t\t\t\t////////////////////** WELCOM **////////////////////\n");
    printf("\n");
	printf("\n");
    printf("1* Introduire un compte bancaire \n");
    printf("\n");
	printf("\n");
    printf("2* Introduire plusieurs comptes bancaires \n");
    printf("\n");
	printf("\n");
	printf("3* Operations \n");
    printf("\n");
	printf("\n");
	printf("4* Affichage \n");
    printf("\n");
	printf("\n");
	printf("5* Fidelisation \n");
    printf("\n");
	printf("\n");
	printf("6* Quitter l-application \n");
    printf("\n");
	printf("\n");
	printf("\t\t\t\t\t\tVotre choix : ");
    scanf("%d",&choix );

    switch(choix){

        case 1:{
            Introduire_un_compte_bancaire();

          };break;

         case 2:{
            Introduire_plusieurs_comptes_bancaires();

          };break;

           case 3:{
               operations();

          };break;

           case 4:{
               Menu_Affichage();

          };break;

           case 5:{

				Fidelisation();

          };break;

           case 6:{


          };break;

    }

}while(choix!=6);






    return 0;

}
