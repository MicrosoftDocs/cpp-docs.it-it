---
title: Avviso del compilatore (livello 1) C4461
ms.date: 11/04/2016
f1_keywords:
- C4461
helpviewer_keywords:
- C4461
ms.assetid: 104ffecc-3dd4-4cb1-89a8-81154fbe46d9
ms.openlocfilehash: 5cc9b08f0f25e9c92b4185f060ab123684c5d9e2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62408264"
---
# <a name="compiler-warning-level-1-c4461"></a>Avviso del compilatore (livello 1) C4461

'type': questa classe ha un finalizzatore' finalizer', ma nessun distruttore 'dtor'

La presenza di un finalizzatore in un tipo implica le risorse da eliminare. A meno che un finalizzatore viene richiamato in modo esplicito da un distruttore del tipo, common language runtime determina quando eseguire il finalizzatore, dopo che l'oggetto esce dall'ambito.

Se si definisce un distruttore del tipo e chiama in modo esplicito il finalizzatore dal distruttore, è possibile eseguire in modo deterministico il finalizzatore.

Per altre informazioni, vedere [distruttori e finalizzatori](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4461.

```
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