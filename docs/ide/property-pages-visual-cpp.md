---
title: Pagine delle proprietà (Visual C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- VC.Project.NotAProp.Edit
dev_langs:
- C++
helpviewer_keywords:
- project-file macro
- project properties [C++], default values
- user-defined values
- project properties [C++], setting
- macros, project-file
- property pages, project settings
- Visual C++ projects, properties
- build macro
- user-defined macros
ms.assetid: 13ffe3ea-1bc3-4bee-be5e-053a8a99cce4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c1dc831dff6d1e3dbef4fc762712e8125a5b20e1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="property-pages-visual-c"></a>Pagine delle proprietà (Visual C++)

Usando le pagine delle proprietà è possibile specificare le impostazioni per i progetti di Visual Studio. Per aprire la **pagine delle proprietà** la finestra di dialogo per Visual Studio di progetto di **progetto** menu, scegliere **proprietà**.

Le impostazioni di progetto possono essere specificate e applicate a tutte le configurazioni della build oppure si possono specificare proprietà di progetto diverse per ogni configurazione della build. Ad esempio, è possibile specificare determinate impostazioni per la configurazione di rilascio e altre per la configurazione di debug.

Non tutte le pagine disponibili sono necessariamente visualizzate nella **pagine delle proprietà** la finestra di dialogo. Le pagine visualizzate dipendono dai tipi di file nel progetto.

Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../ide/working-with-project-properties.md).

Per i progetti non di Windows, vedere [riferimento alla pagina proprietà di Linux C++](../linux/prop-pages-linux.md)<!-- or [C++ Cross Platform Property Page Reference](../linux/prop-pages-linux.md)-->.

## <a name="default-properties-vs-modified-properties"></a>Proprietà predefinite e modificate

Quando si utilizza il **nuovo progetto** la finestra di dialogo per creare un progetto, Visual Studio utilizza il modello di progetto specificato per inizializzare le proprietà del progetto. Di conseguenza, i valori delle proprietà nel modello possono essere considerati come valori predefiniti per il tipo di progetto.  In altri tipi di progetto, le proprietà possono avere valori predefiniti diversi.

Se un valore di proprietà del progetto viene modificato, verrà visualizzato in grassetto. Una proprietà di progetto può essere modificata per i motivi seguenti:

- La creazione guidata applicazione cambia la proprietà perché richiede un valore della proprietà diverso rispetto a quello specificato nel modello di progetto.

- Specificare un valore diverso di **nuovo progetto** la finestra di dialogo.

- L'utente specifica un valore della proprietà diverso in una pagina delle proprietà del progetto.

> [!TIP]
> Per visualizzare il set finale dei valori delle proprietà usato da MSBuild per compilare il progetto, esaminare il file di output del preprocessore, che è possibile produrre usando questa riga di comando: **MSBuild / pre-elaborazione:** *preprocessor_output_ filename*<sub>opt</sub> *nomefile_progetto*<sub>opt</sub>

## <a name="resetting-properties"></a>Reimpostazione delle proprietà

Quando si visualizza il **pagine delle proprietà** è selezionata la casella di dialogo per un progetto e il nodo del progetto **Esplora**, per molte proprietà, è possibile selezionare **eredita da padre o di progetto impostazioni predefinite** o modificare il valore di un altro modo.

Quando si visualizza il **pagine delle proprietà** è selezionata la casella di dialogo per un progetto e un file **Esplora**, per molte proprietà, è possibile selezionare **eredita da padre o il progetto impostazioni predefinite** o modificare il valore di un altro modo. Tuttavia, se il progetto contiene molti file con valori di proprietà diversi rispetto ai valori predefiniti, per la compilazione del progetto sarà necessario più tempo.

> [!TIP]
> Per aggiornare il **pagine delle proprietà** la finestra di dialogo in modo da visualizzare le ultime selezioni, scegliere **applica**.

La maggior parte delle impostazioni predefinite del progetto sono quelle del sistema (piattaforma). Alcune impostazioni predefinite del progetto derivano dai fogli di stile applicati quando si aggiornano le proprietà nel **impostazioni predefinite progetto** sezione la **generale** pagina delle proprietà di configurazione per il progetto. Per ulteriori informazioni, vedere [pagina delle proprietà Generale (progetto)](../ide/general-property-page-project.md).

## <a name="specifying-user-defined-values"></a>Specifica di valori definiti dall'utente

Per alcune proprietà è necessario specificare i valori. Un valore definito dall'utente può contenere uno o più caratteri alfanumerici o nomi di macro del file di progetto. Alcune di queste proprietà accettano solo un valore definito dall'utente, altre possono accettare un elenco di più valori delimitato da punti e virgola.

Per specificare un valore definito dall'utente per una proprietà oppure un elenco di valori, se la proprietà accetta più valori definiti dall'utente, nella colonna a destra del nome della proprietà eseguire una delle operazioni seguenti:

- Digitare il valore o l'elenco di valori.

- Scegliere la freccia a discesa. Se **modifica** è disponibile, selezionarlo e quindi nella casella di testo, digitare il valore o un elenco di valori. Un metodo alternativo per specificare un elenco consiste nel digitare ogni valore in una riga separata nella casella di testo. Nella pagina delle proprietà, i valori verranno visualizzati sotto forma di un elenco delimitato da punti e virgola.

   Per inserire una macro di file di progetto come un valore, scegliere **macro** e quindi fare doppio clic sul nome della macro.

- Scegliere la freccia a discesa. Se **Sfoglia** è disponibile, selezionarlo e quindi selezionare uno o più valori.

Per una proprietà multivalore, la **eredita da padre o il progetto impostazioni predefinite** opzione è disponibile quando si fa clic sulla freccia a discesa nella colonna a destra del nome della proprietà e quindi scegliere **modifica**. Questa opzione è selezionata per impostazione predefinita.

Si noti che in una pagina delle proprietà vengono visualizzate solo le impostazioni al livello corrente per una proprietà multivalore che eredita da un altro livello. Ad esempio, se si seleziona un file in **Esplora** e si seleziona il C/C++ **definizioni preprocessore** proprietà, le definizioni a livello di file vengono visualizzate ma ereditata definizioni a livello di progetto non vengono visualizzati. Per visualizzare i valori del livello corrente ed ereditati, scegliere la freccia a discesa nella colonna a destra del nome della proprietà e quindi scegliere **modifica**. Se si utilizza il [il modello di progetto di Visual C++](https://docs.microsoft.com/dotnet/api/microsoft.visualstudio.vcprojectengine), questo comportamento è attiva anche per gli oggetti su file e progetti. In altre parole, eseguendo una query per i valori su una proprietà a livello di file, non si otterranno i valori della proprietà a livello di progetto. È necessario richiedere i valori della proprietà a livello di progetto in modo esplicito. È anche possibile che alcuni valori ereditati di una proprietà derivino da un foglio di stile a cui non è possibile accedere a livello di codice.

## <a name="in-this-section"></a>In questa sezione

[Avanzate, strumento manifesto, proprietà di configurazione, \<Projectname > finestra di dialogo Pagine delle proprietà](../ide/advanced-manifest-tool.md)

[Pagine delle proprietà Riga di comando](../ide/command-line-property-pages.md)

[Pagina delle proprietà Istruzione di compilazione personalizzata: Generale](../ide/custom-build-step-property-page-general.md)

[Aggiunta di riferimenti](../ide/adding-references-in-visual-cpp-projects.md)

[Pagina delle proprietà Generale (File)](../ide/general-property-page-file.md)

[Pagina delle proprietà Generale (Progetto)](../ide/general-property-page-project.md)

[Generale, strumento manifesto, proprietà di configurazione, \<Projectname > finestra di dialogo Pagine delle proprietà](../ide/general-manifest-tool-configuration-properties.md)

[Pagine delle proprietà HLSL](../ide/hlsl-property-pages.md)

[Pagine delle proprietà HLSL: Avanzate](../ide/hlsl-property-pages-advanced.md)

[Pagine delle proprietà HLSL: Generale](../ide/hlsl-property-pages-general.md)

[Pagine delle proprietà HLSL: file di output](../ide/hlsl-property-pages-output-files.md)

[Input e Output, strumento manifesto, proprietà di configurazione, \<Projectname > finestra di dialogo Pagine delle proprietà](../ide/input-and-output-manifest-tool.md)

[Isolamento COM, strumento manifesto, proprietà di configurazione, \<Projectname > finestra di dialogo Pagine delle proprietà](../ide/isolated-com-manifest-tool.md)

[Pagine delle proprietà Linker](../ide/linker-property-pages.md)

[Pagina delle proprietà Risorse gestite](../ide/managed-resources-property-page.md)

[Pagine delle proprietà Strumento Manifesto](../ide/manifest-tool-property-pages.md)

[Pagine delle proprietà MIDL](../ide/midl-property-pages.md)

[Pagine delle proprietà MIDL: Avanzate](../ide/midl-property-pages-advanced.md)

[Pagine delle proprietà MIDL: Generale](../ide/midl-property-pages-general.md)

[Pagine delle proprietà MIDL: Output](../ide/midl-property-pages-output.md)

[Pagina delle proprietà NMAKE](../ide/nmake-property-page.md)

[Pagine delle proprietà Risorse](../ide/resources-property-pages.md)

[Pagina delle proprietà Directory di VC++](../ide/vcpp-directories-property-page.md)

[Pagina delle proprietà Riferimenti Web](../ide/web-references-property-page.md)

[Pagina delle proprietà Strumento generatore di dati XML](../ide/xml-data-generator-tool-property-page.md)

[Pagina delle proprietà Strumento generatore di documenti XML](../ide/xml-document-generator-tool-property-pages.md)

## <a name="see-also"></a>Vedere anche

[How to: Create and Remove Project Dependencies](/visualstudio/ide/how-to-create-and-remove-project-dependencies) (Procedura: Creare e rimuovere dipendenze di progetto)  
[Procedura: Creare e modificare le configurazioni](/visualstudio/ide/how-to-create-and-edit-configurations)  
