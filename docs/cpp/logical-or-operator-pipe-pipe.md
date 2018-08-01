---
title: 'Operatore logico OR: | | | Microsoft Docs'
ms.custom: ''
ms.date: 06/14/2018
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- '||'
dev_langs:
- C++
helpviewer_keywords:
- OR operator [C++], logical
- '|| operator'
- OR operator
- logical OR operator
ms.assetid: 31837c99-2655-4bf3-8ded-f13b7a9dc533
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f3c9b143ca2f156a534f7ab803974f24771b2652
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39403079"
---
# <a name="logical-or-operator-"></a>Operatore logico OR: | |

## <a name="syntax"></a>Sintassi

> *Logical-o-expression* **||** *logical-e-expression*

## <a name="remarks"></a>Note

L'operatore logico OR (**||**) restituisce il valore booleano TRUE se uno o entrambi gli operandi è TRUE e restituisce FALSE in caso contrario. Gli operandi verranno convertiti in modo implicito nel tipo **bool** prima della valutazione e il risultato è di tipo **bool**. L'operatore OR logico presenta un'associatività da sinistra a destra.

Gli operandi dell'operatore OR logico non devono essere dello stesso tipo, ma devono essere di tipo integrale o di tipo puntatore. Gli operandi sono in genere espressioni di uguaglianza o relazionali.

Il primo operando viene completamente restituito e tutti gli effetti collaterali vengono completati prima di continuare la restituzione dell'espressione OR logica.

Il secondo operando viene restituito solo se il primo operando restituisce false (0). In questo modo si evita la valutazione del secondo operando quando l'espressione OR logica è true.

```cpp
printf( "%d" , (x == w || x == y || x == z) );
```

Nell'esempio precedente, se `x` è uguale a `w`, `y` o a `z`, il secondo argomento della funzione `printf` restituisce true e il valore 1 viene stampato. In caso contrario, restituisce false e il valore 0 viene formattato. Appena una delle condizioni restituisce true, la restituzione viene interrotta.

## <a name="operator-keyword-for-124124"></a>Parola chiave operator per&#124;&#124;

Il **oppure** operatore è l'equivalente testuale di **||**. Esistono due modi per accedere la **o** operatore nei programmi: includere il file di intestazione \<lt;iso646.h&gt >, o eseguire la compilazione con il [/Za](../build/reference/za-ze-disable-language-extensions.md) l'opzione del compilatore (Disabilita estensioni linguaggio).

## <a name="example"></a>Esempio

```cpp
// expre_Logical_OR_Operator.cpp
// compile with: /EHsc
// Demonstrate logical OR
#include <iostream>
using namespace std;
int main() {
   int a = 5, b = 10, c = 15;
   cout  << boolalpha
         << "The true expression "
         << "a < b || b > c yields "
         << (a < b || b > c) << endl
         << "The false expression "
         << "a > b || b > c yields "
         << (a > b || b > c) << endl;
}
```

## <a name="see-also"></a>Vedere anche
 [Operatori predefiniti C++ la precedenza e associatività degli operatori](cpp-built-in-operators-precedence-and-associativity.md)  
 [Operatori predefiniti C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)  
 [Operatori logici C](../c-language/c-logical-operators.md)