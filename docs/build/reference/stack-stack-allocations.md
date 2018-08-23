---
title: -STACK (allocazioni Stack) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.StackReserveSize
- VC.Project.VCLinkerTool.StackCommitSize
- /stack
dev_langs:
- C++
helpviewer_keywords:
- STACK linker option
- -STACK linker option
- memory allocation, stack
- /STACK linker option
- stack, setting size
ms.assetid: 73283660-e4bd-47cc-b5ca-04c5d739034c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 29ed2efa73d3ec1014bf0a65e7b4b1b1b85cf879
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42573345"
---
# <a name="stack-stack-allocations"></a>/STACK (Allocazioni stack)
```  
/STACK:reserve[,commit]  
```  
  
## <a name="remarks"></a>Note  
 Essa è imposta la dimensione dello stack in byte. Usare questa opzione solo quando si compila un file .exe.  
  
 Il `reserve` valore consente di specificare l'allocazione totale dello stack nella memoria virtuale. Per ARM, x86 e x64 computer, la dimensione predefinita è 1 MB.  
  
 `commit` viene interpretato dal sistema operativo. In WindowsRT specifica la quantità di memoria fisica da allocare alla volta. Memoria virtuale vincolata fa sì che lo spazio da riservare nel file di paging. Un valore di `commit` più alto fa risparmiare tempo quando nell'applicazione è necessario maggior spazio per lo stack, ma aumenta i requisiti di memoria e in alcuni casi il tempo di avvio. Per ARM, x86 e x64 computer, il valore di commit predefinito è 4 KB.  
  
 Specificare i valori `reserve` e `commit` in notazione decimale o in linguaggio C.  
  
 Un altro modo per impostare le dimensioni dello stack è con il [STACKSIZE](../../build/reference/stacksize.md) istruzione in un file di definizione moduli (def). **STACKSIZE** sostituisce le allocazioni di Stack (/stack) se vengono specificati entrambi. È possibile modificare la dimensione dello stack dopo che il file .exe viene compilato con il [EDITBIN](../../build/reference/editbin-reference.md) dello strumento.  
  
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