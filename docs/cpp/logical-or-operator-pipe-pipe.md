---
title: 'Operatore OR logico:  &#124;&#124;'
description: Sintassi e uso della sintassi dell'operatore OR logico del linguaggio standard C++.
ms.date: 07/23/2020
f1_keywords:
- '||'
- or_cpp
helpviewer_keywords:
- OR operator [C++], logical
- '|| operator'
- OR operator
- logical OR operator
ms.assetid: 31837c99-2655-4bf3-8ded-f13b7a9dc533
ms.openlocfilehash: 1845aef59f88d5dd044cefedd21cb618e1102e13
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225995"
---
# <a name="logical-or-operator-124124"></a>Operatore OR logico:  &#124;&#124;

## <a name="syntax"></a>Sintassi

> *Logical-or-Expression* **`||`** *Logical-and-Expression*

## <a name="remarks"></a>Osservazioni

L'operatore OR logico ( **`||`** ) restituisce il valore booleano **`true`** se uno o entrambi gli operandi sono **`true`** e restituisce **`false`** in caso contrario. Gli operandi vengono convertiti in modo implicito nel tipo **`bool`** prima della valutazione e il risultato è di tipo **`bool`** . L'operatore OR logico presenta un'associatività da sinistra a destra.

Gli operandi dell'operatore logico OR non devono avere lo stesso tipo, ma devono essere di tipo booleano, integrale o puntatore. Gli operandi sono in genere espressioni di uguaglianza o relazionali.

Il primo operando viene completamente restituito e tutti gli effetti collaterali vengono completati prima di continuare la restituzione dell'espressione OR logica.

Il secondo operando viene valutato solo se il primo operando restituisce **`false`** , perché la valutazione non è necessaria quando l'espressione OR logica è **`true`** . È noto come valutazione a *corto circuito* .

```cpp
printf( "%d" , (x == w || x == y || x == z) );
```

Nell'esempio precedente, se `x` è uguale a `w` , `y` o `z` , il secondo argomento della `printf` funzione restituisce **`true`** , che viene quindi promosso a un intero e il valore 1 viene stampato. In caso contrario, restituisce **`false`** e il valore 0 viene stampato. Non appena una delle condizioni restituisce, la valutazione viene **`true`** arrestata.

## <a name="operator-keyword-for-124124"></a>Parola chiave operator per &#124;&#124;

C++ specifica **`or`** come ortografia alternativa per **`||`** . In C, l'ortografia alternativa viene fornita come una macro nell' \<iso646.h> intestazione. In C++, l'ortografia alternativa è una parola chiave. l'utilizzo di \<iso646.h> o dell'equivalente C++ \<ciso646> è deprecato. In Microsoft C++, l' [`/permissive-`](../build/reference/permissive-standards-conformance.md) [`/Za`](../build/reference/za-ze-disable-language-extensions.md) opzione del compilatore o è necessaria per abilitare l'ortografia alternativa.

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

[Operatori, precedenza e associatività predefiniti di C++](cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatori logici C](../c-language/c-logical-operators.md)
