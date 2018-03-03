---
title: "Pagina delle proprietà NMake (C++ di Windows) | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCNMakeTool.ReBuildCommandLine
- VC.Project.VCNMakeTool.CleanCommandLine
- VC.Project.VCNMakeTool.Output
- VC.Project.VCNMakeTool.BuildCommandLine
dev_langs:
- C++
helpviewer_keywords:
- NMake property page
ms.assetid: bd20cb52-9f1d-4240-b4fc-4f43205ac94b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7cc9f6dc7c5fec4a184ed189cfaae230df3f1e9e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="nmake-property-page"></a>NMake (pagina delle proprietà)
Il **NMake** pagina delle proprietà consente di specificare le impostazioni di compilazione per i progetti NMake.  
  
 Per ulteriori informazioni sui progetti NMake, vedere [creazione di un progetto Makefile](../ide/creating-a-makefile-project.md). Per progetti MakeFile non_Windows, vedere [le proprietà del progetto MakeFile (C++ Linux)](../linux/prop-pages/makefile-linux.md), [le proprietà del progetto generale (Android C++ Makefile)](/visualstudio/cross-platform/general-makefile-android-prop-page) o [le proprietà di NMake (C++ Android)](/visualstudio/cross-platform/nmake-android-prop-page).
  
 Il **NMake** pagina delle proprietà contiene le proprietà seguenti.  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Riga di comando di compilazione**  
 Specifica il comando da eseguire quando **compilare** si fa clic su di **compilare** menu.  
  
 **Ricompila tutto da riga di comando**  
 Specifica il comando da eseguire quando **Ricompila tutto** si fa clic su di **compilare** menu.  
  
 **Eseguire la pulizia della riga di comando**  
 Specifica il comando da eseguire quando **Pulisci** si fa clic su di **compilare** menu.  
  
 **Output**  
 Specifica il nome del file che conterrà l'output per la riga di comando. Per impostazione predefinita, questo nome di file è basato sul nome del progetto.  
  
 **Definizioni del preprocessore**  
 Specifica le definizioni del preprocessore che utilizzato dai file di origine. Il valore predefinito è la piattaforma corrente e la configurazione.  
  
 **Percorso di ricerca**  
 Specifica la directory in cui il compilatore cerca i file di inclusione.  
  
 **Forzato include**  
 Specifica i file che il preprocessore elabora automaticamente anche se non vengono inclusi nei file di progetto.  
  
 **Percorso di ricerca assembly**  
 Specifica le directory in cui .NET Framework Cerca quando si tenta di risolvere l'assembly .NET.  
  
 **Forzare l'utilizzo di assembly**  
 Specifica gli assembly .NET Framework elabora automaticamente.  
  
 **Opzioni aggiuntive**  
 Specifica le opzioni aggiuntive del compilatore per IntelliSense da usare quando si analizza file C++.  
  
 Per informazioni sulle modalità di accesso di **NMake** pagina delle proprietà, vedere [funziona con le proprietà del progetto](../ide/working-with-project-properties.md).  
  
 Per informazioni su come accedere a livello di codice ai membri di questo oggetto, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCNMakeTool>.  
  
## <a name="see-also"></a>Vedere anche  
 [Pagine delle proprietà](../ide/property-pages-visual-cpp.md)   
 [Procedura: Abilitare IntelliSense per progetti makefile](../ide/how-to-enable-intellisense-for-makefile-projects.md)