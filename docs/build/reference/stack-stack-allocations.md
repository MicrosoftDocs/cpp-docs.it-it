---
title: "/STACK (Allocazioni stack) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.StackReserveSize"
  - "VC.Project.VCLinkerTool.StackCommitSize"
  - "/stack"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "STACK (opzione del linker)"
  - "-STACK (opzione del linker)"
  - "allocazione della memoria, stack"
  - "/STACK (opzione del linker)"
  - "stack, impostazione delle dimensioni"
ms.assetid: 73283660-e4bd-47cc-b5ca-04c5d739034c
caps.latest.revision: 16
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /STACK (Allocazioni stack)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/STACK:reserve[,commit]  
```  
  
## Note  
 L'opzione \/STACK consente di impostare la dimensione in byte dello stack.  Utilizzare tale opzione solo durante la compilazione di un file exe.  
  
 Il valore `reserve` consente di specificare l'allocazione totale per lo stack nella memoria virtuale.  Per computer ARM, x86 e [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], la dimensione predefinita dello stack è 1 MB.  
  
 L'argomento `commit` viene interpretato in modo diverso in base al sistema operativo.  In WindowsRT specifica la quantità di memoria fisica da allocare alla volta.  Vincolando memoria virtuale viene riservato spazio nel file di paging.  Un valore di `commit` più alto fa risparmiare tempo quando nell'applicazione è necessario maggior spazio per lo stack, ma aumenta i requisiti di memoria e in alcuni casi il tempo di avvio.  Per computer ARM, x86 e [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], il valore di commit predefinito è 4 KB.  
  
 Specificare i valori `reserve` e `commit` in notazione decimale o in linguaggio C.  
  
 È inoltre possibile impostare la dimensione dello stack utilizzando l'istruzione [STACKSIZE](../../build/reference/stacksize.md) in un file di definizione moduli \(def\).  **STACKSIZE** consente di eseguire l'override dell'opzione Stack Allocations \(\/STACK\) se sono specificate entrambe.  È possibile modificare la dimensione dello stack dopo la compilazione del file exe utilizzando lo strumento [EDITBIN](../../build/reference/editbin-reference.md).  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Selezionare la pagina delle proprietà **Sistema**.  
  
4.  Modificare una delle seguenti proprietà:  
  
    -   **Dimensione stack commit**  
  
    -   **Dimensione stack riservata**  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere le proprietà <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.StackCommitSize%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.StackReserveSize%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)