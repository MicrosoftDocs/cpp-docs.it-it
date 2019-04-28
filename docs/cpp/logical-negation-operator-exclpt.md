---
title: 'Operatore di negazione logica: !'
ms.date: 08/27/2018
f1_keywords:
- '!'
- Not
helpviewer_keywords:
- '! operator'
- NOT operator
- logical negation
ms.assetid: 650add9f-a7bc-426c-b01d-5fc6a81c8b62
ms.openlocfilehash: 7b37e5108ca01d782c13508c0cd7a96b096cd745
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62216408"
---
# <a name="logical-negation-operator-"></a>Operatore di negazione logica: !

## <a name="syntax"></a>Sintassi

```
! cast-expression
```

## <a name="remarks"></a>Note

L'operatore di negazione logico (**!**) Inverte il significato dei relativi operandi. L'operando deve essere di tipo aritmetico o puntatore (o un'espressione che restituisce un tipo aritmetico o puntatore). L'operando verrà convertito in modo implicito nel tipo **bool**. Il risultato è TRUE se l'operando di conversione FALSE. Se l'operando di conversione è TRUE, il risultato è FALSE. Il risultato è di tipo **bool**.

Per un'espressione *elettronica*, l'espressione unaria `!e` equivale all'espressione `(e == 0)`, tranne dove gli operatori di overload sono coinvolti.

## <a name="operator-keyword-for-"></a>Parola chiave operator per !

Il **non** operatore è un termine alternativo dei **!**. Esistono due modi per accedere la **non** operatore nei programmi: includere il file di intestazione \<lt;iso646.h&gt >, o eseguire la compilazione con il [/Za](../build/reference/za-ze-disable-language-extensions.md) l'opzione del compilatore (Disabilita estensioni linguaggio).

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
