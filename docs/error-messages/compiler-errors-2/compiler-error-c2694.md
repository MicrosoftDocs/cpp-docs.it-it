---
description: 'Altre informazioni su: errore del compilatore C2694'
title: Errore del compilatore C2694
ms.date: 11/04/2016
f1_keywords:
- C2694
helpviewer_keywords:
- C2694
ms.assetid: 8dc2cec2-67ae-4e16-8c0c-374425aca8bc
ms.openlocfilehash: 4da5362a9c20a2bae10d2a201650f4312d455164
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97326657"
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
