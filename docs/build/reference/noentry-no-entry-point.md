---
title: "/NOENTRY (nessun punto di ingresso) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.ResourceOnlyDLL"
  - "/noentry"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/NOENTRY (opzione del linker) [C++]"
  - "DLL [C++], creazione"
  - "punti di ingresso [C++], specifica del linker"
  - "NOENTRY (opzione del linker)"
  - "-NOENTRY (opzione del linker)"
  - "DLL di sole risorse [C++], creazione"
ms.assetid: 0214dd41-35ad-43ab-b892-e636e038621a
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# /NOENTRY (nessun punto di ingresso)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/NOENTRY  
```  
  
## Note  
 L'opzione \/NOENTRY è obbligatoria per la creazione di una DLL di sole risorse che non contiene codice eseguibile.  Per altre informazioni, vedere [Creazione di una DLL di sole risorse](../../build/creating-a-resource-only-dll.md).  
  
 Usare questa opzione per impedire che in LINK venga collegato un riferimento a `_main` nella DLL.  
  
### Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Selezionare la pagina delle proprietà **Avanzate**.  
  
4.  Modificare la proprietà **Nessun punto di ingresso**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ResourceOnlyDLL%2A>.  
  
## Vedere anche  
 [Creazione di una DLL di sole risorse](../../build/creating-a-resource-only-dll.md)   
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)