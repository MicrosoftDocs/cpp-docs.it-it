---
description: 'Altre informazioni su: classi C++ come tipi di valore'
title: Classi C++ come tipi valore
ms.date: 11/19/2019
ms.topic: conceptual
ms.assetid: f63bb62c-60da-40d5-ac14-4366608fe260
ms.openlocfilehash: cba028f73ef55be76dd7d405a25fd423f3897af4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97116679"
---
# <a name="c-classes-as-value-types"></a>Classi C++ come tipi valore

Per impostazione predefinita, le classi C++ sono tipi di valore. Possono essere specificati come tipi di riferimento, che consentono il comportamento polimorfico per supportare la programmazione orientata a oggetti. I tipi di valore vengono talvolta visualizzati dal punto di vista della memoria e del controllo del layout, mentre i tipi di riferimento si riferiscono alle classi di base e alle funzioni virtuali per finalità polimorfiche. Per impostazione predefinita, i tipi di valore sono copiabili, ovvero c'è sempre un costruttore di copia e un operatore di assegnazione di copia. Per i tipi di riferimento, è possibile rendere la classe non copiabile (disabilitare il costruttore di copia e l'operatore di assegnazione di copia) e usare un distruttore virtuale, che supporta il polimorfismo previsto. I tipi di valore si riferiscono anche al contenuto, che, quando vengono copiati, fornisce sempre due valori indipendenti che possono essere modificati separatamente. I tipi di riferimento sono relativi all'identità: quale tipo di oggetto è? Per questo motivo, i "tipi riferimento" sono detti anche "tipi polimorfici".

Se si desidera effettivamente un tipo di riferimento (classe base, funzioni virtuali), è necessario disabilitare in modo esplicito la copia, come illustrato nella `MyRefType` classe nel codice riportato di seguito.

```cpp
// cl /EHsc /nologo /W4

class MyRefType {
private:
    MyRefType & operator=(const MyRefType &);
    MyRefType(const MyRefType &);
public:
    MyRefType () {}
};

int main()
{
    MyRefType Data1, Data2;
    // ...
    Data1 = Data2;
}
```

La compilazione del codice precedente comporterà l'errore seguente:

```Output
test.cpp(15) : error C2248: 'MyRefType::operator =' : cannot access private member declared in class 'MyRefType'
        meow.cpp(5) : see declaration of 'MyRefType::operator ='
        meow.cpp(3) : see declaration of 'MyRefType'
```

## <a name="value-types-and-move-efficiency"></a>Tipi di valore e efficienza di spostamento

Il sovraccarico di allocazione delle copie è stato evitato a causa di nuove ottimizzazioni di copia Ad esempio, quando si inserisce una stringa nel mezzo di un vettore di stringhe, non vi sarà alcun overhead di riallocazione della copia, ma solo uno spostamento, anche se comporta un aumento del vettore. Questo vale anche per altre operazioni, ad esempio l'esecuzione di un'operazione di aggiunta su due oggetti di grandi dimensioni. Come si abilitano le ottimizzazioni delle operazioni sui valori? In alcuni compilatori C++, il compilatore lo Abilita in modo implicito, in modo analogo ai costruttori di copia che possono essere generati automaticamente dal compilatore. Tuttavia, in C++, la classe dovrà "acconsentire esplicitamente" per spostare l'assegnazione e i costruttori dichiarando tale classe nella definizione della classe. A tale scopo, è necessario utilizzare il riferimento rvalue di due e commerciale (&&) nelle dichiarazioni di funzione membro appropriate e definire i metodi di assegnazione di spostamento e il costruttore di spostamento.  È anche necessario inserire il codice corretto per "rubare le budella" dall'oggetto di origine.

Come si decide se è necessario lo spostamento abilitato? Se si sa già che è necessaria la costruzione di copia abilitata, è probabile che lo spostamento venga abilitato se può essere più economico di una copia completa. Tuttavia, se si sa che è necessario il supporto di spostamento, non significa necessariamente che la copia sia abilitata. Quest'ultimo caso verrebbe definito "tipo di solo spostamento". Un esempio già presente nella libreria standard è `unique_ptr` . Come nota collaterale, il vecchio `auto_ptr` è deprecato ed è stato sostituito da `unique_ptr` esattamente a causa della mancanza di supporto della semantica di spostamento nella versione precedente di C++.

Usando la semantica di spostamento è possibile restituire per valore o inserire al centro. Lo spostamento è un'ottimizzazione della copia. È necessario disporre dell'allocazione dell'heap come soluzione alternativa. Si consideri lo pseudocodice seguente:

```cpp
#include <set>
#include <vector>
#include <string>
using namespace std;

//...
set<widget> LoadHugeData() {
    set<widget> ret;
    // ... load data from disk and populate ret
    return ret;
}
//...
widgets = LoadHugeData();   // efficient, no deep copy

vector<string> v = IfIHadAMillionStrings();
v.insert( begin(v)+v.size()/2, "scott" );   // efficient, no deep copy-shuffle
v.insert( begin(v)+v.size()/2, "Andrei" );  // (just 1M ptr/len assignments)
//...
HugeMatrix operator+(const HugeMatrix& , const HugeMatrix& );
HugeMatrix operator+(const HugeMatrix& ,       HugeMatrix&&);
HugeMatrix operator+(      HugeMatrix&&, const HugeMatrix& );
HugeMatrix operator+(      HugeMatrix&&,       HugeMatrix&&);
//...
hm5 = hm1+hm2+hm3+hm4+hm5;   // efficient, no extra copies
```

### <a name="enabling-move-for-appropriate-value-types"></a>Abilitazione dello spostamento per i tipi di valore appropriati

Per una classe di tipo valore in cui lo spostamento può essere più economico rispetto a una copia completa, abilitare la costruzione di spostamento e l'assegnazione di spostamento per migliorare l'efficienza. Si consideri lo pseudocodice seguente:

```cpp
#include <memory>
#include <stdexcept>
using namespace std;
// ...
class my_class {
    unique_ptr<BigHugeData> data;
public:
    my_class( my_class&& other )   // move construction
        : data( move( other.data ) ) { }
    my_class& operator=( my_class&& other )   // move assignment
    { data = move( other.data ); return *this; }
    // ...
    void method() {   // check (if appropriate)
        if( !data )
            throw std::runtime_error("RUNTIME ERROR: Insufficient resources!");
    }
};
```

Se si Abilita la costruzione o l'assegnazione di copia, abilitare anche la costruzione o l'assegnazione di spostamento se può essere più conveniente rispetto a una copia completa.

Alcuni tipi *non di valore* sono di solo spostamento, ad esempio quando non è possibile clonare una risorsa, solo trasferire la proprietà. Esempio: `unique_ptr`.

## <a name="see-also"></a>Vedi anche

[Sistema di tipi C++](../cpp/cpp-type-system-modern-cpp.md)<br/>
[C++](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
[Riferimenti per il linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)
