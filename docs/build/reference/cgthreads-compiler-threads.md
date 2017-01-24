---
title: "/CGTHREADS (thread del compilatore) | Microsoft Docs"
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
helpviewer_keywords: 
  - "Opzione del linker /CGTHREADS"
  - "Opzione del linker CGTHREADS"
  - "Opzione del linker -CGTHREADS"
ms.assetid: 4b52cfdb-3702-470b-9580-fabeb1417488
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /CGTHREADS (thread del compilatore)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta il numero di thread cl.exe da usare per l'ottimizzazione e la generazione di codice quando si specifica la generazione del codice in fase di collegamento.  
  
## Sintassi  
  
```  
/CGTHREADS:[1-8]  
```  
  
## Argomenti  
 numero  
 Numero massimo di thread per l'uso da parte di cl.exe, nell'intervallo compreso tra 1 e 8.  
  
## Note  
 L'opzione **\/CGTHREADS** specifica il numero massimo di thread utilizzabile in parallelo da cl.exe per le fasi di ottimizzazione e generazione di codice della compilazione quando si specifica la generazione del codice \([\/LTCG](../../build/reference/ltcg-link-time-code-generation.md)\) in fase di collegamento.  cl.exe usa quattro thread per impostazione predefinita, come se fosse specificato **\/CGTHREADS:4**.  Se sono disponibili più core del processore, un valore `number` maggiore può accelerare i tempi di compilazione.  
  
 È possibile specificare più livelli di parallelismo per una compilazione.  L'opzione **\/maxcpucount** di msbuild.exe specifica il numero di processi MSBuild eseguibili in parallelo.  Il flag del compilatore [\/MP \(compilazione con più processi\)](../../build/reference/mp-build-with-multiple-processes.md) specifica il numero di processi cl.exe che possono compilare simultaneamente i file di origine.  L'opzione del compilatore [\/cgthreads](../../build/reference/cgthreads-code-generation-threads.md) specifica il numero di thread usati da ogni processo cl.exe.  Dato che il processore può eseguire solo tanti thread simultanei quanti sono i core del processore, non è utile specificare valori maggiori per tutte queste opzioni simultaneamente e potrebbe risultare controproducente.  Per altre informazioni su come compilare progetti in parallelo, vedere [Building Multiple Projects in Parallel](../Topic/Building%20Multiple%20Projects%20in%20Parallel%20with%20MSBuild.md).  
  
### Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Proprietà di configurazione**, **Linker**.  
  
3.  Selezionare la pagina delle proprietà **Riga di comando**.  
  
4.  Modificare la proprietà **Opzioni aggiuntive** per includere **\/CGTHREADS:**`number`, dove `number` è un valore compreso tra 1 e 8, quindi scegliere **OK**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni del linker](../../build/reference/linker-options.md)   
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)