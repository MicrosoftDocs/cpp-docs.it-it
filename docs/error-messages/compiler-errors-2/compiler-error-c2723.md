---
description: 'Altre informazioni su: errore del compilatore C2723'
title: Errore del compilatore C2723
ms.date: 11/04/2016
f1_keywords:
- C2723
helpviewer_keywords:
- C2723
ms.assetid: 86925601-2297-4cfd-94e2-2caf27c474c4
ms.openlocfilehash: ab6eacd4279f0fd7b1c44b86b72cbe62ee51020e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97155514"
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
