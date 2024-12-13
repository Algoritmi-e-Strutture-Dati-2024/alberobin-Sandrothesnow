#include <iostream>
using namespace std;
template <typename T>
class AlberoBinario {
private:
T nodi[100];
bool presente[100]; // Array per tenere traccia dei nodi presenti
 int size; // Numero di nodi presenti nell'albero
public:
template <typename T>
AlberoBinario<T>::AlberoBinario() : size(0) {
    for (int i = 0; i < 100; ++i) {
        presente[i] = false;
    }
}
template <typename T>
bool AlberoBinario<T>::alberoVuoto() const {
    return size == 0;
}
template <typename T>
void AlberoBinario<T>::insRadice(const T& valore) {
    nodi[0] = valore;
    presente[0] = true;
    ++size;
}
template <typename T>
T AlberoBinario<T>::radice() const {
     return nodi[0];
}
template <typename T>
bool AlberoBinario<T>::isFoglia(int indice) const {
     return !presente[figlioSinistro(indice)] && !presente[figlioDestro(indice)];
}
template <typename T>
int AlberoBinario<T>::figlioSinistro(int indice) const {
    return 2 * indice + 1;
}
template <typename T>
int AlberoBinario<T>::figlioDestro(int indice) const {
    return 2 * indice + 2;
}
template <typename T>
void AlberoBinario<T>::insFiglioSinistro(int indice, const T& valore) {
int fs = figlioSinistro(indice);
 nodi[fs] = valore;
 presente[fs] = true;
 ++size;
}
template <typename T>
void AlberoBinario<T>::insFiglioDestro(int indice, const T& valore) {
int fd = figlioDestro(indice);
nodi[fd] = valore;
 presente[fd] = true;
 ++size;
}
template <typename T>
void AlberoBinario<T>::rimuovi(int indice) {
presente[indice] = false;
--size;
}
template <typename T>
void AlberoBinario<T>::stampa() const {
    for (int i = 0; i < 100; ++i) {
        if (presente[i]) {
            cout << "Pos " << i << ", Valore: " << nodi[i] << ", Figliodestro: ";
            if (presente[figlioDestro(i)]) {
                cout << nodi[figlioDestro(i)];
            } else {
                cout << "Nessuno";
            }
            cout << ", Figliosinistro: ";
            if (presente[figlioSinistro(i)]) {
                cout << nodi[figlioSinistro(i)];
            } else {
                cout << "Nessuno";
            }
            cout << endl;
        }
    }
}
