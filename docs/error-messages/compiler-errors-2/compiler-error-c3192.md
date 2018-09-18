---
title: Errore del compilatore C3192 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3192
dev_langs:
- C++
helpviewer_keywords:
- C3192
ms.assetid: 8b0083d4-706f-46f6-858a-e1d9af464cf8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 50b639335e0a8ce2f55bb327f3a6a475b1fb770e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46031158"
---
# <a name="compiler-error-c3192"></a>Errore del compilatore C3192

Errore di sintassi: ' ^' non è un operatore di prefisso (si intendeva ' *'?)

Un handle non può essere utilizzato come operatore di dereferenziazione.

L'esempio seguente genera l'errore C3192:

```
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