---
description: 'Altre informazioni su: errore del compilatore C3206'
title: Errore del compilatore C3206
ms.date: 11/04/2016
f1_keywords:
- C3206
helpviewer_keywords:
- C3206
ms.assetid: d62995b5-e349-4418-bbe8-8a5e776ca7b0
ms.openlocfilehash: ea4ded5daebe0f002a3d0363fba125c2c02f332b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97174013"
---
# <a name="compiler-error-c3206"></a>Errore del compilatore C3206

'function': argomento di tipo non valido per 'param', elenco di argomenti di tipo mancante per il tipo di classe 'typename'

La definizione di una funzione di modello prevede che accetti un argomento di tipo modello. Tuttavia è stato passato un argomento di modello template.

L'esempio seguente genera l'errore C3206:

```cpp
// C3206.cpp
template <class T>
void f() {}

template <class T>
struct S {};

void f1() {
   f<S>();   // C3206
   // try the following line instead
   // f<S<int> >();
}
```

Possibile soluzione:

```cpp
// C3206b.cpp
// compile with: /c
template <class T>
void f() {}

template <class T>
struct S {};

void f1() {
   f<S<int> >();
}
```

C3206 può verificarsi anche quando si usano i generics:

```cpp
// C3206c.cpp
// compile with: /clr
generic <class GT1>
void gf() {}

generic <class T>
value struct GS {};

int main() {
   gf<GS>();   // C3206
}
```

Possibile soluzione:

```cpp
// C3206d.cpp
// compile with: /clr
generic <class GT1>
void gf() {}

generic <class T>
value struct GS {};

int main() {
   gf<GS<int> >();
}
```

Un modello di classe non è consentito come argomento di tipo modello. L'esempio seguente genera l'esempio C3206:

```cpp
// C3206e.cpp
template <class T>
struct S {};

template <class T>
void func() {   // takes a type
   T<int> t;
}

int main() {
   func<S>();   // C3206 S is not a type.
}
```

Possibile soluzione:

```cpp
// C3206f.cpp
template <class T>
struct S {};

template <class T>
void func() {   // takes a type
   T t;
}

int main() {
   func<S<int> >();
}
```

Se è necessario un parametro di modello di modello, è necessario eseguire il wrapping della funzione in una classe modello che accetta un parametro di modello di modello:

```cpp
// C3206g.cpp
template <class T>
struct S {};

template<template<class> class TT>
struct X {
   static void func() {
      TT<int> t1;
      TT<char> t2;
   }
};

int main() {
   X<S>::func();
}
```
