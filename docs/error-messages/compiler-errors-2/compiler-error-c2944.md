---
description: 'Altre informazioni su: errore del compilatore C2944'
title: Errore del compilatore C2944
ms.date: 11/04/2016
f1_keywords:
- C2944
helpviewer_keywords:
- C2944
ms.assetid: f209e668-e72f-442a-a438-8c4ff43a404a
ms.openlocfilehash: a25b7da5f2a3a4320b4e85dfc3bd71626795a4d0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97249555"
---
# <a name="compiler-error-c2944"></a>Errore del compilatore C2944

'class': id-classe-tipo ridefinito come argomento valore di un modello

Non è possibile usare una classe generica o una classe modello al posto di un simbolo come argomento valore di un modello.

L'esempio seguente genera l'errore C2944:

```cpp
// C2944.cpp
// compile with: /c
template<class T>
class TC { };

template <int TC<int> > struct X1 { };   // C2944

template <class T > struct X2 {};
```

L'errore C2944 può verificarsi anche quando si usano i generics:

```cpp
// C2944b.cpp
// compile with: /clr /c
generic<class T>
ref class GC {};

template <int GC<int> > struct X2 { };   // C2944
template <class T> struct X3 {};   // OK
```
