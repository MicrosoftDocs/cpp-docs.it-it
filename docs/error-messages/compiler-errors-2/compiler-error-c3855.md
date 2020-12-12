---
description: 'Altre informazioni su: errore del compilatore C3855'
title: Errore del compilatore C3855
ms.date: 11/04/2016
f1_keywords:
- C3855
helpviewer_keywords:
- C3855
ms.assetid: ed90f8c0-4154-4243-b066-493913df5727
ms.openlocfilehash: eeb0dbda6f67d59470cd021ff37877d3a5201862
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97328142"
---
# <a name="compiler-error-c3855"></a>Errore del compilatore C3855

' Class ': il parametro di tipo ' param ' non è compatibile con la dichiarazione

Il compilatore ha trovato un modello non di tipo o parametri generici con nomi diversi. Questa situazione può verificarsi quando un parametro di modello specificato nella definizione di una specializzazione di modello non è compatibile con la relativa dichiarazione.

L'esempio seguente genera l'C3855:

```cpp
// C3855.cpp
template <int N>
struct C {
   void f();
};

template <char N>
void C<N>::f() {}   // C3855
```

Possibile soluzione:

```cpp
// C3855b.cpp
// compile with: /c
template <int N>
struct C {
   void f();
};

template <int N>
void C<N>::f() {}
```

C3855 può verificarsi anche quando si usano i generics:

```cpp
// C3855c.cpp
// compile with: /clr
generic <class T>
ref struct GC1 {
   generic <class U>
   ref struct GC2;
};

generic <class T>
generic <class U>
generic <class V>
ref struct GC1<T>::GC2 { };   // C3855
```

Possibile soluzione:

```cpp
// C3855d.cpp
// compile with: /clr /c
generic <class T>
ref struct GC1 {
   generic <class U>
   ref struct GC2;
};

generic <class T>
generic <class U>
ref struct GC1<T>::GC2 { };
```
