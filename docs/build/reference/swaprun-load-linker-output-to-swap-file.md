---
title: -SWAPRUN (Carica l'Output del Linker nel File di scambio) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCLinkerTool.SwapRunFromNet
- /swaprun
- VC.Project.VCLinkerTool.SwapRunFromCD
dev_langs: C++
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
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a3b6829a20e80ab8548460205169e1cd258694e0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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