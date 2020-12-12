---
description: 'Altre informazioni su: errore del compilatore C2990'
title: Errore del compilatore C2990
ms.date: 11/04/2016
f1_keywords:
- C2990
helpviewer_keywords:
- C2990
ms.assetid: 674e9f6a-6743-4af0-a7ed-cbe11103a2f8
ms.openlocfilehash: 80aa15940420e9d3e452f2c3a93eefe94fd1561b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97328248"
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

C2990 può anche verificarsi a causa di una modifica sostanziale del compilatore Microsoft C++ per Visual Studio 2005; il compilatore richiede ora che più dichiarazioni per lo stesso tipo siano identiche rispetto alla specifica del modello.

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
