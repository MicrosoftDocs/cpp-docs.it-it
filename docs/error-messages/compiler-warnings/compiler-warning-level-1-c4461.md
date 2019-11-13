---
title: Avviso del compilatore (livello 1) C4461
ms.date: 11/04/2016
f1_keywords:
- C4461
helpviewer_keywords:
- C4461
ms.assetid: 104ffecc-3dd4-4cb1-89a8-81154fbe46d9
ms.openlocfilehash: 195e5532b6555210077e43ad3086ee3106f3e757
ms.sourcegitcommit: e5192a25c084eda9eabfa37626f3274507e026b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2019
ms.locfileid: "73966017"
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