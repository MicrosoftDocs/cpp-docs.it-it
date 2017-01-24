---
title: "2.4.3 single Construct | Microsoft Docs"
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
ms.assetid: 15c180cd-e462-4b41-bf8c-cb8b1afb1a9b
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.4.3 single Construct
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**singolo** la direttiva identifica un costrutto che specifica che il blocco strutturato associato viene eseguito da un solo thread del team \(non necessariamente il thread master\).  La sintassi di **singolo** la direttiva è la seguente:  
  
```  
#pragma omp single [clause[[,] clause] ...] new-line  
   structured-block  
```  
  
 La clausola è una delle seguenti:  
  
 **privato \(**variabile\-elenco**\)**  
  
 **firstprivate \(**variabile\-elenco**\)**  
  
 **copyprivate \(**variabile\-elenco**\)**  
  
 **nowait**  
  
 Esiste una barriera implicita dopo **singolo** costrutto a meno che a  **nowait** la clausola è specificata.  
  
 Restrizioni a **singolo** la direttiva è la seguente:  
  
-   Solo un singolo **nowait** la clausola può apparire in un oggetto  **singolo** direttiva.  
  
-   **copyprivate** la clausola non deve essere utilizzata con  **nowait** clausola.  
  
## riferimenti incrociati:  
  
-   **privato**,  **firstprivate**e  **copyprivate** le clausole, vedere  [parte 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) nella pagina 25.