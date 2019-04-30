---
title: Avviso del compilatore (livello 4) C4668
ms.date: 11/04/2016
f1_keywords:
- C4668
helpviewer_keywords:
- C4668
ms.assetid: c6585460-bc4a-4a15-9242-4cbfce53c961
ms.openlocfilehash: 11d96941a1efddde87068af8829e24259f2fa312
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62408160"
---
# <a name="compiler-warning-level-4-c4668"></a>Avviso del compilatore (livello 4) C4668

'simbolo' non è definita come macro del preprocessore. Sostituzione con '0' per 'direttive'

È stato usato un simbolo che non è stato definito con una direttiva del preprocessore. Il simbolo restituirà false. Per definire un simbolo, è possibile usare la [#define (direttiva)](../../preprocessor/hash-define-directive-c-cpp.md) oppure [/D](../../build/reference/d-preprocessor-definitions.md) opzione del compilatore.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4668:

```
// C4668.cpp
// compile with: /W4
#include <stdio.h>

#pragma warning (default : 4668)   // turn warning on

int main()
{
    #if q   // C4668, q is not defined
        printf_s("defined");
    #else
        printf_s("undefined");
    #endif
}
```