---
title: Errore del compilatore C3797
ms.date: 11/04/2016
f1_keywords:
- C3797
helpviewer_keywords:
- C3797
ms.assetid: ab27ff34-8c1d-4297-b004-9e39bd3a4f25
ms.openlocfilehash: 2c8570edf16b9c002f9506b1b179a2ab36f7f26e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50557533"
---
# <a name="compiler-error-c3797"></a>Errore del compilatore C3797

'override': dichiarazione di evento non può avere l'identificatore di override (da posizionare invece con i metodi add/remove/raise evento)

È possibile eseguire l'override di un evento semplice (un evento senza metodi di accesso definiti in modo esplicito) con un altro evento semplice. L'evento esegue l'override deve definire il comportamento con funzioni di accesso.

Per altre informazioni, vedere [evento](../../windows/event-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3797.

```
// C3797.cpp
// compile with: /clr /c
delegate void MyDel();

ref class Class1 {
public:
   virtual event MyDel ^ E;
};

ref class Class2 : public Class1 {
public:
   virtual event MyDel ^ E override;   // C3797
};

// OK
ref class Class3 : public Class1 {
public:
   virtual event MyDel ^ E {
      void add(MyDel ^ d) override {}
      void remove(MyDel ^ d) override {}
   }
};
```