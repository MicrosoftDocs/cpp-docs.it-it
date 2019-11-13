---
title: Avviso del compilatore (livello 1) C4584
ms.date: 11/04/2016
f1_keywords:
- C4584
helpviewer_keywords:
- C4584
ms.assetid: ad86582f-cb8c-4d21-8c4c-a6c800059e25
ms.openlocfilehash: 831789f5295fcf91e83de3bd0bba12c8429e9fa3
ms.sourcegitcommit: e5192a25c084eda9eabfa37626f3274507e026b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2019
ms.locfileid: "73966241"
---
# <a name="compiler-warning-level-1-c4584"></a>Avviso del compilatore (livello 1) C4584

' Class1': la classe base ' Class2' è già una classe di base di ' Class3'

La classe definita eredita da due classi, una delle quali eredita dall'altra. Esempio:

```cpp
// C4584.cpp
// compile with: /W1 /LD
class A {
};

class B : public A {
};

class C : public A, public B { // C4584
};
```

In questo caso, viene generato un avviso sulla classe C perché eredita sia dalla classe A che dalla classe B, che eredita anche dalla classe A. Questo avviso funge da promemoria che è necessario specificare in modo completo l'utilizzo dei membri di queste classi di base o che verrà generato un errore del compilatore a causa dell'ambiguità del membro della classe a cui si fa riferimento.