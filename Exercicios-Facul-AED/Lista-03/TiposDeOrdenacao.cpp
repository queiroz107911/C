/*AED20251_T2_241039251_<L03>
Nome: Joao Pedro Queiroz Aguiar
Matricula: 241039251
*/

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <functional>
#include "Ordenacao.h"
#include "TiposDeOrdenacao.h"
using namespace std;

// Definição de cada método de ordenação pré-definido em Q2-L3.h + metódos liga e desliga tempo 
void OrdenacaoPorTroca::bubbleSort() {
    vetorPrincipal = vetorAuxiliar;
    ligaTempo();

    for (int i = 0; i < quantidade - 1; i++) {
        for (int j = 0; j < quantidade - i - 1; j++) {
            if (vetorPrincipal[j] > vetorPrincipal[j + 1]) {
                swap(vetorPrincipal[j], vetorPrincipal[j + 1]);
            }
        }
    }
    
    desligaTempo();
};

void OrdenacaoPorTroca::quickSort() {
    vetorPrincipal = vetorAuxiliar;
    ligaTempo();

    function<void(int, int)> quick = [&](int low, int high) {
        if (low < high) {
            int pivot = vetorPrincipal[high];
            int i = low - 1;

            for (int j = low; j < high; j++) {
                if (vetorPrincipal[j] < pivot) {
                    i++;
                    swap(vetorPrincipal[i], vetorPrincipal[j]);
                }
            }
            swap(vetorPrincipal[i + 1], vetorPrincipal[high]);
            int pi = i + 1;

            quick(low, pi - 1);
            quick(pi + 1, high);
        }
    };

    quick(0, quantidade - 1);

    desligaTempo(); 
}

void OrdenacaoPorSelecao::selectionSort() {
    vetorPrincipal = vetorAuxiliar;
    ligaTempo();

    for (int i = 0; i < quantidade - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < quantidade; j++) {
            if (vetorPrincipal[j] < vetorPrincipal[minIndex]) {
                minIndex = j;
            }
        }
        swap(vetorPrincipal[i], vetorPrincipal[minIndex]);
    }

    desligaTempo();
}

void OrdenacaoPorSelecao::heapSort() {
    vetorPrincipal = vetorAuxiliar;
    ligaTempo();

    auto heapify = [&](int n, int i, auto&& heapify_ref) -> void {
        int largest = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;

        if (l < n && vetorPrincipal[l] > vetorPrincipal[largest])
            largest = l;
        if (r < n && vetorPrincipal[r] > vetorPrincipal[largest])
            largest = r;

        if (largest != i) {
            swap(vetorPrincipal[i], vetorPrincipal[largest]);
            heapify_ref(n, largest, heapify_ref);
        }
    };

    for (int i = quantidade / 2 - 1; i >= 0; i--)
        heapify(quantidade, i, heapify);

    for (int i = quantidade - 1; i > 0; i--) {
        swap(vetorPrincipal[0], vetorPrincipal[i]);
        heapify(i, 0, heapify);
    }

    desligaTempo();
}

void OrdenacaoPorInsercao::insertionSort() {
    vetorPrincipal = vetorAuxiliar;
    ligaTempo();

    for (int i = 1; i < quantidade; i++) {
        int chave = vetorPrincipal[i];
        int j = i - 1;

        while (j >= 0 && vetorPrincipal[j] > chave) {
            vetorPrincipal[j + 1] = vetorPrincipal[j];
            j--;
        }
        vetorPrincipal[j + 1] = chave;
    }    

    desligaTempo();
}

void OrdenacaoPorInsercao::shellSort() {
    vetorPrincipal = vetorAuxiliar;
    ligaTempo();

    for (int gap = quantidade / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < quantidade; i++) {
            int temp = vetorPrincipal[i];
            int j = i;
            while (j >= gap && vetorPrincipal[j - gap] > temp) {
                vetorPrincipal[j] = vetorPrincipal[j - gap];
                j -= gap;
            }
            vetorPrincipal[j] = temp;
        }
    }

    desligaTempo();
}

void OrdenacaoPorMistura::mergeSort() {
    vetorPrincipal = vetorAuxiliar;
    ligaTempo();

    function<void(int, int)> merge_sort = [&](int l, int r) {
        if (l >= r) return;
        int m = l + (r - l) / 2;
        merge_sort(l, m);
        merge_sort(m + 1, r);

        vector<int> temp;
        int i = l, j = m + 1;

        while (i <= m && j <= r) {
            if (vetorPrincipal[i] <= vetorPrincipal[j])
                temp.push_back(vetorPrincipal[i++]);
            else
                temp.push_back(vetorPrincipal[j++]);
        }
        while (i <= m) temp.push_back(vetorPrincipal[i++]);
        while (j <= r) temp.push_back(vetorPrincipal[j++]);

        for (int k = 0; k < temp.size(); ++k)
            vetorPrincipal[l + k] = temp[k];
    };

    merge_sort(0, quantidade - 1);

    desligaTempo();
}

void OrdenacaoPorMistura::timSort() {
    vetorPrincipal = vetorAuxiliar;
    ligaTempo();

    const int RUN = 32;

    for (int i = 0; i < quantidade; i += RUN) {
        for (int j = i + 1; j < min(i + RUN, quantidade); j++) {
            int temp = vetorPrincipal[j];
            int k = j - 1;
            while (k >= i && vetorPrincipal[k] > temp) {
                vetorPrincipal[k + 1] = vetorPrincipal[k];
                k--;
            }
            vetorPrincipal[k + 1] = temp;
        }
    }

    for (int size = RUN; size < quantidade; size = 2 * size) {
        for (int left = 0; left < quantidade; left += 2 * size) {
            int mid = min(left + size - 1, quantidade - 1);
            int right = min(left + 2 * size - 1, quantidade - 1);

            vector<int> merged;
            int i = left, j = mid + 1;

            while (i <= mid && j <= right) {
                if (vetorPrincipal[i] <= vetorPrincipal[j])
                    merged.push_back(vetorPrincipal[i++]);
                else
                    merged.push_back(vetorPrincipal[j++]);
            }
            while (i <= mid) merged.push_back(vetorPrincipal[i++]);
            while (j <= right) merged.push_back(vetorPrincipal[j++]);

            for (int k = 0; k < merged.size(); k++)
                vetorPrincipal[left + k] = merged[k];
        }
    }

    desligaTempo();
}

// OBS - Pedi ao chatGPT para criar os códigos para mim de cada metodo de ordenação(a parte bruta do código)
// Eu não sabia coda-los, somente sua lógica. Porém, todo o resto foi feito por mim. Somente usei o chat para pegar tais códigos