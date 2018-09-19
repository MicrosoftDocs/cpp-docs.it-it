---
title: 'Un&#39;s operatore di complemento a uno: ~ | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- "~"
dev_langs:
- C++
helpviewer_keywords:
- tilde (~) one's complement operator
- one's complement operator
- bitwise-complement operator
- compl operator
- ~ operator [C++], syntax
ms.assetid: 4bf81967-34f7-4b4b-aade-fd03d5da0174
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 42cfc8dd3f94b5b85616297908a73c9a791b730a
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46111446"
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