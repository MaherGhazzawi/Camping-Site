#ifndef GETRINKE_H
#define GETRINKE_H

using namespace std;

class Getrinke{
public:
string Getrinke_ja_Nein;
 string Answer;
 int number_getrinke;
void Display_Getrinke_Menu(){
    cout << "wollen Sie etwas trinken ?" << endl;
    cin >> Getrinke_ja_Nein;
    if(Getrinke_ja_Nein == "ja"){
 cout << "Hallo Hier ist AI system wählen Sie bitte Ihre Getrinke. " << endl;
    cout << "Ok wählen Sie Ihre Getrinke : wasser , Cola , Pepsi , Saft , Beer." << endl;
    cin >> Answer;
    cout << "Oh Sie haben " << Answer << " gewählt, sehr gutes Wahl und wie viel " << Answer << " wollen Sie nehmen? " << endl;
    cin >> number_getrinke; 
    cout << "Ok alles Gut!";
    }else if(Getrinke_ja_Nein == "nein"){
        cout << "Ok!" << endl;
    }else{
        cout << "Error versuchen Sie nich mal" << endl;
    }
}
void Display_Getrinke_rechnung(){
if(Answer == "Beer"){
    cout << "ein Beer kostet 5€ und Sie wollen " << number_getrinke << " so es wird " << number_getrinke * 5 << "€ kostet";
}else if(Answer == "wasser"){
    cout << "ein 0.5l wasser kostet 2€ und Sie wollen " << number_getrinke << " so es wird " << number_getrinke * 2 << "€ kostet";
}else if(Answer == "Cola" || Answer == "Pepsi"){
    cout << "ein 0.250l Cola oder Pepsi kostet 3€ und Sie wollen " << number_getrinke << " so es wird " << number_getrinke * 3 << "€ kostet";
}else if(Answer == "Saft"){
    cout << "ein 0.250l Saft kostet 2€ und Sie wollen " << number_getrinke << " so es wird " << number_getrinke * 2 << "€ kostet";
  }
 }
};
#endif