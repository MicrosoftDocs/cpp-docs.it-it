---
title: Istruzioni continue (C++)
ms.date: 11/04/2016
f1_keywords:
- continue_cpp
helpviewer_keywords:
- continue keyword [C++]
ms.assetid: 3c94ee57-f732-4c1d-8537-d0ce5382bfd4
ms.openlocfilehash: 6fbc4af6a9a56f3406582ea9ba59f4d5759b88a1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62154633"
---
# <a name="continue-statement-c"></a>Istruzioni continue (C++)

Forza il trasferimento del controllo per l'espressione di controllo di inclusione più piccolo [scopo](../cpp/do-while-statement-cpp.md), [per](../cpp/for-statement-cpp.md), o [mentre](../cpp/while-statement-cpp.md) ciclo.

## <a name="syntax"></a>Sintassi

```
continue;
```

## <a name="remarks"></a>Note

Alcune istruzioni restanti nell'iterazione corrente non vengono eseguite. L'iterazione successiva del ciclo è determinata nel modo seguente:

- In un **effettuare** o **mentre** ciclo, l'iterazione successiva inizia rivalutando l'espressione di controllo del **eseguire** o **mentre** istruzione.

- In un **per** ciclo (usando la sintassi `for`(`init-expr`; `cond-expr`; `loop-expr`)), il `loop-expr` clausola viene eseguita. La clausola `cond-expr` viene rivalutata e, a seconda del risultato, il ciclo termina o si verifica un'altra iterazione.

L'esempio seguente illustra come la **continuare** istruzione può essere utilizzata per ignorare le sezioni di codice e avviare l'iterazione successiva di un ciclo.

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

[Istruzioni di spostamento](../cpp/jump-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)