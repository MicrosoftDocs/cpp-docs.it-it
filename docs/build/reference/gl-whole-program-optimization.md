---
title: "/GL (Ottimizzazione intero programma) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/gl"
  - "VC.Project.VCCLWCECompilerTool.WholeProgramOptimization"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/GL (opzione del compilatore) [C++]"
  - "GL (opzione del compilatore) [C++]"
  - "-GL (opzione del compilatore) [C++]"
  - "ottimizzazione di programmi interi e compilatore C++"
ms.assetid: 09d51e2d-9728-4bd0-b5dc-3b8284aca1d1
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# /GL (Ottimizzazione intero programma)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Attiva l'ottimizzazione dell'intero programma.  
  
## Sintassi  
  
```  
/GL[-]  
```  
  
## Note  
 L'ottimizzazione dell'intero programma consente al compilatore di eseguire ottimizzazioni con informazioni su tutti i moduli nel programma.  Senza l'ottimizzazione dell'intero programma, le ottimizzazioni vengono eseguite una per modulo.  
  
 Poiché per impostazione predefinita l'ottimizzazione dell'intero programma è disattivata, è necessario attivarla in modo esplicito.  Tuttavia, è anche possibile disabilitarla in modo esplicito con **\/GL\-**.  
  
 Con informazioni su tutti i moduli, il compilatore può:  
  
-   Ottimizzare l'utilizzo dei registri oltre i limiti delle funzioni.  
  
-   Ottimizzare il rilevamento delle modifiche apportate ai dati globali riducendo il numero di operazioni di caricamento e archiviazione.  
  
-   Ottimizzare il rilevamento degli eventuali insiemi di elementi modificati dalla dereferenziazione di un puntatore riducendo le operazioni di caricamento e archiviazione.  
  
-   Eseguire l'inline di una funzione in un modulo anche quando è definita in un altro modulo.  
  
 I file con estensione obj prodotti con **\/GL** non saranno disponibili per utilità del linker come [EDITBIN](../../build/reference/editbin-reference.md) e [DUMPBIN](../../build/reference/dumpbin-reference.md).  
  
 Se si compila il programma con **\/GL** e [\/c](../../build/reference/c-compile-without-linking.md), sarà necessario utilizzare l'opzione del linker \/LTCG per creare il file di output.  
  
 [\/ZI](../../build/reference/z7-zi-zi-debug-information-format.md) non può essere utilizzato con **\/GL**  
  
 Il formato dei file creati con **\/GL** nella versione corrente potrebbe risultare non leggibile nelle versioni di Visual C\+\+ successive.  Non è quindi opportuno fornire un file lib composto da file obj creati con l'opzione **\/GL**, a meno di non essere disposti a distribuirne copie per tutte le versioni di Visual C\+\+ che si prevede gli utenti utilizzino, ora e in futuro.  
  
 I file obj creati con **\/GL** e i file di intestazione precompilata non devono essere utilizzati per compilare un file lib, a meno che quest'ultimo non venga collegato sullo stesso computer in cui è stato prodotto il file obj con l'opzione **\/GL**.  Le informazioni provenienti dal file di intestazione precompilato del file obj saranno necessarie in fase di collegamento.  
  
 Per ulteriori informazioni sulle ottimizzazioni disponibili e sulle limitazioni di ottimizzazione dell'intero programma, vedere [\/LTCG](../../build/reference/ltcg-link-time-code-generation.md).  **\/GL** che mette a disposizione ottimizzazione PGO; vedere \/LTCG.  Quando si esegue la compilazione per le ottimizzazioni PGO e si desidera che queste ultime operino l'ordinamento delle funzioni, è necessario utilizzare [\/Gy](../../build/reference/gy-enable-function-level-linking.md) o un'opzione del compilatore che implica \/Gy.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Per informazioni su come specificare **\/GL** nell'ambiente di sviluppo, vedere [\/LTCG \(Generazione di codice in fase di collegamento\)](../../build/reference/ltcg-link-time-code-generation.md).  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.WholeProgramOptimization%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)