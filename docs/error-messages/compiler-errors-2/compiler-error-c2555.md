---
title: Errore del compilatore C2555
ms.date: 11/04/2016
f1_keywords:
- C2555
helpviewer_keywords:
- C2555
ms.assetid: 5e49ebb8-7c90-457a-aa12-7ca7ab6574b2
ms.openlocfilehash: cc6c3a3a29665ccf65b77a3d9866986cb0a46b9e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50528856"
---
# <a name="compiler-error-c2555"></a>Errore del compilatore C2555

'class1::function1': funzione virtual in override tipo restituito è diverso e non è una covariante da 'classe2:: funzione2'

Una funzione virtuale e una funzione esegue l'override derivata hanno elenchi di parametri sono identici ma restituire tipi diversi. Una funzione di override in una classe derivata non può essere diversa da una funzione virtuale in una classe base solo per il tipo restituito.

Per risolvere questo errore, il cast del valore restituito dopo la chiamata della funzione virtuale.

È inoltre possibile visualizzare questo errore se esegue la compilazione con /clr.   Ad esempio, l'equivalente in Visual C++ la dichiarazione seguente di c#:

```
Guid[] CheckSources(Guid sourceID, Guid[] carouselIDs);
```

is

```
Guid CheckSources(Guid sourceID, Guid carouselIDs[]) [];
```

L'esempio seguente genera l'errore C2555:

```cpp
// C2555.cpp
// compile with: /c
struct X {
   virtual void func();
};
struct Y : X {
   char func();  // C2555
   void func2();   // OK
};
```