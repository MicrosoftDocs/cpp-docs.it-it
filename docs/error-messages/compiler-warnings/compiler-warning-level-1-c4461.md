---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4461'
title: Avviso del compilatore (livello 1) C4461
ms.date: 11/04/2016
f1_keywords:
- C4461
helpviewer_keywords:
- C4461
ms.assetid: 104ffecc-3dd4-4cb1-89a8-81154fbe46d9
ms.openlocfilehash: 2efb92ca26f9e6cf76f7777c8a50ac657f73554d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97311006"
---
# <a name="compiler-warning-level-1-c4461"></a>Avviso del compilatore (livello 1) C4461

' type ': questa classe ha un finalizzatore ' Finalizer ' ma nessun distruttore ' dtor '

La presenza di un finalizzatore in un tipo implica le risorse da eliminare. A meno che un finalizzatore non venga chiamato in modo esplicito dal distruttore del tipo, il Common Language Runtime determina quando eseguire il finalizzatore, dopo che l'oggetto esce dall'ambito.

Se si definisce un distruttore nel tipo e si chiama in modo esplicito il finalizzatore dal distruttore, è possibile eseguire il finalizzatore in modo deterministico.

Per ulteriori informazioni, vedere [distruttori e finalizzatori](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4461.

```cpp
// C4461.cpp
// compile with: /W1 /clr /c
ref class A {
protected:
   !A() {}   // C4461
};

// OK
ref struct B {
   ~B() {
      B::!B();
   }

   !B() {}
};
```
