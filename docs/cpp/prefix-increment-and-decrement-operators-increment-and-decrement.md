---
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
ms.openlocfilehash: deb8acc6c6a68c9a97f2f0efbdc4084b4937df46
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50606024"
---
# <a name="prefix-increment-and-decrement-operators--and---"></a>Operatori di incremento e decremento in forma prefissa: ++ e --

## <a name="syntax"></a>Sintassi

```
++ unary-expression
-- unary-expression
```

## <a name="remarks"></a>Note

L'operatore di incremento prefisso (**++**) aggiunge uno al relativo operando; questo valore incrementato è il risultato dell'espressione. L'operando deve essere un l-value non di tipo **const**. Il risultato è un l-value dello stesso tipo dell'operando.

L'operatore di decremento prefisso (**--**) è analoga all'operatore di incremento prefisso, ad eccezione del fatto che l'operando è di tipo decrementato di uno e il risultato è il valore decrementato.

**Visual Studio 2017 versione 15.3 e versioni successive** (disponibile con [/std: c + + 17](../build/reference/std-specify-language-standard-version.md)): l'operando di un operatore di incremento o decremento in forma non può essere di tipo **bool**.

Gli operatori di incremento e di decremento sia in forma prefissa sia in forma suffissa hanno impatto sui relativi operandi. La differenza principale tra loro è data dall'ordine in cui avviene l'incremento o il decremento nella valutazione di un'espressione. (Per altre informazioni, vedere [forma suffissa di operatori di incremento e decremento](../cpp/postfix-increment-and-decrement-operators-increment-and-decrement.md).) Nella forma prefissa, l'incremento o il decremento si verifica prima che il valore venga utilizzato nella valutazione dell'espressione, pertanto il valore dell'espressione è diverso dal valore dell'operando. Nella forma suffissa, l'incremento o il decremento si verifica dopo che il valore viene utilizzato nella valutazione dell'espressione, pertanto il valore dell'espressione è lo stesso dal valore dell'operando. Ad esempio il seguente programma stampa "`++i = 6`":

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

Poiché gli operatori di incremento e decremento hanno effetti collaterali, utilizzo di espressioni con operatori di decremento o in un [macro del preprocessore](../preprocessor/macros-c-cpp.md) può produrre risultati indesiderati. Si consideri l'esempio seguente:

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
>  Le funzioni inline C++ sono preferibili rispetto alle macro in molti casi perché eliminano gli effetti collaterali come quelli qui riportati, consentono inoltre al linguaggio di eseguire un controllo del tipo più completo.

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)<br/>
[Operatori predefiniti C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatori di incremento e decremento in forma prefissa](../c-language/prefix-increment-and-decrement-operators.md)