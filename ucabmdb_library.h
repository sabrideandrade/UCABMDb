#include <iostream>
using namespace std;

// STRUCTS

/*El siguiente struct sirve para almacenar el conjunto de elementos de las peliculas
  como el nombre, la fecha de estreno, el genero, la duracion y el pais.*/
struct Movie{
    string movie_name;
    int movie_premiere;
    string movie_type;
    int movie_time;

    Movie *next_movie;
    Movie *prev_movie;
};

/*El siguiente struct sirve para almacenar el conjunto de elementos de los capitulos dentro de las temporadas
  de las series como el nombre, la fecha de estreno, los capitulos, la duracion y el pais.*/

struct Chapter{
    string chapter_name;
    int chapter_premiere;
    int chapter_time;
    int chapter_num;

    Chapter *next_chapter;
    Chapter *prev_chapter;
};

/*El siguiente struct sirve para almacenar el conjunto de elementos de las temporadas dentro de las series
  como el nombre, la fecha de estreno, los capitulos, la duracion y el pais.*/

struct Season{
    string season_name;
    int season_premiere;
    Chapter *chapters;

    Season *next_season;
    Season *prev_season;
};

/*El siguiente struct sirve para almacenar el conjunto de elemntos de las series
  como el nombre, la fecha de estreno, el genero, la duracion, las temporadas y el pais.*/

struct Series{
    string series_name;
    int series_premiere;
    string series_type;
    int series_time;
    Season *seasons;
    string series_country;

    Series *next_series;
    Series *prev_series;
};

/*El siguiente struct sirve para almacenar el conjunto de elementos de las reseñas de los usuarios
  como la descripcion y la calificacion.*/

struct Qualification{
    string description;
    float quali;

    Qualification *next_quali;
    Qualification *prev_quali;
};

/*El siguiente struct sirve para almacenar el conjunto de elementos de las reseñas de los usuarios
  como la descripcion y la reseña.*/

struct Review{
    string description;
    char review[250];

    Review *next_review;
    Review *prev_review;
};

/*El siguiente struct sirve para almacenar el conjunto de elementos de los usuarios
  como el correo, la edad, el pais, la calificaciones y las reseñas.*/

struct Users{
    string email;
    int years_old;
    string country;
    Qualification *qualification;
    Review *review;

    Users *next_user;
    Users *prev_user;
};

// FUNCIONES

Movie *createMovie(string name, int premiere, string type, int time){

  Movie *new_movie = new Movie;

  new_movie -> movie_name = name;
  new_movie -> movie_premiere = premiere;
  new_movie -> movie_type = type;
  new_movie -> movie_time = time;

  new_movie -> next_movie = NULL;
  new_movie -> prev_movie = NULL;

  return new_movie;
}

Users createUser(string email, int old, string country){

  Users *new_user = new Users;

  new_user -> email = email;
  new_user -> years_old = old;
  new_user -> country = country;

  new_user -> next_user = NULL;
  new_user -> prev_user = NULL;

  return *new_user;
}

/* Procedimiento para agregar peliculas */

void addMovie(Movie **movie_head, string name, int premiere, string type, int time){

    Movie *new_movie = createMovie(name,premiere, type, time);

    if (!*movie_head){
      *movie_head = new_movie;
    }
    else{
      new_movie -> next_movie = *movie_head;
      *movie_head = new_movie;   
    }
}

/* Procedimiento para eliminar peliculas */

// void deteleMovie(Movie **movie_head, string name){}

/* FUNCIONES PARA LOS MENUS*/

int mainMenu(){

  string menu;

  cout << "========================================\n";
  cout << "                MAIN MENU               \n";
  cout << "========================================\n";
  cout << "(1) Peliculas\n";
  cout << "(2) Series\n";
  cout << "(3) Usuario\n";
  cout << "(0) Salir\n";
  cout << "========================================\n";
  cout << "Ingresar opcion: ";
  cin >> menu;
  cout << "========================================\n";

  if (menu == "0" || menu == "1" || menu == "2" || menu == "3")
    return stoi(menu);
  else{
    cout << "ERROR. Ingresaste " << menu << " que es un valor invalido.\n";
    cout << "Por favor ingresar una opcion correcta.\n";
  }

  return 0;
}

int movieMenu(){

  string menu;

  cout << "========================================\n";
  cout << "               MOVIE MENU               \n";
  cout << "========================================\n";
  cout << "(1) Ver peliculas\n";
  cout << "(2) Agregar pelicula\n";
  cout << "(3) Eliminar pelicula\n";
  cout << "(4) Destacado\n";
  cout << "(0) Salir\n";
  cout << "========================================\n";
  cout << "Ingresar opcion: ";
  cin >> menu;
  cout << "========================================\n";

  if (menu == "0" || menu == "1" || menu == "2" || menu == "3" || menu == "4")
    return stoi(menu);
  else{
    cout << "ERROR. Ingresaste " << menu << " que es un valor invalido.\n";
    cout << "Por favor ingresar una opcion correcta.\n";
  }

  return 0;

}