#ifndef LISTA2_IMPL_H
#define	LISTA2_IMPL_H

#include "lista.h"
#include "prglib.h"
using namespace prglib;
using namespace std;
namespace prglib {

    template <typename T> lista<T>::lista() {
        primeiro = nullptr;
        ultimo = nullptr;
        atual = nullptr;
        len = 0;
    }

    template <typename T> lista<T>::lista(const lista<T> & outra) {
    }

    template <typename T> lista<T>::~lista() {
    }

    template <typename T> void lista<T>::insere(const T& algo) {
        Nodo *nodo = new Nodo(algo);
        if (len > 0)nodo->proximo = primeiro;
        else ultimo = nodo;
        primeiro = nodo;
        len++;
    }

    template <typename T> void lista<T>::anexa(const T& algo) {
        Nodo *nodo = new Nodo(algo);
        if (len == 0) {
            primeiro = nodo;
        } else {
            ultimo->proximo = nodo;
        }
        ultimo = nodo;
        len++;
    }

    template <typename T> int lista<T>::comprimento() const {
        return len;
    }

    template <typename T> void lista<T>::esvazia() {
        while (!vazia()) {
            remove(0);
        }
    }

    template <typename T> void lista<T>::insere(const T& algo, int posicao) {

    }

    template <typename T> T& lista<T>::obtem(int posicao) const {
        Nodo *nodo;
        if (posicao >= len) throw -1;
        for (nodo = primeiro; posicao > 0; posicao--)nodo = nodo->proximo;
        return nodo->dado;
    }

    template <typename T> T& lista<T>::operator[](int pos) const {
    }

    template <typename T> void lista<T>::escrevaSe(std::ostream& out) const {
        Nodo *nodomostra;
        for (nodomostra = primeiro; nodomostra != NULL; nodomostra = nodomostra->proximo) {
            out << nodomostra->dado << std::endl;
        }
    }

    template <typename T> void lista<T>::escrevaSe(std::ostream& out, const std::string & delim) const {
    }

    template <typename T > T lista<T>::remove(int posicao) {
        if (posicao >= len)throw -1;
        int i = 0;
        Nodo *ptr;
        if (primeiro == NULL)return 0;
        if (posicao == len - 1) {
            ptr = ultimo;
            ultimo = ultimo->anterior;
            free(ptr);
            //delete ptr;
            len--;
            return ptr->dado;
        }
        if (posicao == 0) {
            ptr = primeiro;
            primeiro = primeiro->proximo;
            free(ptr);
            len--;
            return ptr->dado;
        }
        Nodo *ant;
        posicao--;
        for (ant = primeiro; posicao > 0; posicao--)ant = ant->proximo;
        delete ant->proximo;
        Nodo *nodo = ant->proximo;
        ant->proximo = nodo->proximo;
        free(nodo);

        return ptr->dado;
    }

    template <typename T> void lista<T>::retira(const T & algo) {
    }

    template <typename T> bool lista<T>::vazia() const {
        if (primeiro == NULL)return true;
    }

    template <typename T> void lista<T>::insereOrdenado(const T & algo) {
    }

    template <typename T> void lista<T>::ordena() {
        Nodo *aux;
        Nodo *ordena;
        int j = 0, k = 0;
        for (j = comprimento(); j > 0; j--) {
            ordena = primeiro;
            for (k = j - 1; k > 0; k--) {
                aux = ordena->proximo;
                if (ordena->dado > aux->dado) {
                    T dadof = ordena->dado;
                    ordena->dado = aux->dado;
                    aux->dado = dadof;
                }
                ordena = ordena->proximo;
            }
        }
    }

    template <typename T > T & lista<T>::procura(const T & algo) const {
    }

    template <typename T > lista<T>& lista<T>::procuraMuitos(const T& algo, lista<T>& outra) const {
    }

    template <typename T > std::shared_ptr<lista < T >> lista<T>::procuraMuitos(const T & algo) const {
    }

    template <typename T > lista<T>& lista<T>::operator=(const lista<T>& outra) {
    }

    template <typename T> bool lista<T>::operator==(const lista<T>& outra) const {
    }

    template <typename T> void lista<T>::inverte() {


    }

    template <typename T> bool lista<T>::inicio() const {
    }

    template <typename T> bool lista<T>::fim() const {
        return atual == nullptr;
    }

    template <typename T> void lista<T>::inicia() {
        atual = primeiro;
    }

    template <typename T> void lista<T>::iniciaPeloFim() {
    }

    template <typename T > T & lista<T>::proximo() {
        if (atual == NULL)throw -1;
        T & dados = atual->dado;
        atual = atual->proximo;
        return dados;
    }

    template <typename T > T & lista<T>::anterior() {
    }

    template <typename T > lista<T>& lista<T>::sublista(unsigned int pos1, unsigned int pos2, lista<T> & outra) const {
    }

    template <typename T > lista<T>* lista<T>::sublista(unsigned int pos1, unsigned int pos2) const {
    }

    template <class T> void lista<T>::embaralha() {
        lista <T> aux;
        string teste;
        for (int i=0; i < len ; i++) {    
            srand(time(NULL));
            int inteiro = rand() % 10;
            string l = teste[inteiro]; 
            aux.anexa(l);  
        }
    }

} // fim namespace

#endif	/* LISTA_IMPL_H */

