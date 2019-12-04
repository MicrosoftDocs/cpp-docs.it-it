---
title: Errore del compilatore C2694
ms.date: 11/04/2016
f1_keywords:
- C2694
helpviewer_keywords:
- C2694
ms.assetid: 8dc2cec2-67ae-4e16-8c0c-374425aca8bc
ms.openlocfilehash: ca378c3e0ce88b454cb89fc08470a277a7be6f47
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755226"
---
# <a name="compiler-error-c2694"></a>Errore del compilatore C2694

' override ': la funzione virtuale che esegue l'override presenta una specifica di eccezione meno restrittiva della funzione membro virtuale ' base ' della classe di base

Una funzione virtuale è stata sottoposta a override, ma in [/za](../../build/reference/za-ze-disable-language-extensions.md)la funzione che esegue l'override presenta una [specifica di eccezione](../../cpp/exception-specifications-throw-cpp.md)meno restrittiva.

L'esempio seguente genera l'C2694:

```cpp
// C2694.cpp
// compile with: /Za /c
class MyBase {
public:
   virtual void f(void) throw(int) {
   }
};

class Derived : public MyBase {
public:
   void f(void) throw(...) {}   // C2694
   void f2(void) throw(int) {}   // OK
};
```
