#include <iostream>
 using namespace std;

   void menu (){
      cout<<"qual você vai querer converter"<<endl;
      cout<<"1- celsius"<<endl;
     cout<<"2- fahrenheit"<<endl;
     cout<<"3- kelvin"<<endl;
   }

   void conversor (int opcao, double temp){
            int escolhas
      switch (opcao){
        case 1:
          cout<<"vc quer converter celsius pra? "<<endl;
          cout<<"1- fahrenheit"<<nedl;
            cout<<"2- kelvin"<<endl;
             cin>>escolhas;
            
            
            if (escolhas == 1){
           double celsius 
        
         cout<<"quanto vc quer converter";
               cin>>celsius
         temp = (9/5 * celsius) +32;
         cout<<"de celsius pra fahrenheit sera "<< temp;
         
   }else if(escolhas == 2){
                 cout<<"quanto vc quer converter";
               cin>>celsius
         temp = celsius + 273.15;
          cout<<"de celsius pra kelvin sera "<< temp;
         
};
         break;
    
        case 2:
         double fahrenheit;
            cout<<"vc quer converter fahrenheit pra? "<<nedl;
          cout<<"1- celsius"<<endl;
           cout<<"2- kelvin"<<endl;
         cin>> escolhas;            
            
        if (escolhas == 1){

            cout<<"o quanto vc quer converter: "<<endl;
             cin>>fahrenheit;
             temp = (fahrenheit− 32) / 1.8;
              cout<<"fahrenheit pra celsius sera "<<temp;
            
            
} else if (escolhas == 2){
             cout<<"o quanto vc quer converter: "<<endl;
               cin>>fahrenheit;
             temp = (fahrenheit - 32)*5/ 9 + 273.15;
              cout<<"de fahrenheit pra kelvin fica: "<<temp;
              
};
        break;
        case 3:
          double kelvin;
             cout<<"vc quer converter kelvin pra ? "<<endl;
              cout<<"1- celsius"<<endl;
                cout<<"2- fahrenheit"<<endl;
                  cin>>escolhas
              if (escolhas == 1){
                cout<<"o quanto vc quer converter: "<<endl;
                 cin>>kelvin ;
                 temp =  kelvin - 273.15;
                 cout<<"kelvin pra celsius fica "<<temp<<endl;
                      
                  
}else if(opcao == 2){
                 cout<<"o quanto vc quer converter: "<<endl;
                 cin>>kelvin ;
                    temp = kelvin*9/5-459.67;
                      cout<<"kelvin pra fahrenheit fica "<<endl;
};
                 break;
  };


int main() {
    int escolha;
      menu();
      cin>>escolha;

      conversor(escolha);
    
    return 0;
}