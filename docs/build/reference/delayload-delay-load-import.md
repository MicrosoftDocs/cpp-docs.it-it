---
title: "/DELAYLOAD (Importazione a caricamento ritardato) | Microsoft Docs"
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
  - "/delayload"
  - "VC.Project.VCLinkerTool.DelayLoadDLLS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/DELAYLOAD (opzione del linker)"
  - "caricamento ritardato di DLL, /DELAYLOAD (opzione)"
  - "DELAYLOAD (opzione del linker)"
  - "-DELAYLOAD (opzione del linker)"
ms.assetid: 39ea0f1e-5c01-450f-9c75-2d9761ff9b28
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /DELAYLOAD (Importazione a caricamento ritardato)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/DELAYLOAD:dllname  
  
```  
  
## Parametri  
 `dllname`  
 Il nome di una DLL di cui si vuole ritardare il caricamento.  
  
## Note  
 L'opzione \/DELAYLOAD fa sì che la DLL specificata da `dllname` venga caricata solo alla prima chiamata da parte del programma a una funzione nella DLL.  Per altre informazioni, vedere [Supporto per le DLL a caricamento ritardato nel linker](../../build/reference/linker-support-for-delay-loaded-dlls.md).  È possibile usare questa opzione tutte le volte necessarie per specificare tutte le DLL scelte.  È necessario usare Delayimp.lib quando il programma viene collegato oppure implementare una funzione di supporto al caricamento ritardato.  
  
 L'opzione [\/DELAY](../../build/reference/delay-delay-load-import-settings.md) specifica il binding e il caricamento di opzioni per ogni DLL a caricamento ritardato.  
  
### Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Nella cartella **Linker**, selezionare la pagina delle proprietà **Input**.  
  
3.  Modificare la proprietà **DLL a caricamento ritardato**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.DelayLoadDLLs%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)