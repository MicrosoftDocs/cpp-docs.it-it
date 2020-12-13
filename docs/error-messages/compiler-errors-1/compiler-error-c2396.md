---
description: 'Altre informazioni su: errore del compilatore C2396'
title: Errore del compilatore C2396
ms.date: 11/04/2016
f1_keywords:
- C2396
helpviewer_keywords:
- C2396
ms.assetid: 1b515ef6-7af4-400f-b4ed-564313ea15f6
ms.openlocfilehash: 654b812fbd152a6effb60e6f0919f99bf5039a1b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97145392"
---
# <a name="compiler-error-c2396"></a>Errore del compilatore C2396

' your_type:: operator'type '': la conversione definita dall'utente CLR o WinRT functionnot è valida. Deve eseguire la conversione o la conversione in:' t ^',' t ^%',' t ^&', dove T =' your_type '

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
