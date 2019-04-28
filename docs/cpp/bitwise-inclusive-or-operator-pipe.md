---
title: 'OR bit per bit operatore OR inclusivo: |'
ms.date: 06/14/2018
f1_keywords:
- bitor
- '|'
helpviewer_keywords:
- OR operator [C++], bitwise inclusive
- bitwise operators [C++], OR operator
- inclusive OR operator
- '| operator'
ms.assetid: 4c8a6a68-d828-447d-875a-aedb4ce3aa9a
ms.openlocfilehash: 848bf3b2ec61084b59ab5b1ee6807f6066a4675e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62184293"
---
# <a name="bitwise-inclusive-or-operator-"></a>OR bit per bit operatore OR inclusivo: |

## <a name="syntax"></a>Sintassi

> *expression1* **|** *expression2*

## <a name="remarks"></a>Note

L'operatore OR inclusivo bit per bit (**&#124;**) confronta ogni bit del primo operando con il bit corrispondente del secondo operando. Se un bit è 1 bit, il bit di risultato corrispondente viene impostato su 1. In caso contrario, il bit di risultato corrispondente viene impostato su 0.

Entrambi gli operandi all'operatore OR bit per bit inclusivo devono essere tipi integrali. Le conversioni aritmetiche consuete analizzate [conversioni Standard](standard-conversions.md) vengono applicate agli operandi.

## <a name="operator-keyword-for-124"></a>Parola chiave operator per&#124;

Il **bitor** operatore è l'equivalente testuale di **&#124;**. Esistono due modi per accedere la **bitor** operatore nei programmi: includere il file di intestazione \<lt;iso646.h&gt >, o eseguire la compilazione con il [/Za](../build/reference/za-ze-disable-language-extensions.md) l'opzione del compilatore (Disabilita estensioni linguaggio).

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