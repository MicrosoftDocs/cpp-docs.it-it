---
title: 'Operatore OR inclusivo bit per bit: &#124;'
description: Sintassi dell'operatore OR inclusivo bit per bit del linguaggio C++ standard e utilizzo di.
ms.date: 07/23/2020
f1_keywords:
- '|'
- bitor_cpp
helpviewer_keywords:
- OR operator [C++], bitwise inclusive
- bitwise operators [C++], OR operator
- inclusive OR operator
- '| operator'
ms.assetid: 4c8a6a68-d828-447d-875a-aedb4ce3aa9a
ms.openlocfilehash: 76f80c2101b3acfac71dc4d8ad1be4a999f69aa5
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87229090"
---
# <a name="bitwise-inclusive-or-operator-124"></a>Operatore OR inclusivo bit per bit: &#124;

## <a name="syntax"></a>Sintassi

> *expression1* **`|`** *expression2*

## <a name="remarks"></a>Osservazioni

L'operatore OR inclusivo bit per bit ( **`|`** ) confronta ogni bit del primo operando con il bit corrispondente del secondo operando. Se uno dei due bit ha valore 1, il bit del risultato verrà impostato su 1, altrimenti verrà impostato su 0.

Entrambi gli operandi per l'operatore devono avere tipi integrali. Le conversioni aritmetiche consuete analizzate in [conversioni standard](standard-conversions.md) vengono applicate agli operandi.

## <a name="operator-keyword-for-124"></a>Parola chiave operator per &#124;

C++ specifica **`bitor`** come ortografia alternativa per **`|`** . In C, l'ortografia alternativa viene fornita come una macro nell' \<iso646.h> intestazione. In C++, l'ortografia alternativa è una parola chiave. l'utilizzo di \<iso646.h> o dell'equivalente C++ \<ciso646> è deprecato. In Microsoft C++, l' [`/permissive-`](../build/reference/permissive-standards-conformance.md) [`/Za`](../build/reference/za-ze-disable-language-extensions.md) opzione del compilatore o è necessaria per abilitare l'ortografia alternativa.

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

[Operatori, precedenza e associatività predefiniti di C++](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatori bit per bit C](../c-language/c-bitwise-operators.md)
