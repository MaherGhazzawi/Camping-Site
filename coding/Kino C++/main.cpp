#include<iostream>
#include "Getrinke.hpp"
#include "Essen.hpp"
#include "Film.hpp"

using namespace std;
int main(){
  Getrinke Menu_getrinke;
  Essen Menu_Essen;
  Film Menu_film;
  Menu_getrinke.Display_Getrinke_Menu();
  Menu_getrinke.Display_Getrinke_rechnung();
  Menu_Essen.Display_Essen_Menu();
  Menu_Essen.Display_Essen_rechnung();
  Menu_film.Display_film_menu();
}