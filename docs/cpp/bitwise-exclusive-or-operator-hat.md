---
title: 'Operatore OR bit per bit esclusivo: ^'
description: Sintassi esclusiva del linguaggio standard C++ e utilizzo di.
ms.date: 09/21/2020
f1_keywords:
- xor_cpp
- ^
helpviewer_keywords:
- operators [C++], bitwise
- exclusive OR operator
- XOR operator
- bitwise operators [C++], OR operator
- ^ operator
- OR operator [C++], bitwise exclusive
- operators [C++], logical
ms.assetid: f9185d85-65d5-4f64-a6d6-679758d52217
ms.openlocfilehash: 4823c245ffca7032347e37c0c25c2963407733a7
ms.sourcegitcommit: f656092eebbcb148ca4d3b7a6a8508eff8f7e85f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/21/2020
ms.locfileid: "90836628"
---
# <a name="bitwise-exclusive-or-operator-"></a>Operatore OR bit per bit esclusivo: ^

## <a name="syntax"></a>Sintassi

> *espressione* **`^`** *espressione*

## <a name="remarks"></a>Commenti

L'operatore OR esclusivo bit per bit ( **`^`** ) confronta ogni bit del primo operando con il bit corrispondente del secondo operando. Se il bit in uno degli operandi è 0 e il bit nell'altro operando è 1, il bit del risultato corrispondente viene impostato su 1. altrimenti verrà impostato su 0.

Entrambi gli operandi per l'operatore devono avere tipi integrali. Le conversioni aritmetiche consuete analizzate in [conversioni standard](standard-conversions.md) vengono applicate agli operandi.

Per ulteriori informazioni sull'utilizzo alternativo del **`^`** carattere in c++/CLI e c++/CX, vedere [operatore handle a oggetto (^) (c++/CLI e c++/CX)](../extensions/handle-to-object-operator-hat-cpp-component-extensions.md).

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
