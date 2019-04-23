---
title: Errore del compilatore C2483
ms.date: 09/15/2017
f1_keywords:
- C2483
helpviewer_keywords:
- C2483
ms.assetid: 5762b325-914b-442d-a604-e4617ba04038
ms.openlocfilehash: 7a627ce28e60f42dabcf0a257464a8bfbd58b9a4
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59028627"
---
# <a name="compiler-error-c2483"></a>Errore del compilatore C2483

>«*identificatore*': oggetto con costruttore o distruttore non può essere dichiarato 'thread'

Questo messaggio di errore è obsoleto in Visual Studio 2015 e versioni successive. Nelle versioni precedenti, le variabili dichiarate con la `thread` attributo non può essere inizializzato con un costruttore o in un'altra espressione che richiede la valutazione in fase di esecuzione. È necessaria per inizializzare un'espressione statica `thread` dei dati.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2483 in Visual Studio 2013 e versioni precedenti.

```cpp
// C2483.cpp
// compile with: /c
__declspec(thread) struct A {
   A(){}
   ~A(){}
} aa;   // C2483 error

__declspec(thread) struct B {} b;   // OK
```

## <a name="see-also"></a>Vedere anche

[thread](../../cpp/thread.md)