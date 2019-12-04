---
title: Errore del compilatore C2761
ms.date: 11/04/2016
f1_keywords:
- C2761
helpviewer_keywords:
- C2761
ms.assetid: 38c79a05-b56d-485b-820f-95e8c0cb926f
ms.openlocfilehash: fbe2b3089d387d356073febf2b27bbb44b6be7e3
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74759503"
---
# <a name="compiler-error-c2761"></a>Errore del compilatore C2761

' Function ': la ridichiarazione della funzione membro non è consentita

Non è possibile dichiarare nuovamente una funzione membro. È possibile definirlo, ma non ridichiararlo.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2761.

```cpp
// C2761.cpp
class a {
   int t;
   void test();
};

void a::a;     // C2761
void a::test;  // C2761
```

## <a name="example"></a>Esempio

Non è possibile definire i membri non statici di una classe o struttura.  L'esempio seguente genera l'C2761.

```cpp
// C2761_b.cpp
// compile with: /c
struct C {
   int s;
   static int t;
};

int C::s;   // C2761
int C::t;   // OK
```
