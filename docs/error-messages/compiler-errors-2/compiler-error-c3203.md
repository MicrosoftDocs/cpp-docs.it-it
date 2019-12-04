---
title: Errore del compilatore C3203
ms.date: 11/04/2016
f1_keywords:
- C3203
helpviewer_keywords:
- C3203
ms.assetid: 6356770e-22c1-434c-91fe-f60b0aa23b91
ms.openlocfilehash: 1d0ed5ec717efecb9fbea4a9451836c0471522b6
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74738713"
---
# <a name="compiler-error-c3203"></a>Errore del compilatore C3203

'type' : impossibile utilizzare il modello di classe o il generico non specializzato come argomento di modello o generico per il parametro di modello o generico 'param'. Previsto un tipo reale

È stato passato un argomento non valido a un modello di classe o a un generico. Il modello di classe o il generico prevede un tipo come parametro.

Questo errore può essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual Studio 2005: non è possibile usare un modello di classe non specializzato come argomento di modello in un elenco di classi di base. Per risolvere l'errore C3203, aggiungere in modo esplicito uno o più parametri di tipo modello al nome della classe modello quando la si usa come parametro di modello in un elenco di classi di base.

```cpp
// C3203.cpp
template< typename T >
struct X {
   void f(X) {}
};

template< typename T >
struct Y : public X<Y> {   // C3203
// try the following line instead
// struct Y : public X<Y<T> > {
   void f(Y) {}
};

int main() {
   Y<int> y;
}
```

L'esempio seguente genera l'errore C3203 e mostra come risolverlo:

```cpp
// C3203_b.cpp
// compile with: /c
template <class T>
struct S1 {};

template <class T>
class C1 {};

typedef C1<S1> MyC1;   // C3203

// OK
template <template <class> class T>
class C2 {};

typedef C2<S1> MyC1;

template <class T>
class C3 {};

typedef C3<S1<int> > MyC12;
```

C3203 può verificarsi anche quando si usano i generics:

```cpp
// C3203_c.cpp
// compile with: /clr /c
generic <class T>
value struct GS1 {};

generic <class T>
value struct GC1 {};

typedef GC1<GS1> MyGC1;   // C3203
typedef GC1<GS1<int> > MyGC2;   // OK
```
