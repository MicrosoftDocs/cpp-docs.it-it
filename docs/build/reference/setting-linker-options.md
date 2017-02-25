---
title: "Impostazione delle opzioni del linker | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "file [C++], LINK"
  - "file di input [C++]"
  - "file di input [C++], linker"
  - "linker [C++], opzioni"
  - "linker [C++], modalità di impostazione delle opzioni"
  - "moduli di oggetti/librerie"
ms.assetid: e08fb487-0f2e-4f24-87db-232dbc8bd2e2
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Impostazione delle opzioni del linker
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile impostare le opzioni del linker all'interno o all'esterno dell'ambiente di sviluppo.  Per ogni opzione del linker è disponibile un argomento in cui ne viene descritta l'impostazione nell'ambiente di sviluppo.  Per un elenco completo, vedere [Opzioni del linker](../../build/reference/linker-options.md).  
  
 Quando si esegue LINK al di fuori dell'ambiente di sviluppo, è possibile specificare l'input in uno o più modi:  
  
-   Alla [riga di comando](../../build/reference/linker-command-line-syntax.md)  
  
-   Mediante [file di comando](../../build/reference/link-command-files.md)  
  
-   In [variabili di ambiente](../../build/reference/link-environment-variables.md)  
  
 Con LINK vengono elaborate prima le opzioni specificate nella variabile di ambiente LINK, quindi le altre opzioni nell'ordine in cui sono specificate sulla riga di comando e nei file di comando.  Se un'opzione è ripetuta con argomenti diversi, l'ultima in ordine di elaborazione avrà la precedenza sulle altre.  
  
 Le opzioni hanno effetto sull'intera compilazione e non possono essere applicate a file di input specifici.  
  
## Vedere anche  
 [Riferimenti alla compilazione in C\/C\+\+](../../build/reference/c-cpp-building-reference.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)