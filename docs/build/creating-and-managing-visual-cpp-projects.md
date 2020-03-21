---
title: Progetti di Visual Studio - C++
ms.date: 10/25/2019
helpviewer_keywords:
- ATL projects, creating
- Visual Studio C++ projects, creating
- projects [C++], creating
- Visual Studio C++ projects
- ATL projects
ms.assetid: 11003cd8-9046-4630-a189-a32bf3b88047
ms.openlocfilehash: 3694478e22bfd2a3c58a72ba0c3ad2d15351bc9f
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80078685"
---
# <a name="visual-studio-projects---c"></a>Progetti di Visual Studio - C++

Un *progetto di Visual Studio* è un progetto basato sul sistema di compilazione MSBuild. MSBuild è il sistema di compilazione nativo per Visual Studio ed è in genere il sistema di compilazione migliore da usare per i programmi specifici di Windows. MSBuild è strettamente integrato con Visual Studio, ma si può usare anche dalla riga di comando. Per i progetti multipiattaforma o i progetti che usano librerie open source, è consigliabile usare i [progetti CMake in Visual Studio](cmake-projects-in-visual-studio.md) in visual studio 2017 e versioni successive. Per informazioni sull'aggiornamento di progetti MSBuild da versioni precedenti di Visual Studio, vedere [la C++ Guida al porting e all'aggiornamento di Microsoft](../porting/visual-cpp-porting-and-upgrading-guide.md).

## <a name="create-a-project"></a>Creare un progetto

::: moniker range="vs-2019"

È possibile creare progetti C++ scegliendo **File** > **Nuovo** > **Progetto** e quindi impostando **Linguaggio** su C++. Nell'elenco risultati è disponibile un elenco di modelli di progetto che è possibile filtrare impostando un'opzione in **Piattaforma** o **Tipo di progetto** e digitando parole chiave nella casella di ricerca.

   ![Modelli di progetto di Visual Studio 2019](../build/media/vs2019-choose-console-app.png "Finestra di dialogo nuovo progetto di Visual Studio 2019")

::: moniker-end

::: moniker range="vs-2017"

È possibile creare progetti C++ scegliendo **File** > **Nuovo** > **Progetto** e quindi scegliendo Visual C++ nel riquadro sinistro. Nel riquadro centrale è visualizzato un elenco di modelli di progetto:

   ![Modelli di progetto](../overview/media/vs2017-new-project.png "Finestra di dialogo nuovo progetto di Visual Studio 2017")

::: moniker-end

Per altre informazioni su tutti i modelli di progetto predefiniti inclusi in Visual Studio, vedere [Modelli di progetto C++](reference/visual-cpp-project-types.md). È possibile creare modelli di progetto personalizzati. Per altre informazioni, vedere [procedura: creare modelli di progetto](/visualstudio/ide/how-to-create-project-templates).

Dopo aver creato un progetto, questo viene visualizzato nella finestra di [Esplora soluzioni](/visualstudio/ide/solutions-and-projects-in-visual-studio):

   ![Esplora soluzioni](media/mathlibrary-solution-explorer-153.png)

Quando si crea un nuovo progetto, viene creato anche un file di soluzione (con estensione sln). È possibile aggiungere altri progetti alla soluzione facendo clic su di essa con il pulsante destro del mouse in **Esplora soluzioni**. Il file di soluzione viene usato per coordinare le dipendenze di compilazione quando sono presenti più progetti correlati, ma non fa molto altro. Tutte le opzioni del compilatore vengono impostate a livello di progetto.

## <a name="add-items"></a>Aggiungi elementi

Per aggiungere file di codice sorgente, icone o qualsiasi altro elemento al progetto, fare clic con il pulsante destro del mouse sul progetto in **Esplora soluzioni** e scegliere **Aggiungi > Nuovo** o **Aggiungi > Esistente**.

## <a name="add-third-party-libraries"></a>Aggiungere librerie di terze parti

Per aggiungere librerie di terze parti, usare l'utilità di gestione pacchetti [vcpkg](vcpkg.md). Eseguire il passaggio relativo all'integrazione di Visual Studio per configurare i percorsi della libreria quando vi si fa riferimento da un progetto di Visual Studio.

## <a name="set-compiler-options-and-other-build-properties"></a>Impostare le opzioni del compilatore e altre proprietà di compilazione

Per configurare le impostazioni di compilazione di un progetto, fare clic con il pulsante destro del mouse sul progetto in **Esplora soluzioni** e scegliere **Proprietà**. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](working-with-project-properties.md).

## <a name="compile-and-run"></a>Compila ed esegui

Per compilare ed eseguire il nuovo progetto, premere **F5** oppure fare clic sul *menu a discesa di debug* con la freccia verde sulla barra degli strumenti principale. Nell'*elenco a discesa di configurazione* occorre scegliere se eseguire una compilazione di *Debug* o *Rilascio* (o una configurazione personalizzata).

Un nuovo progetto viene compilato senza errori. Quando si aggiunge il proprio codice, si può a volte introdurre un errore o causare la generazione di un avviso. Un errore impedisce il completamento della compilazione, diversamente da un avviso. Tutti gli errori e gli avvisi vengono visualizzati sia nella Finestra di output che nell'Elenco errori quando si compila il progetto.

   ![Finestra di output ed elenco errori](../overview/media/vs2017-output-error-list.png)

In Elenco errori è possibile premere **F1** su un errore evidenziato per passare al corrispondente argomento della documentazione.

## <a name="in-this-section"></a>Contenuto della sezione

[Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](working-with-project-properties.md)<br/>
Come usare le pagine delle proprietà e le finestre delle proprietà per specificare le impostazioni del progetto.

[Fare riferimento a librerie e componenti in fase di compilazione](adding-references-in-visual-cpp-projects.md)<br/>
Come includere librerie, DLL e componenti COM e .NET in un progetto.

[Organizzare i file di output dei progetti](how-to-organize-project-output-files-for-builds.md)<br/>
Come personalizzare la posizione dei file eseguibili creati nel processo di compilazione.

[Istruzioni di compilazione personalizzate ed eventi di compilazione](understanding-custom-build-steps-and-build-events.md)<br/>
Come aggiungere un comando arbitrario al processo di compilazione in punti specifici.

[Creare un progetto da un codice esistente](how-to-create-a-cpp-project-from-existing-code.md)<br/>
Come creare un nuovo progetto di Visual Studio da un'ampia raccolta di file di origine.

## <a name="see-also"></a>Vedere anche

[Progetti e sistemi di compilazione](projects-and-build-systems-cpp.md)<br>
[Guida C++ al porting e aggiornamento Microsoft](../porting/visual-cpp-porting-and-upgrading-guide.md)
