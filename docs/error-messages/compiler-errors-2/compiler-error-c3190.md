---
title: Errore del compilatore C3190
ms.date: 11/04/2016
f1_keywords:
- C3190
helpviewer_keywords:
- C3190
ms.assetid: 7c701afa-85a7-4f7a-8881-0662436ac244
ms.openlocfilehash: bbdd54ad0e87557b62d42c8ef5651122d9ebc205
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761608"
---
# <a name="compiler-error-c3190"></a>Errore del compilatore C3190

' creazione di istanze ' con gli argomenti di modello forniti non è la creazione di un'istanza esplicita di alcuna funzione membro di ' type '

Il compilatore ha rilevato un tentativo di creare un'istanza di funzione esplicita; Tuttavia, gli argomenti di tipo specificati non corrispondono ad alcuna delle funzioni possibili.

L'esempio seguente genera l'C3190:

```cpp
// C3190.cpp
// compile with: /LD
template<class T>
struct A {
   A(int x = 0) {
   }
   A(int x, int y) {
   }
};

template A<float>::A();   // C3190
// try the following line instead
// template A<int>::A(int);

struct Y {
   template<class T> void f(T);
};

template<class T> void Y::f(T) { }

template void Y::f(int,int);   // C3190

template<class OT> class X {
   template<class T> void f2(T,OT);
};

template<class OT> template<class T> void X<OT>::f2(T,OT) {}

template void X<float>::f2<int>(int,char);   // C3190
// try one of the following lines instead
// template void X<char>::f2(int, char);
// template void X<char>::f2<int>(int,char);
// template void X<char>::f2<>(int,char);
```
