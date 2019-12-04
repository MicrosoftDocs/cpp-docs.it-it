---
title: Errore del compilatore C3192
ms.date: 11/04/2016
f1_keywords:
- C3192
helpviewer_keywords:
- C3192
ms.assetid: 8b0083d4-706f-46f6-858a-e1d9af464cf8
ms.openlocfilehash: 977987c0c4a6d3ba86eaad2a0c1b4ff2664ce37c
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761595"
---
# <a name="compiler-error-c3192"></a>Errore del compilatore C3192

errore di sintassi:' ^' non è un operatore di prefisso (si intendeva ' *'?)

Non è possibile usare un handle come operatore di dereferenziazione.

L'esempio seguente genera l'C3192:

```cpp
// C3192.cpp
// compile with: /clr
using namespace System;

ref class MyClass {
public:
   MyClass () {}
   MyClass(MyClass%) {}
};

int main() {
   MyClass ^ s = gcnew MyClass;
   MyClass b = ^s;   // C3192

   // OK
   MyClass b2 = *s;
}
```
