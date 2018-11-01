---
title: Errore del compilatore C2396
ms.date: 11/04/2016
f1_keywords:
- C2396
helpviewer_keywords:
- C2396
ms.assetid: 1b515ef6-7af4-400f-b4ed-564313ea15f6
ms.openlocfilehash: d320f78937fc60910bbed4a5b1b89841ea674fb7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50438089"
---
# <a name="compiler-error-c2396"></a>Errore del compilatore C2396

' your_type ': WinRT o CLR functionnot conversione definita dall'utente valido. Deve essere una conversione da o una conversione a: 'T^', 'T^%', 'T^&', dove T = 'your_type'

Una funzione di conversione in un tipo Windows Runtime o gestito non dispone nemmeno di un parametro il cui tipo sia uguale al tipo contenente la funzione di conversione.

L'esempio seguente genera l'errore C2396 e mostra come risolverlo:

```
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