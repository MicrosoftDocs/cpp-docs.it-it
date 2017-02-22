---
title: "/Qvec-report (livello di segnalazione parallelizzazione automatica) | Microsoft Docs"
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
ms.assetid: 562673b9-02da-4bf8-bb64-70bc25ef4651
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# /Qvec-report (livello di segnalazione parallelizzazione automatica)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Abilita la funzionalità di segnalazione della funzione di [parallelizzazione automatica](../../parallel/auto-parallelization-and-auto-vectorization.md) del compilatore e specifica il livello di messaggi informativi per l'output durante la compilazione.  
  
## Sintassi  
  
```  
/Qpar-report:{1}{2}  
```  
  
## Note  
 **\/Qpar\-report:1**  
 Invia all'output un messaggio informativo per i cicli parallelizzati.  
  
 **\/Qpar\-report:2**  
 Invia un messaggio informativo per i cicli parallelizzati e per i cicli non parallelizzati, insieme a un codice motivo.  
  
 I messaggi vengono inviati a stdout.  Se non viene segnalato alcun messaggio informativo, il codice non contiene cicli oppure il livello di segnalazione non è stato impostato per la segnalazione di cicli non parallelizzati.  Per altre informazioni su codici motivo e messaggi, vedere [Messaggi di vettorizzazione e parallelizzazione](../../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md).  
  
### Per impostare l'opzione del compilatore \/Qpar\-report in Visual Studio  
  
1.  In **Esplora soluzioni** aprire il menu di scelta rapida per il progetto e scegliere **Proprietà**.  
  
2.  Nella finestra di dialogo **Pagine delle proprietà**, in **C\/C\+\+**, selezionare **Riga di comando**.  
  
3.  Nella casella **Opzioni aggiuntive** immettere `/Qpar-report:1` o `/Qpar-report:2`.  
  
### Per impostare l'opzione del compilatore \/Qpar a livello di codice  
  
-   Usare l'esempio di codice in <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni \/Q \(Operazioni di basso livello\)](../../build/reference/q-options-low-level-operations.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Parallel Programming in Native Code](http://go.microsoft.com/fwlink/?LinkId=263662)