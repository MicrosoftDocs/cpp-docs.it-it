---
title: 'Operatore di complemento a uno: ~'
description: Sintassi dell'operatore di complemento di un linguaggio standard C++ e utilizzo di.
ms.date: 07/23/2020
f1_keywords:
- "~"
- compl_cpp
helpviewer_keywords:
- tilde (~) one's complement operator
- one's complement operator
- bitwise-complement operator
- compl operator
- ~ operator [C++], syntax
ms.assetid: 4bf81967-34f7-4b4b-aade-fd03d5da0174
ms.openlocfilehash: 89c67855cd67df2af315cea941b487e7462889b2
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227244"
---
# <a name="ones-complement-operator-"></a>Operatore di complemento a uno: ~

## <a name="syntax"></a>Sintassi

```cpp
~ cast-expression
```

## <a name="remarks"></a>Osservazioni

L'operatore di complemento a uno ( **`~`** ), talvolta denominato operatore di *complemento bit per bit* , restituisce il complemento a uno bit per bit del relativo operando. Ovvero ogni bit con 1 nell'operando è 0 nel risultato. Viceversa, ogni bit con 0 nell'operando è 1 nel risultato. L'operando dell'operatore di complemento a uno deve essere un tipo integrale.

## <a name="operator-keyword-for-"></a>Parola chiave operator per ~

C++ specifica **`compl`** come ortografia alternativa per **`~`** . In C, l'ortografia alternativa viene fornita come una macro nell' \<iso646.h> intestazione. In C++, l'ortografia alternativa è una parola chiave. l'utilizzo di \<iso646.h> o dell'equivalente C++ \<ciso646> è deprecato. In Microsoft C++, l' [`/permissive-`](../build/reference/permissive-standards-conformance.md) [`/Za`](../build/reference/za-ze-disable-language-extensions.md) opzione del compilatore o è necessaria per abilitare l'ortografia alternativa.

## <a name="example"></a>Esempio

```cpp
// expre_One_Complement_Operator.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;

int main () {
   unsigned short y = 0xFFFF;
   cout << hex << y << endl;
   y = ~y;   // Take one's complement
   cout << hex << y << endl;
}
```

In questo esempio, il nuovo valore assegnato a `y` è il complemento a uno del valore non firmato 0xFFFF o a 0x0000.

La promozione a intero viene eseguita su operandi integrali. Il tipo a cui l'operando viene promosso è il tipo risultante. Per ulteriori informazioni sulla promozione integrale, vedere [conversioni standard](standard-conversions.md).

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori unari](expressions-with-unary-operators.md)<br/>
[Operatori, precedenza e associatività predefiniti di C++](cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatori aritmetici unari](../c-language/unary-arithmetic-operators.md)
