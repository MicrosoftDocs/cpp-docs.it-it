---
title: Errore del compilatore C2036
ms.date: 11/04/2016
f1_keywords:
- C2036
helpviewer_keywords:
- C2036
ms.assetid: 895821a9-65d1-44b5-bde1-dae827f3e486
ms.openlocfilehash: 47e691a045b3d1bd79226bdda8d96d24e2a80d80
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62400500"
---
# <a name="compiler-error-c2036"></a>Errore del compilatore C2036

'identifier': dimensione sconosciuta

Un'operazione su `identifier` richiede le dimensioni dell'oggetto dati, che non può essere determinato.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2036.

```
// C2036.c
// a C program
struct A* pA;
struct B { int i; } *pB;
int main() {
   pA++;   // C2036, size of A not known
   ((char*)pA)++;   // OK

   pB++;   // OK
}
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2036.

```
// C2036_2.cpp
// a C++ program
struct A* pA;
int main() {
   pA++;   // C2036, size of A not known
   ((char*&)pA)++;   // OK, if sizeof(A) == sizeof(char)
}
```