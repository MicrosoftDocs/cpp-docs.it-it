---
title: Errore del compilatore C3274
ms.date: 11/04/2016
f1_keywords:
- C3274
helpviewer_keywords:
- C3274
ms.assetid: 1f03f18e-b569-48eb-9249-11c70122a305
ms.openlocfilehash: a44a7d471e7e079ee43afa8bf58fd590be2f4bf8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50506665"
---
# <a name="compiler-error-c3274"></a>Errore del compilatore C3274

__finally/finally senza try corrispondente

Nel codice è contenuta un'istruzione [__finally](../../cpp/try-finally-statement.md) o [finally](../../dotnet/finally.md) senza un'istruzione `try`corrispondente. Per risolvere l'errore, eliminare l'istruzione `__finally` o aggiungere un'istruzione `try` per l'istruzione `__finally`.

L'esempio seguente genera l'errore C3274:

```
// C3274.cpp
// compile with: /clr
// C3274 expected
using namespace System;
int main() {
   try {
      try {
         throw gcnew ApplicationException();
      }
      catch(...) {
         Console::Error->WriteLine(L"Caught an exception");
      }
      finally {
         Console::WriteLine(L"In finally");
      }
   } finally {
      Console::WriteLine(L"In finally");
   }

   // Uncomment the following 3 lines to resolve.
   // try {
   //   throw gcnew ApplicationException();
   // }

   finally {
      Console::WriteLine(L"In finally");
   }
   Console::WriteLine(L"**FAIL**");
}
```