---
title: Errore del compilatore C2990
ms.date: 11/04/2016
f1_keywords:
- C2990
helpviewer_keywords:
- C2990
ms.assetid: 674e9f6a-6743-4af0-a7ed-cbe11103a2f8
ms.openlocfilehash: f7327b7d2b0cc9fa4b617a9a6033116c43db6258
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62366329"
---
# <a name="compiler-error-c2990"></a>Errore del compilatore C2990

'class': tipo non classe già dichiarato come tipo di classe

La classe modello o non generico consente di ridefinire una classe generica o modello. Controllare i file di intestazione per i conflitti.

L'esempio seguente genera l'errore C2990:

```
// C2990.cpp
// compile with: /c
template <class T>
class C{};
class C{};   // C2990
```

C2990 può verificarsi anche quando si usano i generics:

```
// C2990b.cpp
// compile with: /clr /c
generic <class T>
ref struct GC;

ref struct GC {};   // C2990
```

C2990 può inoltre verificarsi a causa di una modifica di rilievo nel compilatore Visual C++ per Visual C++ 2005. a questo punto, il compilatore richiede che siano identici rispetto alla specifica del modello più dichiarazioni per lo stesso tipo.

L'esempio seguente genera l'errore C2990:

```
// C2990c.cpp
// compile with: /c
template<class T>
class A;

template<class T>
struct A2 {
   friend class A;   // C2990
};

// OK
template<class T>
struct B {
   template<class T>
   friend class A;
};
```