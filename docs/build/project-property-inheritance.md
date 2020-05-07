---
title: Ereditarietà delle proprietà nei progetti di Visual Studio - C++
description: Funzionamento dell'ereditarietà delle proprietà nei progetti di Visual Studio C++ nativi (MSBuild).
ms.date: 02/21/2020
helpviewer_keywords:
- C++ projects, property inheritance
ms.openlocfilehash: 4740c479c6cc7c877fd72b7828a8e4811826de6c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328471"
---
# <a name="property-inheritance-in-visual-studio-projects"></a>Ereditarietà delle proprietà nei progetti di Visual Studio

Il sistema di progetto nativo di Visual Studio si basa su MSBuild. MSBuild definisce i formati di file e le regole per la compilazione di progetti di qualsiasi tipo. Gestisce la maggior parte della complessità della compilazione per più configurazioni e piattaforme. Sarà utile per comprenderne il funzionamento. Questo è particolarmente importante se si desidera definire configurazioni personalizzate. In alternativa, per creare set riutilizzabili di proprietà che è possibile condividere e importare in più progetti.

## <a name="the-vcxproj-file-props-files-and-targets-files"></a>File con estensione vcxproj, props e targets

Le proprietà del progetto vengono archiviate direttamente nel file di*`.vcxproj`* progetto () o *`.targets`* in *`.props`* altri file importati dal file di progetto e che forniscono valori predefiniti. Per Visual Studio 2015, questi file si trovano in *`\Program Files (x86)\MSBuild\Microsoft.Cpp\v4.0\V140`*. Per Visual Studio 2017, questi file si trovano in *`\Program Files (x86)\Microsoft Visual Studio\2017\<edition>\Common7\IDE\VC\VCTargets`*, dove *`<edition>`* è installata l'edizione di Visual Studio. In Visual Studio 2019 questi file si trovano in *`\Program Files (x86)\Microsoft Visual Studio\2019\<edition>\MSBuild\Microsoft\VC\v160`*. Le proprietà vengono inoltre archiviate in *`.props`* qualsiasi file personalizzato che è possibile aggiungere al progetto. Si consiglia vivamente di non modificare i file manualmente. Usare invece le pagine delle proprietà nell'IDE per modificare tutte le proprietà, in particolare quelle che partecipano all'ereditarietà, a meno che non si abbia una conoscenza approfondita di MSBuild.

Come illustrato in precedenza, la stessa proprietà per la stessa configurazione può essere assegnata a un valore diverso in file diversi. Quando si compila un progetto, il motore MSBuild valuta il file di progetto e tutti i file importati in un ordine ben definito (descritto di seguito). Man mano che viene valutato ogni singolo file, i valori di proprietà definiti in quel file sostituiranno i valori esistenti. Tutti i valori non specificati vengono ereditati dai file che sono stati valutati in precedenza. Quando si imposta una proprietà con le pagine delle proprietà, è anche importante prestare attenzione alla posizione in cui è stata impostata. Se si imposta una proprietà su "X" in un *`.props`* file, ma la proprietà è impostata su "Y" nel file di progetto, il progetto verrà compilato con la proprietà impostata su "y". Se la stessa proprietà è impostata su "Z" per un elemento di progetto, ad esempio *`.cpp`* un file, il motore MSBuild utilizzerà il valore "z".

Di seguito è riportato l'albero di ereditarietà di base:

1. Impostazioni predefinite dal set di strumenti di MSBuild CPP (.. \Program ..\Programmi\msbuild\microsoft.Cpp\v4.0\Microsoft.cpp.default.props, importato dal *`.vcxproj`* file.

1. Finestre delle proprietà

1. *`.vcxproj`* file. È possibile ignorare l'impostazione predefinita e le impostazioni della finestra delle proprietà.

1. Metadati degli elementi

> [!TIP]
> In una pagina delle proprietà, una proprietà in **grassetto** è definita nel contesto corrente. Viene ereditata una proprietà in caratteri normali.

## <a name="view-an-expanded-project-file-with-all-imported-values"></a>Visualizzare un file di progetto espanso con tutte i valori importati

Talvolta è utile visualizzare il file espanso per determinare come viene ereditato un valore di proprietà specificato. Per visualizzare la versione espansa, inserire il comando seguente a un prompt dei comandi di Visual Studio. Modificare i nomi dei file segnaposto in quello che si desidera usare.

> **msbuild /pp:**_temp_**.txt** _myapp_**.vcxproj**

I file di progetto espansi possono essere di grandi dimensioni e difficili da comprendere a meno che non si abbia familiarità con MSBuild. Di seguito è riportata la struttura di base di un file di progetto:

1. Proprietà di progetto fondamentali, che non sono esposte nell'IDE.

1. Importazione di *`Microsoft.cpp.default.props`*, che definisce alcune proprietà di base indipendenti dal set di strumenti.

1. Proprietà di configurazione globali (esposte come **PlatformToolset** e proprietà predefinite **progetto** nella pagina **configurazione generale** . Queste proprietà determinano il set di strumenti e le finestre delle *`Microsoft.cpp.props`* proprietà intrinseche che verranno importati nel passaggio successivo.

1. Importazione di *`Microsoft.cpp.props`*, che imposta la maggior parte delle impostazioni predefinite del progetto.

1. Importazione di tutte le finestre delle proprietà *`.user`* , inclusi i file. Queste finestre delle proprietà possono eseguire l'override di tutti gli elementi eccetto le proprietà predefinite **PlatformToolset** e **Project** .

1. Il resto delle proprietà di configurazione del progetto. Questi valori possono ignorare le operazioni impostate nelle finestre delle proprietà.

1. Elementi (file) insieme ai relativi metadati. Questi elementi sono sempre l'ultima parola delle regole di valutazione di MSBuild, anche se si verificano prima di altre proprietà e importazioni.

Per altre informazioni, vedere [proprietà di MSBuild](/visualstudio/msbuild/msbuild-properties).

## <a name="build-configurations"></a>Configurazioni della build

Una configurazione è solo un gruppo arbitrario di proprietà a cui viene assegnato un nome. Visual Studio fornisce configurazioni di debug e di rilascio. Ogni imposta le varie proprietà in modo appropriato per una build di debug o di rilascio. È possibile utilizzare il **Configuration Manager** per definire configurazioni personalizzate. Si tratta di un modo pratico per raggruppare le proprietà per una versione specifica della build.

Per avere un'idea più approfondita delle configurazioni di compilazione, aprire **Gestione proprietà**. È possibile aprirlo scegliendo **visualizza > gestione proprietà** o **visualizza > altre Gestione proprietà di Windows >**, a seconda delle impostazioni. **Gestione proprietà** dispone di nodi per ogni coppia di configurazione e piattaforma nel progetto. In ognuno di questi nodi sono presenti nodi per le finestre*`.props`* delle proprietà (file) che impostano alcune proprietà specifiche per tale configurazione.

![Gestione proprietà](media/property-manager.png "Gestione proprietà")

Ad esempio, è possibile passare al riquadro generale nelle pagine delle proprietà. Modificare la proprietà set di caratteri in "non impostato" invece di "USA Unicode", quindi fare clic su **OK**. Il Gestione proprietà ora non mostra alcuna finestra delle proprietà di **supporto Unicode** . Viene rimosso per la configurazione corrente, ma è ancora presente per altre configurazioni.

Per altre informazioni su Gestione proprietà e sulle finestre delle proprietà, vedere [Condividere o riutilizzare le impostazioni dei progetti di Visual Studio C++](create-reusable-property-configurations.md).

> [!TIP]
> Il *`.user`* file è una funzionalità legacy. È consigliabile eliminarlo, in modo che le proprietà vengano raggruppate correttamente in base alla configurazione e alla piattaforma.
