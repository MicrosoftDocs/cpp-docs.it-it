---
title: Compilatore avviso (livello 3) C4995
ms.date: 11/04/2016
f1_keywords:
- C4995
helpviewer_keywords:
- C4995
ms.assetid: c6b61755-4730-4947-ad4d-d1c2bc82585a
ms.openlocfilehash: 54bc8931b5eaa3bbb5053e5c21aa2aaaa73126fb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50624796"
---
# <a name="compiler-warning-level-3-c4995"></a>Compilatore avviso (livello 3) C4995

'function': nome contrassegnato come deprecato #pragma

Il compilatore ha rilevato una funzione che è stata contrassegnata con il pragma [deprecato](../../preprocessor/deprecated-c-cpp.md). È possibile che tale funzione non sia più supportata in una versione futura. È possibile disattivare questo avviso con il [avviso](../../preprocessor/warning.md) pragma (ad esempio riportato di seguito).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4995:

```
// C4995.cpp
// compile with: /W3
#include <stdio.h>

// #pragma warning(disable : 4995)
void func1(void)
{
    printf("\nIn func1");
}

int main()
{
    func1();
    #pragma deprecated(func1)
    func1();   // C4995
}
```