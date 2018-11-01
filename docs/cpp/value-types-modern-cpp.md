---
title: Tipi di valore (C++ moderno)
ms.date: 11/04/2016
ms.topic: conceptual
ms.assetid: f63bb62c-60da-40d5-ac14-4366608fe260
ms.openlocfilehash: 3589541f5b6fca736329e1d6fcb8929418fca132
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50628956"
---
# <a name="value-types-modern-c"></a>Tipi di valore (C++ moderno)

Le classi C++ sono tipi valore predefiniti. In questo argomento fornisce una panoramica introduttiva di tipi di valore e i problemi relativi all'utilizzo.

## <a name="value-vs-reference-types"></a>Valore e tipi di riferimento

Come affermato in precedenza, sono classi C++ dai tipi di valore predefinito. È possibile specificarli come tipi di riferimento, che consentono il comportamento polimorfico supportare orientata agli oggetti di programmazione. I tipi di valore talvolta vengono visualizzati dalla prospettiva di controllo di layout e della memoria, mentre i tipi di riferimento sono relative classi base e funzioni virtuali per scopi di polimorfici. Per impostazione predefinita, i tipi di valore sono copiabili, ovvero non esiste sempre un costruttore di copia e un operatore di assegnazione di copia. Per i tipi di riferimento, è possibile rendere la classe non copiabile (disattivare il costruttore di copia e l'operatore di assegnazione di copia) e usare un distruttore virtuale, che supporta il polimorfismo desiderato. I tipi di valore riguardano anche il contenuto, che, quando vengono copiati, sempre forniscono due valori indipendenti che possono essere modificati separatamente. Tipi di riferimento sono sull'identità - il tipo di oggetto si tratta? Per questo motivo, "tipi di riferimento" definiti anche come "tipi polimorfici".

Se si desidera effettivamente un tipo simile a riferimento (classe di base, le funzioni virtuali), è necessario disabilitare in modo esplicito la copia, come illustrato nel `MyRefType` classe nel codice seguente.

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

La compilazione del codice precedente genererà l'errore seguente:

```Output
test.cpp(15) : error C2248: 'MyRefType::operator =' : cannot access private member declared in class 'MyRefType'
        meow.cpp(5) : see declaration of 'MyRefType::operator ='
        meow.cpp(3) : see declaration of 'MyRefType'
```

## <a name="value-types-and-move-efficiency"></a>I tipi di valore e l'efficienza di spostamento

Copia allocazione sovraccarico viene evitato a causa di nuove ottimizzazioni della copia. Ad esempio, quando si inserisce una stringa all'interno di un vettore di stringhe, non vi sarà alcun overhead di riallocazione di copia, solo un move - anche se il risultato è un aumento del vettore di se stesso. Questo vale anche per altre operazioni, ad esempio eseguire un'operazione di aggiunta su due oggetti molto grandi. Come si abilita queste ottimizzazioni di operazione valore? In alcuni compilatori C++, il compilatore abiliterà questo automaticamente in modo implicito, proprio come i costruttori di copia possono essere generati automaticamente dal compilatore. Tuttavia, in Visual C++, la classe dovrà "acconsentire esplicitamente" per spostare i costruttori e assegnazione dichiarandolo nella definizione della classe. Questa operazione viene eseguita usando la doppia e commerciale (& &) riferimento rvalue nel membro appropriato della funzione dichiarazioni e definizione costruttore di spostamento e i metodi di assegnazione spostamento.  È anche necessario inserire il codice corretto per "ruba sviscerare" dell'oggetto di origine.

Per decidere se è necessario spostare abilitato? Se si conosce già, che è necessario copiare costruzione abilitata, è possibile spostare abilitata se può essere più conveniente di una copia completa. Tuttavia, se si conosce, che è necessario spostare il supporto, non significa necessariamente che si desidera copia abilitata. Questo secondo caso viene chiamato "tipo di spostamento-only". Un esempio già nella libreria standard è `unique_ptr`. Come nota a margine, il vecchio `auto_ptr` è deprecata ed è stato sostituito da `unique_ptr` esattamente a causa della mancanza di supporto di semantica di spostamento nella versione precedente di C++.

Usando la semantica di spostamento è possibile restituire in base al valore o insert-in-middle. Ottimizzazione delle operazioni di copia è di spostamento. È necessario per l'allocazione dell'heap come soluzione alternativa. Si consideri lo pseudocodice seguente:

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

### <a name="enabling-move-for-appropriate-value-types"></a>Abilitazione di spostamento per i tipi di valore appropriato

Per una classe simile a valore in cui può essere più conveniente di una copia completa lo spostamento, abilitare la costruzione di spostamenti e assegnazione per una maggiore efficienza di spostamento. Si consideri lo pseudocodice seguente:

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

Se si abilita la costruzione/assegnazione di copia, abilitare anche la costruzione/assegnazione di spostamento se può essere più conveniente di una copia completa.

Alcuni *non valore* tipi sono solo di spostamento, ad esempio quando non è possibile clonare una risorsa, solo trasferire la proprietà. Esempio: `unique_ptr`.

## <a name="section"></a>Sezione

Content

## <a name="see-also"></a>Vedere anche

[Sistema di tipi C++](../cpp/cpp-type-system-modern-cpp.md)<br/>
[Bentornati a C++](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)