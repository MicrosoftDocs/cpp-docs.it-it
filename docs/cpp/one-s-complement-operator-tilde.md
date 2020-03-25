---
title: 'Operatore&#39;di complemento a uno s: ~'
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
ms.openlocfilehash: 777f253925caf38647863bdaa93fde8d5a03e3f9
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80177716"
---
# <a name="one39s-complement-operator-"></a>Operatore&#39;di complemento a uno s: ~

## <a name="syntax"></a>Sintassi

```
~ cast-expression
```

## <a name="remarks"></a>Osservazioni

L'operatore di complemento a uno (`~`), talvolta denominato l'operatore di "complemento bit per bit", produce un complemento a uno bit per bit del suo operando. Ovvero ogni bit con 1 nell'operando è 0 nel risultato. Viceversa, ogni bit con 0 nell'operando è 1 nel risultato. L'operando dell'operatore di complemento a uno deve essere un tipo integrale.

## <a name="operator-keyword-for-"></a>Parola chiave operator per ~

L'operatore **compl** è il testo equivalente di `~`. Esistono due modi per accedere all'operatore **compl** nei programmi: includere il file di intestazione `iso646.h`o compilare con [/za](../build/reference/za-ze-disable-language-extensions.md).

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

La promozione a intero viene eseguita su operandi integrali e il tipo risultante è il tipo a cui l'operando viene promosso. Per ulteriori informazioni sul modo in cui viene eseguita la promozione, vedere [conversioni standard](standard-conversions.md) .

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)<br/>
[Operatori predefiniti C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatori aritmetici unari](../c-language/unary-arithmetic-operators.md)
