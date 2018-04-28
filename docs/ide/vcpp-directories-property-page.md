---
title: Pagina delle proprietà Directory VC + + | Documenti Microsoft
ms.custom: ''
ms.date: 04/26/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-ide
ms.tgt_pltfrm: ''
ms.topic: article
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
caps.latest.revision: 25
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8931ecd34acfa1aba0287274acb45d362bdec2cf
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
---
# <a name="vc-directories-property-page-windows"></a>VC + + pagina delle proprietà Directory (Windows)

Utilizzare questa pagina delle proprietà per indicare a Visual Studio le directory da utilizzare quando si compila il progetto attualmente selezionato. Per impostare le directory per più progetti in una soluzione, utilizzare una finestra delle proprietà personalizzate, come descritto in [la creazione di configurazioni di proprietà riutilizzabili](working-with-project-properties.md#bkmkPropertySheets).

Per la versione Linux di questa pagina, vedere [directory di VC + + (C++ Linux)](../linux/prop-pages/directories-linux.md).   

Per l'accesso di **directory di VC + +** pagina delle proprietà:

1. Se il **Esplora** finestra non è visibile, quindi nel menu principale scegliere **vista** > **Esplora**.
1. Fare clic su un nodo di progetto (non la soluzione di primo livello) e scegliere **proprietà**.
1. Nel riquadro sinistro della finestra di **pagine delle proprietà** nella finestra di dialogo **proprietà di configurazione** > **directory di VC + +**.  

Proprietà di directory di VC + + si applicano a un progetto, non il nodo della soluzione di primo livello. Se non viene visualizzato **directory di VC + +** in **le proprietà di configurazione**, selezionare un nodo di progetto C++ nel **Esplora** finestra: 

![Selezionare il nodo del progetto](media/vcppdir.png "selezionare il nodo del progetto per visualizzare le proprietà di directory di VC + +")

Si noti che il **directory di VC + +** pagina delle proprietà per i progetti multipiattaforma ha un aspetto diverso. Per informazioni specifiche per i progetti C++ Linux, vedere [directory di VC + + (C++ Linux)](../linux/prop-pages/directories-linux.md). 
 
Se non si ha familiarità con *le proprietà del progetto* in Visual Studio, potrebbe essere utile leggere prima [funziona con le proprietà del progetto](working-with-project-properties.md). 
 
Le impostazioni predefinite per **directory di VC + +** proprietà dipendono dal tipo di progetto. Per i progetti desktop includono i percorsi di strumenti di C++ per un particolare set di strumenti della piattaforma e il percorso di Windows SDK. È possibile modificare il **set strumenti della piattaforma** e **versione di Windows SDK** sul **le proprietà di configurazione** > **generale** pagina. 

Per visualizzare i valori per la directory di:

1. Selezionare una delle proprietà di **directory di VC + +** pagina. Ad esempio, scegliere **Directory librerie**.
1. Scegliere il pulsante freccia in giù alla fine del campo di valore della proprietà.
1. Nel menu a discesa, scegliere **modifica**.

![Modifica Directory librerie](media/vcppdir_libdir_edit.png "finestra di dialogo per modificare i percorsi di libreria")

È ora possibile visualizzare una finestra di dialogo simile alla seguente: 

![Mostra le directory di libreria](media/vcppdir_libdir.png "finestra di dialogo per aggiungere o rimuovere i percorsi di libreria")

Utilizzare questa finestra di dialogo per visualizzare la directory corrente. Tuttavia, se si desidera modificare o aggiungere una directory, è preferibile utilizzare **Gestione proprietà** per creare una finestra delle proprietà o modificare la finestra delle proprietà utente predefinito. Per ulteriori informazioni, vedere [la creazione di configurazioni di proprietà riutilizzabili](working-with-project-properties.md#bkmkPropertySheets).

Come illustrato in precedenza, molti dei percorsi ereditati vengono fornite come macro.  Per esaminare il valore corrente di una macro, scegliere il **macro** pulsante nell'angolo inferiore destro della finestra di dialogo. Si noti che molte macro dipendono dal tipo di configurazione. Una macro in una build di debug potrà restituire un percorso diverso da quello della stessa macro in una build di rilascio. 

È possibile cercare corrispondenze parziale o complete nella casella di modifica. La figura seguente mostra tutte le macro che contengono la stringa "WindowsSDK" e viene inoltre illustrato il percorso corrente che la macro restituisce:

![Visualizzare i valori delle macro](media/vcppdir_libdir_macros.png "finestra di dialogo per modificare le macro")

Nota: L'elenco viene popolato durante la digitazione. Non premere **invio**.

Per ulteriori informazioni sui motivi per cui è necessario utilizzarli anziché i percorsi a livello di codice quando possibile e macro, vedere [funziona con le proprietà del progetto](../ide/working-with-project-properties.md#bkmkPropertiesVersusMacros). 

Per un elenco delle macro di usate comune, vedere [comuni macro per comandi di compilazione e proprietà](https://docs.microsoft.com/en-us/cpp/ide/common-macros-for-build-commands-and-properties).

È possibile definire macro personalizzate in due modi:
-   Impostare le variabili di ambiente in un prompt dei comandi per sviluppatori. Tutte le variabili di ambiente vengono considerate come proprietà MSBuild/le macro.
-   Definire macro utente in un file con estensione props. Per ulteriori informazioni, vedere [macro pagina proprietà](working-with-project-properties.md#bkmkPropertiesVersusMacros). 

Per ulteriori informazioni, vedere questi post di blog: [directory di VC + +](http://blogs.msdn.com/b/vsproject/archive/2009/07/07/vc-directories.aspx), [proprietà ereditata e finestre delle proprietà](http://blogs.msdn.com/b/vsproject/archive/2009/06/23/inherited-properties-and-property-sheets.aspx), e [Visual Studio 2010 C++ progetto Guida all'aggiornamento](http://blogs.msdn.com/b/vcblog/archive/2010/03/02/visual-studio-2010-c-project-upgrade-guide.aspx).  
  
## <a name="directory-types"></a>Tipi di directory

È anche possibile specificare altre directory, come segue.  
  
**Directory file eseguibili**<br/>
Directory in cui cercare file eseguibili. Corrisponde alla **percorso** variabile di ambiente.

**Directory di inclusione**<br/>
Cartelle in cui cercare file di inclusione a cui viene fatto riferimento nel codice sorgente. Corrisponde alla **INCLUDE** variabile di ambiente.

**Directory riferimenti**<br/>
 Directory in cui cercare gli assembly e i file di modulo (metadati) che fanno riferimento a codice sorgente tramite la [#using](../preprocessor/hash-using-directive-cpp.md) direttiva. Corrisponde alla **LIBPATH** variabile di ambiente.

**Directory delle librerie**<br/>
Directory in cui cercare i file delle librerie (LIB), incluse le librerie di runtime. Corrisponde alla **LIB** variabile di ambiente. Questa impostazione non riguarda i file con estensione obj. Per collegare un file con estensione obj, nel **le proprietà di configurazione** > **Linker** > **generale** pagina delle proprietà, seleziona  **Dipendenze libreria aggiuntiva** e quindi specificare il percorso relativo del file. Per ulteriori informazioni, vedere [pagine delle proprietà Linker](../ide/linker-property-pages.md).

**Directory di libreria WinRT**<br/>
Directory per cercare i file di libreria WinRT per usare in app di piattaforma UWP (Universal Windows). 

**Directory di origine**<br/>
Directory in cui cercare file di origine da utilizzare per IntelliSense.

**Escludi directory**<br/>
Prima di ogni compilazione, Visual Studio esegue una query il timestamp associato a tutti i file per determinare se alcune sono state modificate dopo la compilazione precedente. Se il progetto include librerie stabile di grandi dimensioni, è possibile velocizzare potenzialmente tempi di compilazione escludendo le directory dal controllo di timestamp.

## <a name="sharing-the-settings"></a>Condivisione delle impostazioni

È possibile condividere le proprietà del progetto con altri utenti o tra più computer. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../ide/working-with-project-properties.md).
