---
title: Avviso del compilatore (livello 1) C4906
ms.date: 11/04/2016
f1_keywords:
- C4906
helpviewer_keywords:
- C4906
ms.assetid: 05318e74-799b-412a-9dce-f02b8161d762
ms.openlocfilehash: 88671dea6b0d96f33ad6a84611b0ded9746c699f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80174805"
---
# <a name="compiler-warning-level-1-c4906"></a>Avviso del compilatore (livello 1) C4906

cast di stringa letterale su "LPWSTR"

Il compilatore ha rilevato un cast non sicuro. Il cast ha avuto esito positivo, ma è necessario usare una routine di conversione.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4906:

```cpp
// C4906.cpp
// compile with: /W1
#pragma warning(default : 4906)
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    LPWSTR x = (LPWSTR)"1234";   // C4906

    // try the following lines instead
    // char y[128];
    // size_t numberOfCharConverted = 0;
    // errcode err = 0;
    // err = wcstombs_s(&numberOfCharConverted , &y[0], 128,
    //                  L"12345", 4);
    // if (err != 0)
    // {
    //     printf_s("wcstombs_s failed!");
    //     return -1;
    // }
    // printf_s("%s\n", y);

    return 0;
}
```
