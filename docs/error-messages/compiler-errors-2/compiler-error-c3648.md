---
title: Errore del compilatore C3648
ms.date: 11/04/2016
f1_keywords:
- C3648
helpviewer_keywords:
- C3648
ms.assetid: 5d042989-41cb-4cd0-aa50-976b70146aaf
ms.openlocfilehash: 7394f6b9789caa09ffc2ad6c2cf56f037b5d57b8
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58767964"
---
# <a name="compiler-error-c3648"></a>Errore del compilatore C3648

Questa sintassi di override esplicita richiede /CLR: oldSyntax

Durante la compilazione per la versione più recente sintassi gestita, il compilatore ha trovato esplicito eseguire l'override della sintassi per le versioni precedenti che non è più supportata.

Per altre informazioni, vedere [esegue l'override esplicito](../../extensions/explicit-overrides-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3648:

```
// C3648.cpp
// compile with: /clr
public interface struct I {
   void f();
};

public ref struct R : I {
   virtual void I::f() {}   // C3648
   // try the following line instead
   // virtual void f() = I::f{}
};
```