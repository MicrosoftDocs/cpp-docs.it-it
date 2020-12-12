---
description: 'Ulteriori informazioni su: operatore typeid'
title: Operatore typeid
ms.date: 10/04/2019
helpviewer_keywords:
- typeid operator
ms.assetid: 8871cee6-d6b9-4301-a5cb-bf3dc9798d61
ms.openlocfilehash: 8e036cbdcc540eca224b97b09d174362c454da6e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97145860"
---
# <a name="typeid-operator"></a>Operatore typeid

## <a name="syntax"></a>Sintassi

```
typeid(type-id)
typeid(expression)
```

## <a name="remarks"></a>Osservazioni

L' **`typeid`** operatore consente di determinare il tipo di un oggetto in fase di esecuzione.

Il risultato di **`typeid`** è `const type_info&` . Il valore è un riferimento a un `type_info` oggetto che rappresenta l' *ID tipo* o il tipo dell' *espressione*, a seconda della forma di **`typeid`** utilizzata. Per ulteriori informazioni, vedere [Type_info Class](../cpp/type-info-class.md).

L' **`typeid`** operatore non funziona con i tipi gestiti (dichiaratori o istanze astratte). Per informazioni su come ottenere l'oggetto <xref:System.Type> di un tipo specificato, vedere [typeid](../extensions/typeid-cpp-component-extensions.md).

L' **`typeid`** operatore esegue un controllo della fase di esecuzione quando viene applicato a un l-value di un tipo di classe polimorfica, in cui il tipo effettivo dell'oggetto non può essere determinato dalle informazioni statiche fornite. I casi sono i seguenti:

- Un riferimento a una classe

- Puntatore, dereferenziato con `*`

- Puntatore A indice ( `[ ]` ). Non è sicuro usare un indice con un puntatore a un tipo polimorfico.

Se l' *espressione* fa riferimento a un tipo di classe di base, ma l'oggetto è effettivamente di un tipo derivato da tale classe base, `type_info` il risultato è un riferimento per la classe derivata. L' *espressione* deve puntare a un tipo polimorfico (una classe con funzioni virtuali). In caso contrario, il risultato è l'oggetto `type_info` per la classe statica a cui si fa riferimento nell' *espressione*. Inoltre, il puntatore deve essere dereferenziato in modo che l'oggetto utilizzato sia quello a cui punta. Senza dereferenziare il puntatore, il risultato sarà l'oggetto `type_info` per il puntatore, non quello a cui punta. Ad esempio:

```cpp
// expre_typeid_Operator.cpp
// compile with: /GR /EHsc
#include <iostream>
#include <typeinfo>

class Base {
public:
   virtual void vvfunc() {}
};

class Derived : public Base {};

using namespace std;
int main() {
   Derived* pd = new Derived;
   Base* pb = pd;
   cout << typeid( pb ).name() << endl;   //prints "class Base *"
   cout << typeid( *pb ).name() << endl;   //prints "class Derived"
   cout << typeid( pd ).name() << endl;   //prints "class Derived *"
   cout << typeid( *pd ).name() << endl;   //prints "class Derived"
   delete pd;
}
```

Se l' *espressione* sta dereferenziando un puntatore e il valore del puntatore è zero, **`typeid`** genera un' [Eccezione bad_typeid](../cpp/bad-typeid-exception.md). Se il puntatore non punta a un oggetto valido, `__non_rtti_object` viene generata un'eccezione. Indica il tentativo di analizzare il RTTI che ha generato un errore perché l'oggetto è in qualche modo non valido. Ad esempio, si tratta di un puntatore errato o il codice non è stato compilato con [/gr](../build/reference/gr-enable-run-time-type-information.md).

Se l' *espressione* non è un puntatore e non un riferimento a una classe di base dell'oggetto, il risultato è un `type_info` riferimento che rappresenta il tipo statico dell' *espressione*. Il *tipo statico* di un'espressione fa riferimento al tipo di un'espressione così come è noto in fase di compilazione. Durante la valutazione del tipo statico di un'espressione, la semantica di esecuzione viene ignorata. Inoltre, i riferimenti vengono, quando possibile, ignorati durante la determinazione del tipo statico di un'espressione.

```cpp
// expre_typeid_Operator_2.cpp
#include <typeinfo>

int main()
{
   typeid(int) == typeid(int&); // evaluates to true
}
```

**`typeid`** può essere usato anche nei modelli per determinare il tipo di un parametro di modello:

```cpp
// expre_typeid_Operator_3.cpp
// compile with: /c
#include <typeinfo>
template < typename T >
T max( T arg1, T arg2 ) {
   cout << typeid( T ).name() << "s compared." << endl;
   return ( arg1 > arg2 ? arg1 : arg2 );
}
```

## <a name="see-also"></a>Vedi anche

[Informazioni sui tipi in fase di esecuzione](../cpp/run-time-type-information.md)\
[Parole chiave](../cpp/keywords-cpp.md)
