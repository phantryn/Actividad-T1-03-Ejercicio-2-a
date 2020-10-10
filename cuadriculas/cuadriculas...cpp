   #include <iostream>
    #include <Windows.h>
    #include <graphics.h>
     
    using namespace std;
     
    int main() 
	{
       int ancho, alto;  
       int t,d=630,c=1,a=1,al,an;
     
       ancho = GetSystemMetrics(SM_CXSCREEN);
       alto = GetSystemMetrics(SM_CYSCREEN);
       
       cout << "Resolucion de pantalla > " << ancho << "x" << alto << endl;
   
   	an=ancho-16;
	al=alto-18;
	    
       initwindow(an,al,"");

	
    do
    {   
	    for(t=1; t<=an; t++ )
   		{
    	  putpixel( t, c, WHITE ); 
		}
		c=c+30;
		t=1; 
		a++;
	}while(a!=27);
	
	c=1;
	a=1;
	 do
    {   
	    for(t=1; t<=al; t++ )
   		{
    	  putpixel( c, t, WHITE ); 
		}
		c=c+30;
		t=1; 
		a++;
	}while(a!=46);


   getch();
   closegraph();

   return 0;
}
