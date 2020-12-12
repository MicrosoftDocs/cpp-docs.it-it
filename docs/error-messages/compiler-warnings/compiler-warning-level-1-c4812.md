---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4812'
title: Avviso del compilatore (livello 1) C4812
ms.date: 11/04/2016
f1_keywords:
- C4812
helpviewer_keywords:
- C4812
ms.assetid: a7f5721f-2019-44de-ad62-ed30bac8b1f3
ms.openlocfilehash: 3476086d067b98a62ec9d96647a77c109c9a263b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97332196"
---
# <a name="compiler-warning-level-1-c4812"></a>Avviso del compilatore (livello 1) C4812

tipo di dichiarazione obsoleto: usare 'new_syntax'

Nella versione corrente di Visual C++, la specializzazione esplicita del costruttore è ancora supportata, ma potrebbe non essere più supportata in una versione futura.

L'esempio seguente genera l'errore C4812:

```cpp
// C4812.cpp
// compile with: /W1 /c
template <class T>
class MyClass;

template<class T>
class MyClass<T*> {
   MyClass();
};

template<class T>
MyClass<T*>::MyClass<T*>() {}   // C4812
// try the following line instead
// MyClass<T*>::MyClass() {}
```
