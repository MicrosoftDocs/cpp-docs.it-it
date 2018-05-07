---
title: Manifesto le proprietà di configurazione dello strumento (Visual C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- VC.Project.VCManifestTool.MergeRulesFile
- VC.Project.VCManifestTool.UseUnicodeResponseFiles
- VC.Project.VCManifestTool.SuppressStartupBanner
- VC.Project.VCManifestTool.UseFAT32Workaround
- VC.Project.VCManifestTool.VerboseOutput
- VC.Project.VCManifestTool.AssemblyIdentity
dev_langs:
- C++
ms.assetid: b99368a5-6819-482c-a06e-f2409290cfd1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1953e7c37c07f66845510efe037015a537aa7baa
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="general-manifest-tool-configuration-properties-ltprojectnamegt-property-pages-dialog-box"></a>Generale, strumento manifesto, proprietà di configurazione, &lt;Projectname&gt; la finestra di dialogo Pagine delle proprietà
Utilizzare questa finestra di dialogo per specificare le opzioni generali per [Mt.exe](http://msdn.microsoft.com/library/aa375649).  
  
 Per accedere a questa finestra di dialogo pagina delle proprietà, aprire le pagine delle proprietà per il progetto o la finestra delle proprietà. Espandere il **strumento manifesto** nodo **le proprietà di configurazione**, quindi selezionare **generale**.  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Non visualizzare messaggio di avvio**  
 **Sì (/ nologo)** specifica che i dati di copyright Microsoft standard verranno nascosti quando viene avviato lo strumento manifesto. Utilizzare questa opzione per eliminare l'output indesiderato file di log, quando si esegue mt.exe come parte di un processo di compilazione o da un ambiente di compilazione.  
  
 **Output dettagliato**  
 **Sì (/verbose)** specifica che le informazioni di compilazione aggiuntive verranno visualizzate durante la generazione del manifesto.  
  
 **Identità dell'assembly**  
 Utilizza l'opzione /identity per specificare una stringa di identità, che contiene gli attributi per il [ \<assemblyIdentity > elemento](/visualstudio/deployment/assemblyidentity-element-clickonce-application). Una stringa di identità inizia con il valore per il `name` attributo ed è seguita da *attributo* = *valore* coppie. Gli attributi in una stringa di identità sono delimitati da una virgola.  
  
 Di seguito è riportato un esempio di stringa di identità:  
  
 `Microsoft.Windows.Common-Controls, processorArchitecture=x86, version=6.0.0.0, type=win32, publicKeyToken=6595b64144ccf1df`  
  
## <a name="see-also"></a>Vedere anche  
 [Manifesto dell'applicazione ClickOnce](/visualstudio/deployment/clickonce-application-manifest)   
 [Pagine delle proprietà dello strumento manifesto](../ide/manifest-tool-property-pages.md)   
 [Utilizzo di Proprietà del progetto](../ide/working-with-project-properties.md)   