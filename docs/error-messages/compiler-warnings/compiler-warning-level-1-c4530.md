---
title: Avviso del compilatore (livello 1) C4530
ms.date: 11/04/2016
f1_keywords:
- C4530
helpviewer_keywords:
- C4530
ms.assetid: a04dcdb2-84db-459d-9e5e-4e743887465f
ms.openlocfilehash: 3139d321bca64b9938badebdabccd3ca1eb96d11
ms.sourcegitcommit: e5192a25c084eda9eabfa37626f3274507e026b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2019
ms.locfileid: "73966256"
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