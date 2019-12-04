---
title: Errore del compilatore C2723
ms.date: 11/04/2016
f1_keywords:
- C2723
helpviewer_keywords:
- C2723
ms.assetid: 86925601-2297-4cfd-94e2-2caf27c474c4
ms.openlocfilehash: f9b169f856dba7a76e5f67e1980c4ca47ba912de
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74737452"
---
# <a name="compiler-error-c2723"></a>Errore del compilatore C2723

'function': identificatore 'specifier' non valido nella definizione di funzione

L'identificatore non può essere visualizzato con una definizione di funzione di fuori di una dichiarazione di classe. L'identificatore `virtual` può essere specificato solo in una dichiarazione di funzione membro all'interno di una dichiarazione di classe.

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
