---
title: "OpenMP Clauses | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 806e7d8f-b204-4e4c-a12c-273ab540a7ca
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# OpenMP Clauses
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Vengono forniti collegamenti alle clausole utilizzate in OpenMP API.  
  
 Visual C\+\+ supporta le clausole seguenti di OpenMP:  
  
|Clausola|Descrizione|  
|--------------|-----------------|  
|[copyin](../../../parallel/openmp/reference/copyin.md)|Consente ai thread possono accedere al valore master del thread, di un oggetto [threadprivate](../../../parallel/openmp/reference/threadprivate.md) variabile.|  
|[copyprivate](../../../parallel/openmp/reference/copyprivate.md)|Specifica che una o più variabili devono essere condivise da tutti i thread.|  
|[default](../../../parallel/openmp/reference/default-openmp.md)|Specifica il comportamento delle variabili unscoped in un'area parallela.|  
|[firstprivate](../../../parallel/openmp/reference/firstprivate.md)|Specifica che ogni thread deve disporre di una propria istanza di una variabile e che la variabile deve essere inizializzata con il valore della variabile, perché esiste prima del costrutto parallelo.|  
|[if](../../../parallel/openmp/reference/if-openmp.md)|Specifica se un ciclo deve essere eseguito in parallelo o in serie.|  
|[lastprivate](../../../parallel/openmp/reference/lastprivate.md)|Specifica che la versione del contesto di inclusione di variabile viene impostato uguale alla versione privata di qualsiasi thread esegue l'iterazione finale \(costrutto di ciclo for\) o nell'ultima sezione \(sezioni \#pragma\).|  
|[nowait](../../../parallel/openmp/reference/nowait.md)|Esegue l'override della barriera implicita in una direttiva.|  
|[num\_threads](../../../parallel/openmp/reference/num-threads.md)|Imposta il numero di thread in un team di thread.|  
|[ordered](../../../parallel/openmp/reference/ordered-openmp-clauses.md)|obbligatorio su un parallelo [for](../../../parallel/openmp/reference/for-openmp.md) istruzione se  [ordered](../../../parallel/openmp/reference/ordered-openmp-directives.md) la direttiva deve essere utilizzata nel ciclo.|  
|[private](../../../parallel/openmp/reference/private-openmp.md)|Specifica che ogni thread deve disporre di una propria istanza di una variabile.|  
|[reduction](../../../parallel/openmp/reference/reduction.md)|Specifica che una o più variabili che sono private per ogni thread sono l'argomento delle operazioni di riduzione alla fine dell'area parallela.|  
|[schedule](../../../parallel/openmp/reference/schedule.md)|Si applica a [for](../../../parallel/openmp/reference/for-openmp.md) direttiva.|  
|[shared](../../../parallel/openmp/reference/shared-openmp.md)|Specifica che una o più variabili devono essere condivise da tutti i thread.|  
  
## Vedere anche  
 [OpenMP](../../../parallel/openmp/openmp-in-visual-cpp.md)   
 [Directives](../../../parallel/openmp/reference/openmp-directives.md)