---
title: Avviso del compilatore (livello 3) C4995
ms.date: 11/04/2016
f1_keywords:
- C4995
helpviewer_keywords:
- C4995
ms.assetid: c6b61755-4730-4947-ad4d-d1c2bc82585a
ms.openlocfilehash: c361563c2272da002a0edc185cc924c64f6b5e5c
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74991670"
---
# <a name="compiler-warning-level-3-c4995"></a>Avviso del compilatore (livello 3) C4995

' Function ': il nome è stato contrassegnato come #pragma deprecato

Il compilatore ha rilevato una funzione contrassegnata con pragma [deprecated](../../preprocessor/deprecated-c-cpp.md). È possibile che tale funzione non sia più supportata in una versione futura. È possibile disattivare questo avviso con il pragma [warning](../../preprocessor/warning.md) (esempio riportato di seguito).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4995:

```cpp
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
