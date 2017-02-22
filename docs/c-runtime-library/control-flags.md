---
title: "Flag di controllo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.flags"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "heap di debug, flag di controllo"
  - "flag, controllo"
  - "allocazione di heap, flag di controllo"
ms.assetid: 8dbd24a5-0633-42d1-9771-776db338465f
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Flag di controllo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La versione di debug della libreria di run\-time del linguaggio C di Microsoft utilizza i seguenti flag per controllare l'allocazione dell'heap ed il processo di creazione di rapporti.  Per ulteriori informazioni, vedere [Tecniche di debug di CRT](../Topic/CRT%20Debugging%20Techniques.md).  
  
|Flag|Descrizione|  
|----------|-----------------|  
|[\_CRTDBG\_MAP\_ALLOC](../c-runtime-library/crtdbg-map-alloc.md)|Esegue il mapping delle funzioni degli heap di base alle rispettive versione di debug|  
|[\_DEBUG](../c-runtime-library/debug.md)|Consente l'utilizzo delle versioni di debug delle funzioni di run\-time|  
|[\_crtDbgFlag](../c-runtime-library/crtdbgflag.md)|Controlla come il gestore dell'heap di debug tiene traccia delle allocazioni|  
  
 Questi flag possono essere definiti con un'opzione della riga di comando \/D o con una direttiva `#define`.  Quando il flag è definito con `#define`, la direttiva deve essere apparire prima che il file di intestazione includa l'istruzione per le dichiarazioni delle routine.  
  
## Vedere anche  
 [Variabili globali e tipi standard](../c-runtime-library/global-variables-and-standard-types.md)