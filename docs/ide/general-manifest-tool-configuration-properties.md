---
title: "Generale, Strumento Manifesto, Propriet&#224; di configurazione, finestra di dialogo Pagine delle propriet&#224; di &lt;nomeprogetto&gt; | Microsoft Docs"
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
  - "VC.Project.VCManifestTool.MergeRulesFile"
  - "VC.Project.VCManifestTool.UseUnicodeResponseFiles"
  - "VC.Project.VCManifestTool.SuppressStartupBanner"
  - "VC.Project.VCManifestTool.UseFAT32Workaround"
  - "VC.Project.VCManifestTool.VerboseOutput"
  - "VC.Project.VCManifestTool.AssemblyIdentity"
dev_langs: 
  - "C++"
ms.assetid: b99368a5-6819-482c-a06e-f2409290cfd1
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Generale, Strumento Manifesto, Propriet&#224; di configurazione, finestra di dialogo Pagine delle propriet&#224; di &lt;nomeprogetto&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare questa finestra di dialogo per specificare le opzioni generali di [Mt.exe](http://msdn.microsoft.com/library/aa375649).  
  
 Per accedere alla finestra di dialogo, aprire le pagine delle proprietà del progetto o la finestra delle proprietà.  Espandere il nodo **Strumento Manifesto** in **Proprietà di configurazione**, quindi selezionare **Generale**.  
  
## Elenco UIElement  
 **Non visualizzare messaggio di avvio**  
 Se si sceglie **Sì \(\/nologo\)** i dati del copyright Microsoft standard verranno nascosti una volta che lo strumento Manifesto sarò attivo.  L'opzione consente di eliminare l'output non desiderato dai file di log quando mt.exe viene eseguito come parte di un processo di compilazione o da un ambiente di compilazione.  
  
 **Output dettagliato**  
 Se si sceglie **Sì \(\/verbose\)** le informazioni di compilazione aggiuntive saranno visualizzate durante la generazione del manifesto.  
  
 **Identità assembly**  
 Utilizza l'opzione \/identity per specificare una stringa di identità che contiene gli attributi per l'[\<assemblyIdentity\> Element](../Topic/%3CassemblyIdentity%3E%20Element%20\(ClickOnce%20Application\).md).  Una stringa di identità inizia con il valore dell'attributo `name`, seguito da coppie *attributo* \= *valore*.  Gli attributi sono delimitati dalla virgola.  
  
 Di seguito è riportato un esempio di stringa di identità:  
  
 `Microsoft.Windows.Common-Controls, processorArchitecture=x86, version=6.0.0.0, type=win32, publicKeyToken=6595b64144ccf1df`  
  
## Vedere anche  
 [ClickOnce Application Manifest](../Topic/ClickOnce%20Application%20Manifest.md)   
 [Pagine delle proprietà dello strumento Manifesto](../ide/manifest-tool-property-pages.md)   
 [Procedura: aprire le pagine delle proprietà dei progetti](../misc/how-to-open-project-property-pages.md)   
 [Procedura: modificare finestre delle proprietà di progetto](../misc/how-to-edit-project-property-sheets.md)