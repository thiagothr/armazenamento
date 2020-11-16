	    #include <stdio.h>
		#include <stdlib.h>
		#include <iostream>
		#include <string.h>
		#include <ctype.h>
		#include <locale.h>
		using namespace std;
		
	
		
		typedef struct 
			{ 
			int matri,idade;
			char nome[50],sexo[50];	
			float media;
			}ficha;
			
		
		 ficha aluno[50]; 
		 
		 
		char nome[50];
		int i=0,j,idade;                               
		float mediaS,av1,av2,av3;
		
		
		void Add(){
			
				int matricula;
			system ("cls");
			
		     cout<< "UNICARIOCA - BANCO DE DADOS"<<endl;
			
		    if (i<50){
			cout<<"ADICIONAR USUÁRIO"<<endl;	
			cout<<"Matrícula (APENAS NÚMEROS): "; cin>>matricula; 
			
			for (int j=0;j<i;j++){
			
			if (matricula==aluno[j].matri){
			
			cout<<"ALUNO JÁ CADASTRADO"<<endl;
			system ("pause");
			return;
			}
			
			}
			
			aluno[i].matri=matricula;

			cout<<"Nome: "; fflush(stdin); gets(aluno[i].nome);
		    cout<<"Idade: ";cin>>aluno[i].idade;  
			cout<<"Sexo: ";	fflush(stdin);  gets(aluno[i].sexo);
			cout<<"---------------------------------"<<endl;
		     
			 cout<<"AV1: ";  cin>>av1;
			 cout<<"AV2: ";  cin>>av2;
			 cout<<"AV3: ";  cin>>av3;
			cout<<"---------------------------------"<<endl;
		
			{
			
			if ((av1>av2) && (av2>av3)){
			
			mediaS= ((av1+av2)/2);
			aluno[i].media=mediaS;
			cout<<"Média Final : "<<mediaS<<endl;}
			
			if ((av1>av2) && (av3>av2)){
			
			mediaS= ((av1+av3)/2);
			aluno[i].media=mediaS;
			cout<<"Média Final : "<<mediaS<<endl;}
			
			if ((av2>av1) && (av1>av3)){
			mediaS= ((av2+av1)/2);
			aluno[i].media=mediaS;
			cout<<"Média Final : "<<mediaS<<endl;}
			
			if ((av2>av1) && (av3>av1)){
				mediaS=((av2+av3)/2);
				aluno[i].media=mediaS;
				cout<<"Média Final : "<<mediaS<<endl;}	
			
		    if ((av1==av2) && (av1>av3)){
		        mediaS=((av1+av2)/2);
		        aluno[i].media=mediaS;
		        cout<<"Média Final : "<<mediaS<<endl;}
			
			if ((av1==av2) && (av3>av1)){
				mediaS=((av1+av3)/2);
				aluno[i].media=mediaS;
				cout<<"Média Final : "<<mediaS<<endl;}
		    
			if ((av1==av2) && (av1==av3)){
			mediaS=((av1+av2)/2);
			aluno[i].media=mediaS;
		    cout<<"Média Final : "<<mediaS<<endl;}
			
		}
				
			i++;	
		}
		
		 else 
			cout<<"SISTEMA LOTADO"<<endl;
			system ("pause");
		
		}
		
		void Buscar(){
		
		int matric,po; 
		char nome[50];
		 system ("cls");
		 cout<< "UNICARIOCA - BANCO DE DADOS"<<endl;
		 
		 cout<<"PESQUISAR ALUNO"<<endl<<endl;	
		 
		 	cout<<"Matricula para Pesquisa:"; cin>>matric;  
		         cout<<"---------------"<<endl; 
		 for (int j=0;j<i;j++){
			if (matric==aluno[j].matri){
				cout<<"Nome: "<<aluno[j].nome<<endl;
				cout<<"Idade: "<<aluno[j].idade<<endl;	                                                                                                                                                                                          
				cout<<"Sexo: "<<aluno[j].sexo<<endl;
				cout<<"Média Final: "<<aluno[j].media<<endl;
				system ("pause");
				return;		
			}	
		
		
		}
		
	if (matric!=aluno[i].matri){
		system ("cls");
		cout<<"MATRÍCULA NÃO ENCONTRADA"<<endl;
		cout<<"Deseja adicionar?"<<endl<<endl;
		cout<<"[1] Sim"<<endl;
		cout<<"[2] Nao"<<endl<<endl;
		cout<<"------------------------"<<endl;
		cout<<"Opção: "; cin>>po;
		
		if (po==1){
		Add(); }
		else 
		return;
	
	}
		}
		
		void Exibir(){
		 int op3,op4,op5;
		
		system ("cls");
		 cout<< "UNICARIOCA - BANCO DE DADOS"<<endl;
		 cout<< "EXIBIR USUÁRIOS"<<endl;
		cout<< "[1] Aprovados"<<endl;
		cout<< "[2] Reprovados"<<endl;
		cout<< "[3] Todos"<<endl;
		cout<< "[0] Voltar"<<endl;
			cout<<"------------------------"<<endl;
		cout<< "Opção: "; cin>>op3;
		 	
		switch (op3){
			
			case 1: 
				system ("cls");
					cout<< "UNICARIOCA - BANCO DE DADOS"<<endl;
					cout<<"ALUNOS APROVADOS:"<<endl;
				    
		     cout<< "[1] Média >=7"<<endl;
		     cout<< "[2] Média >=9"<<endl;
		     cout<< "[0] Voltar"<<endl;
			 	cout<<"------------------------"<<endl;
			 cout<<"Opção: ";
			 	cin>>op4;
			
			switch (op4){
				
				case 1:
					system ("cls");
					cout<<"MÉDIA MAIOR QUE 7"<<endl<<endl;
					for (int i=0;i<50;i++){
					
				if (aluno[i].media>=7){
				cout<<"Matricula: "<<aluno[i].matri<<endl;
				cout<<"Nome: "<<aluno[i].nome<<endl;
				cout<<"Idade: "<<aluno[i].idade<<endl;	                                                                                                                                                                                          
				cout<<"Sexo: "<<aluno[i].sexo<<endl;
				cout<<"Média Final: "<<aluno[i].media<<endl;
				cout<<"---------------------------------"<<endl;
				}	
			
			}
			
				system ("pause");
	 break;
			case 2:
						system ("cls");
						cout<<"MEDIA MAIOR QUE 9"<<endl<<endl;
						for (int i=0;i<50;i++){
						
					if (aluno[i].media>=9){
					cout<<"Matrícula: "<<aluno[i].matri<<endl;
					cout<<"Nome: "<<aluno[i].nome<<endl;
					cout<<"Idade: "<<aluno[i].idade<<endl;	                                                                                                                                                                                          
					cout<<"Sexo: "<<aluno[i].sexo<<endl;
					cout<<"Média Final: "<<aluno[i].media<<endl;
					cout<<"---------------------------------"<<endl;
					}	
				}
					system ("pause");
	        break;
	        
	       
		    case 0: return; 		
	             break;
	
	}
	break;
	
	       case 2:
	       		system ("cls");
				cout<< "UNICARIOCA - BANCO DE DADOS"<<endl;	
					cout<<"ALUNOS REPROVADOS:"<<endl<<endl;	
			cout<< "[1] Média <7"<<endl;
		     cout<<"[2] Média <5"<<endl;
		     cout<<"[0] Voltar"<<endl;
			 	
				 cout<<"Opção: "<<endl;
					cin>>op5;
					
					switch (op5){ 
					
					case 1: 
					system ("cls");
						cout<<"MÉDIA MENOR QUE 7"<<endl<<endl;
						for (int i=0;i<50;i++){
						
					if ((aluno[i].media<7) && (aluno[i].media>0.1))  {
					cout<<"Matrícula: "<<aluno[i].matri<<endl;
					cout<<"Nome: "<<aluno[i].nome<<endl;
					cout<<"Idade: "<<aluno[i].idade<<endl;	                                                                                                                                                                                          
					cout<<"Sexo: "<<aluno[i].sexo<<endl;
					cout<<"Média Final: "<<aluno[i].media<<endl;
					cout<<"---------------------------------"<<endl;
					}	
				}
					system ("pause");
	        break;
				
				case 2:
				system ("cls");
						cout<<"MÉDIA MENOR QUE 5"<<endl<<endl;
						for (int i=0;i<50;i++){
						
					if ((aluno[i].media<5) && (aluno[i].media>0.1))  {
					cout<<"Matrícula: "<<aluno[i].matri<<endl;
					cout<<"Nome: "<<aluno[i].nome<<endl;
					cout<<"Idade: "<<aluno[i].idade<<endl;	                                                                                                                                                                                          
					cout<<"Sexo: "<<aluno[i].sexo<<endl;
					cout<<"Média Final: "<<aluno[i].media<<endl;
					cout<<"---------------------------------"<<endl;
					}	
				} 
					system ("pause");
	        break;	
					case 0:
						return;
					break;
					}
	break;
	     case 3:
	     	system ("cls");
		 cout<<"TODOS OS ALUNOS"<<endl<<endl;
		 	for (int i=0;i<50;i++){
		          if (aluno[i].media>0.1){
			    cout<<"Matrícula: "<<aluno[i].matri<<endl;
				cout<<"Nome: "<<aluno[i].nome<<endl;
				cout<<"Idade: "<<aluno[i].idade<<endl;	                                                                                                                                                                                          
				cout<<"Sexo: "<<aluno[i].sexo<<endl;
				cout<<"Média Final: "<<aluno[i].media<<endl;
				cout<<"---------------------------------"<<endl;
			}
			}
				system ("pause");
		} 
	}
			
		void Salvar(){
			int j,op;
			char arquivo[100];
			FILE *arq;
			system ("cls");
			
			 	cout<<"UNICARIOCA - BANCO DE DADOS"<<endl;
			cout<<"SALVAR/CARREGAR ARQUIVO"<<endl;
		
	   cout<<"[1] Salvar"<<endl;
	   cout<<"[2] Carregar"<<endl;
	   cout<<"[0] Voltar"<<endl;
	   cout<<"Opção: ";
	   cin>>op;
		
		switch (op){
		case 1:
		cout<<endl<<"Nome do Arquivo Externo: ";
	    cin>>arquivo;
	    strcat(arquivo,".txt");
	    arq= fopen (arquivo,"w");
			
			 if (arq != NULL){
		  
		  fprintf(arq,"Total cadastrado = %d\n",i);
		  for (int j=0;j<i;j++){
		fprintf(arq,"Matricula = %d\n",aluno[j].matri);
	    fprintf(arq,"Nome = %s\n",aluno[j].nome);
	    fprintf(arq,"Idade = %d\n",aluno[j].idade);
	    fprintf(arq,"Sexo = %s\n",aluno[j].sexo);
		fprintf(arq,"Media = %.1f\n\n",aluno[j].media);
	    
	}
	
	fclose(arq);
	break;
	}
	
	  case 2:
	
	  FILE *arq;	
	system ("cls");
	cout<<"CARREGAR USUARIOS"<<endl;
	cout<<"Nome do arquivo externo: "; cin>>arquivo;
	strcat(arquivo,".txt");
	arq= fopen (arquivo, "r");
	 if (arq != NULL){
	 fseek(arq,19,0);
	fscanf(arq,"%d\n",&i);
	
		for (int j=0;j<=i;j++){
		
	        fseek(arq,12,1);
		fscanf(arq,"%d\n",&aluno[j].matri);
		  	fseek(arq,7,1);
		fscanf(arq,"%s\n",aluno[j].nome);
			fseek(arq,8,1);
        fscanf(arq,"%d\n",&aluno[j].idade);
			fseek(arq,7,1);
		fscanf(arq,"%s\n",aluno[j].sexo);
			fseek(arq,8,1);		
		fscanf(arq,"%f\n",&aluno[j].media);
		
			}
	
		fclose (arq);
		
		if (aluno[j].matri!=NULL)
		cout<<"CARREGAMENTO BEM SUCEDIDO"<<endl;
		
		
	} 
	else 
	cout<<"ARQUIVO NÃO EXISTE"<<endl<<endl;
	system ("pause");
	fclose (arq);
        	
	case 3:
		return;
	

}		
	}
	
		main (){
		 
		 setlocale(LC_ALL, "Portuguese");
		 int op,op2; 
		 char nome[50];
		 do{
		 
		 system ("cls");
		
		 cout<< "UNICARIOCA - BANCO DE DADOS"<<endl;
		 cout<< "[1] Adicionar"<<endl;
		 cout<< "[2] Pesquisar"<<endl;
		  cout<<"[3] Exibir"<<endl;
		 cout<< "[4] Salvar/Carregar"<<endl;
		 cout<< "[0] Sair"<<endl;
		 cout<<"_____________________________"<<endl;
		 
		 cout<< "Opção: "; cin>>op;
		 
		 switch (op){
		 
		 case 1: Add(); break;
		 case 2: Buscar(); break;	
		 case 3: Exibir(); break;
		 case 4: Salvar(); break;
		 case 0: break;
		 default:
		 cout<<"OPÇÃO INVALIDA"<<endl;
		 system ("pause");
		 }
			
		}
		
		while (op!=0);
		}  

