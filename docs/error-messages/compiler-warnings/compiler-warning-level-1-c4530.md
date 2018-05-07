---
title: Compilatore avviso (livello 1) C4530 | Documenti Microsoft
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
ms.openlocfilehash: 74804aa3ea0450c08710a5d0818eae67ce9b556e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-1-c4530"></a>Avviso del compilatore (livello 1) C4530
Gestore di eccezioni di C++ utilizzato, ma la semantica di rimozione non sono abilitati. Specificare /EHsc  
  
 È stata utilizzata la gestione delle eccezioni C++, ma [/EHsc](../../build/reference/eh-exception-handling-model.md) non è stata selezionata.  
  
 Quando non è stata abilitata l'opzione /EHsc, non un oggetto con archiviazione automatica nel frame, tra cui la funzione che esegue la generazione e la funzione l'intercetta, verrà eliminato. Tuttavia, un oggetto con archiviazione automatica creato un **provare** o **catch** blocco verrà eliminato definitivamente.  
  
 L'esempio seguente genera l'errore C4530:  
  
```  
// C4530.cpp  
// compile with: /W1  
int main() {  
   try{} catch(int*) {}   // C4530  
}  
```  
  
 Compilare l'esempio con /EHsc per risolvere il problema.