---
title: "/SWAPRUN (caricamento dell&#39;output del linker nel file di scambio) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.SwapRunFromNet"
  - "/swaprun"
  - "VC.Project.VCLinkerTool.SwapRunFromCD"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/SWAPRUN (opzione del linker)"
  - "file [C++], LINK"
  - "LINK (strumento) [C++], output"
  - "linker [C++], copia di output nel file di scambio"
  - "file di output, linker"
  - "file di scambio per l'output del linker"
  - "SWAPRUN (opzione del linker)"
  - "-SWAPRUN (opzione del linker)"
ms.assetid: 4a1e7f46-4399-4161-8dfc-d6a71beaf683
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /SWAPRUN (caricamento dell&#39;output del linker nel file di scambio)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/SWAPRUN:{NET|CD}  
```  
  
## Note  
 L'opzione \/SWAPRUN indica al sistema operativo di copiare prima l'output del linker in un file di scambio e quindi di eseguire l'immagine da tale file.  Questa è una funzionalità di Windows NT 4.0 e versioni successive.  
  
 Quando si specifica NET, il sistema operativo copierà l'immagine binaria dalla rete in un file di scambio e la caricherà da tale file.  Questa opzione è utile per eseguire applicazioni in rete.  Quando è specificato CD, l'immagine viene dapprima copiata su un disco rimovibile in un file di paging, quindi caricata.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Sistema**.  
  
4.  Modificare una delle seguenti proprietà:  
  
    -   **Esecuzione swap da CD**  
  
    -   **Esecuzione swap da rete**  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere le proprietà <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.SwapRunFromCD%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.SwapRunFromNet%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)