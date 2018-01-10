---
title: -STACK (allocazioni Stack) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCLinkerTool.StackReserveSize
- VC.Project.VCLinkerTool.StackCommitSize
- /stack
dev_langs: C++
helpviewer_keywords:
- STACK linker option
- -STACK linker option
- memory allocation, stack
- /STACK linker option
- stack, setting size
ms.assetid: 73283660-e4bd-47cc-b5ca-04c5d739034c
caps.latest.revision: "16"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6b487ff830abd3dfa97a748c81d541cbd9fdd0b4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="stack-stack-allocations"></a>/STACK (Allocazioni stack)
```  
/STACK:reserve[,commit]  
```  
  
## <a name="remarks"></a>Note  
 Essa è imposta la dimensione dello stack in byte. Utilizzare questa opzione solo quando si compila un file .exe.  
  
 Il `reserve` valore specifica l'allocazione totale per lo stack nella memoria virtuale. Per computer ARM, x86 e [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], la dimensione predefinita dello stack è 1 MB.  
  
 `commit`viene interpretato dal sistema operativo. In WindowsRT specifica la quantità di memoria fisica da allocare alla volta. Memoria virtuale vincolata consente lo spazio da riservare nel file di paging. Un valore di `commit` più alto fa risparmiare tempo quando nell'applicazione è necessario maggior spazio per lo stack, ma aumenta i requisiti di memoria e in alcuni casi il tempo di avvio. Per computer ARM, x86 e [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)], il valore di commit predefinito è 4 KB.  
  
 Specificare i valori `reserve` e `commit` in notazione decimale o in linguaggio C.  
  
 È possibile impostare le dimensioni dello stack con il [STACKSIZE](../../build/reference/stacksize.md) istruzione in un file di definizione moduli (def). **STACKSIZE** sostituisce le allocazioni dello Stack (/stack) se sono specificati entrambi. È possibile modificare la dimensione dello stack dopo che il file .exe viene compilato con la [EDITBIN](../../build/reference/editbin-reference.md) strumento.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **Linker** cartella.  
  
3.  Selezionare il **sistema** pagina delle proprietà.  
  
4.  Modificare una delle seguenti proprietà:  
  
    -   **Dimensione stack Commit**  
  
    -   **Dimensione stack riservata**  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere le proprietà <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.StackCommitSize%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.StackReserveSize%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)