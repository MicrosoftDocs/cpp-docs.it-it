---
title: Compilatore avviso (livello 1) C4530 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4530
dev_langs:
- C++
helpviewer_keywords:
- C4530
ms.assetid: a04dcdb2-84db-459d-9e5e-4e743887465f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bbfbc67377dd48eeb692bdd4cac1f113fbdf7f6a
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46110458"
---
# <a name="compiler-warning-level-1-c4530"></a>Avviso del compilatore (livello 1) C4530

Gestore di eccezioni di C++ usato, ma semantica di rimozione non sono abilitati. Specificare /EHsc

Gestione delle eccezioni C++ è stato usato, ma [/EHsc](../../build/reference/eh-exception-handling-model.md) non è stato selezionato.

Quando non è stata abilitata l'opzione /EHsc, un oggetto con archiviazione automatica nel frame, tra la funzione che esegue la generazione e la funzione l'intercetta, non essere eliminato. Tuttavia, un oggetto con l'archiviazione automatica creato in una **provare** o **catch** blocco verrà eliminato definitivamente.

L'esempio seguente genera l'errore C4530:

```
// C4530.cpp
// compile with: /W1
int main() {
   try{} catch(int*) {}   // C4530
}
```

Compilare l'esempio con /EHsc per risolvere l'avviso.