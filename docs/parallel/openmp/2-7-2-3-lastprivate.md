---
title: "2.7.2.3 lastprivate | Microsoft Docs"
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
ms.assetid: 77f6a5c9-704f-4a88-8476-29db852ed800
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.7.2.3 lastprivate
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

`lastprivate` la clausola genera un superset della funzionalità fornita da  `private` clausola.  La sintassi di `lastprivate` la clausola è la seguente:  
  
```  
lastprivate(variable-list)  
```  
  
 variabili specificate in variabile\-elenco disporre `private` semantica della clausola.  quando a `lastprivate` la clausola viene visualizzato nella direttiva che identifica un costrutto di suddivisione del lavoro, il valore di ogni  `lastprivate` la variabile di iterazione in sequenza più recente del ciclo associato, o la direttiva dall'ultima la sezione, verrà assegnata all'oggetto originale della variabile.  Variabili non assegnate un valore dall'ultima iterazione di **per** o  **parallelo per**, o dalla sezione di livello lessicale all'ultima  **sezioni** o  **sezioni parallele** la direttiva, presenta valori imprevisti dopo costrutto.  Oggetti secondari non dispongono inoltre di un valore definito dopo costrutto.  
  
 Le restrizioni a `lastprivate` la clausola è la seguente:  
  
-   tutte le restrizioni per `private` applicare.  
  
-   Una variabile con un tipo di classe che è specificato come `lastprivate` deve avere un operatore di assegnazione di copia accessibile e ambigua.  
  
-   Variabili che sono private in un'area parallela o visualizzati in `reduction` clausola di un oggetto  **parallelo** la direttiva non può essere specificata in un oggetto  `lastprivate` clausola in una direttiva di suddivisione del lavoro associato al costrutto parallelo.