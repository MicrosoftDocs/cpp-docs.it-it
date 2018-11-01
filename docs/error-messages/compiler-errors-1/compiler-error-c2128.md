---
title: Errore del compilatore C2128
ms.date: 11/04/2016
f1_keywords:
- c2128
helpviewer_keywords:
- C2128
ms.assetid: 08cbf734-75b3-49f2-9026-9b319947612d
ms.openlocfilehash: 80015118bf9e8bc8d8c4fba578f4ff1fa4651034
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50452559"
---
# <a name="compiler-error-c2128"></a>Errore del compilatore C2128

'function': alloc_text/same_seg applicabili solo alle funzioni con collegamento C

`pragma` `alloc_text` può essere utilizzato solo con le funzioni dichiarate con collegamento C.

L'esempio seguente genera l'errore C2128:

```
// C2128.cpp
// compile with: /c

// Delete the following line to resolve.
void func();
// #pragma alloc_text("my segment", func)   // C2128

extern "C" {
void func();
}

#pragma alloc_text("my segment", func)
void func() {}
```