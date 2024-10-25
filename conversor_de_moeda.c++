#include <iostream>
 using namespace std;
int main() {
     int escolha;
      double valor;

          cout<<"LEMBRANDO QUE ESTES VALORES NA CONVERSÃO SÃO VALORES COM A COTAÇÃO ATUAL \"22/10/2024\""<<endl;
    
        cout<<"escolha a moeda na qual queria converte"<<endl;
        cout<<"1- real"<<endl;
        cout<<"2- dolar EUA"<<endl;
        cout<<"3- dolar CDN"<<endl;
        cout<<"4- ienes"<<endl;
     
        cin>>escolha;

     do{
     switch (escolha){
         case 1:
        
        cout<<"escolha a moeda na qual queria converte"<<endl;
        cout<<"1- dolar EUA"<<endl;
        cout<<"2- dolar CDN"<<endl;
        cout<<"3- ienes"<<endl;
       
             cin>>escolha;
               if (escolha == 1){
                    cout<<"qual valor deseja converter? "<<endl;
                     cin>>valor;
                    cout<<"o valor e : "<<valor* 0.18;
                     cout<<endl;
               
               } else if (escolha == 2) {
                      cout<<"qual valor deseja: "<<endl;
                       cin>>valor;
                     cout<<" o valor e: "<< valor*0.2427;
                   cout<<endl;
               
               }else if (escolha == 3) {

                       cout<<"qual valor deseja: "<<endl;
                       cin>>valor;
                     cout<<" o valor e: "<< valor*0.04;
                     cout<<endl;
               }
         break;
         case 2:
         
         cout<<"escolha a moeda na qual queria converte"<<endl;
         cout<<"1- real"<<endl;
         cout<<"2- dolar CDN"<<endl;
         cout<<"3- ienes"<<endl;
       
             cin>>escolha;
              
        
               
             if (escolha == 1){
                    cout<<"qual valor deseja converter? "<<endl;
                     cin>>valor;
                    cout<<"o valor e : "<<valor* 5.70;
                    cout<<endl;
               
               } else if (escolha == 2) {
                      cout<<"qual valor deseja: "<<endl;
                       cin>>valor;
                     cout<<" o valor e: "<< valor*1,38;
                   cout<<endl;
               
               }else if (escolha == 3) {

                       cout<<"qual valor deseja: "<<endl;
                       cin>>valor;
                     cout<<" o valor e: "<< valor*151;
                     cout<<endl;
               }
         break;
         case 3:
            
             cout<<"escolha a moeda na qual queria converte"<<endl;
             cout<<"1- real"<<endl;
             cout<<"2- dolar EUA"<<endl;
             cout<<"3- ienes"<<endl;
        
             cin>>escolha;

             if (escolha == 1){
                    cout<<"qual valor deseja converter? "<<endl;
                     cin>>valor;
                    cout<<"o valor e : "<<valor* 4.13;
cout<<endl;
               
               } else if (escolha == 2) {
                      cout<<"qual valor deseja: "<<endl;
                       cin>>valor;
                     cout<<" o valor e: "<< valor*1.38;
                     cout<<endl;
                   
               
               }else if (escolha == 3) {

                       cout<<"qual valor deseja: "<<endl;
                       cin>>valor;
                     cout<<" o valor e: "<< valor*109;
                     cout<<endl;
               }
               
             
         break;
         case 4:
         
         cout<<"escolha a moeda na qual queria converte"<<endl;
         cout<<"1- real"<<endl;
         cout<<"2- dolar EUA"<<endl;
         cout<<"3- dolar CDN"<<endl;
     
         cin>>escolha;

             if (escolha == 1){
                    cout<<"qual valor deseja converter? "<<endl;
                     cin>>valor;
                    cout<<"o valor e : "<<valor* 0.04;
                    cout<<endl;
               
               } else if (escolha == 2) {
                      cout<<"qual valor deseja: "<<endl;
                       cin>>valor;
                     cout<<" o valor e: "<< valor*0.01;
                     cout<<endl;
                   
               
               }else if (escolha == 3) {

                       cout<<"qual valor deseja: "<<endl;
                       cin>>valor;
                     cout<<" o valor e: "<< valor*0.01;
                     cout<<endl;
               }
         break;
     
         default:
          cout<<"invalido";
     };
     } while (true);

    
    return 0;
}