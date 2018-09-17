---
title: -SWAPRUN (caricamento dell'Output del Linker nel File di scambio) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.SwapRunFromNet
- /swaprun
- VC.Project.VCLinkerTool.SwapRunFromCD
dev_langs:
- C++
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1867eb55f9ebcaba2d29f7b9b4b2f44a68164390
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45717496"
---
# <a name="swaprun-load-linker-output-to-swap-file"></a>/SWAPRUN (caricamento dell'output del linker nel file di scambio)

```
/SWAPRUN:{NET|CD}
```

## <a name="remarks"></a>Note

L'opzione /SWAPRUN indica al sistema operativo di copiare prima al linker di output in un file di scambio e quindi eseguire l'immagine da tale posizione. Si tratta di una funzionalità di Windows NT 4.0 (e versioni successiva).

Se si specifica NET, il sistema operativo verrà innanzitutto copiare l'immagine binaria dalla rete in un file di scambio e caricarlo da tale posizione. Questa opzione è utile per l'esecuzione di applicazioni in rete. Quando si specifica CD, il sistema operativo sarà copiare l'immagine su un disco rimovibile in un file di paging e quindi caricarlo.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **sistema** pagina delle proprietà.

1. Modificare una delle seguenti proprietà:

   - **Esecuzione swap da CD**

   - **Esecuzione swap da rete**

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere le proprietà <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.SwapRunFromCD%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.SwapRunFromNet%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)