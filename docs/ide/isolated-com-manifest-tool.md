---
title: "Strumento manifesto isolato proprietà COM (Visual C++) | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCManifestTool.RegistrarScriptFile
- VC.Project.VCManifestTool.ComponentFileName
- VC.Project.VCManifestTool.TypeLibraryFile
- VC.Project.VCManifestTool.ReplacementsFile
dev_langs: C++
ms.assetid: 457582b8-cfde-49c0-92e3-3a6b9e8c08eb
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: fe2098c4caead6ebc9ad4747354ae96f093f2c91
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="isolated-com-manifest-tool-configuration-properties-ltprojectnamegt-property-pages-dialog-box"></a>Isolamento COM, strumento manifesto, proprietà di configurazione, &lt;Projectname&gt; la finestra di dialogo Pagine delle proprietà
Utilizzare questa finestra di dialogo per specificare **COM isolato** opzioni per [Mt.exe](http://msdn.microsoft.com/library/aa375649).  
  
 Per accedere a questa finestra di dialogo pagina delle proprietà, aprire le pagine delle proprietà per il progetto o la finestra delle proprietà. Espandere il **strumento manifesto** nodo **proprietà comuni**, quindi selezionare **COM isolato**.  
  
## <a name="task-list"></a>Elenco attività  
  
-   [Procedura: Compilare applicazioni isolate per l'utilizzo di componenti COM](../build/how-to-build-isolated-applications-to-consume-com-components.md)  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **File libreria dei tipi**  
 Usa l'opzione /tlb. per specificare il nome del file della libreria dei (file con estensione tlb) che lo strumento manifesto verrà utilizzato per generare il file manifesto.  
  
 **File di Script di registrazione**  
 Utilizza l'opzione /rgs per specificare il nome del file di script di registrazione (file con estensione RGS) che lo strumento manifesto verrà utilizzato per generare il file manifesto.  
  
 **Nome File del componente**  
 Usa l'opzione /dll per specificare il nome della risorsa che genera lo strumento manifesto. È necessario immettere un valore per questa proprietà quando un valore per **File libreria dei tipi** o **File Script registrazione** specificati.  
  
 **File sostitutivo**  
 Usa l'opzione /replacements per specificare il percorso completo del file che contiene i valori per le stringhe sostituibili nel file RGS.  
  
## <a name="see-also"></a>Vedere anche  
 [Applicazioni isolate](http://msdn.microsoft.com/library/aa375190)   
 [Manifesto dell'applicazione ClickOnce](/visualstudio/deployment/clickonce-application-manifest)   
 [Pagine delle proprietà dello strumento manifesto](../ide/manifest-tool-property-pages.md)   
 [Utilizzo di Proprietà del progetto](../ide/working-with-project-properties.md)   