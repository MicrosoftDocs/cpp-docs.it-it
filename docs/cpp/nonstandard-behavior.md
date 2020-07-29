---
title: Comportamento non standard
ms.date: 05/06/2019
helpviewer_keywords:
- compatibility and compliance, nonstandard behavior
- Microsoft-specific, compiler behavior
- nonstandard behavior, compliance and compatibility
ms.assetid: a57dea27-dc79-4f64-8a83-017e84841773
ms.openlocfilehash: f31938c78e443bb53a286f79661d86b7a6e9edbc
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87186542"
---
# <a name="nonstandard-behavior"></a>Comportamento non standard

Le sezioni seguenti elencano alcune delle posizioni in cui l'implementazione Microsoft di C++ non è conforme allo standard C++. I numeri delle sezioni indicati di seguito fanno riferimento ai numeri delle sezioni nello standard C++ 11 (ISO/IEC 14882:2011(E)).

L'elenco dei limiti del compilatore che differiscono da quelli definiti nello standard C++ viene fornito nei [limiti del compilatore](../cpp/compiler-limits.md).

## <a name="covariant-return-types"></a>Tipi restituiti covarianti

Le classi base virtuali non sono supportate come tipi restituiti covarianti quando la funzione virtuale dispone di un numero variabile di argomenti. Questo non è conforme alla sezione 10.3, paragrafo 7 della specifica C++ ISO. L'esempio seguente non viene compilato, restituendo l'errore del compilatore [C2688](../error-messages/compiler-errors-2/compiler-error-c2688.md)

```cpp
// CovariantReturn.cpp
class A
{
   virtual A* f(int c, ...);   // remove ...
};

class B : virtual A
{
   B* f(int c, ...);   // C2688 remove ...
};
```

## <a name="binding-nondependent-names-in-templates"></a>Associazione di nomi non dipendenti nei modelli

Il compilatore Microsoft C++ attualmente non supporta l'associazione di nomi non dipendenti durante l'analisi iniziale di un modello. Questo non è conforme alla sezione 16.6.3 della specifica C++ ISO. Ne possono conseguire overload dichiarati dopo il modello, ma prima della creazione di istanze del modello stesso.

```cpp
#include <iostream>
using namespace std;

namespace N {
   void f(int) { cout << "f(int)" << endl;}
}

template <class T> void g(T) {
    N::f('a');   // calls f(char), should call f(int)
}

namespace N {
    void f(char) { cout << "f(char)" << endl;}
}

int main() {
    g('c');
}
// Output: f(char)
```

## <a name="function-exception-specifiers"></a>Identificatori di eccezioni di funzione.

Gli identificatori di eccezioni di funzione diversi da `throw()` vengono analizzati, ma non utilizzati. Questo non è conforme alla sezione 15.4 della specifica ISO C++. Ad esempio:

```cpp
void f() throw(int); // parsed but not used
void g() throw();    // parsed and used
```

Per ulteriori informazioni sulle specifiche di eccezione, vedere [specifiche di eccezione](../cpp/exception-specifications-throw-cpp.md).

## <a name="char_traitseof"></a>char_traits::eof()

Lo standard C++ indica che [char_traits:: EOF](../standard-library/char-traits-struct.md#eof) non deve corrispondere a un `char_type` valore valido. Il compilatore Microsoft C++ impone questo vincolo per il tipo **`char`** , ma non per il tipo **`wchar_t`** . Questo non è conforme al requisito indicato nella Tabella 62 della sezione 12.1.1 della specifica ISO C++. Nell'esempio che segue viene illustrato quanto descritto.

```cpp
#include <iostream>

int main()
{
    using namespace std;

    char_traits<char>::int_type int2 = char_traits<char>::eof();
    cout << "The eof marker for char_traits<char> is: " << int2 << endl;

    char_traits<wchar_t>::int_type int3 = char_traits<wchar_t>::eof();
    cout << "The eof marker for char_traits<wchar_t> is: " << int3 << endl;
}
```

## <a name="storage-location-of-objects"></a>Percorso di archiviazione di oggetti

Lo standard C++ (sezione 1.8 paragrafo 6) richiede che oggetti C++ completi abbiano percorsi di archiviazione univoci. Tuttavia, con Microsoft C++, esistono casi in cui i tipi senza membri dati condividono un percorso di archiviazione con altri tipi per la durata dell'oggetto.
