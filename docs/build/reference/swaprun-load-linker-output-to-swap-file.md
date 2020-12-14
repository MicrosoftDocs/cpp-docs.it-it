---
description: Altre informazioni su:/SWAPRUN (caricamento dell'output del linker nel file di scambio)
title: /SWAPRUN (caricamento dell'output del linker nel file di scambio)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.SwapRunFromNet
- /swaprun
- VC.Project.VCLinkerTool.SwapRunFromCD
helpviewer_keywords:
- -SWAPRUN linker option
- files [C++], LINK
- LINK tool [C++], output
- linker [C++], copying output to swap file
- swap file for linker output
- output files, linker
- /SWAPRUN linker option
- SWAPRUN linker option
ms.assetid: 4a1e7f46-4399-4161-8dfc-d6a71beaf683
ms.openlocfilehash: f62d5e32432a2c738b7782c0fbf0cd4fd76a7f9a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97230211"
---
# <a name="swaprun-load-linker-output-to-swap-file"></a>/SWAPRUN (caricamento dell'output del linker nel file di scambio)

```
/SWAPRUN:{NET|CD}
```

## <a name="remarks"></a>Commenti

L'opzione/SWAPRUN indica al sistema operativo di copiare prima di tutto l'output del linker in un file di scambio e quindi di eseguire l'immagine da questa posizione. Si tratta di una funzionalità di Windows NT 4,0 (e versioni successive).

Se si specifica NET, il sistema operativo copia prima di tutto l'immagine binaria dalla rete in un file di scambio e la carica da questa posizione. Questa opzione è utile per l'esecuzione di applicazioni in rete. Quando si specifica CD, il sistema operativo copia l'immagine su un disco rimovibile in un file di paging e quindi lo carica.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **sistema** .

1. Modificare una delle proprietà seguenti:

   - **Eseguire lo swap da CD**

   - **Esegui swapping dalla rete**

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere le proprietà <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.SwapRunFromCD%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.SwapRunFromNet%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
