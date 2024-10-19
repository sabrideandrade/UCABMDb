// UCABMDB
#include <iostream>
#include <fstream>
#include "ucabmdb_library.h"

using namespace std;

int main(){

    string menu;

  int main_option = -1;

  while (main_option != 0){

    main_option = mainMenu();

    switch(main_option){
      case 1: // DESPLEGAR MENU DE PELICULAS
      {
        Movie *movie_list = NULL;
        int movie_option = -1;

        while (movie_option != 0){
          int movie_option = movieMenu();
          switch (movie_option){
            case 1: // VER PELICULAS
            {
              cout << "PELICULAS\n";
              cout << "COMING SOON\n";
              break;
            }
            case 2: // AGREGAR PELICULA
            {
              string movie_name, movie_type;
              int movie_premiere, movie_time;

                cout << "========================================\n";
                cout << "                ADD MOVIE               \n";
                cout << "========================================\n";
                cout << "\tNombre: ";
                cin >> movie_name;
                cout << "\tEstreno: ";
                cin >> movie_premiere;
                cout << "\tGenero: ";
                cin >> movie_type;
                cout << "\tDuracion: ";
                cin >> movie_time;
                cout << "========================================\n";

              addMovie(&movie_list, movie_name, movie_premiere, movie_type, movie_time);
              break;
            }
            case 3: // ELIMINAR PELICULA
            {

              break;
            }
            default:
            {
              break;
            }
          }
        }
        break;
      }
      case 2:
      {
        cout << "SERIES MENU\n";
        cout << "COMING SOON\n";
        break;
      }
      case 3:
      {
        cout << "USUARIOS MENU\n";
        cout << "COMING SOON\n";
        break;
      }
      default:
      {
        cout << "MUCHAS GRACIAS POR VISITARNOS!\n";
      }
    }
  }
  return 0;

    return 0;
}
