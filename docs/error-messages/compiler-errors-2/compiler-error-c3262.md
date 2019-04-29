---
title: Errore del compilatore C3262
ms.date: 11/04/2016
f1_keywords:
- C3262
helpviewer_keywords:
- C3262
ms.assetid: 3e74b9aa-de3c-4492-9331-ee73012b958b
ms.openlocfilehash: 1b6f9c1cd8ed983ba0784a49b8972325047c8d9b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62366173"
---
# <a name="compiler-error-c3262"></a>Errore del compilatore C3262

indicizzazione matrice non valida: specificate '#' dimensioni per ''array type' a '#' dimensioni

Gli indici di una matrice sono stati specificati in modo non corretto. È possibile che il numero di indici non corrisponda al numero di dimensioni della matrice.

L'esempio seguente genera l'errore C3262:

```
// C3262.cpp
// compile with: /clr
#using <mscorlib.dll>
using namespace System;

#define ARRAY_SIZE 2

ref class MyClass {
public:
   int m_i;
};

// returns a multidimensional managed array of a reference type
array<MyClass^, 2>^ Test0() {
   int i, j;
   array< MyClass^, 2 >^ local = new array< MyClass^, 2 >
      (ARRAY_SIZE, ARRAY_SIZE);

   for (i = 0 ; i < ARRAY_SIZE ; i++)
      for (j = 0 ; j < ARRAY_SIZE ; j++) {
         local[i][j] = new MyClass;   // C3262
         // try the following line instead
         // local[i,j] = new MyClass;
         local[i,j] -> m_i = i;
      }

      return local;
}

int main() {
   int i, j;

   array< MyClass^, 2 >^ MyClass0;
   MyClass0 = Test0();
}
```
