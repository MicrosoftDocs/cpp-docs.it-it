---
title: Avviso del compilatore (livello 1) C4526
ms.date: 11/04/2016
f1_keywords:
- C4526
helpviewer_keywords:
- C4526
ms.assetid: 490f8916-5fdc-4cad-b412-76c3382a5976
ms.openlocfilehash: 60ac01d6a118f37a22b39ab41fa60252866f3360
ms.sourcegitcommit: e5192a25c084eda9eabfa37626f3274507e026b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2019
ms.locfileid: "73966275"
---
# <a name="compiler-warning-level-1-c4526"></a>Avviso del compilatore (livello 1) C4526

' Function ': la funzione membro statica non può eseguire l'override della funzione virtuale ' function'override virtuale ignorata. la funzione virtuale sarà nascosta

La funzione membro statica soddisfa i criteri per eseguire l'override della funzione virtuale, rendendo la funzione membro sia virtuale che statica.

Il codice seguente genera l'C4526:

```cpp
// C4526.cpp
// compile with: /W1 /c
// C4526 expected
struct myStruct1 {
   virtual void __stdcall func( int ) = 0;
};

struct myStruct2: public myStruct1 {
   static void __stdcall func( int );
};
```

Di seguito sono riportate le correzioni possibili:

- Se la funzione ha lo scopo di eseguire l'override della funzione virtuale della classe di base, rimuovere l'identificatore statico.

- Se la funzione deve essere una funzione membro statica, rinominarla in modo che non sia in conflitto con la funzione virtuale della classe di base.