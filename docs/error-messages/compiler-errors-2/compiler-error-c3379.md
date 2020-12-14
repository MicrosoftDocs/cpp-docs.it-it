---
description: 'Altre informazioni su: errore del compilatore C3379'
title: Errore del compilatore C3379
ms.date: 11/04/2016
f1_keywords:
- C3379
helpviewer_keywords:
- C3379
ms.assetid: a66c2c4e-091c-4426-9cde-7c4cfb2ffce1
ms.openlocfilehash: 622a1327eb84d83fa24d8a084e3266183c669120
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97220734"
---
# <a name="compiler-error-c3379"></a>Errore del compilatore C3379

' Class ': una classe annidata non può avere un identificatore di accesso assembly come parte della relativa dichiarazione

Quando viene applicato a un tipo gestito, ad esempio una classe o uno struct, le parole chiave [public](../../cpp/public-cpp.md) e [private](../../cpp/private-cpp.md) indicano se la classe verrà esposta tramite i metadati dell'assembly. `public` o `private` non può essere applicato a una classe annidata, che erediterà l'accesso dell'assembly della classe contenitore.

Se utilizzata con [/CLR](../../build/reference/clr-common-language-runtime-compilation.md), le `ref` `value` parole chiave e indicano che una classe è gestita (vedere [classi e struct](../../extensions/classes-and-structs-cpp-component-extensions.md)).

L'esempio seguente genera l'C3379:

```cpp
// C3379a.cpp
// compile with: /clr
using namespace System;

public ref class A {
public:
   static int i = 9;

   public ref class BA {   // C3379
   // try the following line instead
   // ref class BA {
   public:
      static int ii = 8;
   };
};

int main() {

   A^ myA = gcnew A;
   Console::WriteLine(myA->i);

   A::BA^ myBA = gcnew A::BA;
   Console::WriteLine(myBA->ii);
}
```
