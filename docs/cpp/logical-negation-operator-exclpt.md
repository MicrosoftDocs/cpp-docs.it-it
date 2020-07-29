---
title: 'Operatore di negazione logica: !'
description: Sintassi e utilizzo dell'operatore di negazione logica del linguaggio standard C++.
ms.date: 07/23/2020
f1_keywords:
- '!'
helpviewer_keywords:
- '! operator'
- NOT operator
- logical negation
ms.assetid: 650add9f-a7bc-426c-b01d-5fc6a81c8b62
ms.openlocfilehash: fdd2e7a71b791375f898372d058a5eeb2afc59f1
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223681"
---
# <a name="logical-negation-operator-"></a>Operatore di negazione logica: !

## <a name="syntax"></a>Sintassi

> **`!`***espressione cast*

## <a name="remarks"></a>Osservazioni

L'operatore di negazione logica ( **`!`** ) inverte il significato del relativo operando. L'operando deve essere di tipo aritmetico o puntatore (o un'espressione che restituisce un tipo aritmetico o puntatore). L'operando viene convertito in modo implicito nel tipo **`bool`** . Il risultato è **`true`** se l'operando convertito è **`false`** . il risultato è **`false`** se l'operando convertito è **`true`** . Il risultato è di tipo **`bool`** .

Per un'espressione `e` , l'espressione unaria `!e` è equivalente all'espressione `(e == 0)` , ad eccezione del caso in cui sono interessati gli operatori di overload.

## <a name="operator-keyword-for-"></a>Parola chiave operator per!

C++ specifica **`not`** come ortografia alternativa per **`!`** . In C, l'ortografia alternativa viene fornita come una macro nell' \<iso646.h> intestazione. In C++, l'ortografia alternativa è una parola chiave. l'utilizzo di \<iso646.h> o dell'equivalente C++ \<ciso646> è deprecato. In Microsoft C++, l' [`/permissive-`](../build/reference/permissive-standards-conformance.md) [`/Za`](../build/reference/za-ze-disable-language-extensions.md) opzione del compilatore o è necessaria per abilitare l'ortografia alternativa.

## <a name="example"></a>Esempio

```cpp
// expre_Logical_NOT_Operator.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    if (!i)
        cout << "i is zero" << endl;
}
```

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)<br/>
[Operatori, precedenza e associatività predefiniti di C++](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatori aritmetici unari](../c-language/unary-arithmetic-operators.md)<br/>
