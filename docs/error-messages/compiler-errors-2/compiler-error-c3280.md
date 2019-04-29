---
title: Errore del compilatore C3280
ms.date: 11/04/2016
f1_keywords:
- C3280
helpviewer_keywords:
- C3280
ms.assetid: 86dc5bbc-8818-4786-a728-9334268d308b
ms.openlocfilehash: b43ea73a626ba35f58054a94046915d4eba97181
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62382047"
---
# <a name="compiler-error-c3280"></a>Errore del compilatore C3280

'class': una funzione membro di un tipo gestito non può essere compilata come una funzione non gestita

Le funzioni membro delle classi gestite non possono essere compilate come funzioni non gestite.

L'esempio seguente genera l'errore C3280:

```
// C3280_2.cpp
// compile with: /clr
ref struct A {
   void func();
};

#pragma managed(push,off)

void A::func()   // C3280
{
}

#pragma managed(pop)
```
