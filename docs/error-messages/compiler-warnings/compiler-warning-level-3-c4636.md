---
title: Avviso del compilatore (livello 3) C4636
ms.date: 11/04/2016
f1_keywords:
- C4636
helpviewer_keywords:
- C4636
ms.assetid: 59112a0f-850f-41c6-bd84-8ae8dc84706a
ms.openlocfilehash: 7327189a61e2545bb6003cd95e1ddb116f9f7c94
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50542233"
---
# <a name="compiler-warning-level-3-c4636"></a>Avviso del compilatore (livello 3) C4636

Commento al documento XML applicato a 'construct': il tag richiede un attributo '' non vuoto.

Un tag, ad esempio `cref`, non ha un valore.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4636.

```
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