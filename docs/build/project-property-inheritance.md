---
title: Ereditarietà delle proprietà nei progetti di Visual Studio - C++
description: Funzionamento dell'ereditarietà delle proprietà nei progetti di Visual Studio C++ nativi (MSBuild).
ms.date: 02/21/2020
helpviewer_keywords:
- C++ projects, property inheritance
ms.openlocfilehash: 17b23426f70bb2d306491e538d30cffc0f202362
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92919215"
---
# <a name="property-inheritance-in-visual-studio-projects"></a>Ereditarietà delle proprietà nei progetti di Visual Studio

Il sistema di progetto nativo di Visual Studio si basa su MSBuild. MSBuild definisce i formati di file e le regole per la compilazione di progetti di qualsiasi tipo. Gestisce la maggior parte della complessità della compilazione per più configurazioni e piattaforme. Sarà utile per comprenderne il funzionamento. Questo è particolarmente importante se si desidera definire configurazioni personalizzate. In alternativa, per creare set riutilizzabili di proprietà che è possibile condividere e importare in più progetti.

## <a name="the-vcxproj-file-props-files-and-targets-files"></a>File con estensione vcxproj, props e targets

::: moniker range="msvc-140"

Le proprietà del progetto vengono archiviate in diversi file. Alcune sono archiviate direttamente nel *`.vcxproj`* file di progetto. Altri derivano da altri *`.targets`* *`.props`* file o che vengono importati dal file di progetto e che forniscono valori predefiniti. I file di progetto di Visual Studio 2015 sono disponibili in una cartella specifica delle impostazioni locali nella directory di base, *`%ProgramFiles(x86)%\MSBuild\Microsoft.Cpp\v4.0\v140`* .

::: moniker-end

::: moniker range="msvc-150"

Le proprietà del progetto vengono archiviate in diversi file. Alcune sono archiviate direttamente nel *`.vcxproj`* file di progetto. Altri derivano da altri *`.targets`* *`.props`* file o che vengono importati dal file di progetto e che forniscono valori predefiniti. I file di progetto di Visual Studio 2017 sono disponibili in una cartella specifica delle impostazioni locali nella directory di base, *`%VSINSTALLDIR%Common7\IDE\VC\VCTargets\`* .

::: moniker-end

::: moniker range=">=msvc-160"

Le proprietà del progetto vengono archiviate in diversi file. Alcune sono archiviate direttamente nel *`.vcxproj`* file di progetto. Altri derivano da altri *`.targets`* *`.props`* file o che vengono importati dal file di progetto e che forniscono valori predefiniti. I file di progetto di Visual Studio sono disponibili in una cartella specifica delle impostazioni locali nella directory di base, *`%VSINSTALLDIR%MSBuild\Microsoft\VC\<version>`* . `<version>`È specifico della versione di Visual Studio. È *`v160`* per Visual Studio 2019.

::: moniker-end

Le proprietà vengono inoltre archiviate in qualsiasi *`.props`* file personalizzato che è possibile aggiungere al progetto. Si consiglia vivamente di *non* modificare i file manualmente. Usare invece le pagine delle proprietà nell'IDE per modificare tutte le proprietà, in particolare quelle che partecipano all'ereditarietà, a meno che non si abbia una conoscenza approfondita di MSBuild e dei *`.vcxproj`* file.

Come illustrato in precedenza, la stessa proprietà per la stessa configurazione può essere assegnata a un valore diverso in file diversi. Quando si compila un progetto, il motore MSBuild valuta il file di progetto e tutti i file importati in un ordine ben definito descritto più avanti. Man mano che viene valutato ogni singolo file, i valori di proprietà definiti in quel file sostituiranno i valori esistenti. Tutti i valori non specificati vengono ereditati dai file che sono stati valutati in precedenza. Quando si imposta una proprietà con le pagine delle proprietà, è anche importante prestare attenzione alla posizione in cui è stata impostata. Se si imposta una proprietà su "X" in un *`.props`* file, ma la proprietà è impostata su "Y" nel file di progetto, il progetto verrà compilato con la proprietà impostata su "y". Se la stessa proprietà è impostata su "Z" per un elemento di progetto, ad esempio un *`.cpp`* file, il motore MSBuild utilizzerà il valore "z".

Di seguito è riportato l'albero di ereditarietà di base:

1. Impostazioni predefinite del set di strumenti di MSBuild CPP (il *`Microsoft.Cpp.Default.props`* file nella directory di base, importato dal *`.vcxproj`* file.)

1. Finestre delle proprietà

1. *`.vcxproj`* file. Questo file può sostituire le impostazioni predefinite e della finestra delle proprietà.

1. Metadati degli elementi

> [!TIP]
> In una pagina delle proprietà, una proprietà in **grassetto** è definita nel contesto corrente. Viene ereditata una proprietà in caratteri normali.

## <a name="view-an-expanded-project-file-with-all-imported-values"></a>Visualizzare un file di progetto espanso con tutte i valori importati

Talvolta è utile visualizzare il file espanso per determinare come viene ereditato un valore di proprietà specificato. Per visualizzare la versione espansa, inserire il comando seguente a un prompt dei comandi di Visual Studio. Modificare i nomi dei file segnaposto in quello che si desidera usare.

> **msbuild /pp:**_temp_**.txt** _myapp_**.vcxproj**

I file di progetto espansi possono essere di grandi dimensioni e difficili da comprendere a meno che non si abbia familiarità con MSBuild. Di seguito è riportata la struttura di base di un file di progetto:

1. Proprietà di progetto fondamentali, che non sono esposte nell'IDE.

1. Importazione di *`Microsoft.cpp.default.props`* , che definisce alcune proprietà di base indipendenti dal set di strumenti.

1. Proprietà di configurazione globali (esposte come **PlatformToolset** e proprietà predefinite **progetto** nella pagina **configurazione generale** . Queste proprietà determinano il set di strumenti e le finestre delle proprietà intrinseche che verranno importati nel *`Microsoft.cpp.props`* passaggio successivo.

1. Importazione di *`Microsoft.cpp.props`* , che imposta la maggior parte delle impostazioni predefinite del progetto.

1. Importazione di tutte le finestre delle proprietà, inclusi *`.user`* i file. Queste finestre delle proprietà possono eseguire l'override di tutti gli elementi eccetto le proprietà predefinite **PlatformToolset** e **Project** .

1. Il resto delle proprietà di configurazione del progetto. Questi valori possono ignorare le operazioni impostate nelle finestre delle proprietà.

1. Elementi (file) insieme ai relativi metadati. Questi elementi sono sempre l'ultima parola delle regole di valutazione di MSBuild, anche se si verificano prima di altre proprietà e importazioni.

Per altre informazioni, vedere [proprietà di MSBuild](/visualstudio/msbuild/msbuild-properties).

## <a name="build-configurations"></a>Configurazioni della build

Una configurazione è solo un gruppo arbitrario di proprietà a cui viene assegnato un nome. Visual Studio fornisce configurazioni di debug e di rilascio. Ogni imposta le varie proprietà in modo appropriato per una build di debug o di rilascio. È possibile utilizzare il **Configuration Manager** per definire configurazioni personalizzate. Si tratta di un modo pratico per raggruppare le proprietà per una versione specifica della build.

Per avere un'idea più approfondita delle configurazioni di compilazione, aprire **Gestione proprietà** . È possibile aprirlo scegliendo **visualizza > gestione proprietà** o **visualizza > altre Gestione proprietà di Windows >** , a seconda delle impostazioni. **Gestione proprietà** dispone di nodi per ogni coppia di configurazione e piattaforma nel progetto. In ognuno di questi nodi sono presenti nodi per le finestre delle proprietà ( *`.props`* file) che impostano alcune proprietà specifiche per tale configurazione.

![Gestione proprietà](media/property-manager.png "Gestione proprietà")

Ad esempio, è possibile passare al riquadro generale nelle pagine delle proprietà. Modificare la proprietà set di caratteri in "non impostato" invece di "USA Unicode", quindi fare clic su **OK** . Il Gestione proprietà ora non mostra alcuna finestra delle proprietà di **supporto Unicode** . Viene rimosso per la configurazione corrente, ma è ancora presente per altre configurazioni.

Per altre informazioni su Gestione proprietà e sulle finestre delle proprietà, vedere [Condividere o riutilizzare le impostazioni dei progetti di Visual Studio C++](create-reusable-property-configurations.md).

> [!TIP]
> Il *`.user`* file è una funzionalità legacy. È consigliabile eliminarlo, in modo che le proprietà vengano raggruppate correttamente in base alla configurazione e alla piattaforma.
