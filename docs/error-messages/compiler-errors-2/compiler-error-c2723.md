---
title: Errore del compilatore C2723
ms.date: 11/04/2016
f1_keywords:
- C2723
helpviewer_keywords:
- C2723
ms.assetid: 86925601-2297-4cfd-94e2-2caf27c474c4
ms.openlocfilehash: f723fcc0a3d9626f01f2059a3d9363801221bca0
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87216050"
---
# <a name="compiler-error-c2723"></a>Errore del compilatore C2723

'function': identificatore 'specifier' non valido nella definizione di funzione

L'identificatore non può essere visualizzato con una definizione di funzione di fuori di una dichiarazione di classe. L' **`virtual`** identificatore può essere specificato solo in una dichiarazione di funzione membro all'interno di una dichiarazione di classe.

L'esempio seguente genera l'errore C2723 e mostra come risolverlo:

```cpp
// C2723.cpp
struct X {
   virtual void f();
   virtual void g();
};

virtual void X::f() {}   // C2723

// try the following line instead
void X::g() {}
```
