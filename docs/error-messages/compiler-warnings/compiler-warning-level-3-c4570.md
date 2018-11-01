---
title: Avviso del compilatore (livello 3) C4570
ms.date: 11/04/2016
f1_keywords:
- C4570
helpviewer_keywords:
- C4570
ms.assetid: feec1225-e6ad-4995-8d96-c22e864a77bd
ms.openlocfilehash: 1c92bd7f632ea6662c3cee1bcaa1dd0c917fb2a1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50661305"
---
# <a name="compiler-warning-level-3-c4570"></a>Avviso del compilatore (livello 3) C4570

'type': non è dichiarato in modo esplicito come abstract ma ha funzioni astratte

Un tipo che contiene [astratta](../../windows/abstract-cpp-component-extensions.md) funzioni devono essere contrassegnate come abstract.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4570.

```
// C4570.cpp
// compile with: /clr /W3 /c
ref struct X {   // C4570
// try the following line instead
// ref class X abstract {
   virtual void f() abstract;
};
```