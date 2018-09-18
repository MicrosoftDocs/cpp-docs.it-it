---
title: 'Operatore OR bit per bit esclusivo: ^ | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- operators [C++], bitwise
- exclusive OR operator
- XOR operator
- bitwise operators [C++], OR operator
- ^ operator
- OR operator [C++], bitwise exclusive
- operators [C++], logical
ms.assetid: f9185d85-65d5-4f64-a6d6-679758d52217
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 76c1863b9e27c1ec28206a5734f7301f077df678
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46064821"
---
# <a name="bitwise-exclusive-or-operator-"></a>Operatore OR bit per bit esclusivo: ^

## <a name="syntax"></a>Sintassi

```
expression ^ expression
```

## <a name="remarks"></a>Note

L'operatore OR esclusivo bit per bit (**^**) confronta ogni bit del primo operando con il bit corrispondente del secondo operando. Se un bit è 0 e l'altro bit è 1, il bit di risultato corrispondente viene impostato su 1. In caso contrario, il bit di risultato corrispondente viene impostato su 0.

Entrambi gli operandi all'operatore OR bit per bit esclusivo devono essere di tipi integrali. Le conversioni aritmetiche consuete analizzate [conversioni Standard](standard-conversions.md) vengono applicate agli operandi.

## <a name="operator-keyword-for-"></a>Parola chiave operator per ^

Il **xor** operatore è l'equivalente testuale di **^**. Esistono due modi per accedere la **xor** operatore nei programmi: includere il file di intestazione `iso646.h`, o eseguire la compilazione con il [/Za](../build/reference/za-ze-disable-language-extensions.md) l'opzione del compilatore (Disabilita estensioni linguaggio).

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