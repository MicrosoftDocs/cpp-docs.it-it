---
title: Errore del compilatore C3254
ms.date: 11/04/2016
f1_keywords:
- C3254
helpviewer_keywords:
- C3254
ms.assetid: 93427b10-fa72-4e43-80d1-1a6e122f9f40
ms.openlocfilehash: 7e051c6c44d3b85f6f3faaf5380ecf54cba5d73c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50470668"
---
# <a name="compiler-error-c3254"></a>Errore del compilatore C3254

'override esplicito': classe contiene override esplicito 'override', ma non deriva da un'interfaccia che contiene la dichiarazione di funzione

Quando si [eseguire l'override esplicito](../../cpp/explicit-overrides-cpp.md) un metodo, la classe che contiene la sostituzione deve derivare, direttamente o indirettamente, dal tipo che contiene la funzione che si esegue l'override.

L'esempio seguente genera l'errore C3254:

```
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