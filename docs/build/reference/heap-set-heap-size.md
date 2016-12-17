---
title: "/HEAP (Imposta la dimensione dell&#39;heap) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.HeapCommitSize"
  - "/heap"
  - "VC.Project.VCLinkerTool.HeapReserveSize"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/HEAP (opzione del linker)"
  - "allocazione di heap, impostazione della dimensione heap"
  - "HEAP (opzione del linker)"
  - "-HEAP (opzione del linker)"
ms.assetid: a3f71927-7f1d-492c-9fdb-dfccb1a043da
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /HEAP (Imposta la dimensione dell&#39;heap)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/HEAP:reserve[,commit]  
```  
  
## Note  
 L'opzione \/HEAP consente di impostare la dimensione in byte dell'heap.  È possibile utilizzare tale opzione solo durante la compilazione di un file exe.  
  
 L'argomento *reserve* specifica l'allocazione totale per l'heap nella memoria virtuale.  La dimensione predefinita dell'heap è pari a 1 MB.  Il linker arrotonda il valore specificato ai 4 byte più vicini.  
  
 L'argomento facoltativo `commit` viene interpretato nel sistema operativo.  In Windows NT e Windows 2000 specifica la quantità di memoria fisica da allocare alla volta.  Vincolando memoria virtuale viene riservato spazio nel file di paging.  Un valore di `commit` più alto fa risparmiare tempo quando nell'applicazione è necessario maggior spazio per l'heap, ma aumenta i requisiti di memoria e in alcuni casi il tempo di avvio.  
  
 Specificare i valori *reserve* e `commit` in notazione decimale o in linguaggio C.  
  
 Questa funzionalità è disponibile anche attraverso un file di definizione moduli con [HEAPSIZE](../../build/reference/heapsize.md).  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Sistema**.  
  
4.  Modificare la proprietà **Dimensione heap commit**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.HeapReserveSize%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.HeapCommitSize%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)