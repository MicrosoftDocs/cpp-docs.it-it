---
title: Durata degli oggetti e gestione delle risorse (RAII)
description: Seguire il principio di RAII in Modern C++ per evitare perdite di risorse.
ms.date: 11/19/2019
ms.topic: conceptual
ms.assetid: 8aa0e1a1-e04d-46b1-acca-1d548490700f
ms.openlocfilehash: 01867ec0a71ba54bb6534da1b408cb0610d652a7
ms.sourcegitcommit: 069e3833bd821e7d64f5c98d0ea41fc0c5d22e53
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/21/2019
ms.locfileid: "74303364"
---
# <a name="object-lifetime-and-resource-management-raii"></a>Durata degli oggetti e gestione delle risorse (RAII)

Diversamente dai linguaggi gestiti, C++ non ha *Garbage Collection*automatici. Si tratta di un processo interno che rilascia memoria heap e altre risorse durante l'esecuzione di un programma. Un C++ programma è responsabile della restituzione di tutte le risorse acquisite al sistema operativo. Il mancato rilascio di una risorsa inutilizzata viene chiamato *perdita*. Le risorse perse non sono disponibili per altri programmi fino alla chiusura del processo. Le perdite di memoria in particolare sono una causa comune di bug nella programmazione di tipo C.

Modern C++ evita di usare la memoria heap per quanto possibile, dichiarando gli oggetti nello stack. Quando una risorsa è troppo grande per lo stack, deve essere di *Proprietà* di un oggetto. Quando l'oggetto viene inizializzato, acquisisce la risorsa di sua proprietà. L'oggetto è quindi responsabile del rilascio della risorsa nel relativo distruttore. L'oggetto proprietario è dichiarato nello stack. Il principio che *gli oggetti possiedono risorse* sono noti anche come "acquisizione di risorse è inizializzazione" o RAII.

Quando un oggetto stack proprietario di risorse esce dall'ambito, il relativo distruttore viene richiamato automaticamente. In questo modo, Garbage Collection in C++ è strettamente correlato alla durata degli oggetti ed è deterministico. Una risorsa viene sempre rilasciata in un punto noto del programma, che è possibile controllare. Solo i distruttori deterministici come quelli C++ in possono gestire equamente le risorse di memoria e non di memoria.

Nell'esempio seguente viene illustrato un `w`oggetto semplice. Viene dichiarata nello stack nell'ambito della funzione e viene distrutta alla fine del blocco di funzione. L'oggetto `w` non possiede *risorse* (ad esempio la memoria allocata dall'heap). L'unico membro `g` viene dichiarato nello stack e semplicemente esce dall'ambito insieme al `w`. Nel distruttore `widget` non è necessario alcun codice speciale.

```cpp
class widget {
private:
    gadget g;   // lifetime automatically tied to enclosing object
public:
    void draw();
};

void functionUsingWidget () {
    widget w;   // lifetime automatically tied to enclosing scope
                // constructs w, including the w.g gadget member
    // ...
    w.draw();
    // ...
} // automatic destruction and deallocation for w and w.g
  // automatic exception safety,
  // as if "finally { w.dispose(); w.g.dispose(); }"
```

Nell'esempio seguente `w` possiede una risorsa di memoria ed è quindi necessario che nel relativo distruttore sia presente codice per eliminare la memoria.
 
```cpp
class widget
{
private:
    int* data;
public:
    widget(const int size) { data = new int[size]; } // acquire
    ~widget() { delete[] data; } // release
    void do_something() {}
};

void functionUsingWidget() {
    widget w(1000000);   // lifetime automatically tied to enclosing scope
                        // constructs w, including the w.data member
    w.do_something();

} // automatic destruction and deallocation for w and w.data

```

Dal momento che C++ 11 è un modo migliore per scrivere l'esempio precedente: usando un puntatore intelligente dalla libreria standard. Il puntatore intelligente gestisce l'allocazione e l'eliminazione della memoria di sua proprietà. L'uso di un puntatore intelligente elimina la necessità di un distruttore esplicito nella classe `widget`.

```cpp
#include <memory>
class widget
{
private:
    std::unique_ptr<int> data;
public:
    widget(const int size) { data = std::make_unique<int>(size); }
    void do_something() {}
};

void functionUsingWidget() {
    widget w(1000000);   // lifetime automatically tied to enclosing scope
                // constructs w, including the w.data gadget member
    // ...
    w.do_something();
    // ...
} // automatic destruction and deallocation for w and w.data

```

Usando i puntatori intelligenti per l'allocazione di memoria, è possibile eliminare le potenziali perdite di memoria. Questo modello funziona per altre risorse, ad esempio gli handle di file o i socket. È possibile gestire le proprie risorse in modo analogo nelle classi. Per altre informazioni, vedere [puntatori intelligenti](smart-pointers-modern-cpp.md).

La progettazione di C++ garantisce che gli oggetti vengano eliminati definitivamente quando escono dall'ambito. Ovvero vengono eliminati Man mano che i blocchi vengono terminati, in ordine inverso rispetto alla costruzione. Quando un oggetto viene eliminato definitivamente, le basi e i membri vengono eliminati in un ordine particolare. Gli oggetti dichiarati al di fuori di qualsiasi blocco, in ambito globale, possono causare problemi. Potrebbe essere difficile eseguire il debug, se il costruttore di un oggetto globale genera un'eccezione.

## <a name="see-also"></a>Vedere anche

[BentornatiC++](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)
