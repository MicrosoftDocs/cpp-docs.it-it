---
description: 'Altre informazioni su: errore del compilatore C3797'
title: Errore del compilatore C3797
ms.date: 11/04/2016
f1_keywords:
- C3797
helpviewer_keywords:
- C3797
ms.assetid: ab27ff34-8c1d-4297-b004-9e39bd3a4f25
ms.openlocfilehash: 581dae7ba2649d72fc2670b99c9255b3ee9f7838
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97244862"
---
# <a name="compiler-error-c3797"></a>Errore del compilatore C3797

' override ': la dichiarazione di evento non può avere un identificatore di override (deve essere posizionata in metodi Add/Remove/Raise di evento)

Non è possibile eseguire l'override di un evento Trivial (un evento senza metodi di funzione di accesso definiti in modo esplicito) con un altro evento Trivial. L'evento di override deve definire il comportamento con le funzioni di accesso.

Per ulteriori informazioni, vedere [evento](../../extensions/event-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3797.

```cpp
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
