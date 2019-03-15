---
title: /HEAP (Imposta la dimensione dell'heap)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.HeapCommitSize
- /heap
- VC.Project.VCLinkerTool.HeapReserveSize
helpviewer_keywords:
- -HEAP linker option
- heap allocation, setting heap size
- /HEAP linker option
- HEAP linker option
ms.assetid: a3f71927-7f1d-492c-9fdb-dfccb1a043da
ms.openlocfilehash: 715eaa358d052d4ae646f38f2e784f0235dffccb
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57813294"
---
# <a name="heap-set-heap-size"></a>/HEAP (Imposta la dimensione dell'heap)

```
/HEAP:reserve[,commit]
```

## <a name="remarks"></a>Note

L'opzione /HEAP imposta le dimensioni dell'heap in byte. Questa opzione è solo per l'uso durante la creazione di un file .exe.

Il *riservare* argomento consente di specificare l'allocazione totale per l'heap nella memoria virtuale. Le dimensioni dell'heap predefinito sono 1 MB. Il linker viene arrotondato per eccesso il valore specificato per i più vicini 4 byte.

L'opzione facoltativa `commit` argomento specifica la quantità di memoria fisica da allocare alla volta. Memoria virtuale vincolata fa sì che lo spazio da riservare nel file di paging. Un livello più elevato `commit` valore consente di risparmiare tempo quando l'applicazione richiede più spazio nell'heap, ma aumenta i requisiti di memoria ed eventualmente il tempo di avvio.

Specificare il *riservare* e `commit` valori in notazione decimale o del linguaggio C.

Questa funzionalità è anche disponibile tramite un file di definizione moduli con [HEAPSIZE](heapsize.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **sistema** pagina delle proprietà.

1. Modificare il **dimensione Heap Commit** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.HeapReserveSize%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.HeapCommitSize%2A>.

## <a name="see-also"></a>Vedere anche

[Riferimento del linker MSVC](linking.md)<br/>
[Opzioni del Linker MSVC](linker-options.md)
