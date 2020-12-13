---
description: 'Altre informazioni su: errore del compilatore C2391'
title: Errore del compilatore C2391
ms.date: 11/04/2016
f1_keywords:
- C2391
helpviewer_keywords:
- C2391
ms.assetid: 63a9c6b9-03cc-4517-885c-bdcd048643b3
ms.openlocfilehash: 3161cd6ade15817142cc24f38c61fd3e09eb8857
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337582"
---
# <a name="compiler-error-c2391"></a>Errore del compilatore C2391

' Identifier ': non è possibile usare ' Friend ' durante la definizione del tipo

La **`friend`** dichiarazione include una dichiarazione di classe completa. Una **`friend`** dichiarazione può specificare una funzione membro o un identificatore di tipo elaborato, ma non una dichiarazione di classe completa.

L'esempio seguente genera l'errore C2326:

```cpp
// C2391.cpp
// compile with: /c
class D {
   void func( int );
};

class A {
   friend class B { int i; };   // C2391

   // OK
   friend class C;
   friend void D::func(int);
};
```
