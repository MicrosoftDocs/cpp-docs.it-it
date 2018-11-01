---
title: Errore del compilatore C2477
ms.date: 11/04/2016
f1_keywords:
- C2477
helpviewer_keywords:
- C2477
ms.assetid: 60bc324b-6605-4833-8099-a291efc712e7
ms.openlocfilehash: 27db194cb308d711a259127b628c60b4d10b94ff
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50458162"
---
# <a name="compiler-error-c2477"></a>Errore del compilatore C2477

'member': membro dati statici non possa essere inizializzato tramite classi derivate

Un membro dati statici di una classe modello è stato inizializzato in modo non corretto. Si tratta di una modifica importante riguardo le versioni del compilatore Visual C++ precedenti a Visual Studio .NET 2003, per la conformità allo standard ISO C++.

L'esempio seguente genera l'errore C2477:

```
// C2477.cpp
// compile with: /Za /c
template <class T>
struct S {
   static int n;
};

struct X {};
struct A: S<X> {};

int A::n = 0;   // C2477

template<>
int S<X>::n = 0;
```