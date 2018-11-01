---
title: Errore del compilatore C3272
ms.date: 11/04/2016
f1_keywords:
- C3272
helpviewer_keywords:
- C3272
ms.assetid: 7cdf254d-f207-4116-a1bf-7386f3b82a6f
ms.openlocfilehash: 3e4348dcce0cfd04234b515877d788e5330f8e4c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50598575"
---
# <a name="compiler-error-c3272"></a>Errore del compilatore C3272

'symbol': il simbolo richiede FieldOffset, poiché è un membro del tipo typename definito con StructLayout(LayoutKind::Explicit)

Quando `StructLayout(LayoutKind::Explicit)` è applicato, i campi devono essere contrassegnati con `FieldOffset`.

L'esempio seguente genera l'errore C3272:

```
// C3272_2.cpp
// compile with: /clr /c
using namespace System;
using namespace System::Runtime::InteropServices;

[StructLayout(LayoutKind::Explicit)]
ref struct X
{
   int data_;   // C3272
   // try the following line instead
   // [FieldOffset(0)] int data_;
};
```
