---
title: Ereditarietà delle proprietà nei progetti di Visual Studio - C++
description: Funzionamento dell'ereditarietà delle proprietà nei progetti nativi (MSBuild) di Visual Studio.
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

Il sistema del progetto nativo di Visual Studio è basato su MSBuild.The Visual Studio native project system is based on MSBuild. MSBuild definisce i formati di file e le regole per la compilazione di progetti di qualsiasi tipo. Gestisce la maggior parte della complessità della creazione per più configurazioni e piattaforme. Troverete utile per capire come funziona. Ciò è particolarmente importante se si desidera definire configurazioni personalizzate. In alternativa, per creare set riutilizzabili di proprietà che è possibile condividere e importare in più progetti.

## <a name="the-vcxproj-file-props-files-and-targets-files"></a>File con estensione vcxproj, props e targets

Le proprietà del progetto vengono archiviate direttamente nel file di progetto (*`.vcxproj`*) o in altri *`.targets`* file o *`.props`* importati dal file di progetto e che forniscono valori predefiniti. Per Visual Studio 2015, questi *`\Program Files (x86)\MSBuild\Microsoft.Cpp\v4.0\V140`* file si trovano in . Per Visual Studio 2017, questi *`\Program Files (x86)\Microsoft Visual Studio\2017\<edition>\Common7\IDE\VC\VCTargets`* file *`<edition>`* si trovano in , dove è installata l'edizione di Visual Studio. In Visual Studio 2019, questi *`\Program Files (x86)\Microsoft Visual Studio\2019\<edition>\MSBuild\Microsoft\VC\v160`* file si trovano in . Le proprietà vengono inoltre *`.props`* archiviate in tutti i file personalizzati che è possibile aggiungere al proprio progetto. Si consiglia vivamente di NON modificare tali file manualmente. Utilizzare invece le pagine delle proprietà nell'IDE per modificare tutte le proprietà, in particolare quelle che partecipano all'ereditarietà, a meno che non si abbia una conoscenza approfondita di MSBuild.

Come illustrato in precedenza, la stessa proprietà per la stessa configurazione può essere assegnata a un valore diverso in file diversi. Quando si compila un progetto, il motore MSBuild valuta il file di progetto e tutti i file importati in un ordine ben definito (descritto di seguito). Man mano che viene valutato ogni singolo file, i valori di proprietà definiti in quel file sostituiranno i valori esistenti. Tutti i valori non specificati vengono ereditati dai file valutati in precedenza. Quando si imposta una proprietà con le pagine delle proprietà, è anche importante prestare attenzione a dove è stata impostata. Se si imposta una proprietà su *`.props`* "X" in un file, ma la proprietà è impostata su "Y" nel file di progetto, il progetto verrà compilato con la proprietà impostata su "Y". Se la stessa proprietà è impostata su "" *`.cpp`* in un elemento di progetto, ad esempio un file, il motore MSBuild utilizzerà il valore di """.

Di seguito è riportato l'albero di ereditarietà di base:

1. Impostazioni predefinite dal set di strumenti MSBuild CPP (.. Microsoft.Cpp.Default.props, che viene importato dal *`.vcxproj`* file.

1. Finestre delle proprietà

1. *`.vcxproj`* ﬁle. È possibile ignorare l'impostazione predefinita e le impostazioni della finestra delle proprietà.

1. Metadati degli elementi

> [!TIP]
> In una pagina delle proprietà, una proprietà in **grassetto** viene definita nel contesto corrente. Viene ereditata una proprietà in caratteri normali.

## <a name="view-an-expanded-project-file-with-all-imported-values"></a>Visualizzare un file di progetto espanso con tutte i valori importati

Talvolta è utile visualizzare il file espanso per determinare come viene ereditato un valore di proprietà specificato. Per visualizzare la versione espansa, inserire il comando seguente a un prompt dei comandi di Visual Studio. Modificare i nomi dei file segnaposto in quello che si desidera usare.

> **msbuild /pp:**_temp_**.txt** _myapp_**.vcxproj**

I file di progetto espansi possono essere di grandi dimensioni e difficili da comprendere a meno che non si abbia familiarità con MSBuild.Expanded project files can be large and difficult to understand unless you're familiar with MSBuild. Di seguito è riportata la struttura di base di un file di progetto:

1. Proprietà fondamentali del progetto, che non vengono esposte nell'IDE.

1. Importazione *`Microsoft.cpp.default.props`* di , che definisce alcune proprietà di base indipendenti dal set di strumenti.

1. Proprietà di configurazione globali (esposte come proprietà predefinite **PlatformToolset** e **Project** nella pagina **Generale di configurazione.** Queste proprietà determinano in *`Microsoft.cpp.props`* quale set di strumenti e nelle finestre delle proprietà intrinseche vengono importate nel passaggio successivo.

1. Importa *`Microsoft.cpp.props`* di , che imposta la maggior parte delle impostazioni predefinite del progetto.

1. Importazione di tutte le *`.user`* finestre delle proprietà, inclusi i file. Queste finestre delle proprietà possono eseguire l'override di tutto tranne le proprietà predefinite PlatformToolset e **Project.These** property sheets can override everything except the **PlatformToolset** and Project default properties.

1. Resto delle proprietà di configurazione del progetto. Questi valori possono ignorare le operazioni impostate nelle finestre delle proprietà.

1. Elementi (file) insieme ai relativi metadati. Questi elementi sono sempre l'ultima parola nelle regole di valutazione di MSBuild, anche se si verificano prima di altre proprietà e importazioni.

Per ulteriori informazioni, vedere [Proprietà MSBuild](/visualstudio/msbuild/msbuild-properties).

## <a name="build-configurations"></a>Configurazioni della build

Una configurazione è solo un gruppo arbitrario di proprietà a cui viene assegnato un nome. Visual Studio fornisce le configurazioni di debug e rilascio. Ognuno imposta varie proprietà in modo appropriato per una build di debug o una build di rilascio. È possibile usare **Configuration Manager** per definire configurazioni personalizzate. Sono un modo pratico per raggruppare le proprietà per un sapore specifico di costruzione.

Per avere un'idea migliore delle configurazioni di compilazione, aprire **Gestione proprietà**. È possibile aprirlo scegliendo **Visualizza > Gestione proprietà** o Visualizza > Altro > Gestione proprietà di **Windows,** a seconda delle impostazioni. **Gestione proprietà** dispone di nodi per ogni coppia di configurazione e piattaforma nel progetto. In ognuno di questi nodi*`.props`* sono presenti nodi per le finestre delle proprietà (file) che impostano alcune proprietà specifiche per tale configurazione.

![Gestione proprietà](media/property-manager.png "Gestione proprietà")

Ad esempio, è possibile passare al riquadro Generale nelle pagine delle proprietà. Modificare la proprietà Set di caratteri su "Non impostato" anziché su "Usa Unicode", quindi scegliere **OK**. Gestione proprietà ora non viene visualizzata alcuna finestra delle proprietà **Supporto Unicode.The Property** Manager now shows no Unicode Support property sheet. Viene rimosso per la configurazione corrente, ma è ancora presente per altre configurazioni.

Per altre informazioni su Gestione proprietà e sulle finestre delle proprietà, vedere [Condividere o riutilizzare le impostazioni dei progetti di Visual Studio C++](create-reusable-property-configurations.md).

> [!TIP]
> Il *`.user`* file è una funzionalità legacy. Si consiglia di eliminarlo, per mantenere le proprietà raggruppate correttamente in base alla configurazione e alla piattaforma.
