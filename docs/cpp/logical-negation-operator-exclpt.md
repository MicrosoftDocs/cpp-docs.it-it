---
title: 'Operatore di negazione logica: !'
ms.date: 08/27/2018
f1_keywords:
- '!'
helpviewer_keywords:
- '! operator'
- NOT operator
- logical negation
ms.assetid: 650add9f-a7bc-426c-b01d-5fc6a81c8b62
ms.openlocfilehash: 06142ef15fcdbafdbae4b892772a04b117c087f6
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79446544"
---
# <a name="logical-negation-operator-"></a>Operatore di negazione logica: !

## <a name="syntax"></a>Sintassi

```
! cast-expression
```

## <a name="remarks"></a>Osservazioni

L'operatore di negazione logica ( **!** ) inverte il significato del relativo operando. L'operando deve essere di tipo aritmetico o puntatore (o un'espressione che restituisce un tipo aritmetico o puntatore). L'operando viene convertito in modo implicito nel tipo **bool**. Il risultato è TRUE se l'operando convertito è FALSE; il risultato è FALSE se l'operando convertito è TRUE. Il risultato è di tipo **bool**.

Per un'espressione *e*, l'espressione unaria `!e` è equivalente all'espressione `(e == 0)`, tranne nei casi in cui sono interessati gli operatori di overload.

## <a name="operator-keyword-for-"></a>Parola chiave operator per !

L'operatore **not** è un'ortografia alternativa **.** Esistono due modi per accedere all'operatore **not** nei programmi: includere il file di intestazione \<iso646. h > o compilare con l'opzione del compilatore [/za](../build/reference/za-ze-disable-language-extensions.md) (Disable Language Extensions).

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
[Operatori predefiniti C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatori aritmetici unari](../c-language/unary-arithmetic-operators.md)<br/>
