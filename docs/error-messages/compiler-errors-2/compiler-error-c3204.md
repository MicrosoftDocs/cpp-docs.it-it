---
title: Errore del compilatore C3204
ms.date: 11/04/2016
f1_keywords:
- C3204
helpviewer_keywords:
- C3204
ms.assetid: 06e578da-0262-48c8-b2ae-be1cd6d28884
ms.openlocfilehash: 72b9f4fe926b617d7c5b3538fb9d3281e1d95a5f
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74738700"
---
# <a name="compiler-error-c3204"></a>Errore del compilatore C3204

Impossibile chiamare '_alloca' dall'interno di un blocco catch

Questo errore si verifica quando si usa una chiamata a [_alloca](../../c-runtime-library/reference/alloca.md) da un blocco catch.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3204:

```cpp
// C3204.cpp
// compile with: /EHsc
#include <malloc.h>

void ShowError(void)
{
   try
   {
   }
   catch(...)
   {
      _alloca(1);   // C3204
   }
}
```
