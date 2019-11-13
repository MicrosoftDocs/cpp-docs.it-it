---
title: Avviso del compilatore (livello 1) C4812
ms.date: 11/04/2016
f1_keywords:
- C4812
helpviewer_keywords:
- C4812
ms.assetid: a7f5721f-2019-44de-ad62-ed30bac8b1f3
ms.openlocfilehash: 420c44359b9e92cf8e77070bd3a270f992722d48
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74051279"
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