---
title: "Avanzate, Strumento Manifesto, Propriet&#224; di configurazione, finestra di dialogo Pagine delle propriet&#224; di &lt;nomeprogetto&gt; | Microsoft Docs"
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
  - "VC.Project.VCManifestTool.KeyFile"
  - "VC.Project.VCManifestTool.UpdateFileHashes"
  - "VC.Project.VCManifestTool.UpdateFileHashesSearchPath"
  - "VC.Project.VCManifestTool.ValidateSignature"
  - "VC.Project.VCManifestTool.KeyContainer"
dev_langs: 
  - "C++"
ms.assetid: 3d587366-05ea-4956-a978-313069660735
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Avanzate, Strumento Manifesto, Propriet&#224; di configurazione, finestra di dialogo Pagine delle propriet&#224; di &lt;nomeprogetto&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare questa finestra di dialogo per specificare le opzioni avanzate di [Mt.exe](http://msdn.microsoft.com/library/aa375649).  
  
 Per accedere alla finestra di dialogo, aprire le pagine delle proprietà del progetto o la finestra delle proprietà.  Espandere il nodo **Strumento Manifesto** in **Proprietà di configurazione**, quindi selezionare **Avanzate**.  
  
## Elenco UIElement  
 **Aggiorna hash dei file**  
 Utilizza l'opzione \/hashupdate per specificare che lo strumento Manifesto dovrà calcolare l'hash dei file specificati negli elementi `<file>`, quindi aggiornare gli attributi hash con i valori ottenuti.  
  
 **Percorso di ricerca aggiornamento hash dei file**  
 Specifica il percorso dei file indicati negli elementi `<file>`.  Questa opzione utilizza anche l'opzione \/hashupdate.  
  
## Vedere anche  
 [\<file\> Element](../Topic/%3Cfile%3E%20Element%20\(ClickOnce%20Application\).md)   
 [ClickOnce Application Manifest](../Topic/ClickOnce%20Application%20Manifest.md)   
 [Pagine delle proprietà dello strumento Manifesto](../ide/manifest-tool-property-pages.md)   
 [Procedura: aprire le pagine delle proprietà dei progetti](../misc/how-to-open-project-property-pages.md)   
 [Procedura: modificare finestre delle proprietà di progetto](../misc/how-to-edit-project-property-sheets.md)