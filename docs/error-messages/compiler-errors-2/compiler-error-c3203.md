---
title: Errore del compilatore C3203
ms.date: 11/04/2016
f1_keywords:
- C3203
helpviewer_keywords:
- C3203
ms.assetid: 6356770e-22c1-434c-91fe-f60b0aa23b91
ms.openlocfilehash: c55160c855a6188a616f957acee43e409b751b62
ms.sourcegitcommit: 7d64c5f226f925642a25e07498567df8bebb00d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2019
ms.locfileid: "65447805"
---
# <a name="compiler-error-c3203"></a>Errore del compilatore C3203

'type' : impossibile utilizzare il modello di classe o il generico non specializzato come argomento di modello o generico per il parametro di modello o generico 'param'. Previsto un tipo reale

È stato passato un argomento non valido a un modello di classe o a un generico. Il modello di classe o il generico prevede un tipo come parametro.

Questo errore può verificarsi in seguito a operazioni di conformità del compilatore eseguite per Visual Studio 2005: un modello di classe non specializzato non può essere utilizzato come argomento di modello in un elenco delle classi base. Per risolvere l'errore C3203, aggiungere in modo esplicito uno o più parametri di tipo modello al nome della classe modello quando la si usa come parametro di modello in un elenco di classi di base.

```
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

```
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

```
// C3203_c.cpp
// compile with: /clr /c
generic <class T>
value struct GS1 {};

generic <class T>
value struct GC1 {};

typedef GC1<GS1> MyGC1;   // C3203
typedef GC1<GS1<int> > MyGC2;   // OK
```