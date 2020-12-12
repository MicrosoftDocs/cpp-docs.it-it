---
description: 'Altre informazioni su: errore del compilatore C2602'
title: Errore del compilatore C2602
ms.date: 11/04/2016
f1_keywords:
- C2602
helpviewer_keywords:
- C2602
ms.assetid: 6c07a40e-537e-4954-b5c5-1e0e58fe1952
ms.openlocfilehash: 2922ee0d35dd5820e1df23d9bc812c0650501b35
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97312021"
---
# <a name="compiler-error-c2602"></a>Errore del compilatore C2602

' Class:: Identifier ' non è un membro di una classe di base di ' Class '

`Identifier` non è possibile accedervi perché non è un membro ereditato da una classe base.

L'esempio seguente genera l'C2602:

```cpp
// C2602.cpp
// compile with: /c
struct X {
   int x;
};
struct A {
   int a;
};
struct B : public A {
   X::x;   // C2602 B is not derived from X
   A::a;   // OK
};
```
