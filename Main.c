<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "Lista.h"

/*Z racji, ze Visual Studio, nie jest stworzone dla jezyka C, tylko dla C++, wystepuja warningi, bledy z tym zwiazne, najczesciej dotycza one naruszenia dostepu.
Mozliwe jest, ze bedzie potrzeba dodania "_CRT_SECURE_NO_WARNINGS", bez "" w: projekt -> Wlasciwosci -> C/C++ -> Preprocesor -> Definicje Preprocesora -> Lewy przycisk -> 
-> edytuj -> definicje preprocesora -> wpisac:  _CRT_SECURE_NO_WARNINGS  */
int main(int argc, int **argv)
{

	nowy_kontakt(19,"Damian", "Karwat", "Fajna", "62B", "0", "26-065", "Pieksozow", "888111444", "111000222");
	
	nowy_kontakt(20,"Seweryn", "Kawecki", "Fajna", "62B", "0", "26-065", "Pieksozow", "999888111", "111000222");

	nowy_kontakt(19, "Magda", "Gesler", "Fajna", "62B", "0", "26-065", "Pieksozow", "999111888", "000999888");
	nowy_kontakt(20, "Kapitan", "Tytus", "Nie_Fajna", "62B", "0", "26-065", "Pieksozow", "222333444", "555666777");
	save_to_file_all();

	menu();


	return 0;
}
=======
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "Lista.h"

/*Z racji, ze Visual Studio, nie jest stworzone dla jezyka C, tylko dla C++, wystepuja warningi, bledy z tym zwiazne, najczesciej dotycza one naruszenia dostepu.
Mozliwe jest, ze bedzie potrzeba dodania "_CRT_SECURE_NO_WARNINGS", bez "" w: projekt -> Wlasciwosci -> C/C++ -> Preprocesor -> Definicje Preprocesora -> Lewy przycisk -> 
-> edytuj -> definicje preprocesora -> wpisac:  _CRT_SECURE_NO_WARNINGS  */
int main(int argc, int **argv)
{
	/*Reczne dodanie kilku kontaktow*/

	nowy_kontakt(19,"Damian", "Karwat", "Kielce", "62B", "0", "26-065", "Pieksozow", "888111444", "111000222");
	nowy_kontakt(20,"Seweryn", "Kawecki", "Kielce", "62B", "0", "26-065", "Pieksozow", "999888111", "111000222");
	nowy_kontakt(19, "Magda", "Gesler", "Kielce", "62B", "0", "26-065", "Pieksozow", "999111888", "000999888");
	nowy_kontakt(20, "Kapitan", "Tytus", "Kielce", "62B", "0", "26-065", "Pieksozow", "222333444", "555666777");
	
	save_to_file_all();

	//Menu
	menu();

	return 0;
}
>>>>>>> ab181b66423479d7943cd3f49682fecaf2326380
