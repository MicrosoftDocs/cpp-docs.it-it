---
title: "2.7.2 Data-Sharing Attribute Clauses | Microsoft Docs"
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
ms.assetid: 47347d3c-18bd-441f-99cf-7737564c417f
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.7.2 Data-Sharing Attribute Clauses
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Diverse direttive accettano le clausole che consentono a un utente controlli gli attributi la condivisione delle variabili per l'intera durata dell'area.  Condividendo le clausole di attributi si applicano solo alle variabili nell'ambito lessicale la direttiva in cui la clausola viene visualizzato.  Non tutte le clausole sono consentite in tutte le direttive.  L'elenco delle clausole che sono valide in una direttiva speciale viene descritto con la direttiva.  
  
 Se la variabile è visibile quando un parallelo o un costrutto di suddivisione del lavoro viene rilevato e la variabile non viene specificata in una clausola di condivisione di attributo o **threadprivate** la direttiva, la variabile è condivisa.  Le variabili statiche dichiarate in l dinamico di un'area parallela condivise.  Memoria allocata heap, ad esempio tramite **malloc \(\)** in c\# o C\+\+ o  **nuovo** l'operatore in C\+\+\) è condiviso.  \(Il puntatore alla memoria, tuttavia, può essere privati o condivisi.\) Le variabili con durata automatica di archiviazione dichiarata in l dinamico di un'area parallela sono private.  
  
 La maggior parte delle clausole accettano un oggetto *variabile\-elenco* argomento, ovvero un elenco delimitato da virgole di variabili visibili.  Se una variabile \(riferimento in una clausola dell'attributo di condivisione di dati con un tipo derivato da un modello e non esistono altri riferimenti a tale variabile nel programma, il comportamento sarà indefinito.  
  
 Tutte le variabili presenti nelle clausole direttive devono essere visibili.  Le clausole possono essere ripetute in base alle necessità, ma nessuna variabile può essere specificata in più di una clausola, ad eccezione del fatto che una variabile può essere specificata sia in **firstprivate** e  **lastprivate** clausola.  
  
 Nelle sezioni seguenti vengono descritte le clausole di attributo di condivisione di dati:  
  
-   **privato**,  [parte 2.7.2.1](../../parallel/openmp/2-7-2-1-private.md) nella pagina 25.  
  
-   **firstprivate**,  [parte 2.7.2.2](../../parallel/openmp/2-7-2-2-firstprivate.md) nella pagina 26.  
  
-   **lastprivate**,  [parte 2.7.2.3](../../parallel/openmp/2-7-2-3-lastprivate.md) nella pagina 27.  
  
-   **condiviso**,  [parte 2.7.2.4](../../parallel/openmp/2-7-2-4-shared.md) nella pagina 27.  
  
-   **impostazione predefinita**,  [parte 2.7.2.5](../../parallel/openmp/2-7-2-5-default.md) nella pagina 28.  
  
-   **riduzione**,  [parte 2.7.2.6](../../parallel/openmp/2-7-2-6-reduction.md) nella pagina 28.  
  
-   **copyin**,  [parte 2.7.2.7](../../parallel/openmp/2-7-2-7-copyin.md) nella pagina 31.  
  
-   **copyprivate**,  [parte 2.7.2.8](../../parallel/openmp/2-7-2-8-copyprivate.md) nella pagina 32.