---
title: Avviso del compilatore (livello 3) C4570
ms.date: 11/04/2016
f1_keywords:
- C4570
helpviewer_keywords:
- C4570
ms.assetid: feec1225-e6ad-4995-8d96-c22e864a77bd
ms.openlocfilehash: fd144847ce6c4f8697cd866d304c23cb9b2be408
ms.sourcegitcommit: 217fac22604639ebd62d366a69e6071ad5b724ac
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/19/2019
ms.locfileid: "74188880"
---
# <a name="compiler-warning-level-3-c4570"></a>Avviso del compilatore (livello 3) C4570

' type ': non è dichiarato in modo esplicito come abstract ma ha funzioni astratte

Un tipo che contiene funzioni [astratte](../../extensions/abstract-cpp-component-extensions.md) dovrebbe essere contrassegnato come abstract.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4570.

```cpp
// C4570.cpp
// compile with: /clr /W3 /c
ref struct X {   // C4570
// try the following line instead
// ref class X abstract {
   virtual void f() abstract;
};
```