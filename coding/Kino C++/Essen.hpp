#ifndef ESSEN_H
#define ESSEN_H

using namespace std;
class Essen{
    public:
    int number_Essen;
    string Answer_Essen;
    string Ja_Nein;
   void Display_Essen_Menu(){
     cout << "Wollen Sie etwas essen ? " << endl;
     cin >> Ja_Nein;
     if(Ja_Nein == "ja"){
cout << "Wählen Sie biete ein Menu : Pop-corn , Hot-Dog , Pizza , Burger , Pommes." << endl;
cin >> Answer_Essen;
cout << "Ok sehr gut und wie viel Teller wollen Sie nehmen ? " << endl;
cin >> number_Essen;
     }else if(Ja_Nein == "nein"){
        cout << "OK!" << endl;
     }
     else{
        cout << "Error versuchen Sie noch mal";
     }
   }
void Display_Essen_rechnung(){
    if(Answer_Essen == "Pop-corn"){
    cout << "ein Pop-corn kostet 4€ und Sie wollen " << number_Essen << " so es wird " << number_Essen * 4 << "€ kostet";
}else if(Answer_Essen == "Hot-dog"){
    cout << "ein Hot-dog kostet 5€ und Sie wollen " << number_Essen << " so es wird " << number_Essen * 5 << "€ kostet";
}else if(Answer_Essen == "Pizza" || Answer_Essen == "Burger"){
    cout << "ein Pizza oder ein Burger kostet 10€ und Sie wollen " << number_Essen << " so es wird " << number_Essen * 3 << "€ kostet";
}else if(Answer_Essen == "Pommes"){
    cout << "300g von Pommes kostet 5€ und Sie wollen " << number_Essen << " so es wird " << number_Essen * 5 << "€ kostet";
  }
  cout << endl;
 }

};
#endif
