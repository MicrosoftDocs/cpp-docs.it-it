---
title: Errore del compilatore C3380
ms.date: 11/04/2016
f1_keywords:
- C3380
helpviewer_keywords:
- C3380
ms.assetid: 86f1f4ec-4ad8-4a1a-9b6c-2d9b6129df6b
ms.openlocfilehash: 516690f2524d48e7abbf7546592c6346e92c3e2e
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58781601"
---
# <a name="compiler-error-c3380"></a>Errore del compilatore C3380

'class': identificatore di accesso assembly non valido. Consentiti solo 'public' o 'private'

Quando vengono applicate a una classe o struttura gestita, le parole chiave [public](../../cpp/public-cpp.md) e [private](../../cpp/private-cpp.md) indicano se la classe verrà esposta tramite i metadati dell'assembly. Solo `public` o `private` può essere applicata a una classe in un programma compilato con [/clr](../../build/reference/clr-common-language-runtime-compilation.md).

Il `ref` e `value` parole chiave, se utilizzato con [/clr](../../build/reference/clr-common-language-runtime-compilation.md), indicare che una classe è gestita (vedere [classi e struct](../../extensions/classes-and-structs-cpp-component-extensions.md)).

L'esempio seguente genera l'errore C3380:

```
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
