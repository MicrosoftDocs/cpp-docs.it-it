---
title: Avviso del compilatore (livello 1) C4530
ms.date: 11/04/2016
f1_keywords:
- C4530
helpviewer_keywords:
- C4530
ms.assetid: a04dcdb2-84db-459d-9e5e-4e743887465f
ms.openlocfilehash: 69ca60e2cba338bf1bd1ac3470e583739e72a68e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80186452"
---
# <a name="compiler-warning-level-1-c4530"></a>Avviso del compilatore (livello 1) C4530

C++utilizzato gestore di eccezioni, ma la semantica di rimozione non è abilitata. Specificare/EHsc

C++è stata usata la gestione delle eccezioni, ma [/EHsc](../../build/reference/eh-exception-handling-model.md) non è stato selezionato.

Quando l'opzione/EHsc non è stata abilitata, un oggetto con archiviazione automatica nel frame, tra la funzione che esegue l'operazione Throw e la funzione che intercetta il Throw, non verrà eliminato definitivamente. Tuttavia, un oggetto con archiviazione automatica creata in un blocco **try** o **catch** verrà eliminato definitivamente.

L'esempio seguente genera l'C4530:

```cpp
// C4530.cpp
// compile with: /W1
int main() {
   try{} catch(int*) {}   // C4530
}
```

Compilare l'esempio con/EHsc per risolvere l'avviso.
