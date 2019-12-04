---
title: Errore del compilatore C2990
ms.date: 11/04/2016
f1_keywords:
- C2990
helpviewer_keywords:
- C2990
ms.assetid: 674e9f6a-6743-4af0-a7ed-cbe11103a2f8
ms.openlocfilehash: 1c58c2d5da0049ec670e11c930b397caec3cbbee
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74751521"
---
# <a name="compiler-error-c2990"></a>Errore del compilatore C2990

' Class ': tipo non di classe come già dichiarato come tipo di classe

La classe non generica o modello ridefinisce una classe generica o modello. Verificare la presenza di conflitti nei file di intestazione.

L'esempio seguente genera l'C2990:

```cpp
// C2990.cpp
// compile with: /c
template <class T>
class C{};
class C{};   // C2990
```

C2990 può verificarsi anche quando si usano i generics:

```cpp
// C2990b.cpp
// compile with: /clr /c
generic <class T>
ref struct GC;

ref struct GC {};   // C2990
```

C2990 può anche verificarsi a causa di una modifica sostanziale del C++ compilatore Microsoft per Visual Studio 2005; il compilatore richiede ora che più dichiarazioni per lo stesso tipo siano identiche rispetto alla specifica del modello.

L'esempio seguente genera l'C2990:

```cpp
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
