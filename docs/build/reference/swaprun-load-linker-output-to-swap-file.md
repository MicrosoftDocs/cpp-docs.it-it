---
title: -SWAPRUN (Carica l'Output del Linker nel File di scambio) | Documenti Microsoft
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
ms.openlocfilehash: 522cd693da1b4e1a72d11119f622d862413b409b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32377417"
---
# <a name="swaprun-load-linker-output-to-swap-file"></a>/SWAPRUN (caricamento dell'output del linker nel file di scambio)
```  
/SWAPRUN:{NET|CD}  
```  
  
## <a name="remarks"></a>Note  
 L'opzione /SWAPRUN indica al sistema operativo di copiare prima il linker di output in un file di scambio e quindi eseguire l'immagine da qui. Si tratta di una funzionalità di Windows NT 4.0 (e versioni successiva).  
  
 Se si specifica NET, il sistema operativo prima copiare l'immagine binaria dalla rete in un file di scambio e caricarlo da qui. Questa opzione è utile per l'esecuzione di applicazioni in rete. Quando si specifica CD, il sistema operativo verrà copiare l'immagine su un disco rimovibile in un file di paging e quindi nel caricarla.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic su di **sistema** pagina delle proprietà.  
  
4.  Modificare una delle seguenti proprietà:  
  
    -   **Esecuzione swap da CD**  
  
    -   **Esecuzione swap da rete**  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere le proprietà <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.SwapRunFromCD%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.SwapRunFromNet%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)