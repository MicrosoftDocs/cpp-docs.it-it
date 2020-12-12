---
description: Altre informazioni su:/HEAP (Imposta dimensione heap)
title: /HEAP (Imposta la dimensione dell'heap)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.HeapCommitSize
- VC.Project.VCLinkerTool.HeapReserveSize
helpviewer_keywords:
- -HEAP linker option
- heap allocation, setting heap size
- /HEAP linker option
- HEAP linker option
ms.assetid: a3f71927-7f1d-492c-9fdb-dfccb1a043da
ms.openlocfilehash: 9831180925d5d669c799982d021d75ea31a2dae5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97191667"
---
# <a name="heap-set-heap-size"></a>/HEAP (Imposta la dimensione dell'heap)

```
/HEAP:reserve[,commit]
```

## <a name="remarks"></a>Commenti

L'opzione/HEAP consente di impostare le dimensioni in byte dell'heap. Questa opzione è utilizzabile solo quando si compila un file con estensione exe.

L'argomento *Reserve* specifica l'allocazione totale dell'heap nella memoria virtuale. Le dimensioni predefinite dell'heap sono pari a 1 MB. Il linker arrotonda il valore specificato ai 4 byte più vicini.

L' `commit` argomento facoltativo specifica la quantità di memoria fisica da allocare alla volta. La memoria virtuale di cui è stato eseguito il commit causa la riservatezza dello spazio nel file di paging. Un valore più alto consente di `commit` risparmiare tempo quando l'applicazione necessita di più spazio heap, ma aumenta i requisiti di memoria e possibilmente il tempo di avvio.

Specificare la *riserva* e `commit` i valori in notazione decimale o in linguaggio C.

Questa funzionalità è disponibile anche tramite un file di definizione del modulo con [HEAPSIZE](heapsize.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **sistema** .

1. Modificare la proprietà **dimensione commit heap** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Controllare <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.HeapReserveSize%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.HeapCommitSize%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
