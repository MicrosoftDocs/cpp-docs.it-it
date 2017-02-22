---
title: "/hotpatch (Crea immagine con funzionalit&#224; di patch a caldo) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/hotpatch"
  - "VC.Project.VCCLCompilerTool.CreateHotpatchableImage"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "hot patch"
  - "-hotpatch (opzione del compilatore) [C++]"
  - "/hotpatch (opzione del compilatore) [C++]"
  - "hotpatch"
ms.assetid: aad539b6-c053-4c78-8682-853d98327798
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 18
---
# /hotpatch (Crea immagine con funzionalit&#224; di patch a caldo)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Prepara un'immagine per l'applicazione di una patch a caldo.  
  
## Sintassi  
  
```  
/hotpatch  
```  
  
## Note  
 Quando in una compilazione viene utilizzato **\/hotpatch**, il compilatore garantisce che la prima istruzione di ciascuna funzione sia almeno a due byte, ovvero la dimensione richiesta per l'applicazione di una patch a caldo.  
  
 Per completare le operazioni preliminari per applicare una patch a caldo ad un immagine, dopo avere utilizzato **\/hotpatch** per compilare, è necessario utilizzare [\/FUNCTIONPADMIN \(Crea immagine con funzionalità di patch a caldo\)](../../build/reference/functionpadmin-create-hotpatchable-image.md) per il collegamento.  Quando un'immagine viene compilata e collegata utilizzando una singola chiamata di cl.exe, **\/hotpatch** implica **\/functionpadmin**.  
  
 Poiché le istruzioni sono sempre di due byte o più grandi sull'architettura ARM e poiché la compilazione x64 viene sempre considerata come se **\/hotpatch** fosse stata specificata, non è necessario specificare **\/hotpatch** durante la compilazione di queste destinazioni; tuttavia, è comunque necessario eseguire il collegamento utilizzando **\/functionpadmin** per creare un'immagine su cui è applicabile una patch a caldo.  L'opzione del compilatore **\/hotpatch** ha effetto solo sulla compilazione x86.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Selezionare la cartella **C\/C\+\+**.  
  
3.  Selezionare la pagina delle proprietà **Riga di comando**.  
  
4.  Aggiungere l'opzione del compilatore nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Istruzioni utili  
 Per ulteriori informazioni sulla gestione degli aggiornamenti, vedere "Security Guidance for Update Management" all'indirizzo [http:\/\/www.microsoft.com\/technet\/security\/guidance\/PatchManagement.mspx](http://www.microsoft.com/technet/security/guidance/PatchManagement.mspx).  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)