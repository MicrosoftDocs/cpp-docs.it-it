---
title: 'Operatore OR bit per bit inclusivo: |'
ms.date: 06/14/2018
f1_keywords:
- '|'
helpviewer_keywords:
- OR operator [C++], bitwise inclusive
- bitwise operators [C++], OR operator
- inclusive OR operator
- '| operator'
ms.assetid: 4c8a6a68-d828-447d-875a-aedb4ce3aa9a
ms.openlocfilehash: 38def2b1ac585c751699227d2a065b45145d290d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80190755"
---
# <a name="bitwise-inclusive-or-operator-"></a>Operatore OR bit per bit inclusivo: |

## <a name="syntax"></a>Sintassi

> *expression1* **|** *expression2*

## <a name="remarks"></a>Osservazioni

L'operatore OR inclusivo bit **&#124;** per bit () confronta ogni bit del primo operando con il bit corrispondente del secondo operando. Se uno dei due bit ha valore 1, il bit del risultato verrà impostato su 1, altrimenti verrà impostato su 0.

Entrambi gli operandi all'operatore OR bit per bit inclusivo devono essere tipi integrali. Le conversioni aritmetiche consuete analizzate in [conversioni standard](standard-conversions.md) vengono applicate agli operandi.

## <a name="operator-keyword-for-124"></a>Parola chiave operator per&#124;

L'operatore **BITOR** è il testo equivalente di **&#124;** . Esistono due modi per accedere all'operatore **BITOR** nei programmi: includere il file di intestazione \<iso646. h > oppure compilare con l'opzione del compilatore [/za](../build/reference/za-ze-disable-language-extensions.md) (Disable Language Extensions).

## <a name="example"></a>Esempio

```cpp
// expre_Bitwise_Inclusive_OR_Operator.cpp
// compile with: /EHsc
// Demonstrate bitwise inclusive OR
#include <iostream>
using namespace std;

int main() {
   unsigned short a = 0x5555;      // pattern 0101 ...
   unsigned short b = 0xAAAA;      // pattern 1010 ...

   cout  << hex << ( a | b ) << endl;   // prints "ffff" pattern 1111 ...
}
```

## <a name="see-also"></a>Vedere anche

[Operatori predefiniti C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatori bit per bit C](../c-language/c-bitwise-operators.md)
