---
description: 'Altre informazioni su: errore del compilatore C2911'
title: Errore del compilatore C2911
ms.date: 11/04/2016
f1_keywords:
- C2911
helpviewer_keywords:
- C2911
ms.assetid: 83c7c01a-ab6a-4179-9fb0-289a9ec8d44e
ms.openlocfilehash: c3890a6017e96b4b5f2f9dc7b5711fd98f29b947
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97270538"
---
# <a name="compiler-error-c2911"></a>Errore del compilatore C2911

'member': impossibile da dichiarare o definire nell'ambito corrente

All'interno di uno spazio dei nomi, di una classe o di una funzione è possibile definire solo un membro dello stesso spazio dei nomi, della stessa classe o della stessa funzione oppure un membro che è racchiuso dallo stesso spazio dei nomi, dalla stessa classe o dalla stessa funzione.

L'esempio seguente genera l'errore C2911:

```cpp
// C2911.cpp
struct A;

namespace M {
   struct D;
}

namespace N {
   struct C;

   namespace O {
      struct B;
   }

   // in N
   struct ::A {};   // C2911  A is member of global NS
   struct O::B{};   // OK B is in O, O is inside of N
   struct C {};     // OK C is member of N
   struct M::D {};  // C2911 D is member of M, M not enclosed by N
}
```
