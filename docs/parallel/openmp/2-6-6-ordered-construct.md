---
title: "2.6.6 ordered Construct | Microsoft Docs"
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
ms.assetid: 5b3c1ba5-cfb8-4b05-865b-f446ae1c9f7c
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.6.6 ordered Construct
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Seguire strutturato di blocco **ordinato** la direttiva viene eseguita nell'ordine in cui le iterazioni verrebbero eseguite in un ciclo sequenziale.  La sintassi di **ordinato** la direttiva è la seguente:  
  
```  
#pragma omp ordered new-line  
   structured-block  
```  
  
 **ordinato** la direttiva deve essere in l dinamico di un oggetto  **per** o  **parallelo per** costrutto.  **per** o  **parallelo per** direttiva a cui  **ordinato** le associazioni del costrutto devono avere  **ordinato** clausola specificata come descritto in  [parte 2.4.1](../../parallel/openmp/2-4-1-for-construct.md) nella pagina 11.  Nell'esecuzione di un oggetto **per** o  **parallelo per** costrutto con  **ordinato** clausola,  **ordinato** i costrutti vengono eseguiti esclusivamente nell'ordine in cui verrebbero eseguiti in un'esecuzione sequenziale del ciclo.  
  
 Restrizioni a **ordinato** la direttiva è la seguente:  
  
-   Un'iterazione del ciclo con un oggetto **per** il costrutto non è necessario eseguire più volte la stessa direttiva ordinata e non deve eseguire più di uno  **ordinato** direttiva.