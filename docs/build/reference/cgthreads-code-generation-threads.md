---
title: "/cgthreads (thread di generazione di codice) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/cgthreads"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Opzione del compilatore /cgthreads (C++)"
  - "cgthreads"
  - "Opzione del compilatore cgthreads (C++)"
  - "Opzione del compilatore -cgthreads (C++)"
ms.assetid: 64bc768c-6caa-4baf-9dea-7cfa1ffb01c2
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# /cgthreads (thread di generazione di codice)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta il numero di thread cl.exe da usare per l'ottimizzazione e la generazione di codice.  
  
## Sintassi  
  
```  
/cgthreads[1-8]  
```  
  
## Argomenti  
 numero  
 Numero massimo di thread per l'uso da parte di cl.exe, nell'intervallo compreso tra 1 e 8.  
  
## Note  
 L'opzione **\/cgthreads** specifica il numero massimo di thread utilizzabile in parallelo da cl.exe per le fasi di ottimizzazione e generazione di codice della compilazione.  Si noti che non è consentito l'uso dello spazio tra **\/cgthreads** e l'argomento `number`.  cl.exe usa quattro thread per impostazione predefinita, come se fosse specificato **\/cgthreads4**.  Se sono disponibili più core del processore, un valore `number` maggiore può accelerare i tempi di compilazione.  L'opzione è particolarmente utile quando combinata con [\/GL \(Ottimizzazione intero programma\)](../../build/reference/gl-whole-program-optimization.md).  
  
 È possibile specificare più livelli di parallelismo per una compilazione.  L'opzione **\/maxcpucount** di msbuild.exe specifica il numero di processi MSBuild eseguibili in parallelo.  Il flag del compilatore [\/MP \(compilazione con più processi\)](../../build/reference/mp-build-with-multiple-processes.md) specifica il numero di processi cl.exe che possono compilare simultaneamente i file di origine.  L'opzione **\/cgthreads** specifica il numero di thread usati da ogni processo cl.exe.  Dato che il processore può eseguire solo tanti thread simultanei quanti sono i core del processore, non è utile specificare valori maggiori per tutte queste opzioni simultaneamente e potrebbe risultare controproducente.  Per altre informazioni su come compilare progetti in parallelo, vedere [Building Multiple Projects in Parallel](../Topic/Building%20Multiple%20Projects%20in%20Parallel%20with%20MSBuild.md).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Proprietà di configurazione**, **C\/C\+\+**.  
  
3.  Selezionare la pagina delle proprietà **Riga di comando**.  
  
4.  Modificare la proprietà **Opzioni aggiuntive** in modo da includere **\/cgthreads**`N`, dove `N` è un valore compreso tra 1 e 8, quindi scegliere **OK**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)