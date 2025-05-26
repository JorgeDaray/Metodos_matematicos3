#include<iostream>
#include<iomanip>
#include<cmath>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()

{

    cout.precision(0);      //DETERMINA A IMPRIMIR SOLO CUATRO NUMEROS DESPUES DEL PUNTOP DECIMAL

    cout.setf(ios::fixed);  //DETERMINA A IMPRIMIR SOLO CUATRO NUMEROS DESPUES DEL PUNTO DECIMAL

    int n,i,j,k,flag=0,count=0,l=1,e=1;

  cout<<"---------------------------------GAUSS SEIDEL-----------------------------------"<<endl;

 cout<<"같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같"<<endl;

 cout<<"INTRODUZCA EL NUMERO DE ECUACIONES: ";

    cin>>n;                 //NUMERO DE ECUACIONES



 double a[n][n+1];       //DECLARACION DE LA SEGUNDA MATRIZ  PARA ALMACER LOS ELEMENTOS DE LA MATRIZ AUMENTADA

    double x[n];            //DECLARACION DE LA MATRIZ PARA ALMACENAR LOS VALORES DE LSA VARIABLES

    double eps,y;

    cout<<"\nINTRODUZCA LOS ELEMENTOS DE LA MATRIZ AUMENTADA EN FILA: \n";

    for (i=0;i<n;i++){      //CICLO PARA INTRODUCIR LOS VALORES EN LA MATRIZ

        for (j=0;j<=n;j++){ //CICLO PARA INTRODUCIR LOS VALORES EN LA MATRIZ

            cout<<"["<<i+1<<"]"<<"["<<j+1<<"] = ";

   cin>>a[i][j];   //ENTRADA DE LOS ELEMENTOS DE LA MATRIZ

   }}

   /*  cout<<"\nINTRODUZCA LOS VALORES INICIALES DE LAS VARIABLES: \n";

    for (i=0;i<n;i++)       //CICLO PARA INTRODUCIR LOS VALORES DE X1,X2,X3,XN......

    cin>>x[i];              //ENTRADA DE LOS VALORES INICIALES PARA X1,X2,X3,XN......*/

    x[i] =0;

   /* cout<<"\nINTRODUZA LA PRECISION HASTA LA CUAL DESEA LA SOLUCION : \n";

    cin>>eps;  */             //EL NUMERO DEL CUAL DEPENDE LA FINALIZACION DEL PROGRAMA AL LLEGAR CON UNA SOLUCION APROXIMADA CON CIERTO GRADO DE "PRECISION" O EN SU FALLO DESPUES DE CIERTO NUMERO DE ITERACIONES

    eps = 0.1;

 system ("cls");

 cout<<"---------------------------------GAUSS SEIDEL-----------------------------------"<<endl;

 cout<<"같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같"<<endl;



 cout<<"----------------------------TU MATRIZ ES LA SIGUIENTE---------------------------"<<endl;

 cout<<"같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같"<<endl;

 for (i=0;i<n;i++){      //CICLO PARA IMPRIMIR LA MARIZ

         cout<<"\nx"<<l++<<"= ";  //IMPRIME POR PANTALLA X0=, X1=........

  for (j=0;j<=n;j++){ //CICLO PARA IMPRIMIR LA MARIZ



     if (j==n){          //CONDICIONANTES PARA EL MODELO DE ECUACIONES

  cout<<"="<<setw(1)<<a[i][j]<<setw(1)<<setw(2);}        //CONDICIONANTES PARA EL MODELO DE ECUACIONES

  else{                                                  //CONDICIONANTES PARA EL MODELO DE ECUACIONES

        cout<<"|"<<setw(1)<<a[i][j]<<setw(1)<<"|"<<setw(2);}   //CONDICIONANTES PARA EL MODELO DE ECUACIONES

   }}

 /////////////////////////////////PROCESO DE SOLUCION DEL METODO DE GAUSS SEIDEL/////////////////////////////////////////////////////////

 for (i=0;i<n;i++)       //CICLO PARA HACER LAS ECUACIONES DIAGONALMENTE DOMINANTES

        for (k=i+1;k<n;k++) //CICLO PARA HACER LAS ECUACIONES DIAGONALMENTE DOMINANTES



   if (abs(a[i][i])<abs(a[k][i]))  //LA PALABRA RESERVADA "ABS" HACE REFERENCIA A LA TRANSFORMACION DE UN VALOR A UN VALOR ABSOLUTO EN ESTE CASO PARA RETORTAR LA MATRIZ PARA LA FUNCION DE LA ITENERACION



    for (j=0;j<=n;j++)

                {

                    double temp=a[i][j];

                    a[i][j]=a[k][j];

                    a[k][j]=temp;

                }

    cout<<"\n";

    ////////(/////////////////IMPRIMIMOS EL RESULTADO DEL PROCESO ANTERIOR////////////////////////////////////

 cout<<"--------MATRIZ DESPUES DE APLICAR LA DIAGONAL DOMINANTE POR GAUSS SEIDEL--------"<<endl;

 cout<<"같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같"<<endl;

 for (i=0;i<n;i++){      //CICLO PARA HACER LAS ECUACIONES DIAGONALMENTE DOMINANTES

         cout<<"\nx="<<e++<<" ";  //IMPRIME POR PANTALLA X0=, X1=........

  for (j=0;j<=n;j++){ //CICLO PARA HACER LAS ECUACIONES DIAGONALMENTE DOMINANTES

     if (j==n){          //CONDICIONANTES PARA EL MOEDELO DE ECUACIONES

  cout<<"="<<setw(1)<<a[i][j]<<setw(1)<<setw(2);}        //CONDICIONANTES PARA EL MOEDELO DE ECUACIONES

  else{                                                  //CONDICIONANTES PARA EL MOEDELO DE ECUACIONES

        cout<<"|"<<setw(1)<<a[i][j]<<setw(1)<<"|"<<setw(2);}   //CONDICIONANTES PARA EL MOEDELO DE ECUACIONES

   }}



 cout<<"\n";

 cout<<"---------------------------------GAUSS SEIDEL-----------------------------------"<<endl;

 cout<<"같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같"<<endl;



 cout<<"ITERACION NO."<<setw(9);//LA FUNCION "STEW" CREA UNA CADENA DE CARACTERES DEPENDIENDO DEL NUMERO DENTRO DEL PARENTESIS, ES ESTE CASO LO USAMOS PARA CREAR UNA ESPECIE DE "TABLA"

    for(i=0;i<n;i++)            //CICLO PARA MOSTRAR EN PANTALLA X1,X2,X3,XN..........

        cout<<"x"<<i+1<<setw(18); //LA FUNCION "STEW" CREA UNA CADENA DE CARACTERES DEPENDIENDO DEL NUMERO DENTRO DEL PARENTESIS, ES ESTE CASO LO USAMOS PARA CREAR UNA ESPECIE DE "TABLA"

    cout<<"\n----------------------------------------------------------------------"<<endl;

    do{                         //REALIZAR ITERACIONES PARA CALCULAR X1, X2, ... XN

        cout<<"\n"<<count+1<<"."<<setw(16);  //LA FUNCION "STEW" CREA UNA CADENA DE CARACTERES DEPENDIENDO DEL NUMERO DENTRO DEL PARENTESIS, ES ESTE CASO LO USAMOS PARA CREAR UNA ESPECIE DE "TABLA"

        for (i=0;i<n;i++)       //CICLO QUE CALCULA LOS VALORES DE X1,X2,3,X4 CON LOS PARAMETROS YA ANTES INTRODUCIDOS POR EL USUARIO

        {

            y=x[i];

            x[i]=a[i][n];

            for (j=0;j<n;j++)

            {

                if (j!=i)

                x[i]=x[i]-a[i][j]*x[j];

            }

            x[i]=x[i]/a[i][i];

            if (abs(x[i]-y)<=eps) //COMPARA LOS VALORES ACTUALES CON LOS ULTIMOS VALORES ARROJADOS POR EL CALCULO

                flag++;

            cout<<"|"<<x[i]<<"|"<<setw(18);  //IMPRIME LOS VALORES DE LA ITINERANCIA Y DEJA UN ESPCIO DE 18 BITS PARA LA ITINERANCIA DE LA SEGUNDA ECUACION Y ASI SUCESIVAMENTE

        }

        cout<<"\n";             //DA UN ESPACIO AL PROGRAMA

        count++;                //IMPRIME EL NO. DE INTERACION

    }

 while(flag<n);              //SI LOS VALORES DE TODAS LAS VARIABLES NO DIFIEREN DE SUS VALORES ANTERIORES CON UN ERROR MAYOR QUE EPS ENTONCES EL INDICADOR DEBE SER N Y POR LO TANTO DETIENE EL BUCLE



    cout<<"\nLA SOLUCION ES LA SIGUIENTE:\n";

    for (i=0;i<n;i++)

        cout<<"x"<<i+1<<" = "<<x[i]<<endl; //DA EN PANTALLA EL VALOR DE X[n...]



 system ("PAUSE");

 return 0;

}
