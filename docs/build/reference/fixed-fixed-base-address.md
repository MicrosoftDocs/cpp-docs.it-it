---
title: "/FIXED (Indirizzo di base fisso) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/fixed"
  - "VC.Project.VCLinkerTool.FixedBaseAddress"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/FIXED (opzione del linker)"
  - "FIXED (opzione del linker)"
  - "-FIXED (opzione del linker)"
  - "indirizzo di base preferito per il caricamento dei programmi"
ms.assetid: 929bba5e-b7d8-40ed-943e-056aa3710fc5
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# /FIXED (Indirizzo di base fisso)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/FIXED[:NO]  
```  
  
## Note  
 Comunica al sistema operativo di caricare il programma solo all'indirizzo di base preferito.  Se tale indirizzo non è disponibile, il file non verrà caricato.  Per ulteriori informazioni, vedere [\/BASE \(indirizzo di base\)](../../build/reference/base-base-address.md).  
  
 \/FIXED:NO è l'impostazione predefinita per una DLL e \/FIXED è l'impostazione predefinita per qualsiasi altro tipo di progetto.  
  
 Quando è specificata l'opzione \/FIXED, non viene generata alcuna sezione di rilocazione nel programma.  In fase di esecuzione, se il sistema operativo non riesce a caricare il programma all'indirizzo specificato, genererà un messaggio di errore e non caricherà il programma .  
  
 Specificare FIXED:NO per generare una sezione di rilocazione nel programma.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Selezionare la pagina delle proprietà **Riga di comando**.  
  
4.  Digitare il nome e il valore dell'opzione nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)