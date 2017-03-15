---
title: "/Qpar (Parallelizzazione automatica) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.EnableParallelCodeGeneration"
dev_langs: 
  - "C++"
ms.assetid: 33ecf49d-c0d5-4f34-bce3-84ff03f38918
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# /Qpar (Parallelizzazione automatica)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Consente alla funzionalità [Auto\-Parallelizer](../../parallel/auto-parallelization-and-auto-vectorization.md) del compilatore di parallelizzare automaticamente i cicli nel codice.  
  
## Sintassi  
  
```  
/Qpar  
```  
  
## Note  
 Quando il compilatore parallelizza automaticamente i cicli nel codice, divide il calcolo tra più core del processore.  Un ciclo viene parallelizzato solo se il compilatore determina che è valido farlo e che la parallelizzazione potrà migliorare le prestazioni.  
  
 Le direttive `#pragma loop()` sono disponibili per garantire l'utilità di ottimizzazione per parallelizzare i cicli specifici.  Per ulteriori informazioni, vedere [loop](../../preprocessor/loop.md).  
  
 Per informazioni su come abilitare i messaggi di output per l'auto\-parallelizer, vedere [\/Qvec\-report \(livello di segnalazione parallelizzazione automatica\)](../../build/reference/qpar-report-auto-parallelizer-reporting-level.md).  
  
### Impostare l'opzione \/Qpar del compilatore in Visual Studio  
  
1.  In **Esplora soluzioni** aprire il menu di scelta rapida per il progetto e scegliere **Proprietà**.  
  
2.  Nella finestra di dialogo **Pagine delle proprietà**, in **C\/C\+\+**, selezionare **Riga di comando**.  
  
3.  Nella casella **Opzioni aggiuntive**, immettere `/Qpar`.  
  
### Impostare l'opzione \/Qpar del compilatore a livello di codice  
  
-   Utilizzare l'esempio di codice in <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni \/Q \(Operazioni di basso livello\)](../../build/reference/q-options-low-level-operations.md)   
 [\/Qvec\-report \(livello di segnalazione parallelizzazione automatica\)](../../build/reference/qpar-report-auto-parallelizer-reporting-level.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [\#pragma loop\(\)](../../preprocessor/loop.md)   
 [Programmazione parallela nel codice nativo](http://go.microsoft.com/fwlink/?LinkId=263662)