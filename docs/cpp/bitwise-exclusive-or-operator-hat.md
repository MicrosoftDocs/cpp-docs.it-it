---
title: 'Operatore OR bit per bit esclusivo: ^'
description: Sintassi esclusiva del linguaggio standard C++ e utilizzo di.
ms.date: 07/23/2020
f1_keywords:
- xor_cpp
helpviewer_keywords:
- operators [C++], bitwise
- exclusive OR operator
- XOR operator
- bitwise operators [C++], OR operator
- ^ operator
- OR operator [C++], bitwise exclusive
- operators [C++], logical
ms.assetid: f9185d85-65d5-4f64-a6d6-679758d52217
ms.openlocfilehash: 0f64b9f90b70756d29fcabb361cc07abe58e0a54
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87229103"
---
# <a name="bitwise-exclusive-or-operator-"></a>Operatore OR bit per bit esclusivo: ^

## <a name="syntax"></a>Sintassi

> *espressione* **`^`** *espressione*

## <a name="remarks"></a>Osservazioni

L'operatore OR esclusivo bit per bit ( **`^`** ) confronta ogni bit del primo operando con il bit corrispondente del secondo operando. Se il bit del primo operando è 0 e l'altro bit è 1, il bit del risultato corrispondente viene impostato su 1. altrimenti verrà impostato su 0.

Entrambi gli operandi per l'operatore devono avere tipi integrali. Le conversioni aritmetiche consuete analizzate in [conversioni standard](standard-conversions.md) vengono applicate agli operandi.

## <a name="operator-keyword-for-"></a>Parola chiave operator per ^

C++ specifica **`xor`** come ortografia alternativa per **`^`** . In C, l'ortografia alternativa viene fornita come una macro nell' \<iso646.h> intestazione. In C++, l'ortografia alternativa è una parola chiave. l'utilizzo di \<iso646.h> o dell'equivalente C++ \<ciso646> è deprecato. In Microsoft C++, l' [`/permissive-`](../build/reference/permissive-standards-conformance.md) [`/Za`](../build/reference/za-ze-disable-language-extensions.md) opzione del compilatore o è necessaria per abilitare l'ortografia alternativa.


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

[Operatori, precedenza e associatività predefiniti di C++](../cpp/cpp-built-in-operators-precedence-and-associativity.md)
