---
title: Pagina delle proprietà Directory di VC++ | Microsoft Docs
ms.custom: ''
ms.date: 04/26/2018
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- VC.Project.VCDirectories.IncludePath
- VC.Project.VCDirectories.ReferencePath
- VC.Project.VCDirectories.SourcePath
- VC.Project.VCDirectories.LibraryWPath
- VC.Project.VCDirectories.ExecutablePath
- VC.Project.VCDirectories.LibraryPath
- VS.ToolsOptionsPages.Projects.VCDirectories
- VC.Project.VCDirectories.ExcludePath
dev_langs:
- C++
helpviewer_keywords:
- VC++ Directories Property Page
ms.assetid: 428eeef6-f127-4271-b3ea-0ae6f2c3d624
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 238f26e8955d4be676c3bf37f7cc8b2d842b3de9
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46394452"
---
# <a name="vc-directories-property-page-windows"></a>Pagina delle proprietà Directory di VC++ (Windows)

In questa pagina delle proprietà è possibile indicare a Visual Studio le directory da usare quando si compila il progetto attualmente selezionato. Per impostare le directory per più progetti in una soluzione, usare una finestra delle proprietà personalizzata, come descritto in [Creazione di configurazioni di proprietà riutilizzabili](working-with-project-properties.md#bkmkPropertySheets).

Per la versione Linux di questa pagina, vedere [Directory di VC++ (Linux C++)](../linux/prop-pages/directories-linux.md).

Per accedere alla pagina delle proprietà **Directory di VC++**:

1. Se la finestra **Esplora soluzioni** non è visibile, scegliere **Visualizza** > **Esplora soluzioni** dal menu principale.
1. Fare clic con il pulsante destro del mouse su un nodo del progetto (non sulla soluzione di primo livello) e scegliere **Proprietà**.
1. Nel riquadro sinistro della finestra di dialogo **Pagine delle proprietà** espandere **Proprietà di configurazione** > **Directory di VC++**.

Le proprietà in Directory di VC ++ vengono applicate a un progetto, non al nodo della soluzione di primo livello. Se la finestra **Directory di VC ++** non viene visualizzata in **Proprietà di configurazione**, selezionare un nodo del progetto C++ nella finestra **Esplora soluzioni**:

![Selezionare il nodo del progetto](media/vcppdir.png "Selezionare il nodo del progetto per visualizzare le proprietà di Directory di VC ++")

Si noti che la pagina delle proprietà **Directory di VC ++** per i progetti multipiattaforma ha un aspetto diverso. Per informazioni specifiche sui progetti Linux C++, vedere [Directory di VC++ (Linux C++)](../linux/prop-pages/directories-linux.md).

Se non si ha familiarità con le *proprietà di progetto* in Visual Studio, può essere utile leggere prima [Uso delle proprietà del progetto](working-with-project-properties.md).

Le impostazioni predefinite per le proprietà in **Directory di VC ++** dipendono dal tipo di progetto. Per i progetti desktop includono i percorsi degli strumenti di C++ per un particolare set di strumenti della piattaforma e il percorso di Windows SDK. È possibile modificare l'impostazione per **Set di strumenti piattaforma** e **Versione di Windows SDK** nella pagina **Proprietà di configurazione** > **Generale**.

Per visualizzare i valori di una delle directory:

1. Selezionare una delle proprietà nella pagina **Directory di VC ++**. Scegliere ad esempio **Directory librerie**.
1. Selezionare la freccia a discesa alla fine del campo contenente il valore della proprietà.
1. Nel menu a discesa scegliere **Modifica**.

![Modificare la directory libreria](media/vcppdir_libdir_edit.png "Finestra di dialogo per modificare i percorsi della libreria")

Viene visualizzata una finestra di dialogo simile alla seguente:

![Visualizzare la directory libreria](media/vcppdir_libdir.png "Finestra di dialogo per aggiungere o rimuovere i percorsi della libreria")

Usare questa finestra di dialogo per visualizzare le directory correnti. Se però si vuole modificare o aggiungere una directory, è preferibile usare **Gestione proprietà** per creare una finestra delle proprietà o modificare la finestra delle proprietà utente predefinita. Per altre informazioni, vedere [Creazione di configurazioni di proprietà riutilizzabili](working-with-project-properties.md#bkmkPropertySheets).

Come illustrato in precedenza, molti dei percorsi ereditati vengono specificati come macro.  Per esaminare il valore corrente di una macro, scegliere il pulsante **Macro** nell'angolo inferiore destro della finestra di dialogo. Si noti che molte macro dipendono dal tipo di configurazione. Può succedere che una macro in una build di debug restituisca un percorso diverso da quello restituito dalla stessa macro in una build di rilascio.

È possibile cercare corrispondenze parziali o complete nella casella di modifica. Nella figura seguente sono illustrate tutte le macro che contengono la stringa "WindowsSDK" nonché il percorso corrente restituito dalla macro:

![Visualizzare i valori delle macro](media/vcppdir_libdir_macros.png "Finestra di dialogo per modificare le macro")

Nota: l'elenco viene popolato durante la digitazione. Non premere **INVIO**.

Per altre informazioni sulle macro e sul motivo per cui si consiglia di usarle al posto dei percorsi hardcoded ove possibile, vedere [Uso delle proprietà del progetto](../ide/working-with-project-properties.md#bkmkPropertiesVersusMacros).

Per un elenco delle macro più usate, vedere [Macro comuni per i comandi e le proprietà di compilazione](https://docs.microsoft.com/en-us/cpp/ide/common-macros-for-build-commands-and-properties).

È possibile personalizzare le macro in due modi:
-   Impostare le variabili di ambiente in un prompt dei comandi per gli sviluppatori. Tutte le variabili di ambiente vengono considerate come proprietà/macro di MSBuild.
-   Definire le macro utente in un file con estensione props. Per altre informazioni, vedere [Macro della pagina delle proprietà](working-with-project-properties.md#bkmkPropertiesVersusMacros).

Per altre informazioni, vedere i post di blog seguenti: [VC++ Directories](http://blogs.msdn.com/b/vsproject/archive/2009/07/07/vc-directories.aspx) (Directory di VC++), [Inherited Properties and Property Sheets](http://blogs.msdn.com/b/vsproject/archive/2009/06/23/inherited-properties-and-property-sheets.aspx) (Proprietà ereditate e finestre delle proprietà) e [Visual Studio 2010 C++ Project Upgrade Guide](http://blogs.msdn.com/b/vcblog/archive/2010/03/02/visual-studio-2010-c-project-upgrade-guide.aspx) (Guida all'aggiornamento dei progetti di Visual Studio 2010 C++).

## <a name="directory-types"></a>Tipi di directory

È anche possibile specificare altre directory, come segue.

**Directory degli eseguibili**<br/>
Directory in cui cercare file eseguibili. Corrisponde alla variabile di ambiente **PATH**.

**Directory di inclusione**<br/>
Cartelle in cui cercare file di inclusione a cui viene fatto riferimento nel codice sorgente. Corrisponde alla variabile di ambiente **INCLUDE**.

**Directory dei riferimenti**<br/>
Directory in cui cercare file di modulo (metadati) e assembly a cui viene fatto riferimento nel codice sorgente tramite la direttiva [#using](../preprocessor/hash-using-directive-cpp.md). Corrisponde alla variabile di ambiente **LIBPATH**.

**Directory delle librerie**<br/>
Directory in cui cercare i file delle librerie (LIB), incluse le librerie di runtime. Corrisponde alla variabile di ambiente **LIBPATH**. Questa impostazione non si applica ai file con estensione obj. Per creare un collegamento a un file con estensione obj, selezionare **Dipendenze libreria aggiuntiva** nella pagina delle proprietà  > **Proprietà di configurazione** > **Linker** **Generale** e specificare il relativo percorso del file. Per altre informazioni, vedere [Pagine delle proprietà Linker](../ide/linker-property-pages.md).

**Directory libreria WinRT**<br/>
Directory in cui ricercare i file di libreria WinRT da usare in app della piattaforma UWP (Universal Windows Platform).

**Directory dei file di origine**<br/>
Directory in cui cercare file di origine da utilizzare per IntelliSense.

**Directory di esclusione**<br/>
Prima di ogni compilazione, Visual Studio esegue una query del timestamp in tutti i file per determinare se sono state apportate modifiche dalla compilazione precedente. Se il progetto include librerie stabili di grandi dimensioni, è potenzialmente possibile velocizzare i tempi di compilazione escludendo tali directory dal controllo di timestamp.

## <a name="sharing-the-settings"></a>Condivisione delle impostazioni

È possibile condividere le proprietà del progetto con altri utenti o tra più computer. Per altre informazioni, vedere [Uso delle proprietà del progetto](../ide/working-with-project-properties.md).
