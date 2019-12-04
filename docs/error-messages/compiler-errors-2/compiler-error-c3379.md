---
title: Errore del compilatore C3379
ms.date: 11/04/2016
f1_keywords:
- C3379
helpviewer_keywords:
- C3379
ms.assetid: a66c2c4e-091c-4426-9cde-7c4cfb2ffce1
ms.openlocfilehash: 9d99214f3ad7e7db1edc215d94c98e9cf9ec4ca2
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74742899"
---
# <a name="compiler-error-c3379"></a>Errore del compilatore C3379

' Class ': una classe annidata non può avere un identificatore di accesso assembly come parte della relativa dichiarazione

Quando viene applicato a un tipo gestito, ad esempio una classe o uno struct, le parole chiave [public](../../cpp/public-cpp.md) e [private](../../cpp/private-cpp.md) indicano se la classe verrà esposta tramite i metadati dell'assembly. non è possibile applicare `public` o `private` a una classe annidata, che erediterà l'accesso dell'assembly della classe che li contiene.

Se usati con [/CLR](../../build/reference/clr-common-language-runtime-compilation.md), le parole chiave `ref` e `value` indicano che una classe è gestita (vedere [classi e struct](../../extensions/classes-and-structs-cpp-component-extensions.md)).

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
