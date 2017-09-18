#include <iostream>
#include <list>
#include <fstream>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include "Libro.h"
#include "Evaluador.h"
#include "NodoBinario.h"

using namespace std;

int REGISTER_SIZE = 70;

//Escribe todos los datos del libro en un archivo con nombre nombre_archivo en la posicion dada
void escribir(string nombre_archivo, Libro*libro, int posicion)
{
    ofstream out(nombre_archivo.c_str(),ios::in | ios::out);
    if(!out.is_open())
    {
        out.open(nombre_archivo.c_str());
    }

    out.seekp(posicion*REGISTER_SIZE);
    out.write(libro->nombre.c_str(),30);
    out.write(libro->autor.c_str(),30);
    out.write((char*)&libro->existencias,10);

    out.close();
}

//Devuelve el libro guardado en el archivo en la posicion dada
Libro* leer(string nombre_archivo, int posicion)
{
    ifstream in(nombre_archivo.c_str());
    in.seekg(posicion*REGISTER_SIZE);

    string nombre;
    string autor;
    int existencias;

    in.read(nombre,30);
    in.read(autor,30);
    in.read((char*)&existencias,10);

    return new Libro(nombre, autor, existencias);
}

//Crea un mapa en base a las llaves y valores dados, asocia cada llave con los valores en la misma posicion
map<string, int> convertirEnMapa(set<string> llaves, set<int> valores)
{
    map<string, int> respuesta;
    return respuesta;

    multimap<string, int> mi_mapa;
    mi_mapa.insert(pair<string, int>("B", 20));
    mi_mapa.insert(pair<string, int>("A", 10));
    mi_mapa.insert(pair<string, int>("C", 30));
    mi_mapa.insert(pair<string, int>("A", 100));

    map<string, int>::iterator i = mi_mapa.begin();
}

//Devuelve una cola con los mismos valores que el parametro exepto que no tiene el ultimo valor
queue<int> popBack(queue<int> cola)
{
    queue<int> respuesta;

    while(!cola.empty())
    {
        cout<<cola.front()<<endl;
        cola.pop();
    }

    return respuesta;
}

//Reemplaza todos los valores del arbol
void reemplazarValores(NodoBinario* raiz, int valor)
{

}

//Devuelve la cantidad de bits "encendidos" o con el valores de 1
int contarBits(char byte)
{
    int n, num, nbits, mask, i, suma;
    n_sizeof(int)*8;
    nbits = 0;
    mask = 1;
    printf("Introducir numero: \n");
    scanf("%d",&num);

    for(i=0; i<n;i++)
    {
        suma= num&mask;
        mask=mask << 1;
        if(suma != 0)
        {
            nbits++;
        }
    }
    printf("Numero: ",n, "Bits: ",nbits);

}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}

