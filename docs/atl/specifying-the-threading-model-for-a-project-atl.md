---
title: "Specifica di un modello di threading per un progetto (ATL) | Microsoft Docs"
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
helpviewer_keywords: 
  - "_ATL_APARTMENT_THREADED (macro)"
  - "_ATL_FREE_THREADED (macro)"
  - "_ATL_SINGLE_THREADED (macro)"
  - "ATL, multithreading"
  - "threading [ATL], modelli"
ms.assetid: 6b571078-521c-4f3e-9f08-482aa235a822
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Specifica di un modello di threading per un progetto (ATL)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le macro seguenti sono disponibili per specificare il modello di threading di un progetto ATL:  
  
|Macro|Linee guida per l'utilizzo|  
|-----------|--------------------------------|  
|\_ATL\_SINGLE\_THREADED|Definire se tutti gli oggetti utilizzano il singolo modello di threading.|  
|\_ATL\_APARTMENT\_THREADED|Definire se uno o più degli oggetti utilizzano il threading apartment.|  
|\_ATL\_FREE\_THREADED|Definire se uno o più degli oggetti utilizzano il threading free o neutro.  Il codice esistente può contenere riferimenti a macro [\_ATL\_MULTI\_THREADED](../Topic/_ATL_MULTI_THREADED.md)equivalente.|  
  
 Se non si definisce una di queste macro per il progetto, il \_ATL\_FREE\_THREADED avrà effetto.  
  
 Le macro influiscono sulle prestazioni di runtime come segue:  
  
-   Specificare la macro che corrispondono agli oggetti nel progetto può migliorare le prestazioni in fase di esecuzione.  
  
-   Specificare un livello superiore della macro, ad esempio se si specifica il \_ATL\_APARTMENT\_THREADED quando tutti gli oggetti vengono singola thread multipli, leggermente degraderà le prestazioni in fase di esecuzione.  
  
-   Specificare un livello più basso di una macro, ad esempio, se si specifica il \_ATL\_SINGLE\_THREADED quando uno o più degli oggetti utilizzano il o il threading Free threading apartment, può provocare arresti l'applicazione negativo in fase di esecuzione.  
  
 Vedere [Opzioni, guidata semplice ATL](../atl/reference/options-atl-simple-object-wizard.md) per una descrizione dei modelli di threading disponibili per un oggetto ATL.  
  
## Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)