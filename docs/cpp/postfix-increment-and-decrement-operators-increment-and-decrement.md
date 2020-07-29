---
title: 'Operatori di incremento e decremento in forma suffissa: ++ e --'
ms.date: 11/04/2016
f1_keywords:
- --
- ++
helpviewer_keywords:
- increment operators [C++], syntax
- member-selection operators [C++]
- -- operator [C++], postfix decrement operators
- postfix operators [C++]
- ++ operator [C++], postfix increment operators
- decrement operators [C++], syntax
- operators [C++], postfix
- decrement operators [C++]
ms.assetid: 0204d5c8-51b0-4108-b8a1-074c5754d89c
ms.openlocfilehash: 8c3eeb47ec81f4073452c17f40eb2fec4911989f
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87213281"
---
# <a name="postfix-increment-and-decrement-operators--and---"></a>Operatori di incremento e decremento in forma suffissa: ++ e --

## <a name="syntax"></a>Sintassi

```
postfix-expression ++
postfix-expression --
```

## <a name="remarks"></a>Osservazioni

In C++ sono disponibili operatori di incremento e decremento prefisso e suffisso. In questa sezione verranno descritti solo gli operatori di incremento e decremento suffisso. Per altre informazioni, vedere [operatori di incremento e decremento del prefisso](../cpp/prefix-increment-and-decrement-operators-increment-and-decrement.md). La differenza tra i due è che nella notazione suffissa l'operatore viene visualizzato dopo *Postfix-Expression*, mentre nella notazione del prefisso l'operatore viene visualizzato prima dell' *espressione.* Nell'esempio seguente viene illustrato un operatore di decremento suffisso:

```cpp
i++;
```

L'effetto dell'applicazione dell'operatore di incremento suffisso ( **++** ) consiste nel fatto che il valore dell'operando viene incrementato di un'unità del tipo appropriato. Analogamente, l'effetto dell'applicazione dell'operatore di decremento suffisso ( **--** ) consiste nel fatto che il valore dell'operando viene ridotto di un'unità del tipo appropriato.

È importante notare che un'espressione di incremento o decremento suffisso restituisce il valore dell'espressione *prima* dell'applicazione dell'operatore corrispondente. L'operazione di incremento o decremento si verifica *dopo* la valutazione dell'operando. Questo problema si verifica solo quando l'operazione di decremento o di decremento in forma suffissa viene eseguita nel contesto di un'espressione più estesa.

Quando un operatore suffisso viene applicato a un argomento di funzione, non è garantito che il valore dell'argomento venga incrementato o decrementato prima di essere passato alla funzione.  Per ulteriori informazioni, vedere la sezione 1.9.17 in C++ standard.

L'applicazione dell'operatore di incremento suffisso a un puntatore a una matrice di oggetti di tipo **`long`** aggiunge effettivamente quattro alla rappresentazione interna del puntatore. Questo comportamento fa sì che il puntatore, che in precedenza faceva riferimento all'elemento *n*della matrice, faccia riferimento all'elemento (*n*+ 1) Th.

Gli operandi per gli operatori di decremento suffisso e di decremento suffisso devono essere **`const`** valori l-value modificabili di tipo aritmetico o puntatore. Il tipo del risultato corrisponde a quello dell' *espressione suffissa*, ma non è più un l-value.

**Visual Studio 2017 versione 15,3 e successive** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)): l'operando di un operatore di incremento o decremento suffisso non può essere di tipo **`bool`** .

Il codice seguente illustra l'operatore di incremento suffisso:

```cpp
// expre_Postfix_Increment_and_Decrement_Operators.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main() {
   int i = 10;
   cout << i++ << endl;
   cout << i << endl;
}
```

Le operazioni di post-decremento e post-incremento sui tipi enumerati non sono supportate:

```cpp
enum Compass { North, South, East, West );
Compass myCompass;
for( myCompass = North; myCompass != West; myCompass++ ) // Error
```

## <a name="see-also"></a>Vedere anche

[Espressioni di suffisso](../cpp/postfix-expressions.md)<br/>
[Operatori C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatori di incremento e decremento suffisso C](../c-language/c-postfix-increment-and-decrement-operators.md)
