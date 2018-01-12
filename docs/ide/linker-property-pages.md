---
title: "Pagine delle proprietà linker | Documenti Microsoft"
ms.custom: 
ms.date: 11/21/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCLinkerTool.RegisterOutput
- VC.Project.VCLinkerTool.OVERWRITEImportLibrary
- VC.Project.VCLinkerTool.UseLibraryDependencyInputs
- VC.Project.VCLinkerTool.LinkLibraryDependencies
dev_langs: C++
helpviewer_keywords:
- per-user redirection
- Linker property pages
ms.assetid: 7e7671e5-a35a-4e67-9bdb-661d75c4d11e
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1b8a1d0d4775955ee55aa0f40ac10a75cda54379
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="linker-property-pages"></a>Linker (pagine delle proprietà)

In questo argomento vengono illustrate le proprietà seguenti sul **generale** pagina delle proprietà del linker. Per la versione Linux di questa pagina, vedere [le proprietà del Linker (C++ Linux)](../linux/prop-pages/linker-linux.md).

## <a name="general-page-properties"></a>Proprietà della pagina Generale

### <a name="ignore-import-library"></a>Ignora libreria di importazione

Questa proprietà indica al linker di non collegare i file lib generati da questa build di qualsiasi progetto dipendente. Questo consente al sistema di progetto gestire i file con estensione dll che non producono un file con estensione LIB quando compilato. Se un progetto dipende da un altro progetto che produce una DLL, il sistema del progetto collega automaticamente il file con estensione LIB generato dal progetto che figlio. Questo può non essere necessaria per i progetti che producono DLL COM o DLL di sole risorse; Queste DLL non dispone di alcuna esportazione significativi. Se una DLL non contiene esportazioni, il linker non genera un file con estensione LIB. Se non è presente sul disco alcun file con estensione LIB di esportazione e il sistema del progetto indica al linker di collegamento con questa DLL mancante, il collegamento ha esito negativo. Utilizzare il **Ignora libreria di importazione** proprietà per risolvere il problema. Se impostato su **Sì**, il sistema del progetto ignora la presenza o assenza del file con estensione LIB e fa sì che qualsiasi progetto che dipende da questo progetto non collegamento con il file LIB inesistente.

Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreImportLibrary%2A>.

### <a name="register-output"></a>Registra Output

Esecuzioni `regsvr32.exe /s $(TargetPath)` sull'output di compilazione, che è valido solo per i progetti di DLL. Per i progetti .exe, questa proprietà viene ignorata. Per registrare un output .exe, impostare un evento di post-compilazione sulla configurazione per eseguire la registrazione personalizzata che è sempre necessaria per i file .exe registrati.

Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.RegisterOutput%2A>.

### <a name="per-user-redirection"></a>Reindirizzamento per utente

Registrazione in Visual Studio è in genere eseguita in HKEY_CLASSES_ROOT (HKCR). Con [!INCLUDE[wiprlhext](../c-runtime-library/reference/includes/wiprlhext_md.md)], per accedere a HKCR è necessario eseguire Visual Studio con privilegi elevati. Gli sviluppatori non sempre desidera eseguire in modalità con privilegi elevate, ma comunque necessario collaborare con la registrazione. Reindirizzamento per utente consente di registrare senza dover eseguire in questa modalità.

Reindirizzamento per utente forza scritture per HKCR essere reindirizzati a HKEY\_corrente\_USER (HKCU). Se il reindirizzamento per utente è disattivato, è possibile che [Error di compilazione progetto PRJ0050](../error-messages/tool-errors/project-build-error-prj0050.md) quando il programma tenta di scrivere in HKCR.

### <a name="link-library-dependencies"></a>Collega dipendenze di libreria

Specifica se collegare i file lib che vengono creati da progetti dipendenti. In genere, si desidera collegare i file lib, ma non è possibile nel caso di determinate DLL.

È inoltre possibile specificare un file con estensione obj, fornendo il nome file e il relativo percorso, ad esempio "... \\.. \MyLibProject\MyObjFile.obj". Se il codice sorgente per il file con estensione obj #includes un'intestazione precompilata, ad esempio PCH. h, quindi il file pch.obj si trova nella stessa cartella MyObjFile.obj, è necessario aggiungere anche pch.obj come dipendenza aggiuntiva.

### <a name="use-library-dependency-inputs"></a>Usa input dipendenze di libreria

In un progetto di grandi dimensioni, quando un progetto dipendente viene creato un file con estensione LIB, il collegamento incrementale è disabilitato. Se sono presenti numerosi progetti dipendenti che producono file lib, la compilazione dell'applicazione può richiedere molto tempo. Quando questa proprietà è impostata su **Sì**, il sistema del progetto collega i file obj per i file LIB creati da progetti dipendenti, consentendo il collegamento incrementale.

Per informazioni sulle modalità di accesso di **generale** pagina delle proprietà linker vedere [funziona con le proprietà del progetto](../ide/working-with-project-properties.md).

## <a name="see-also"></a>Vedere anche

[Impostazioni progetto di VC++, Progetti e soluzioni, finestra di dialogo Opzioni](/visualstudio/ide/reference/vcpp-project-settings-projects-and-solutions-options-dialog-box)  
[Pagine delle proprietà](../ide/property-pages-visual-cpp.md)  