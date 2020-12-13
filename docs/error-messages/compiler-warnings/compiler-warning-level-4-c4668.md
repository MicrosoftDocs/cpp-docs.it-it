---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4668'
title: Avviso del compilatore (livello 4) C4668
ms.date: 11/04/2016
f1_keywords:
- C4668
helpviewer_keywords:
- C4668
ms.assetid: c6585460-bc4a-4a15-9242-4cbfce53c961
ms.openlocfilehash: 559043027bf9fab38470223ea7735ca70297aabf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97134056"
---
# <a name="compiler-warning-level-4-c4668"></a>Avviso del compilatore (livello 4) C4668

'simbolo' non è definita come macro del preprocessore. Sostituzione con '0' per 'direttive'

Un simbolo non definito è stato usato con una direttiva per il preprocessore. Il simbolo restituirà false. Per definire un simbolo, è possibile usare la [direttiva #define](../../preprocessor/hash-define-directive-c-cpp.md) o l'opzione del compilatore [/d](../../build/reference/d-preprocessor-definitions.md) .

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4668:

```cpp
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
