---
title: -HEAP (imposta la dimensione dell'Heap) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.HeapCommitSize
- /heap
- VC.Project.VCLinkerTool.HeapReserveSize
dev_langs:
- C++
helpviewer_keywords:
- -HEAP linker option
- heap allocation, setting heap size
- /HEAP linker option
- HEAP linker option
ms.assetid: a3f71927-7f1d-492c-9fdb-dfccb1a043da
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7b968b3c8e9063eea897c70d4ae2a62a9a232d6b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="heap-set-heap-size"></a>/HEAP (Imposta la dimensione dell'heap)
```  
/HEAP:reserve[,commit]  
```  
  
## <a name="remarks"></a>Note  
 L'opzione /HEAP imposta le dimensioni dell'heap in byte. Questa opzione è solo per l'utilizzo durante la compilazione di un file .exe.  
  
 Il *riservare* argomento specifica l'allocazione totale per l'heap nella memoria virtuale. Le dimensioni dell'heap predefinito sono 1 MB. Il linker arrotonda per eccesso il valore specificato per i più vicino 4 byte.  
  
 Facoltativo `commit` argomento specifica la quantità di memoria fisica da allocare alla volta. Memoria virtuale vincolata consente lo spazio da riservare nel file di paging. Un valore più alto `commit` valore consente di risparmiare tempo quando l'applicazione richiede più spazio nell'heap, ma aumenta i requisiti di memoria ed eventualmente il tempo di avvio.  
  
 Specificare il *riservare* e `commit` valori in notazione decimale o in linguaggio C.  
  
 Questa funzionalità è disponibile anche tramite un file di definizione moduli con [HEAPSIZE](../../build/reference/heapsize.md).  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic su di **sistema** pagina delle proprietà.  
  
4.  Modificare il **dimensione Heap Commit** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.HeapReserveSize%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.HeapCommitSize%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)