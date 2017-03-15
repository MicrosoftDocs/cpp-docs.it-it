---
title: "loop | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "loop_CPP"
  - "vc-pragma.loop"
dev_langs: 
  - "C++"
ms.assetid: 6d5bb428-cead-47e7-941d-7513bbb162c7
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# loop
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Controlla il modo in cui il codice del ciclo deve essere considerato dalla funzione di parallelizzazione automatica e\/o esclude un ciclo dalla considerazione da parte della funzione di vettorizzazione automatica.  
  
## Sintassi  
  
```  
  
#pragma loop( hint_parallel(n) )  
```  
  
```  
  
#pragma loop( no_vector )  
```  
  
```  
  
#pragma loop( ivdep )  
```  
  
#### Parametri  
 `hint_parallel(` `n` `)`  
 Suggerisce al compilatore che questo ciclo deve essere parallelizzato attraverso i thread `n`, dove `n` è un valore letterale intero positivo o zero.  Se `n` è zero, il numero massimo di thread viene utilizzato in fase di esecuzione.  Si tratta di un suggerimento al compilatore, non di un comando, pertanto non è garantito che il ciclo verrà parallelizzato.  Se il ciclo presenta dipendenze di dati o problemi strutturali, ad esempio viene archiviato in un valore scalare che è utilizzato oltre il corpo del ciclo, quest'ultimo non verrà parallelizzato.  
  
 Il compilatore ignora questa opzione a meno che non sia stata specificata l'opzione [\/Qpar](../build/reference/qpar-auto-parallelizer.md).  
  
 `no_vector`  
 Per impostazione predefinita, la vettorizzazione automatica è attivata e tenterà di vettorizzare tutti i cicli che ritiene possano trarne vantaggio.  Specificare questo pragma per disabilitare la funzione di vettorizzazione automatica per il ciclo che la segue.  
  
 `ivdep`  
 Suggerisce al compilatore di ignorare le dipendenze del vettore per questo ciclo.  Deve essere utilizzata insieme a `hint_parallel`.  
  
## Note  
 Per utilizzare il pragma `loop`, inserirlo immediatamente prima della definizione di un ciclo non all'interno di essa.  Il pragma diventa effettivo per l'ambito del ciclo che lo segue.  È possibile applicare i pragma a un ciclo, in qualsiasi ordine, ma è necessario dichiarare ciascuno in un'istruzione del pragma distinta.  
  
## Vedere anche  
 [Parallelizzazione automatica e vettorizzazione automatica](../parallel/auto-parallelization-and-auto-vectorization.md)   
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)