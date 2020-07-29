---
title: Istruzioni continue (C++)
ms.date: 11/04/2016
f1_keywords:
- continue_cpp
helpviewer_keywords:
- continue keyword [C++]
ms.assetid: 3c94ee57-f732-4c1d-8537-d0ce5382bfd4
ms.openlocfilehash: 55a81338f1a0f9036a6d42c4bac7c99489c18d64
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228999"
---
# <a name="continue-statement-c"></a>Istruzioni continue (C++)

Impone il trasferimento del controllo all'espressione di controllo del ciclo [do](../cpp/do-while-statement-cpp.md), [for](../cpp/for-statement-cpp.md)o [while](../cpp/while-statement-cpp.md) di inclusione più piccolo.

## <a name="syntax"></a>Sintassi

```
continue;
```

## <a name="remarks"></a>Osservazioni

Alcune istruzioni restanti nell'iterazione corrente non vengono eseguite. L'iterazione successiva del ciclo è determinata nel modo seguente:

- In un **`do`** **`while`** ciclo o, l'iterazione successiva inizia rivalutando l'espressione di controllo dell' **`do`** **`while`** istruzione o.

- In un **`for`** ciclo (usando la sintassi `for( <init-expr> ; <cond-expr> ; <loop-expr> )` ), `<loop-expr>` viene eseguita la clausola. La clausola `<cond-expr>` viene rivalutata e, a seconda del risultato, il ciclo termina o si verifica un'altra iterazione.

Nell'esempio seguente viene illustrato come **`continue`** è possibile utilizzare l'istruzione per ignorare le sezioni di codice e iniziare l'iterazione successiva di un ciclo.

## <a name="example"></a>Esempio

```cpp
// continue_statement.cpp
#include <stdio.h>
int main()
{
    int i = 0;
    do
    {
        i++;
        printf_s("before the continue\n");
        continue;
        printf("after the continue, should never print\n");
     } while (i < 3);

     printf_s("after the do loop\n");
}
```

```Output
before the continue
before the continue
before the continue
after the do loop
```

## <a name="see-also"></a>Vedere anche

[Istruzioni di salto](../cpp/jump-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
