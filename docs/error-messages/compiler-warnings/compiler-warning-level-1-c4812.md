---
title: Avviso del compilatore (livello 1) C4812
ms.date: 11/04/2016
f1_keywords:
- C4812
helpviewer_keywords:
- C4812
ms.assetid: a7f5721f-2019-44de-ad62-ed30bac8b1f3
ms.openlocfilehash: 6ba32bf3cad905d686eae78fbfbc198e911e91c8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50676772"
---
# <a name="compiler-warning-level-1-c4812"></a>Avviso del compilatore (livello 1) C4812

tipo di dichiarazione obsoleto: usare 'new_syntax'

Nella versione corrente di Visual C++, la specializzazione esplicita del costruttore è ancora supportata, ma potrebbe non essere più supportata in una versione futura.

L'esempio seguente genera l'errore C4812:

```
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