---
title: Linker (pagine delle proprietà)
ms.date: 11/21/2017
f1_keywords:
- VC.Project.VCLinkerTool.RegisterOutput
- VC.Project.VCLinkerTool.OVERWRITEImportLibrary
- VC.Project.VCLinkerTool.UseLibraryDependencyInputs
- VC.Project.VCLinkerTool.LinkLibraryDependencies
helpviewer_keywords:
- per-user redirection
- Linker property pages
ms.assetid: 7e7671e5-a35a-4e67-9bdb-661d75c4d11e
ms.openlocfilehash: 1412531ae0ca9c0f5270df6df7b79ddc9be425ad
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57826859"
---
# <a name="linker-property-pages"></a>Linker (pagine delle proprietà)

In questo argomento vengono illustrate le proprietà seguenti contenute nella pagina delle proprietà **Generale** del linker. Per la versione Linux di questa pagina, vedere [Proprietà del linker (Linux C++)](../../linux/prop-pages/linker-linux.md).

## <a name="general-page-properties"></a>Proprietà della pagina Generale

### <a name="ignore-import-library"></a>Ignora libreria di importazione

Questa proprietà indica al linker di non collegare l'output con estensione lib generato da questa compilazione a qualsiasi progetto dipendente. In questo modo il sistema del progetto può gestire i file con estensione dll che non creano un file con estensione lib durante la compilazione. Se un progetto dipende da un altro progetto che genera una DLL, il sistema del progetto collega automaticamente il file con estensione lib generato dal progetto figlio. Tale operazione può non essere necessaria per i progetti che generano DLL COM o DLL di sole risorse. Questi tipi di librerie non presentano esportazioni significative. Se una DLL non contiene esportazioni, il linker non genera un file con estensione lib. Se su disco non sono presenti file con estensione lib per l'esportazione e il sistema del progetto indica al linker di creare un collegamento con questa DLL (mancante), il collegamento avrà esito negativo. Usare la proprietà **Ignora libreria di importazione** per risolvere il problema. Se la proprietà è impostata su **Sì**, il sistema del progetto ignora la presenza o l'assenza del file con estensione lib e fa sì che qualsiasi progetto dipendente da questo progetto non crei un collegamento con il file con estensione lib inesistente.

Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreImportLibrary%2A>.

### <a name="register-output"></a>Registra output

Eseguire `regsvr32.exe /s $(TargetPath)` nell'output di compilazione, valido solo per i progetti con estensione dll. Per i progetti con estensione exe, questa proprietà viene ignorata. Per registrare un output con estensione exe, impostare un evento di post-compilazione nella configurazione affinché sia eseguita la registrazione personalizzata. Tale operazione è sempre necessaria per i file con estensione exe registrati.

Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.RegisterOutput%2A>.

### <a name="per-user-redirection"></a>Reindirizzamento per utente

La registrazione in Visual Studio viene in genere eseguita in HKEY_CLASSES_ROOT (HKCR). Con Windows Vista e sistemi operativi successivi, è necessario eseguire Visual Studio con privilegi elevati per poter accedere a HKCR. Nonostante molti sviluppatori non sempre vogliano eseguire Visual Studio con privilegi elevati, è comunque necessario registrarsi. Il reindirizzamento per utente consente di registrarsi senza dover eseguire VS con privilegi elevati.

Il reindirizzamento per utente forza la scrittura in HKCR ed esegue il reindirizzamento a HKEY\_CURRENT\_USER (HKCU). Se il reindirizzamento per utente è disattivato, è possibile che si generi l'[errore di compilazione del progetto PRJ0050](../../error-messages/tool-errors/project-build-error-prj0050.md) quando il programma tenta di scrivere in HKCR.

### <a name="link-library-dependencies"></a>Collega dipendenze di libreria

Specifica se collegare i file con estensione lib creati da progetti dipendenti. In genere, i file con estensione lib vengono collegati. È comunque possibile scegliere diversamente per alcuni casi di DLL.

È anche possibile specificare un file con estensione obj indicando il nome e il percorso relativo del file, ad esempio "..\\..\MyLibProject\MyObjFile.obj". Se il codice sorgente per il file con estensione obj include un'intestazione precompilata, ad esempio pch.h, il file pch.obj si troverà nella stessa cartella di MyObjFile.obj ed è necessario aggiungere pch.obj come dipendenza aggiuntiva.

### <a name="use-library-dependency-inputs"></a>Usa input dipendenze di libreria

In un progetto di grandi dimensioni, quando un progetto dipendente crea un file con estensione lib, il collegamento incrementale è disabilitato. In presenza di numerosi progetti dipendenti che creano file con estensione lib, la compilazione dell'applicazione può richiedere molto tempo. Quando questa proprietà è impostata su **Sì**, il sistema del progetto collega i file con estensione obj ai file con estensione lib creati da progetti dipendenti, abilitando così il collegamento incrementale.

Per informazioni su come accedere al **generali** pagina delle proprietà del linker, vedere [delle proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

## <a name="see-also"></a>Vedere anche

[Impostazioni progetto di VC++, Progetti e soluzioni, finestra di dialogo Opzioni](/visualstudio/ide/reference/vcpp-project-settings-projects-and-solutions-options-dialog-box)<br>
[Riferimento alla pagina di proprietà progetto C++](property-pages-visual-cpp.md)