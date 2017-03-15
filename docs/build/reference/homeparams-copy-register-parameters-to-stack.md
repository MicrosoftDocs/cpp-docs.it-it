---
title: "/homeparams (Copia i parametri del registro nello stack) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/homeparams"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/homeparams (opzione del compilatore) [C++]"
  - "-homeparams (opzione del compilatore) [C++]"
ms.assetid: 51067de4-24f7-436b-b8d9-bc867a7d53aa
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# /homeparams (Copia i parametri del registro nello stack)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Forza la scrittura di parametri passati nei registri nei rispettivi percorsi nello stack quando vengono immesse funzioni.  
  
## Sintassi  
  
```  
/homeparams  
```  
  
## Note  
 Questa opzione del compilatore è solo per i compilatori [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] \(compilazione nativa e incrociata\).  
  
 Le convenzioni di chiamata richiedono che per i parametri passati in una compilazione [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], anche per quelli passati nei registri, sia disponibile spazio dello stack.  Per ulteriori informazioni, vedere [Passaggio dei parametri](../../build/parameter-passing.md).  Per impostazione predefinita, in una build di rilascio i parametri non vengono tuttavia scritti nello stack, all'interno dello spazio appositamente predisposto.  Il debug di una build di rilascio ottimizzata del programma risulta pertanto più difficile.  
  
 Per una build di rilascio, utilizzare l'opzione **\/homeparams** per accertarsi di poter eseguire il debug dell'applicazione in uso.  **\/homeparams** non comporta alcuna riduzione delle prestazioni perché è necessario un ciclo per caricare i parametri del registro nello stack.  
  
 In una build di debug, i parametri passati nei registri vengono sempre inseriti nello stack.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)