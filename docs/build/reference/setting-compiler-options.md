---
title: "Impostazione delle opzioni del compilatore | Microsoft Docs"
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
  - "compilatore cl.exe, impostazione delle opzioni"
  - "opzioni del compilatore, impostazione"
ms.assetid: 4b079f5b-0017-4124-aad6-0d2b58e427e0
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Impostazione delle opzioni del compilatore
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le opzioni del compilatore C e C\+\+ possono essere impostate nell'ambiente di sviluppo o sulla riga di comando.  
  
## Nell'ambiente di sviluppo  
 È possibile impostare le opzioni del compilatore per ogni progetto nella finestra di dialogo **Pagine delle proprietà**.  Nel riquadro sinistro selezionare **Proprietà di configurazione**, **C\/C\+\+**, quindi scegliere la categoria di opzioni del compilatore.  Nell'argomento relativo a ciascuna opzione del compilatore viene descritto come impostarla e dove reperirla nell'ambiente di sviluppo.  Per un elenco completo, vedere [Opzioni del compilatore](../../build/reference/compiler-options.md).  
  
## Al di fuori dell'ambiente di sviluppo  
 È possibile impostare le opzioni del compilatore \(CL.exe\):  
  
-   [Sulla riga di comando](../../build/reference/compiler-command-line-syntax.md)  
  
-   [Nei file di comando](../../build/reference/cl-command-files.md)  
  
-   [Nella variabile di ambiente CL](../../build/reference/cl-environment-variables.md)  
  
 Le opzioni specificate nella variabile di ambiente CL vengono utilizzate ogni volta che viene richiamato CL.  Se un file di comando viene denominato nella variabile di ambiente CL o sulla riga di comando, vengono utilizzate le opzioni specificate nel file di comando.  A differenza della riga di comando o della variabile di ambiente CL, un file di comando consente di utilizzare più righe di opzioni e nomi file.  
  
 Le opzioni del compilatore vengono elaborate "da sinistra a destra" e quando viene rilevato un conflitto, prevale l'ultima opzione, ovvero quella all'estrema destra.  La variabile di ambiente CL viene elaborata prima della riga di comando in modo che al verificarsi di un conflitto tra CL e la riga di comando, quest'ultima abbia la precedenza.  
  
## Ulteriori argomenti relativi al compilatore  
  
-   [Compilazione veloce](../../build/reference/fast-compilation.md)  
  
-   [CL richiama il linker](../../build/reference/cl-invokes-the-linker.md)  
  
## Vedere anche  
 [Riferimenti alla compilazione in C\/C\+\+](../../build/reference/c-cpp-building-reference.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)