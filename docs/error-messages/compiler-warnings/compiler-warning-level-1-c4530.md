---
title: Compilatore avviso (livello 1) C4530 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4530
dev_langs: C++
helpviewer_keywords: C4530
ms.assetid: a04dcdb2-84db-459d-9e5e-4e743887465f
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: adfa006e3b84517601237bbd844ac983115e74ec
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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