---
title: Compilatore avviso (livello 3) C4995 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4995
dev_langs:
- C++
helpviewer_keywords:
- C4995
ms.assetid: c6b61755-4730-4947-ad4d-d1c2bc82585a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c5ae389fef72681c6a8b31c9790c6773535f467d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46053479"
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