#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

void SelectionSort( int array[],int tamanho)
{
    int aux, aux2, ind;
    for(int j=0 ;j<(tamanho-1); j++){
        aux = array[j];
        for(int i=(j+1); i< tamanho; i++)
        {
            if(array[i]<aux)
            {
                aux = array[i];
                ind = i;
            }
        }
        aux2 = array[j];
        array[j] = array[ind];
        array[ind] = aux2;
    }

    for(int x=0; x<=(tamanho-1); x++){
        cout << array[x] << endl;
    }
}

int main() {

    char arquivo[30]; 
    cout << "Digite o nome do arquivo para o teste: " << endl;
    cin >> arquivo;

    int array[100000]; 
    int tamanho = 0; 

     ifstream myReadFile;
     myReadFile.open(arquivo);
     char output[1000];
     if (myReadFile.is_open()) {
     
     while (!myReadFile.eof()) {

        myReadFile >> output;
        array[tamanho] = atoi(output);
        tamanho++;

     }
    }
    myReadFile.close();  

    SelectionSort(array, tamanho);
}
