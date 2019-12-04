---
title: Errore del compilatore C2073
ms.date: 11/04/2016
f1_keywords:
- C2073
helpviewer_keywords:
- C2073
ms.assetid: 57908234-be7a-4ce9-b0a7-8b1ad621865e
ms.openlocfilehash: 545b2b24d3bfe5a36c5554dfa898d17b05067c3d
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74757735"
---
# <a name="compiler-error-c2073"></a>Errore del compilatore C2073

' Identifier ': gli elementi della matrice parzialmente inizializzata devono avere un costruttore predefinito

Sono stati specificati troppi inizializzatori per una matrice di tipi o costanti definiti dall'utente. Se un inizializzatore esplicito e il relativo costruttore corrispondente non vengono specificati per un membro di matrice, è necessario fornire un costruttore predefinito.

L'esempio seguente genera l'C2073:

```cpp
// C2073.cpp
class A {
public:
   A( int );   // constructor for ints only
};
A a[3] = { A(1), A(2) };   // C2073, no default constructor
```

```cpp
// C2073b.cpp
// compile with: /c
class B {
public:
   B();   // default constructor declared
   B( int );
};
B b[3] = { B(1), B(2) };   // OK
```
