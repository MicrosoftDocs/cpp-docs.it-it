---
title: Errore del compilatore C2396
ms.date: 11/04/2016
f1_keywords:
- C2396
helpviewer_keywords:
- C2396
ms.assetid: 1b515ef6-7af4-400f-b4ed-564313ea15f6
ms.openlocfilehash: 5020732ce5186ee1c6e9d2ea13f452fe9988bdfa
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74744836"
---
# <a name="compiler-error-c2396"></a>Errore del compilatore C2396

' your_type:: operator'type '': la conversione definita dall'utente CLR o WinRT functionnot è valida. Deve eseguire la conversione o la conversione in:' t ^',' t ^%',' t ^ &', dove T =' your_type '

Una funzione di conversione in un tipo Windows Runtime o gestito non dispone nemmeno di un parametro il cui tipo sia uguale al tipo contenente la funzione di conversione.

L'esempio seguente genera l'errore C2396 e mostra come risolverlo:

```cpp
// C2396.cpp
// compile with: /clr /c

ref struct Y {
   static operator int(char c);   // C2396

   // OK
   static operator int(Y^ hY);
   // or
   static operator Y^(char c);
};
```
