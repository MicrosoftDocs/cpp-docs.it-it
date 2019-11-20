---
title: Avviso del compilatore (livello 3) C4636
ms.date: 11/04/2016
f1_keywords:
- C4636
helpviewer_keywords:
- C4636
ms.assetid: 59112a0f-850f-41c6-bd84-8ae8dc84706a
ms.openlocfilehash: a1ee63b813c8ef468291eea4575286f40f96ff6a
ms.sourcegitcommit: 217fac22604639ebd62d366a69e6071ad5b724ac
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/19/2019
ms.locfileid: "74189126"
---
# <a name="compiler-warning-level-3-c4636"></a>Avviso del compilatore (livello 3) C4636

Commento al documento XML applicato a 'construct': il tag richiede un attributo '' non vuoto.

Un tag, ad esempio `cref`, non ha un valore.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4636.

```cpp
// C4636.cpp
// compile with: /clr /doc /W3 /c
/// <see cref=''/>
// /// <see cref='System::Exception'/>
ref struct A {   // C4636
   void f(int);
};

// OK
/// <see cref='System::Exception'/>
ref struct B {
   void f(int);
};
```