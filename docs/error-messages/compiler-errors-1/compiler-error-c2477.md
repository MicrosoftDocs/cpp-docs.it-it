---
title: Errore del compilatore C2477
ms.date: 11/04/2016
f1_keywords:
- C2477
helpviewer_keywords:
- C2477
ms.assetid: 60bc324b-6605-4833-8099-a291efc712e7
ms.openlocfilehash: aa276ea839f11574609b183d78b46e08581a1b51
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74743653"
---
# <a name="compiler-error-c2477"></a>Errore del compilatore C2477

' member ': Impossibile inizializzare il membro dati statici tramite la classe derivata

Un membro dati statici di una classe modello è stato inizializzato in modo errato. Si tratta di una modifica di rilievo con le versioni C++ del compilatore Microsoft precedenti a Visual Studio .NET 2003, in modo da essere conformi allo standard ISO C++ .

L'esempio seguente genera l'C2477:

```cpp
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
