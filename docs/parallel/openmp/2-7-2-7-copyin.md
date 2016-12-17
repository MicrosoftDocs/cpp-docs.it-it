---
title: "2.7.2.7 copyin | Microsoft Docs"
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
ms.assetid: 76cfb9f8-bf65-4585-adbf-fd933f5606b4
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.7.2.7 copyin
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**copyin** la clausola fornisce un meccanismo per assegnare lo stesso valore su  **threadprivate** variabili per ogni thread del team che esegue area parallela.  Per ogni variabile specificata in un oggetto **copyin** la clausola, il valore della variabile nel thread master del team viene copiata, ad esempio tramite l'assegnazione, le copie thread\-private all'inizio dell'area parallela.  La sintassi di **copyin** la clausola è la seguente:  
  
```  
  
copyin(  
variable-list  
)  
  
```  
  
 Le restrizioni a **copyin** la clausola è la seguente:  
  
-   Una variabile specificata in **copyin** la clausola deve avere un operatore di assegnazione di copia accessibile e ambigua.  
  
-   Una variabile specificata in **copyin** la clausola deve corrispondere a  **threadprivate** variabile.