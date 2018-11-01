---
title: Errore del compilatore C2723
ms.date: 11/04/2016
f1_keywords:
- C2723
helpviewer_keywords:
- C2723
ms.assetid: 86925601-2297-4cfd-94e2-2caf27c474c4
ms.openlocfilehash: bc07a99f12ed0e447427990969e54f7f3d3d3b7f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50635387"
---
# <a name="compiler-error-c2723"></a>Errore del compilatore C2723

'function': identificatore 'specifier' non valido nella definizione di funzione

L'identificatore non può essere visualizzato con una definizione di funzione di fuori di una dichiarazione di classe. L'identificatore `virtual` può essere specificato solo in una dichiarazione di funzione membro all'interno di una dichiarazione di classe.

L'esempio seguente genera l'errore C2723 e mostra come risolverlo:

```
// C2723.cpp
struct X {
   virtual void f();
   virtual void g();
};

virtual void X::f() {}   // C2723

// try the following line instead
void X::g() {}
```