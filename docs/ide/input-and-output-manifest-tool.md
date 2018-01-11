---
title: "Manifesto dello strumento proprietà Input e Output (Visual C++) | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCManifestTool.OutputManifestFile
- VC.Project.VCManifestTool.InputResourceManifests
- VC.Project.VCManifestTool.EmbedManifest
- VC.Project.VCManifestTool.AdditionalManifestFiles
- VC.Project.VCManifestTool.DependencyInformationFile
- VC.Project.VCManifestTool.OutputResourceManifest
- VC.Project.VCManifestTool.GenerateCatalogFiles
dev_langs: C++
ms.assetid: a8bb20f6-7ace-45ca-bab0-b4f4a5caf170
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 77137e9bc0a4af60080234aac85afa59034d2c6a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="input-and-output-manifest-tool-configuration-properties-ltprojectnamegt-property-pages-dialog-box"></a>Input e Output, strumento manifesto, proprietà di configurazione, &lt;Projectname&gt; la finestra di dialogo Pagine delle proprietà
Utilizzare questa finestra di dialogo per specificare le opzioni di input e output per [Mt.exe](http://msdn.microsoft.com/library/aa375649).  
  
 Per accedere a questa finestra di dialogo pagina delle proprietà, aprire le pagine delle proprietà per il progetto o la finestra delle proprietà. Espandere il **strumento manifesto** nodo **le proprietà di configurazione**, quindi selezionare **di Input e Output**.  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **File manifesto aggiuntivi**  
 Usa il **/manifesto** opzione per specificare i percorsi completi dei file manifesto aggiuntivi che elaborerà lo strumento manifesto o di tipo merge. I percorsi completi sono delimitati da un punto e virgola.  
  
 **Manifesti risorse di input**  
 Usa il **/inputresource** opzione per specificare il percorso completo di una risorsa di tipo RT_MANIFEST, di input allo strumento manifesto. Il percorso può essere seguito da ID di risorsa specificato. Ad esempio:  
  
 `dll_with_manifest.dll;#1`  
  
 L'ID risorsa è facoltativo e il valore predefinito per CREATEPROCESS_MANIFEST_RESOURCE_ID in winuser. h.  
  
 **Incorpora manifesto**  
 **Sì** specifica che il file manifesto dell'applicazione verrà incorporato nell'assembly.  
  
 **Non** indica che il sistema del progetto verrà creato il file manifesto dell'applicazione come file autonomo.  
  
 **File manifesto di output**  
 Specifica il nome del file manifesto di output. Questa proprietà è facoltativa quando solo un file manifesto viene elaborato dallo strumento manifesto.  
  
 **File di risorsa di manifesto**  
 Specifica l'output di file di risorse utilizzati per incorporare il manifesto nell'output del progetto.  
  
 **Genera file catalogo**  
 Usa il **/makecdfs** opzione per specificare che lo strumento Manifesto genererà file di definizione di catalogo (file con estensione CDF), che vengono utilizzati per creare cataloghi.  
  
 **Genera manifesto da ManagedAssembly**  
 Genera un manifesto da un assembly gestito. (**- managedassemblyname:***file*).  
  
 **Eliminare l'elemento Dependency**  
 Utilizzato con il **- managedassembly** opzione. Questo tag Elimina la generazione di elementi di dipendenza nel manifesto finale.  
  
 **Generare tag di categoria**  
 Utilizzato con il **- managedassembly** opzione. Questo tag consente di generare i tag di categoria.  
  
 **Abilitare il riconoscimento DPI**  
 Specifica se l'applicazione è compatibile con DPI. Per impostazione predefinita, l'impostazione è **Sì** per progetti MFC e **n** in caso contrario, perché solo i progetti MFC sono incorporate nel riconoscimento DPI. È possibile ignorare l'impostazione da **Sì** se si aggiunge codice per gestire le impostazioni DPI diverse. L'applicazione potrebbe apparire fuzzy o una piccola se si imposta come compatibile con DPI in caso contrario.  
  
## <a name="see-also"></a>Vedere anche  
 [Manifesto dell'applicazione ClickOnce](/visualstudio/deployment/clickonce-application-manifest)   
 [Pagine delle proprietà dello strumento manifesto](../ide/manifest-tool-property-pages.md)   
 [Utilizzo di Proprietà del progetto](../ide/working-with-project-properties.md)   