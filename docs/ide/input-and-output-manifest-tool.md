---
title: "Input e output, Strumento Manifesto, Propriet&#224; di configurazione, finestra di dialogo Pagine delle propriet&#224; di &lt;nomeprogetto&gt; | Microsoft Docs"
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
  - "VC.Project.VCManifestTool.OutputManifestFile"
  - "VC.Project.VCManifestTool.InputResourceManifests"
  - "VC.Project.VCManifestTool.EmbedManifest"
  - "VC.Project.VCManifestTool.AdditionalManifestFiles"
  - "VC.Project.VCManifestTool.DependencyInformationFile"
  - "VC.Project.VCManifestTool.OutputResourceManifest"
  - "VC.Project.VCManifestTool.GenerateCatalogFiles"
dev_langs: 
  - "C++"
ms.assetid: a8bb20f6-7ace-45ca-bab0-b4f4a5caf170
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Input e output, Strumento Manifesto, Propriet&#224; di configurazione, finestra di dialogo Pagine delle propriet&#224; di &lt;nomeprogetto&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare questa finestra di dialogo per specificare le opzioni input e output di [Mt.exe](http://msdn.microsoft.com/library/aa375649).  
  
 Per accedere alla finestra di dialogo, aprire le pagine delle proprietà del progetto o la finestra delle proprietà.  Espandere il nodo **Strumento Manifesto** in **Proprietà di configurazione**, quindi selezionare **Input e output**.  
  
## Elenco UIElement  
 **File manifesto aggiuntivi**  
 Utilizza l'opzione **\/manifest** per specificare i percorsi completi dei file manifesto aggiuntivi che verranno elaborati o uniti dallo strumento Manifesto.  I percorsi completi sono delimitati da un punto e virgola.  
  
 **Manifesti risorse di input**  
 Utilizza l'opzione **\/inputresource** per specificare il percorso completo della risorsa di tipo RT\_MANIFEST da fornire come input allo strumento Manifesto.  Dopo il percorso può essere indicato l'ID di risorsa specificato.  Di seguito è riportato un esempio:  
  
 `dll_with_manifest.dll;#1`  
  
 L'ID di risorsa è opzionale e per impostazione predefinita corrisponde a CREATEPROCESS\_MANIFEST\_RESOURCE\_ID in winuser.h.  
  
 **Incorpora manifesto**  
 **Sì** specifica che il file manifesto dell'applicazione verrà incorporato nell'assembly.  
  
 **No** indica che il file manifesto dell'applicazione verrà creato come file autonomo.  
  
 **File manifesto di output**  
 Specifica il nome del file manifesto di output.  La proprietà è opzionale quando un unico file manifesto viene elaborato dallo strumento Manifesto.  
  
 **File di risorsa del manifesto**  
 Specifica i file di risorse di output utilizzati per incorporare il manifesto nell'output del progetto.  
  
 **Genera file catalogo**  
 Utilizza l'opzione **\/makecdfs** per specificare che lo strumento Manifesto genererà file di definizione catalogo \(file CDF\), che sono utilizzati per creare cataloghi.  
  
 **Generare manifesto da ManagedAssembly**  
 Genera un manifesto da assembly gestiti.  \(**\-managedassemblyname:***file*\).  
  
 **Eliminare l'elemento dependency**  
 Viene utilizzato con l'opzione **\-managedassembly**.  Questo tag consente di eliminare la generazione di elementi di dipendenza nel manifesto finale.  
  
 **Generare tag della categoria**  
 Viene utilizzato con l'opzione **\-managedassembly**.  Questo tag consente di generare i tag di categoria.  
  
 **Abilitare la consapevolezza del Dpi**  
 Specifica se l'applicazione è compatibile con DPI.  Per impostazione predefinita, l'impostazione è **Yes** per i progetti MFC e **No** in altri casi perché solo i progetti MFC dispongono della consapevolezza del Dpi incorporata.  È possibile eseguire l'override dell'impostazione su **Yes** se si aggiunge il codice per gestire impostazioni DPI diverse.  L'applicazione potrebbe apparire fuzzy o piccola se è impostata come compatibile con DPI quando non lo è.  
  
## Vedere anche  
 [ClickOnce Application Manifest](../Topic/ClickOnce%20Application%20Manifest.md)   
 [Pagine delle proprietà dello strumento Manifesto](../ide/manifest-tool-property-pages.md)   
 [Procedura: aprire le pagine delle proprietà dei progetti](../misc/how-to-open-project-property-pages.md)   
 [Procedura: modificare finestre delle proprietà di progetto](../misc/how-to-edit-project-property-sheets.md)