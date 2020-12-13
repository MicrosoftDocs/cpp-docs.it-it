---
description: 'Altre informazioni su: errore del compilatore C3380'
title: Errore del compilatore C3380
ms.date: 11/04/2016
f1_keywords:
- C3380
helpviewer_keywords:
- C3380
ms.assetid: 86f1f4ec-4ad8-4a1a-9b6c-2d9b6129df6b
ms.openlocfilehash: bb633d75d08fdbb902f086b3a4cd6a8a6db1fc69
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334992"
---
# <a name="compiler-error-c3380"></a>Errore del compilatore C3380

'class': identificatore di accesso assembly non valido. Consentiti solo 'public' o 'private'

Quando vengono applicate a una classe o struttura gestita, le parole chiave [public](../../cpp/public-cpp.md) e [private](../../cpp/private-cpp.md) indicano se la classe verrà esposta tramite i metadati dell'assembly. Solo `public` o `private` può essere applicata a una classe in un programma compilato con [/clr](../../build/reference/clr-common-language-runtime-compilation.md).

Le `ref` `value` parole chiave e, se usate con [/CLR](../../build/reference/clr-common-language-runtime-compilation.md), indicano che una classe è gestita (vedere [classi e struct](../../extensions/classes-and-structs-cpp-component-extensions.md)).

L'esempio seguente genera l'errore C3380:

```cpp
// C3380_2.cpp
// compile with: /clr
protected ref class A {   // C3380
// try the following line instead
// ref class A {
public:
   static int i = 9;
};

int main() {
   A^ myA = gcnew A;
   System::Console::WriteLine(myA->i);
}
```
