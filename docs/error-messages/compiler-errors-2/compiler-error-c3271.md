---
title: Errore del compilatore C3271
ms.date: 11/04/2016
f1_keywords:
- C3271
helpviewer_keywords:
- C3271
ms.assetid: 16d8bd1d-2e30-4c6a-a07f-0c4f3342fab5
ms.openlocfilehash: 646f42f1bc9724d8f0a2a47b17836cda4092ad12
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74753991"
---
# <a name="compiler-error-c3271"></a>Errore del compilatore C3271

'member': valore 'value' non valido per l'attributo FieldOffset

All'attributo **FieldOffset** è stato passato un numero negativo.

L'esempio seguente genera l'errore C3271:

```cpp
// C3271.cpp
// compile with: /clr /c
using namespace System;
using namespace System::Runtime::InteropServices;

[StructLayout(LayoutKind::Explicit)]
value class MyStruct1 {
   public: [FieldOffset(0)] int a;
   public: [FieldOffset(-1)] long b;   // C3271
};
```
