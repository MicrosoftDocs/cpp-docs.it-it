---
title: Visual Studio Projects - C++
ms.date: 12/12/2018
f1_keywords:
- vcprojects
- creatingmanagingVC
helpviewer_keywords:
- ATL projects, creating
- Visual C++ projects, creating
- projects [C++], creating
- Visual C++ projects
- ATL projects
ms.assetid: 11003cd8-9046-4630-a189-a32bf3b88047
ms.openlocfilehash: b5fb9ac87547578f101676d4cf424c7065155842
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57826909"
---
# <a name="visual-studio-projects---c"></a>Progetti di Visual Studio - C++

Oggetto *progetto di Visual Studio* è un progetto basato sul sistema di compilazione MSBuild. MSBuild è il sistema di compilazione nativa per Visual Studio ed è in genere che la migliore sistema da utilizzare per le app UWP, nonché applicazioni Desktop che usano le librerie MFC o ATL, componenti COM e altre applicazioni di Windows specifici di compilazione. MSBuild è strettamente integrato con Visual Studio, ma è possibile usare anche dalla riga di comando. 

## <a name="create-a-project"></a>Creare un progetto

È possibile creare progetti C++ scegliendo **File &#124; nuovo &#124; Project**, quindi scegliendo Visual C++ nel riquadro sinistro. Nel riquadro centrale verrà visualizzato un elenco di modelli di progetto: 

   ![Modelli di progetto](../media/vs2017-new-project.png "Finestra di dialogo Nuovo progetto di Visual Studio 2017")

Per altre informazioni su tutti i modelli di progetto predefiniti inclusi in Visual Studio, vedere [modelli di progetto C++ in Visual Studio](reference/visual-cpp-project-types.md). È possibile creare i propri modelli di progetto. Per altre informazioni, vedere [Procedura: Creare modelli di progetto](/visualstudio/ide/how-to-create-project-templates).

Dopo aver creato un progetto, viene visualizzato nei [Esplora soluzioni](/visualstudio/ide/solutions-and-projects-in-visual-studio) finestra:

   ![Esplora soluzioni](media/mathlibrary-solution-explorer-153.png)

Quando si crea un nuovo progetto, viene creato anche un file di soluzione (sln). È possibile aggiungere altri progetti alla soluzione facendo clic su di esso in **Esplora soluzioni**. Consente di coordinare le dipendenze di compilazione quando si hanno più progetti correlati, ma non molto più che il file della soluzione. Tutte le opzioni del compilatore vengono impostate a livello di progetto.

## <a name="add-items"></a>Aggiungi elementi

Aggiungere file di codice sorgente, icone o qualsiasi altro elemento al progetto facendo clic sul progetto in **Esplora soluzioni** e scegliendo **Aggiungi > Nuovo** oppure **Aggiungi > Existing**.

## <a name="add-third-party-libraries"></a>Aggiungere le librerie di terze parti

Per aggiungere le librerie di terze parti, usare il [vcpkg](../vcpkg.md) Gestione pacchetti. Eseguire il passaggio di integrazione di Visual Studio per configurare i percorsi di libreria quando si fa riferimento da qualsiasi progetto di Visual Studio. 

## <a name="set-compiler-options-and-other-build-properties"></a>Impostare le opzioni del compilatore e altre proprietà di compilazione

Per configurare le impostazioni di compilazione per un progetto, pulsante destro del mouse sul progetto in **Esplora soluzioni** e scegliere **proprietà**. Per altre informazioni, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](working-with-project-properties.md).

## <a name="compile-and-run"></a>Compilare ed eseguire

Per compilare ed eseguire il nuovo progetto, premere **F5** oppure fare clic sui *elenco a discesa di debug* con la freccia verde sulla barra degli strumenti principale. Il *elenco a discesa Configurazione* consente di selezionare se eseguire un *eseguire il Debug* oppure *versione* compilazione (o un'altra configurazione personalizzata).

Un nuovo progetto viene compilato senza errori. Quando si aggiunge il proprio codice, può talvolta introdurre un errore o attivare un avviso. Un errore impedisce la compilazione di completamento; non è un avviso. Tutti gli errori e avvisi verranno visualizzati nella finestra di Output e nell'elenco degli errori quando si compila il progetto. 

   ![Output finestra ed elenco errori](../media/vs2017-output-error-list.png)

Nell'elenco errori, è possibile premere **F1** in un caso di errore evidenziato per passare al relativo argomento della documentazione.

## <a name="in-this-section"></a>In questa sezione

[Impostare il compilatore C++ e creare proprietà in Visual Studio](working-with-project-properties.md)<br/>
Come usare le pagine delle proprietà e finestre delle proprietà per specificare le impostazioni del progetto.

[Librerie di riferimento e i componenti in fase di compilazione](adding-references-in-visual-cpp-projects.md)<br/>
Come includere i componenti COM e .NET libs, DLL, in un progetto.
 
[Organizzare i file di Output progetto](how-to-organize-project-output-files-for-builds.md)<br/>
Come personalizzare il percorso dei file eseguibili creato nel processo di compilazione.

[Istruzioni di compilazione personalizzate e gli eventi di compilazione](understanding-custom-build-steps-and-build-events.md)<br/>
Come aggiungere qualsiasi comando arbitrario per il processo di compilazione in corrispondenza di punti specificati.

[Creare un progetto da un codice esistente](how-to-create-a-cpp-project-from-existing-code.md)<br/>
Come creare un nuovo progetto di Visual Studio da una raccolta separata di file di origine.

## <a name="see-also"></a>Vedere anche

[Progetti e i sistemi di compilazione](projects-and-build-systems-cpp.md)<br>