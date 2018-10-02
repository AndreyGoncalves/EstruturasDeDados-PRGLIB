/* 
 * File:   fila.h
 * Author: msobral
 *
 * Created on 11 de Agosto de 2016, 13:58
 */

#ifndef FILA_H
#define	FILA_H

namespace prglib {
    
template <typename T> class fila {
public:
    fila(unsigned int cap);
    fila(const fila<T>& orig);
    virtual ~fila();
    bool operator==(const fila<T> & outra) const;

    fila<T>& operator=(const fila<T> & outra);
    void enfileira(const T & algo);
    T desenfileira();
    const T & frente() const;
    bool vazia() const;
    bool cheia() const;
    unsigned int comprimento() const;
    unsigned int capacidade() const;
private:
    unsigned int N, max;
    T * buffer;
    unsigned int inicio, fim;
};

}

#include <libs/fila-impl.h>

#endif	/* FILA_H */

