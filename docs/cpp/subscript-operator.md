---
description: 'Ulteriori informazioni su: Indice (operatore) []'
title: Pedice (operatore) []
ms.date: 11/04/2016
f1_keywords:
- '[]'
helpviewer_keywords:
- operators [C++], subscript
- postfix operators [C++]
- '[] operator'
- subscript operator [C++], syntax
ms.assetid: 69c31494-52da-4dd0-8bbe-6ccbfd50f197
ms.openlocfilehash: e11e94bdf516d830020c4844be2a4c3bfc4a8774
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97221202"
---
# <a name="subscript-operator-"></a>Pedice (operatore) []

## <a name="syntax"></a>Sintassi

```
postfix-expression [ expression ]
```

## <a name="remarks"></a>Osservazioni

Un'espressione suffissa (che può anche essere un'espressione primaria) seguita dall'operatore di indice, **[]**, specifica l'indicizzazione della matrice.

Per informazioni sulle matrici gestite in C++/CLI, vedere [matrici](../extensions/arrays-cpp-component-extensions.md).

In genere, il valore rappresentato da *Postfix-Expression* è un valore di puntatore, ad esempio un identificatore di matrice, ed *Expression* è un valore integrale (inclusi i tipi enumerati). Tuttavia, l'unica condizione da soddisfare dal punto di vista sintattico è che una delle espressioni sia di tipo puntatore e l'altra di tipo integrale. Pertanto il valore integrale potrebbe essere nella posizione *Postfix-Expression* e il valore del puntatore potrebbe essere racchiuso tra parentesi nella posizione dell' *espressione* o dell'indice. Si consideri il frammento di codice riportato di seguito.

```cpp
int nArray[5] = { 0, 1, 2, 3, 4 };
cout << nArray[2] << endl;            // prints "2"
cout << 2[nArray] << endl;            // prints "2"
```

Nell'esempio precedente l'espressione `nArray[2]` è identica a `2[nArray]`. Il motivo è che il risultato di un'espressione di indice `e1[e2]` viene fornito da:

`*((e2) + (e1))`

L'indirizzo restituito dall'espressione non è *e2* byte dall'indirizzo *E1*. L'indirizzo viene invece ridimensionato per restituire l'oggetto successivo nella matrice *e2*. Ad esempio:

```cpp
double aDbl[2];
```

Gli indirizzi di `aDb[0]` e `aDb[1]` sono a 8 byte, ovvero la dimensione di un oggetto di tipo **`double`** . Questo ridimensionamento in base al tipo di oggetto viene eseguito automaticamente dal linguaggio C++ e viene definito negli [operatori additivi](../cpp/additive-operators-plus-and.md) in cui viene discussa l'aggiunta e la sottrazione degli operandi del tipo di puntatore.

Un'espressione di indice può inoltre avere più indici, come nel modo seguente:

*expression1* **[** *expression2* **] [** *expression3* **]** ...

Le espressioni di indice sono associate da sinistra a destra. L'espressione di indice più a sinistra, *expression1* **[** *expression2* **]**, viene valutata per prima. L'indirizzo risultante dall'aggiunta di *expression1* ed *expression2* forma un'espressione puntatore; quindi *expression3* viene aggiunta a quest'espressione puntatore per formare una nuova espressione puntatore e così via finché non è stata aggiunta l'ultima espressione di indice. L'operatore di riferimento indiretto ( <strong>\*</strong> ) viene applicato dopo la valutazione dell'ultima espressione di indice, a meno che il valore del puntatore finale non indirizzi un tipo di matrice.

Le espressioni con più indici fanno riferimento a elementi di "matrici multidimensionali". Una matrice multidimensionale è una matrice i cui elementi sono matrici. Ad esempio, il primo elemento di una matrice tridimensionale è una matrice con due dimensioni. Nell'esempio seguente viene dichiarata e inizializzata una matrice bidimensionale di caratteri semplice:

```cpp
// expre_Subscript_Operator.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;
#define MAX_ROWS 2
#define MAX_COLS 2

int main() {
  char c[ MAX_ROWS ][ MAX_COLS ] = { { 'a', 'b' }, { 'c', 'd' } };
  for ( int i = 0; i < MAX_ROWS; i++ )
     for ( int j = 0; j < MAX_COLS; j++ )
        cout << c[ i ][ j ] << endl;
}
```

## <a name="positive-and-negative-subscripts"></a>Indici positivo e negativo

Il primo elemento di una matrice è l'elemento 0. L'intervallo di una matrice C++ è da *Array*[0] a *Array*[*size* -1]. Tuttavia, C++ supporta gli indici positivi e negativi. Gli indici negativi devono essere compresi nei limiti della matrice; in caso contrario, i risultati sono imprevedibili. Il codice seguente mostra indici di matrice positivi e negativi:

```cpp
#include <iostream>
using namespace std;

int main() {
    int intArray[1024];
    for (int i = 0, j = 0; i < 1024; i++)
    {
        intArray[i] = j++;
    }

    cout << intArray[512] << endl;   // 512

    cout << 257[intArray] << endl;   // 257

    int *midArray = &intArray[512];  // pointer to the middle of the array

    cout << midArray[-256] << endl;  // 256

    cout << intArray[-256] << endl;  // unpredictable, may crash
}
```

L'indice negativo nell'ultima riga può produrre un errore di run-time perché punta a un indirizzo 256 **`int`** posizioni inferiori in memoria rispetto all'origine della matrice. Il puntatore `midArray` viene inizializzato al centro di `intArray` ; è quindi possibile (ma pericoloso) usare gli indici di matrice sia positivi che negativi. Gli errori dell'indice di matrice non generano errori in fase di compilazione, ma producono solo risultati imprevisti.

L'operatore di indice è commutativo. Pertanto, le espressioni *Array*[*index*] e *index*[*Array*] sono sempre equivalenti purché l'operatore pedice non venga sottoposta a overload (vedere [operatori di overload](../cpp/operator-overloading.md)). Il primo form è la procedura di codifica più comune, ma entrambi funzionano.

## <a name="see-also"></a>Vedi anche

[Espressioni di suffisso](../cpp/postfix-expressions.md)<br/>
[Operatori C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Matrici](../cpp/arrays-cpp.md)<br/>
[Matrici unidimensionali](../c-language/one-dimensional-arrays.md)<br/>
[Matrici multidimensionali](../c-language/multidimensional-arrays-c.md)<br/>
