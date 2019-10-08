---
title: Operatore typeid
ms.date: 10/04/2019
helpviewer_keywords:
- typeid operator
ms.assetid: 8871cee6-d6b9-4301-a5cb-bf3dc9798d61
ms.openlocfilehash: 93a2d3c494cd5aadafedcaaae9ec72809d633a4a
ms.sourcegitcommit: c51b2c665849479fa995bc3323a22ebe79d9d7ce
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/07/2019
ms.locfileid: "71998756"
---
# <a name="typeid-operator"></a>Operatore typeid

## <a name="syntax"></a>Sintassi

```
typeid(type-id)
typeid(expression)
```

## <a name="remarks"></a>Note

L'operatore **typeid** consente di determinare il tipo di un oggetto in fase di esecuzione.

Il risultato di **typeid** è un `const type_info&`. Il valore è un riferimento a un oggetto `type_info` che rappresenta l' *ID tipo* o il tipo dell' *espressione*, a seconda della forma di **typeid** utilizzata. Per ulteriori informazioni, vedere la [classe type_info](../cpp/type-info-class.md).

L'operatore **typeid** non funziona con i tipi gestiti (dichiaratori o istanze astratte). Per informazioni su come ottenere il <xref:System.Type> di un tipo specificato, vedere [typeid](../extensions/typeid-cpp-component-extensions.md).

L'operatore **typeid** esegue un controllo della fase di esecuzione quando viene applicato a un l-value di un tipo di classe polimorfica, in cui il tipo effettivo dell'oggetto non può essere determinato dalle informazioni statiche fornite. I casi sono i seguenti:

- Un riferimento a una classe

- Puntatore, dereferenziato con `*`

- Puntatore con indice (`[ ]`). Non è sicuro usare un indice con un puntatore a un tipo polimorfico.

Se l' *espressione* punta a un tipo di classe di base, ma l'oggetto è effettivamente di un tipo derivato da tale classe base, il risultato è un riferimento `type_info` per la classe derivata. L' *espressione* deve puntare a un tipo polimorfico (una classe con funzioni virtuali). In caso contrario, il risultato è il `type_info` per la classe statica a cui si fa riferimento nell' *espressione*. Inoltre, il puntatore deve essere dereferenziato in modo che l'oggetto utilizzato sia quello a cui punta. Senza dereferenziare il puntatore, il risultato sarà il `type_info` per il puntatore, non quello a cui punta. Esempio:

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

Se l' *espressione* sta dereferenziando un puntatore e il valore del puntatore è zero, **typeid** genera un' [Eccezione bad_typeid](../cpp/bad-typeid-exception.md). Se il puntatore non punta a un oggetto valido, viene generata un'eccezione `__non_rtti_object`. Indica il tentativo di analizzare il RTTI che ha generato un errore perché l'oggetto è in qualche modo non valido. Ad esempio, si tratta di un puntatore errato o il codice non è stato compilato con [/gr](../build/reference/gr-enable-run-time-type-information.md).

Se l' *espressione* non è un puntatore e non un riferimento a una classe di base dell'oggetto, il risultato è un riferimento `type_info` che rappresenta il tipo statico dell' *espressione*. Il *tipo statico* di un'espressione fa riferimento al tipo di un'espressione così come è noto in fase di compilazione. Durante la valutazione del tipo statico di un'espressione, la semantica di esecuzione viene ignorata. Inoltre, i riferimenti vengono, quando possibile, ignorati durante la determinazione del tipo statico di un'espressione.

```cpp
// expre_typeid_Operator_2.cpp
#include <typeinfo>

int main()
{
   typeid(int) == typeid(int&); // evaluates to true
}
```

**typeid** può inoltre essere utilizzato nei modelli per determinare il tipo di un parametro di modello:

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

## <a name="see-also"></a>Vedere anche

[Informazioni sui tipi di runtime](../cpp/run-time-type-information.md)\
[Parole chiave](../cpp/keywords-cpp.md)
