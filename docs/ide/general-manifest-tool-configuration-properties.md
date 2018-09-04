---
title: Proprietà di configurazione di Strumento Manifesto (Visual C++) | Microsoft Docs
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
ms.openlocfilehash: ef1eb1c0c1ee8c9fb2814bc7cd808ea2e524b8a4
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43200333"
---
# <a name="general-manifest-tool-configuration-properties-ltprojectnamegt-property-pages-dialog-box"></a>Generale, Strumento Manifesto, Proprietà di configurazione, finestra di dialogo Pagine delle proprietà di &lt;nomeprogetto&gt;
Usare questa finestra di dialogo per specificare opzioni generali per [Mt.exe](https://msdn.microsoft.com/library/aa375649).  
  
 Per accedere alla finestra di dialogo di questa pagina delle proprietà, aprire le pagine delle proprietà per il progetto o la finestra delle proprietà. Espandere il nodo **Strumento Manifesto** in **Proprietà di configurazione**, quindi selezionare **Generale**.  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Non visualizzare messaggio di avvio**  
 **Sì (/nologo)** specifica che le informazioni standard sul copyright Microsoft non verranno visualizzate quando sarà avviato lo strumento Manifesto. Usare questa opzione per non visualizzare l'output indesiderato nei file di log, quando si esegue mt.exe come parte di un processo di compilazione o da un ambiente di compilazione.  
  
 **Output dettagliato**  
 **Sì (/verbose)** specifica che le informazioni di compilazione aggiuntive verranno visualizzate durante la generazione del manifesto.  
  
 **Identità assembly**  
 Usa l'opzione /identity per specificare una stringa di identità, che contiene gli attributi per [\<assemblyIdentity> Element](/visualstudio/deployment/assemblyidentity-element-clickonce-application). Una stringa di identità inizia con il valore per l'attributo `name` ed è seguita da *attribute* = *value* pairs. Gli attributi in una stringa di identità sono delimitati dalla virgola.  
  
 Di seguito è riportato un esempio di stringa di identità:  
  
 `Microsoft.Windows.Common-Controls, processorArchitecture=x86, version=6.0.0.0, type=win32, publicKeyToken=6595b64144ccf1df`  
  
## <a name="see-also"></a>Vedere anche  
 [Manifesto dell'applicazione ClickOnce](/visualstudio/deployment/clickonce-application-manifest)   
 [Pagine delle proprietà dello strumento Manifesto](../ide/manifest-tool-property-pages.md)   
 [Utilizzo di Proprietà del progetto](../ide/working-with-project-properties.md)   