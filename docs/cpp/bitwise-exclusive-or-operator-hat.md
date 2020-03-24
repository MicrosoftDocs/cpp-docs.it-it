---
title: 'Operatore OR bit per bit esclusivo: ^'
ms.date: 11/04/2016
helpviewer_keywords:
- operators [C++], bitwise
- exclusive OR operator
- XOR operator
- bitwise operators [C++], OR operator
- ^ operator
- OR operator [C++], bitwise exclusive
- operators [C++], logical
ms.assetid: f9185d85-65d5-4f64-a6d6-679758d52217
ms.openlocfilehash: 9a44dc60a985729aae79ed0e2e48c44adace647b
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80190716"
---
# <a name="bitwise-exclusive-or-operator-"></a>Operatore OR bit per bit esclusivo: ^

## <a name="syntax"></a>Sintassi

```
expression ^ expression
```

## <a name="remarks"></a>Osservazioni

L'operatore OR esclusivo bit per bit ( **^** ) confronta ogni bit del primo operando con il bit corrispondente del secondo operando. Se un bit ha valore 0 e l'altro 1, il bit del risultato corrispondente verrà impostato su 1. altrimenti verrà impostato su 0.

Entrambi gli operandi all'operatore OR bit per bit esclusivo devono essere di tipi integrali. Le conversioni aritmetiche consuete analizzate in [conversioni standard](standard-conversions.md) vengono applicate agli operandi.

## <a name="operator-keyword-for-"></a>Parola chiave operator per ^

L'operatore **Xor** è il testo equivalente di **^** . Esistono due modi per accedere all'operatore **Xor** nei programmi: includere il file di intestazione `iso646.h`o compilare con l'opzione del compilatore [/za](../build/reference/za-ze-disable-language-extensions.md) (Disable Language Extensions).

## <a name="example"></a>Esempio

```cpp
// expre_Bitwise_Exclusive_OR_Operator.cpp
// compile with: /EHsc
// Demonstrate bitwise exclusive OR
#include <iostream>
using namespace std;
int main() {
   unsigned short a = 0x5555;      // pattern 0101 ...
   unsigned short b = 0xFFFF;      // pattern 1111 ...

   cout  << hex << ( a ^ b ) << endl;   // prints "aaaa" pattern 1010 ...
}
```

## <a name="see-also"></a>Vedere anche

[Operatori predefiniti C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)
