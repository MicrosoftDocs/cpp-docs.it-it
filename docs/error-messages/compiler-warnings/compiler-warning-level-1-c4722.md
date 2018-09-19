---
title: Compilatore avviso (livello 1) C4722 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4722
dev_langs:
- C++
helpviewer_keywords:
- C4722
ms.assetid: d8660710-f67b-4f59-a5fd-59259475529e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0f450120ff05c7e13888bf4b4ce4425405525b4c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46112499"
---
# <a name="compiler-warning-level-1-c4722"></a>Avviso del compilatore (livello 1) C4722

'function': il distruttore non restituisce mai un valore, potenziale perdita di memoria

Il flusso di controllo termina in un distruttore. Viene terminato il thread o l'intero programma e le risorse allocate potrebbero non essere rilasciate.  Inoltre, se viene chiamato un distruttore per la rimozione dello stack durante l'elaborazione delle eccezioni, il comportamento dell'eseguibile è indefinito.

Per risolvere questo problema, rimuovere la chiamata di funzione che impedisce la restituzione di valori del distruttore.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4722:

```
// C4722.cpp
// compile with: /O1 /W1 /c
#include <stdlib.h>
class C {
public:
   C();
   ~C() { exit(1); };   // C4722
};

extern void func (C*);

void Test(){
   C x;
   func(&x);
   // control will not leave Test because destructor will exit
}
```