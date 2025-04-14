#ifndef FILM_H
#define FILM_H

using namespace std;
class Film{
public: 
int Ticket = 10;
int film;
void Display_film_menu(){
cout << "oh jetzt welche Film wollen Sie sehen, wählen sie nur den Nummer : 1.Back to Black , 2.Bad Boys: Ride or Die , 3.Challengers - Rivalen , 4.Civil War." << endl;
cin >> film;
if(film == 1 ){
    cout << "Oh sehr das Zimmer für Back to Black ist das Zimmer 1" << endl;
}else if(film == 2){
cout << "Oh sehr das Zimmer für Bad Boys: Ride or Die ist das Zimmer 2" << endl;
}else if(film == 3){
cout << "Oh sehr das Zimmer für Challengers - Rivalen ist das Zimmer 3" << endl;
}else if(film == 4){
cout << "Oh sehr das Zimmer für Civil War ist das Zimmer 4" << endl;
}else{
    cout << "error versuchen noch mal!" << endl;
}
}
};
#endif