---
title: "2.7.2.8 copyprivate | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: c382348c-c785-45b2-8ee6-a66b76b97f3e
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.7.2.8 copyprivate
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**copyprivate** la clausola fornisce un meccanismo per utilizzare una variabile privata per trasmettere per comunicare a un valore da un membro di un team agli altri membri.  Rappresenta un'alternativa all'utilizzo di una variabile condivisa per il valore per fornire una variabile condivisa che sarebbe difficile, ad esempio in una ricorsione che richiede una variabile diverso a ogni livello\).  **copyprivate** la clausola può apparire solo su  **singolo** direttiva.  
  
 La sintassi di **copyprivate** la clausola è la seguente:  
  
```  
  
copyprivate(  
variable-list  
)  
  
```  
  
 L'effetto di **copyprivate** la clausola sulle variabili nel variabile\-elenco si verifica dopo l'esecuzione del blocco strutturato associato  **singolo** costrutto e prima dell'esecuzione dei thread del team abbiano lasciato la barriera alla fine del costrutto.  Successivamente, in tutti gli altri thread del team, per ogni variabile in *variabile\-elenco*, la variabile viene definita \(ad esempio se per assegnazione\) al valore della variabile corrispondente nel thread che ha eseguito il blocco strutturato il costrutto.  
  
 Restrizioni a **copyprivate** la clausola è la seguente:  
  
-   Una variabile specificata in **copyprivate** la clausola non deve trovarsi in un oggetto  **privato** o  **firstprivate** clausola per lo stesso  **singolo** direttiva.  
  
-   se a **singolo** direttiva con un oggetto  **copyprivate** la clausola viene rilevata in dinamico di un'area parallela, tutte le variabili specificate in  **copyprivate** la clausola deve essere privata nel contesto di inclusione.  
  
-   Una variabile specificata in **copyprivate** la clausola deve avere un operatore di assegnazione di copia non ambiguo accessibile.