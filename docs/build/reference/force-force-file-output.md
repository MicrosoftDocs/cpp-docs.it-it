---
title: "/FORCE (Forza l&#39;output del file) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.ForceLink"
  - "/force"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/FORCE (opzione del linker)"
  - "output di file nel linker"
  - "FORCE (opzione del linker)"
  - "-FORCE (opzione del linker)"
ms.assetid: b1e9a218-a5eb-4e60-a4a4-65b4be15e5da
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# /FORCE (Forza l&#39;output del file)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/FORCE:[MULTIPLE|UNRESOLVED]  
```  
  
## Note  
 L'opzione \/FORCE indica al linker che è necessario creare un file exe o una DLL valida anche se un simbolo è con riferimenti ma non definito oppure è definito più volte.  
  
 L'opzione \/FORCE accetta un argomento facoltativo:  
  
-   Utilizzare \/FORCE:MULTIPLE per creare un file di output indipendentemente dal fatto che LINK trovi più definizioni per un simbolo.  
  
-   Utilizzare \/FORCE:UNRESOLVED per creare un file di output indipendentemente dal fatto che LINK trovi un simbolo non definito. \/FORCE:UNRESOLVED verrà ignorato se il simbolo del punto di ingresso non è risolto.  
  
 Se si specifica \/FORCE senza argomenti, verranno considerati sia i simboli non risolti che quelli definiti più volte.  
  
 È possibile che un file creato con questa opzione presenti un'esecuzione anomala.  Quando è specificata l'opzione \/FORCE, il collegamento incrementale non viene eseguito.  
  
 Se un modulo viene compilato con **\/clr**, **\/FORCE** non creerà un'immagine.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)