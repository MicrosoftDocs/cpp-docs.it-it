---
title: "2.7.2.2 firstprivate | Microsoft Docs"
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
ms.assetid: ece6ff12-2be1-4e4f-866c-d39345fd87b5
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.7.2.2 firstprivate
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**firstprivate** la clausola genera un superset della funzionalità fornita da  **privato** clausola.  La sintassi di **firstprivate** la clausola è la seguente:  
  
```  
firstprivate(variable-list)  
```  
  
 Variabili specificati in variabile\-elenco disporre **privato** semantica della clausola, come descritto in  [parte 2.7.2.1](../../parallel/openmp/2-7-2-1-private.md) nella pagina 25.  L'inizializzazione o la costruzione si verifica come se fosse stata eseguita una volta per ogni thread, prima dell'esecuzione del thread del costrutto.  Per una proprietà **firstprivate** la clausola in un costrutto parallelo, il valore iniziale di un nuovo oggetto privato è il valore dell'oggetto originale che esiste immediatamente prima del costrutto parallelo per il thread che rileva.  Per una proprietà **firstprivate** la clausola in un costrutto di suddivisione del lavoro, il valore iniziale di un nuovo oggetto privato per ogni thread che esegue il costrutto di suddivisione del lavoro è il valore originale dell'oggetto esistente prima del momento che lo stesso thread rileva il costrutto di suddivisione del lavoro.  Inoltre, per C\+\+ oggetti, il nuovo oggetto privato per ogni thread è copia costruita oggetto originale.  
  
 Le restrizioni a **firstprivate** la clausola è la seguente:  
  
-   Una variabile specificata in un oggetto **firstprivate** la clausola non deve avere un tipo incompleto o un tipo di riferimento.  
  
-   Una variabile con un tipo di classe che è specificato come **firstprivate** deve avere un costruttore di copia accessibile e ambigua.  
  
-   Variabili che sono private in un'area parallela o visualizzati in **riduzione** clausola di un oggetto  **parallelo** la direttiva non può essere specificata in un oggetto  **firstprivate** clausola in una direttiva di suddivisione del lavoro associato al costrutto parallelo.