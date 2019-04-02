---
title: Errore del compilatore C3379
ms.date: 11/04/2016
f1_keywords:
- C3379
helpviewer_keywords:
- C3379
ms.assetid: a66c2c4e-091c-4426-9cde-7c4cfb2ffce1
ms.openlocfilehash: 5bf4e2e42b4534d47a2a7d3c9a838c404a99ba68
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58769987"
---
# <a name="compiler-error-c3379"></a>Errore del compilatore C3379

'class': una classe annidata non può avere un identificatore di accesso assembly come parte della relativa dichiarazione

Quando applicato a un tipo gestito, ad esempio di classe o struttura, il [pubbliche](../../cpp/public-cpp.md) e [privati](../../cpp/private-cpp.md) parole chiave indicano se la classe verrà esposta tramite i metadati dell'assembly. `public` o `private` non può essere applicato a una classe annidata, che erediterà l'accesso all'assembly della classe contenitrice.

Quando abbinata [/clr](../../build/reference/clr-common-language-runtime-compilation.md), il `ref` e `value` parole chiave indicano che una classe è gestita (vedere [classi e struct](../../extensions/classes-and-structs-cpp-component-extensions.md)).

L'esempio seguente genera l'errore C3379:

```
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
