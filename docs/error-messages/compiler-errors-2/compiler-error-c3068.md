---
title: Errore del compilatore C3068
ms.date: 11/04/2016
f1_keywords:
- C3068
helpviewer_keywords:
- C3068
ms.assetid: 613e3447-b4a8-4268-a661-297bed63ccdf
ms.openlocfilehash: 4790c9caafd28722f3631104cfe5cfc762cf6426
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50575474"
---
# <a name="compiler-error-c3068"></a>Errore del compilatore C3068

'function': una funzione 'naked' non può contenere oggetti che dovrebbero essere rimossi se si è verificata un'eccezione C++

Il compilatore non è riuscito a eseguire la rimozione dello stack in un [naked](../../cpp/naked-cpp.md) funzione che ha generato un'eccezione perché un oggetto temporaneo è stato creato nella funzione e la gestione delle eccezioni C++ ([/EHsc](../../build/reference/eh-exception-handling-model.md)) è stato specificato.

Per risolvere questo errore, eseguire almeno una delle operazioni seguenti:

- Non compilare con /EHsc.

- Non si contrassegna la funzione come `naked`.

- Non creare un oggetto temporaneo nella funzione.

Se una funzione crea un oggetto temporaneo nello stack, se la funzione genera un'eccezione e la gestione delle eccezioni C++ è abilitato, il compilatore eseguirà la pulizia dello stack se viene generata un'eccezione.

Quando viene generata un'eccezione, codice, il prologo della query denominata generata dal compilatore e di epilogo e cui non sono presenti in una funzione naked, viene eseguita per una funzione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3068:

```
// C3068.cpp
// compile with: /EHsc
// processor: x86
class A {
public:
   A(){}
   ~A(){}
};

void b(A){}

__declspec(naked) void c() {
   b(A());   // C3068
};
```