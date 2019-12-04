---
title: Errore del compilatore C2910
ms.date: 11/04/2016
f1_keywords:
- C2910
helpviewer_keywords:
- C2910
ms.assetid: 09c50e6a-e099-42f6-8ed6-d80e292a7a36
ms.openlocfilehash: 0061a7171dd08440ec5d8c8b8cadb77303ff8f41
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761115"
---
# <a name="compiler-error-c2910"></a>Errore del compilatore C2910

' Function ': non può essere specializzato in modo esplicito

Il compilatore ha rilevato un tentativo di specializzare in modo esplicito una funzione due volte.

L'esempio seguente genera l'C2910:

```cpp
// C2910.cpp
// compile with: /c
template <class T>
struct S;

template <> struct S<int> { void f() {} };
template <> void S<int>::f() {}   // C2910 delete this specialization
```

C2910 può essere generato anche se si tenta di specializzare in modo esplicito un membro non modello. Ovvero, è possibile specializzare solo in modo esplicito un modello di funzione.

L'esempio seguente genera l'C2910:

```cpp
// C2910b.cpp
// compile with: /c
template <class T> struct A {
   A(T* p);
};

template <> struct A<void> {
   A(void* p);
};

template <class T>
inline A<T>::A(T* p) {}

template <> A<void>::A(void* p){}   // C2910
// try the following line instead
// A<void>::A(void* p){}
```

Questo errore viene generato anche in seguito alle operazioni di conformità del compilatore eseguite in Visual Studio .NET 2003:.

Per il codice sarà valido nelle versioni Visual Studio .NET 2003 e Visual Studio .NET di Visual C++studio, rimuovere `template <>`.

L'esempio seguente genera l'C2910:

```cpp
// C2910c.cpp
// compile with: /c
template <class T> class A {
   void f();
};

template <> class A<int> {
   void f();
};

template <> void A<int>::f() {}   // C2910
// try the following line instead
// void A<int>::f(){}   // OK
```
