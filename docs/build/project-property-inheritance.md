---
title: Ereditarietà delle proprietà nei progetti di Visual Studio - C++
description: Funzionamento dell'ereditarietà delle proprietà nei progetti di Visual Studio C++ nativi (MSBuild).
ms.date: 02/21/2020
helpviewer_keywords:
- C++ projects, property inheritance
ms.openlocfilehash: 2032ab63c7d278a080742dba8d8d0c6c3ed7a094
ms.sourcegitcommit: 9a63e9b36d5e7fb13eab15c2c35bedad4fb03ade
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/25/2020
ms.locfileid: "77600028"
---
# <a name="property-inheritance-in-visual-studio-projects"></a>Ereditarietà delle proprietà nei progetti di Visual Studio

Il sistema di progetto nativo di Visual Studio si basa su MSBuild. MSBuild definisce i formati di file e le regole per la compilazione di progetti di qualsiasi tipo. Gestisce la maggior parte della complessità della compilazione per più configurazioni e piattaforme. Sarà utile per comprenderne il funzionamento. Questo è particolarmente importante se si desidera definire configurazioni personalizzate. In alternativa, per creare set riutilizzabili di proprietà che è possibile condividere e importare in più progetti.

## <a name="the-vcxproj-file-props-files-and-targets-files"></a>File con estensione vcxproj, props e targets

Le proprietà del progetto vengono archiviate direttamente nel file di progetto ( *`.vcxproj`* ) o in altri file *`.targets`* o *`.props`* che il file di progetto importa e che forniscono i valori predefiniti. Per Visual Studio 2015, questi file si trovano in *`\Program Files (x86)\MSBuild\Microsoft.Cpp\v4.0\V140`* . Per Visual Studio 2017, questi file si trovano in *`\Program Files (x86)\Microsoft Visual Studio\2017\<edition>\Common7\IDE\VC\VCTargets`* , dove *`<edition>`* è l'edizione di Visual Studio installata. In Visual Studio 2019 questi file si trovano in *`\Program Files (x86)\Microsoft Visual Studio\2019\<edition>\MSBuild\Microsoft\VC\v160`* . Le proprietà vengono archiviate anche in tutti i file di *`.props`* personalizzati che è possibile aggiungere al progetto. Si consiglia vivamente di non modificare i file manualmente. Usare invece le pagine delle proprietà nell'IDE per modificare tutte le proprietà, in particolare quelle che partecipano all'ereditarietà, a meno che non si abbia una conoscenza approfondita di MSBuild.

Come illustrato in precedenza, la stessa proprietà per la stessa configurazione può essere assegnata a un valore diverso in file diversi. Quando si compila un progetto, il motore MSBuild valuta il file di progetto e tutti i file importati in un ordine ben definito (descritto di seguito). Man mano che viene valutato ogni singolo file, i valori di proprietà definiti in quel file sostituiranno i valori esistenti. Tutti i valori non specificati vengono ereditati dai file che sono stati valutati in precedenza. Quando si imposta una proprietà con le pagine delle proprietà, è anche importante prestare attenzione alla posizione in cui è stata impostata. Se si imposta una proprietà su "X" in un file di *`.props`* , ma la proprietà è impostata su "Y" nel file di progetto, il progetto verrà compilato con la proprietà impostata su "y". Se la stessa proprietà è impostata su "Z" per un elemento di progetto, ad esempio un file di *`.cpp`* , il motore MSBuild utilizzerà il valore "z".

Di seguito è riportato l'albero di ereditarietà di base:

1. Impostazioni predefinite dal set di strumenti di MSBuild CPP (.. \Program ..\Programmi\msbuild\microsoft.Cpp\v4.0\Microsoft.cpp.default.props, importato dal file di *`.vcxproj`* .)

1. Finestre delle proprietà

1. *`.vcxproj`* file. È possibile ignorare l'impostazione predefinita e le impostazioni della finestra delle proprietà.

1. Metadati degli elementi

> [!TIP]
> In una pagina delle proprietà, una proprietà in **grassetto** è definita nel contesto corrente. Viene ereditata una proprietà in caratteri normali.

## <a name="view-an-expanded-project-file-with-all-imported-values"></a>Visualizzare un file di progetto espanso con tutte i valori importati

Talvolta è utile visualizzare il file espanso per determinare come viene ereditato un valore di proprietà specificato. Per visualizzare la versione espansa, inserire il comando seguente a un prompt dei comandi di Visual Studio. Modificare i nomi dei file segnaposto in quello che si desidera usare.

> **MSBuild/PP:** _Temp_ **. txt** _MyApp_ **. vcxproj**

I file di progetto espansi possono essere di grandi dimensioni e difficili da comprendere a meno che non si abbia familiarità con MSBuild. Di seguito è riportata la struttura di base di un file di progetto:

1. Proprietà di progetto fondamentali, che non sono esposte nell'IDE.

1. Importazione di *`Microsoft.cpp.default.props`* , che definisce alcune proprietà di base indipendenti dal set di strumenti.

1. Proprietà globali di configurazione (esposte come **PlatformToolset** e proprietà predefinite **Progetto** nella pagina **Informazioni generali configurazione**. Queste proprietà determinano quali set di strumenti e finestre delle proprietà intrinseche vengono importate nel *`Microsoft.cpp.props`* nel passaggio successivo.

1. Importazione di *`Microsoft.cpp.props`* , che consente di impostare la maggior parte delle impostazioni predefinite del progetto.

1. Importazione di tutte le finestre delle proprietà, inclusi i file di *`.user`* . Queste finestre delle proprietà possono ignorare tutto ad eccezione delle proprietà predefinite **PlatformToolset** e **Progetto**.

1. Il resto delle proprietà di configurazione del progetto. Questi valori possono ignorare le operazioni impostate nelle finestre delle proprietà.

1. Elementi (file) insieme ai relativi metadati. Questi elementi sono sempre l'ultima parola delle regole di valutazione di MSBuild, anche se si verificano prima di altre proprietà e importazioni.

Per altre informazioni, vedere [MSBuild Properties](/visualstudio/msbuild/msbuild-properties) (Proprietà MSBuild).

## <a name="build-configurations"></a>Configurazioni della build

Una configurazione è solo un gruppo arbitrario di proprietà a cui viene assegnato un nome. Visual Studio fornisce configurazioni di debug e di rilascio. Ogni imposta le varie proprietà in modo appropriato per una build di debug o di rilascio. È possibile utilizzare il **Configuration Manager** per definire configurazioni personalizzate. Si tratta di un modo pratico per raggruppare le proprietà per una versione specifica della build.

Per avere un'idea più approfondita delle configurazioni di compilazione, aprire **Gestione proprietà**. È possibile aprirlo scegliendo **visualizza > Gestione proprietà** o **visualizza > altre Gestione proprietà di Windows >** , a seconda delle impostazioni. **Gestione proprietà** dispone di nodi per ogni coppia di configurazione e piattaforma nel progetto. In ognuno di questi nodi sono presenti nodi per le finestre delle proprietà (file *`.props`* ) che impostano alcune proprietà specifiche per tale configurazione.

![Gestione proprietà](media/property-manager.png "Gestione proprietà")

Ad esempio, è possibile passare al riquadro generale nelle pagine delle proprietà. Modificare la proprietà set di caratteri in "non impostato" invece di "USA Unicode", quindi fare clic su **OK**. Il Gestione proprietà ora non mostra alcuna finestra delle proprietà di **supporto Unicode** . Viene rimosso per la configurazione corrente, ma è ancora presente per altre configurazioni.

Per altre informazioni su Gestione proprietà e sulle finestre delle proprietà, vedere [Condividere o riutilizzare le impostazioni dei progetti di Visual Studio C++](create-reusable-property-configurations.md).

> [!TIP]
> Il file di *`.user`* è una funzionalità legacy. È consigliabile eliminarlo, in modo che le proprietà vengano raggruppate correttamente in base alla configurazione e alla piattaforma.
