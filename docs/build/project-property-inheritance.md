---
title: Ereditarietà delle proprietà nei progetti di Visual Studio - C++
ms.date: 12/10/2018
helpviewer_keywords:
- C++ projects, property inheritance
ms.openlocfilehash: 7e6e2ec4e4f1999639a1b0a0d7ce35873736e5e3
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65220448"
---
# <a name="property-inheritance-in-visual-studio-projects"></a>Ereditarietà delle proprietà nei progetti di Visual Studio

Il sistema di progetto di Visual Studio si basa su MSBuild, che definisce i formati di file e le regole per la compilazione di progetti di qualsiasi tipo. MSBuild consente di gestire la complessità della compilazione per più piattaforme e configurazioni, ma è necessario comprendere le basi del suo funzionamento. Questo è particolarmente importante se si vogliono definire configurazioni personalizzate o creare set riutilizzabili di proprietà che possono essere condivisi e importati in più progetti.

## <a name="the-vcxproj-file-props-files-and-targets-files"></a>Il file con estensione vcxproj, file con estensione props e targets

Le proprietà del progetto vengono archiviate direttamente nel file di progetto (*. vcxproj) o in altri file con estensione targets o con estensione props che l'importazione di file di progetto e che forniscono valori predefiniti. Per Visual Studio 2015, questi file si trovano in **\Programmi (x86)\MSBuild\Microsoft.Cpp\v4.0\V140**. Per Visual Studio 2017, questi file si trovano in **\\Programmi (x86)\\Microsoft Visual Studio\\2017\\_edizione_\\Common7\\IDE\\VC\\VCTargets**, dove _edizione_ è la versione di Visual Studio installata. Le proprietà vengono archiviate anche in qualsiasi file con estensione props personalizzato che è possibile aggiungere a un progetto. È consigliabile NON modificare manualmente i file e usare invece le pagine delle proprietà nell'IDE per modificare tutte le proprietà, specialmente quelle che partecipano all'ereditarietà, a meno che non si abbia una conoscenza approfondita di MSBuild.

Come illustrato in precedenza, la stessa proprietà per la stessa configurazione può essere assegnata un valore diverso in questi file diversi. Quando si compila un progetto, il motore MSBuild valuta il file di progetto e tutti i file importati in un ordine ben definito (descritto di seguito). Man mano che viene valutato ogni singolo file, i valori di proprietà definiti in quel file sostituiranno i valori esistenti. Tutti i valori che non sono stati specificati vengono ereditati dai file valutati in precedenza. Quando si imposta una proprietà con le pagine delle proprietà, è quindi importante prestare attenzione anche alla posizione in cui viene eseguita l'impostazione. Se si imposta una proprietà su "X" in un file con estensione props, ma la proprietà è impostata su "Y" nel file di progetto, il progetto verrà compilato con la proprietà impostata su "Y". Se la stessa proprietà è impostata su "Z" su un elemento di progetto, ad esempio un file con estensione cpp, il motore MSBuild userà il valore di "Z". 

Di seguito è riportato l'albero di ereditarietà di base:

1. Impostazioni predefinite dal set di strumenti di MSBuild CPP (..\Programmi\MSBuild\Microsoft.Cpp\v4.0\Microsoft.Cpp.Default.props, importato dal file .vcxproj).

2. Finestre delle proprietà

3. File con estensione vcxproj È possibile ignorare l'impostazione predefinita e le impostazioni della finestra delle proprietà.

4. Metadati degli elementi

> [!TIP]
> In una pagina delle proprietà, una proprietà in `bold` è definita nel contesto corrente. Viene ereditata una proprietà in caratteri normali.

## <a name="view-an-expanded-project-file-with-all-imported-values"></a>Visualizzare un file di progetto espansi con tutti i valori importati

Talvolta è utile visualizzare il file espanso per determinare come viene ereditato un valore di proprietà specificato. Per visualizzare la versione espansa, inserire il comando seguente a un prompt dei comandi di Visual Studio. Modificare i nomi dei file segnaposto in quello che si desidera usare.

**msbuild /pp:** *temp* **.txt** *myapp* **.vcxproj**

I file di progetto possono essere di grandi dimensioni e difficili da comprendere a meno che l'utente non abbia familiarità con MSBuild. Di seguito è riportata la struttura di base di un file di progetto:

1. Proprietà di progetto di base che non sono esposte nell'IDE.

2. Importazione di Microsoft.cpp.default.props, tramite cui vengono definite alcune proprietà di base indipendenti dal set di strumenti.

3. Proprietà globali di configurazione (esposte come **PlatformToolset** e proprietà predefinite **Progetto** nella pagina **Informazioni generali configurazione**. Queste proprietà determinano quali set di strumenti e finestre delle proprietà di intrinseche vengono importati in Microsoft.cpp.props durante il passaggio successivo.

4. Importazione di Microsoft.cpp.props, tramite cui viene impostata la maggior parte delle impostazioni predefinite del progetto.

5. Importazione di tutte le finestre delle proprietà, inclusi i file con estensione user. Queste finestre delle proprietà possono ignorare tutto ad eccezione delle proprietà predefinite **PlatformToolset** e **Progetto**.

6. Il resto delle proprietà della configurazione del progetto. Questi valori possono ignorare le operazioni impostate nelle finestre delle proprietà.

7. Elementi (file) insieme ai relativi metadati. Queste sono sempre l'ultima parola delle regole di valutazione di MSBuild, anche se si verificano prima di altre proprietà e importazioni.

Per altre informazioni, vedere [MSBuild Properties](/visualstudio/msbuild/msbuild-properties) (Proprietà MSBuild).

## <a name="build-configurations"></a>Configurazioni della build

Una configurazione è solo un gruppo arbitrario di proprietà a cui viene assegnato un nome. Visual Studio offre configurazioni di tipo Debug e Versione e imposta varie proprietà in modo appropriato per una build di debug o una build di versione. È possibile usare **Configuration Manager** per definire le configurazioni personalizzate come un modo pratico per raggruppare le proprietà di uno specifico gruppo di build. 

Per ottenere un'idea più configurazioni di compilazione, aprire **Gestione proprietà** scegliendo **visualizzazione &#124; Gestione proprietà** oppure **visualizzazione &#124; Other Windows &#124; Gestione proprietà**  a seconda delle impostazioni. **Gestione proprietà** dispone di nodi per ogni coppia di configurazione/piattaforma nel progetto. In ognuno di questi nodi sono presenti nodi per le finestre delle proprietà (file con estensione props) che consentono di impostare alcune proprietà specifiche per la configurazione.

![Gestione proprietà](media/property-manager.png "Gestione proprietà")

Se passare al riquadro generale nelle pagine delle proprietà e impostare la proprietà del Set di caratteri a "Non impostato" anziché "Use Unicode" e fare clic su **OK**, verrà visualizzato Gestione proprietà alcun **supporto Unicode** foglio delle proprietà la configurazione corrente, ma sarà ancora disponibile per le altre configurazioni.

Per altre informazioni sulla gestione proprietà e finestre delle proprietà, vedere [condivisione o riutilizzare le impostazioni di progetto Visual Studio C++](create-reusable-property-configurations.md).

> [!TIP]
> Il file con estensione user è una funzionalità legacy ed è consigliabile eliminarlo per mantenere le proprietà raggruppate correttamente in base alla configurazione/piattaforma.



