---
title: Operatore AND bit per bit:&amp;
description: Sintassi e utilizzo dell'operatore and bit per bit del linguaggio standard C++.
ms.date: 07/23/2020
f1_keywords:
- bitand_cpp
helpviewer_keywords:
- AND operator
- bitwise operators [C++], AND operator
- '& operator [C++], bitwise operators'
ms.assetid: 76f40de3-c417-47b9-8a77-532f3fc990a5
ms.openlocfilehash: 7e78e4003a31ee59ebd974275df784b7a76e73ce
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87229116"
---
# <a name="bitwise-and-operator-amp"></a>Operatore AND bit per bit:&amp;

## <a name="syntax"></a>Sintassi

> *espressione* **`&`** *espressione*

## <a name="remarks"></a>Osservazioni

L'operatore AND bit per bit ( **`&`** ) confronta ogni bit del primo operando con il bit corrispondente del secondo operando. Se entrambi i bit hanno valore 1, il bit del risultato verrà impostato su 1, altrimenti verrà impostato su 0.

Entrambi gli operandi all'operatore AND bit per bit devono avere tipi integrali. Le conversioni aritmetiche consuete analizzate in [conversioni standard](standard-conversions.md) vengono applicate agli operandi.

## <a name="operator-keyword-for-"></a>Parola chiave operator per &

C++ specifica **`bitand`** come ortografia alternativa per **`&`** . In C, l'ortografia alternativa viene fornita come una macro nell' \<iso646.h> intestazione. In C++, l'ortografia alternativa è una parola chiave. l'utilizzo di \<iso646.h> o dell'equivalente C++ \<ciso646> è deprecato. In Microsoft C++, l' [`/permissive-`](../build/reference/permissive-standards-conformance.md) [`/Za`](../build/reference/za-ze-disable-language-extensions.md) opzione del compilatore o è necessaria per abilitare l'ortografia alternativa.

## <a name="example"></a>Esempio

```cpp
// expre_Bitwise_AND_Operator.cpp
// compile with: /EHsc
// Demonstrate bitwise AND
#include <iostream>
using namespace std;
int main() {
   unsigned short a = 0xFFFF;      // pattern 1111 ...
   unsigned short b = 0xAAAA;      // pattern 1010 ...

   cout  << hex << ( a & b ) << endl;   // prints "aaaa", pattern 1010 ...
}
```

## <a name="see-also"></a>Vedere anche

[Operatori, precedenza e associatività predefiniti di C++](cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatori bit per bit C](../c-language/c-bitwise-operators.md)
