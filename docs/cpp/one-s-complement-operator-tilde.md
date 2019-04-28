---
title: 'Un&#39;s operatore di complemento a uno: ~'
ms.date: 11/04/2016
f1_keywords:
- "~"
helpviewer_keywords:
- tilde (~) one's complement operator
- one's complement operator
- bitwise-complement operator
- compl operator
- ~ operator [C++], syntax
ms.assetid: 4bf81967-34f7-4b4b-aade-fd03d5da0174
ms.openlocfilehash: d8fb8ca56932669ff85646f2aa0c10691122013b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62245031"
---
# <a name="one39s-complement-operator-"></a>Un&#39;s operatore di complemento a uno: ~

## <a name="syntax"></a>Sintassi

```
~ cast-expression
```

## <a name="remarks"></a>Note

L'operatore di complemento a uno (`~`), talvolta denominato l'operatore di "complemento bit per bit", produce un complemento a uno bit per bit del suo operando. Ovvero ogni bit con 1 nell'operando è 0 nel risultato. Viceversa, ogni bit con 0 nell'operando è 1 nel risultato. L'operando dell'operatore di complemento a uno deve essere un tipo integrale.

## <a name="operator-keyword-for-"></a>Parola chiave operator per ~

Il **compl** operatore è l'equivalente testuale di `~`. Esistono due modi per accedere la **compl** operatore nei programmi: includere il file di intestazione `iso646.h`, o compilare [/Za](../build/reference/za-ze-disable-language-extensions.md).

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

La promozione a intero viene eseguita su operandi integrali e il tipo risultante è il tipo a cui l'operando viene promosso. Visualizzare [conversioni Standard](standard-conversions.md) per altre informazioni sul modo in cui viene eseguita la promozione.

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)<br/>
[Operatori predefiniti C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatori aritmetici unari](../c-language/unary-arithmetic-operators.md)