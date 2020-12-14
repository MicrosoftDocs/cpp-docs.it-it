---
description: 'Per altre informazioni, vedere operatori di incremento e decremento prefisso: + + e--'
title: 'Operatori di incremento e decremento in forma prefissa: ++ e --'
ms.date: 11/04/2016
f1_keywords:
- --
- ++
helpviewer_keywords:
- increment operators [C++], syntax
- ++ operator [C++], prefix increment operators
- operators [C++], decrement
- -- operator [C++], prefix decrement operators [C++]
- operators [C++], increment
- decrement operators [C++], syntax
- decrement operators [C++]
ms.assetid: 45ea7fc7-f279-4be9-a216-1d9a0ef9eb7b
ms.openlocfilehash: e484dde59a2bb58e7c408ad28242fc0ab4290051
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97198642"
---
# <a name="prefix-increment-and-decrement-operators--and---"></a>Operatori di incremento e decremento in forma prefissa: ++ e --

## <a name="syntax"></a>Sintassi

```
++ unary-expression
-- unary-expression
```

## <a name="remarks"></a>Osservazioni

L'operatore di incremento prefisso ( **++** ) aggiunge uno al relativo operando; questo valore incrementato è il risultato dell'espressione. L'operando deve essere un l-value non di tipo **`const`** . Il risultato è un l-value dello stesso tipo dell'operando.

L'operatore di decremento prefisso ( **--** ) è analogo all'operatore di incremento prefisso, ad eccezione del fatto che l'operando viene decrementato di uno e il risultato è il valore decrementato.

**Visual Studio 2017 versione 15,3 e successive** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)): l'operando di un operatore di incremento o decremento non può essere di tipo **`bool`** .

Gli operatori di incremento e di decremento sia in forma prefissa sia in forma suffissa hanno impatto sui relativi operandi. La differenza principale tra loro è data dall'ordine in cui avviene l'incremento o il decremento nella valutazione di un'espressione. Per ulteriori informazioni, vedere [operatori di incremento e decremento suffisso](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md). Nel formato prefisso, l'incremento o il decremento viene eseguito prima che il valore venga utilizzato nella valutazione dell'espressione, pertanto il valore dell'espressione è diverso dal valore dell'operando. Nella forma suffissa, l'incremento o il decremento si verifica dopo che il valore viene utilizzato nella valutazione dell'espressione, pertanto il valore dell'espressione è lo stesso dal valore dell'operando. Ad esempio il seguente programma stampa "`++i = 6`":

```cpp
// expre_Increment_and_Decrement_Operators.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;

int main() {
   int i = 5;
   cout << "++i = " << ++i << endl;
}
```

Un operando di tipo integrale o mobile viene incrementato o decrementato dell'intero 1. Il tipo del risultato è uguale al tipo di operando. Un operando di tipo puntatore viene incrementato o decrementato alle dimensioni dell'oggetto che indirizza. Un puntatore incrementato punta all'oggetto successivo; mentre un puntatore decrementato punta all'oggetto precedente.

Poiché gli operatori di incremento e decremento presentano effetti collaterali, l'utilizzo di espressioni con operatori di incremento o decremento in una [macro del preprocessore](../preprocessor/macros-c-cpp.md) può produrre risultati indesiderati. Prendere in considerazione questo esempio:

```cpp
// expre_Increment_and_Decrement_Operators2.cpp
#define max(a,b) ((a)<(b))?(b):(a)

int main()
{
   int i = 0, j = 0, k;
   k = max( ++i, j );
}
```

La macro si espande a:

```cpp
k = ((++i)<(j))?(j):(++i);
```

Se `i` è maggiore o uguale a `j` o minore di `j` di 1, verrà incrementato due volte.

> [!NOTE]
> Le funzioni inline C++ sono preferibili rispetto alle macro in molti casi perché eliminano gli effetti collaterali come quelli qui riportati, consentono inoltre al linguaggio di eseguire un controllo del tipo più completo.

## <a name="see-also"></a>Vedi anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)<br/>
[Operatori C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatori di incremento e decremento del prefisso](../c-language/prefix-increment-and-decrement-operators.md)
