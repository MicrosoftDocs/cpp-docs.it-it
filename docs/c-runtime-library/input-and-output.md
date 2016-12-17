---
title: "Input e output | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.io"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "I/O [CRT]"
  - "I/O [CRT], routine"
  - "routine I/O"
  - "routine di input"
  - "routine di output"
ms.assetid: 1c177301-e341-4ca0-aedc-0a87fe1c75ae
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Input e output
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le funzioni di I\/O leggono e scrivono dati ai e dai file e dispositivi.  Le operazioni di I\/O di file vengono eseguite in modalità testo o in modalità binario.  La libreria di runtime di Microsoft ha tre tipi di funzioni di I\/O:  
  
-   Le funzioni di[Stream I\/O](../c-runtime-library/stream-i-o.md) trattano i dati come un flusso di singoli caratteri.  
  
-   Le funzioni di[I\/O di basso livello](../c-runtime-library/low-level-i-o.md) richiamano direttamente il sistema operativo per operazioni di livello inferiore rispetto a quelle fornite dallo stream I\/O.  
  
-   Le funzioni di[console e porta I\/O](../c-runtime-library/console-and-port-i-o.md) leggono o scrivono direttamente ad una console \(tastiera e lo schermo\) o a una porta di I\/O \(ad esempio una porta della stampante\).  
  
    > [!NOTE]
    >  Poiché le funzioni di flusso sono memorizzate nel buffer mentre le funzioni di basso livello non lo sono, questi due tipi di funzioni sono generalmente incompatibili.  Per elaborare un file specifico, utilizzare il flusso o funzioni di basso livello separatamente.  
  
## Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)