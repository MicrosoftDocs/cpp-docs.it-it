---
title: Errore del compilatore C2553
ms.date: 11/04/2016
f1_keywords:
- C2553
helpviewer_keywords:
- C2553
ms.assetid: 64bc1e9a-627f-4ce9-b7bc-dc911bdb9180
ms.openlocfilehash: 11cb2b83d958f0c59d05034a716a022f00b326ec
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50658679"
---
# <a name="compiler-error-c2553"></a>Errore del compilatore C2553

'funzione_base': funzione virtual in override tipo restituito differisce da 'funzione_override'

Una funzione in una classe derivata ha tentato di eseguire l'override di una funzione virtuale in una classe di base, ma la funzione di classe derivata non includono lo stesso tipo restituito della funzione di classe di base.  Una firma della funzione di override deve corrispondere alla firma della funzione da sottoporre a override.

L'esempio seguente genera l'errore C2553:

```
// C2553.cpp
// compile with: /clr /c
ref struct C {
   virtual void f();
};

ref struct D : C {
   virtual int f() override ;   // C2553

   // try the following line instead
   // virtual void f() override;
};
```