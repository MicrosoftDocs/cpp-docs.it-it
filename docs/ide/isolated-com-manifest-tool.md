---
title: "COM isolato, Strumento Manifesto, Propriet&#224; di configurazione, finestra di dialogo Pagine delle propriet&#224; di &lt;nomeprogetto&gt; | Microsoft Docs"
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
  - "VC.Project.VCManifestTool.RegistrarScriptFile"
  - "VC.Project.VCManifestTool.ComponentFileName"
  - "VC.Project.VCManifestTool.TypeLibraryFile"
  - "VC.Project.VCManifestTool.ReplacementsFile"
dev_langs: 
  - "C++"
ms.assetid: 457582b8-cfde-49c0-92e3-3a6b9e8c08eb
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COM isolato, Strumento Manifesto, Propriet&#224; di configurazione, finestra di dialogo Pagine delle propriet&#224; di &lt;nomeprogetto&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare questa finestra di dialogo per specificare le opzioni **COM isolato** di [Mt.exe](http://msdn.microsoft.com/library/aa375649).  
  
 Per accedere alla finestra di dialogo, aprire le pagine delle proprietà del progetto o la finestra delle proprietà.  Espandere il nodo **Strumento Manifesto** in **Proprietà comuni**, quindi selezionare **COM isolato**.  
  
## Elenco attività  
  
-   [Procedura: compilare applicazioni isolate per l'utilizzo di componenti COM](../build/how-to-build-isolated-applications-to-consume-com-components.md)  
  
## Elenco UIElement  
 **File libreria dei tipi**  
 Utilizza l'opzione \/tlb per specificare il nome file della libreria dei tipi \(file TLB\) che verrà utilizzato dallo strumento Manifesto per generare il file del manifesto.  
  
 **File script registrazione**  
 Utilizza l'opzione \/rgs per specificare il nome file dello script di registrazione \(file RGS\) che verrà utilizzato dallo strumento Manifesto per generare il file del manifesto.  
  
 **Nome file componente**  
 Utilizza l'opzione \/dll per specificare il nome della risorsa che verrà generata dallo strumento Manifesto.  È necessario specificare un valore per la proprietà quando è specificato un valore per **File libreria dei tipi** o **File script registrazione**.  
  
 **File sostitutivo**  
 Utilizza l'opzione \/replacements per specificare il percorso completo al file che contiene i valori delle stringhe sostituibili nel file RGS.  
  
## Vedere anche  
 [\_win32\_isolated\_applications](http://msdn.microsoft.com/library/aa375190)   
 [Assembly side\-by\-side](_win32_side_by_side_assemblies)   
 [ClickOnce Application Manifest](../Topic/ClickOnce%20Application%20Manifest.md)   
 [Pagine delle proprietà dello strumento Manifesto](../ide/manifest-tool-property-pages.md)   
 [Procedura: aprire le pagine delle proprietà dei progetti](../misc/how-to-open-project-property-pages.md)   
 [Procedura: modificare finestre delle proprietà di progetto](../misc/how-to-edit-project-property-sheets.md)