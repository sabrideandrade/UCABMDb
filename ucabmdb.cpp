// UCABMDB

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
    string movie_country;

    Movie *next_movie;
    Movie *prev_movie;
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

/*El siguiente struct sirve para almacenar el conjunto de elementos de las temporadas dentro de las series
  como el nombre, la fecha de estreno, los capitulos, la duracion y el pais.*/

struct Season{
    string season_name;
    int season_premiere;
    Chapter *chapters;

    Season *next_season;
    Season *prev_season;
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

int main(){

    string menu;

    cout << "========================================" << endl;
    cout << "                    MENU                " << endl;
    cout << "========================================" << endl;
    cout << " (1) Mostrar peliculas" << endl;
    cout << " (2) Mostrar series" << endl;
    cout << " (3) Agregar" << endl;
    cout << " (4) Eliminar" << endl;
    cout << "========================================" << endl;
    cout << "OPCION ";
    cin >> menu;

    return 0;
}

