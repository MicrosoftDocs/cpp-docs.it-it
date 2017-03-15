---
title: "2.4.2 sections Construct | Microsoft Docs"
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
ms.assetid: e9e6e3ea-7fc9-4925-8f68-92b8a5bb1e76
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.4.2 sections Construct
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**sezioni** la direttiva identifica un costrutto noniterative di suddivisione del lavoro che specifica un set di costrutti che devono essere suddivisi tra i thread in un team.  Ogni sezione viene eseguita una volta da un thread del team.  La sintassi di **sezioni** la direttiva è la seguente:  
  
```  
#pragma omp sections [clause[[,] clause] ...] new-line  
   {  
   [#pragma omp section new-line]  
      structured-block  
   [#pragma omp section new-line  
      structured-block ]  
...  
}  
```  
  
 La clausola è una delle seguenti:  
  
 **privato \(**variabile\-elenco**\)**  
  
 **firstprivate \(**variabile\-elenco**\)**  
  
 **lastprivate \(**variabile\-elenco**\)**  
  
 **riduzione \(**operatore**:** variabile\-elenco**\)**  
  
 **nowait**  
  
 Ogni sezione viene preceduta da un oggetto **sezione** direttiva, sebbene  **sezione** la direttiva è facoltativa per la prima sezione.  **sezione** le istruzioni devono essere visualizzate nell'ambito lessicale di  **sezioni** direttiva.  Esiste una barriera implicita alla fine di un oggetto **sezioni** costrutto, a meno che a  **nowait** è specificato.  
  
 Restrizioni a **sezioni** la direttiva è la seguente:  
  
-   In **sezione** la direttiva non deve comparireambito lessicale di  **sezioni** direttiva.  
  
-   Solo un singolo **nowait** la clausola può apparire in un oggetto  **sezioni** direttiva.  
  
## riferimenti incrociati:  
  
-   **privato**,  **firstprivate**,  **lastprivate**e  **riduzione** le clausole, vedere  [parte 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) nella pagina 25.