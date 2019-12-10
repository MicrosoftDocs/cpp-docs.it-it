---
title: Avviso del compilatore (livello 4) C4764
ms.date: 11/04/2016
f1_keywords:
- C4764
helpviewer_keywords:
- C4764
ms.assetid: 7bd4296f-966b-484c-bf73-8dbc8e85b4a9
ms.openlocfilehash: 28672d2271e380f6a8240bff98326d5334a0f98f
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74989189"
---
# <a name="compiler-warning-level-4-c4764"></a>Avviso del compilatore (livello 4) C4764

Non è possibile allineare oggetti catch a un numero di byte maggiore di 16

È stato specificato un allineamento maggiore di 16, ma in alcune piattaforme, se la funzione genera un'eccezione, lo stack forzerà un allineamento non maggiore di 16.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4764:

```cpp
// C4764.cpp
// compile with: /W4 /EHsc
// processor: x64 IPF
#include <stdio.h>

class A
{
public:
    int x;
};

typedef __declspec(align(32)) A ALIGNEDA;

int main()
{
    ALIGNEDA a;
    try
    {
        a.x = 15;
        throw a;
    }
    catch (ALIGNEDA b) // can’t align b to > 16 bytes
    {
        printf_s("%d\n", b.x);
    }
}   // C4764
```
