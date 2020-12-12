---
description: 'Altre informazioni su: errore del compilatore C3254'
title: Errore del compilatore C3254
ms.date: 11/04/2016
f1_keywords:
- C3254
helpviewer_keywords:
- C3254
ms.assetid: 93427b10-fa72-4e43-80d1-1a6e122f9f40
ms.openlocfilehash: 7d0084f52060803cd99b973c9f6105fc8915c2aa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97194215"
---
# <a name="compiler-error-c3254"></a>Errore del compilatore C3254

' Explicit override ': la classe contiene un override esplicito ' override ' ma non deriva da un'interfaccia che contiene la dichiarazione di funzione

Quando si [esegue l'override esplicito](../../cpp/explicit-overrides-cpp.md) di un metodo, la classe che contiene l'override deve derivare, direttamente o indirettamente, dal tipo che contiene la funzione di cui si esegue l'override.

L'esempio seguente genera l'C3254:

```cpp
// C3254.cpp
__interface I
{
   void f();
};

__interface I1 : I
{
};

struct A /* : I1 */
{
   void I1::f()
   {   // C3254, uncomment : I1 to resolve this C3254
   }
};

int main()
{
}
```
