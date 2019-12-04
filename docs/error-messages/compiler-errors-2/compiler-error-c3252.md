---
title: Errore del compilatore C3252
ms.date: 11/04/2016
f1_keywords:
- C3252
helpviewer_keywords:
- C3252
ms.assetid: aa9ad096-e9ac-41c7-8ad9-b966751c7c75
ms.openlocfilehash: fbfe3ffaca66cad4922b5771ee8c9003acba7571
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74754329"
---
# <a name="compiler-error-c3252"></a>Errore del compilatore C3252

'method': in un tipo gestito o WinRT non è possibile ridurre l'accessibilità di un metodo virtuale

Una classe che implementa un metodo virtuale da una classe di base o qualsiasi metodo da un'interfaccia non può ridurre l'accesso di tale metodo.

Si noti che tutti i metodi in un'interfaccia sono pubblici.

L'esempio seguente genera l'errore C3252 e mostra come risolverlo:

```cpp
// C3252.cpp
// compile with: /clr /c
ref class A {
public:
   virtual void f1() {}
};

ref class B : public A {
// To fix, uncomment the following line:
// public:
   virtual void f1() override sealed {}   // C3252, make this method public
};
```
