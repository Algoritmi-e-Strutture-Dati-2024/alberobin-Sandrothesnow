int main() {
    AlberoBinario<int> albero;  //albero creato

    albero.insRadice(1);

   
    albero.insFiglioSinistro(0, 3); // Inserisce 3 come figlio sinistro della radice
    albero.insFiglioDestro(0, 2);   // Inserisce 2 come figlio destro della radice
    albero.insFiglioSinistro(1, 5); // Inserisce 5 come figlio sinistro di 3
    albero.insFiglioDestro(1, 7);   // Inserisce 7 come figlio destro di 3           //nodi inseriti
    albero.insFiglioSinistro(2, 4); // Inserisce 4 come figlio sinistro di 2
    albero.insFiglioDestro(2, 6);   // Inserisce 6 come figlio destro di 2

    
    cout << "Figlio sinistro della radice: " << albero.radice() << ", Indice 1" << endl;
    cout << "Figlio destro della radice: " << albero.radice() << ", Indice 2" << endl;    //stampa figlio sinistro e destro

   
    albero.rimuovi(5); // Rimuove il nodo 5, che è una foglia   //rimuove nodo

    
    albero.stampa();    //stampa strutt albero

    return 0;
}
