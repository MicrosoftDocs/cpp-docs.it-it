---
title: Panoramica dello sviluppo con C++ in Visual Studio
description: IDE di Visual Studio supporta lo sviluppo di C++ in Windows, Linux, Android e iOS con un editor di codice, debugger, framework di test, analizzatori statici e altri strumenti di programmazione.
ms.date: 12/02/2019
helpviewer_keywords:
- Visual C++, development tools
author: corob-msft
ms.author: corob
ms.openlocfilehash: d72ea2ab4fa83259152101b357c6b2b69e74c723
ms.sourcegitcommit: 8762a3f9b5476b4dee03f0ee8064ea606550986e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/04/2019
ms.locfileid: "74810628"
---
# <a name="overview-of-c-development-in-visual-studio"></a>Panoramica dello sviluppo con C++ in Visual Studio

Microsoft C++ (MSVC) fa parte dell'ambiente di sviluppo integrato (IDE, Integrated Development Environment) di Visual Studio e condivide molti strumenti e finestre con altri linguaggi. Molti di questi, tra cui **Esplora soluzioni**, l'editor di codice e il debugger, sono documentati nell'articolo [IDE di Visual Studio](/visualstudio/get-started/visual-studio-ide). Spesso una finestra o uno strumento condiviso include un set di funzionalità leggermente diverso per C++ rispetto ad altri linguaggi. Alcuni strumenti o finestre sono disponibili solo nelle edizioni Visual Studio Professional o Visual Studio Enterprise.

Oltre agli strumenti condivisi nell'IDE di Visual Studio, MSVC include diversi strumenti specifici per lo sviluppo di codice nativo. Tali strumenti sono elencati in questo articolo. Per un elenco degli strumenti disponibili in ogni edizione di Visual Studio, vedere [Strumenti e funzionalità C++ nelle versioni di Visual Studio](visual-cpp-tools-and-features-in-visual-studio-editions.md).

## <a name="create-projects"></a>Creazione di progetti

Un *progetto* è fondamentalmente un set di file di codice sorgente e risorse, ad esempio immagini o file di dati, incorporati in un programma eseguibile o una libreria.

Visual Studio offre il supporto per qualsiasi sistema di progetto o strumento di compilazione personalizzato, nonché il supporto completo per IntelliSense, esplorazione e debug:

- **MSBuild** è il sistema di progetto nativo di Visual Studio. Quando si seleziona **File** > **Nuovo** > **progetto** dal menu principale, sono visibili molti tipi di *modelli di progetto*  MSBuild che consentono di iniziare rapidamente lo sviluppo di tipi diversi di applicazioni C++.

   ::: moniker range="vs-2019"

   ![Nuovi modelli di progetto](../build/media/mathclient-project-name-2019.png "Finestra di dialogo nuovo progetto di Visual Studio 2019")

   ::: moniker-end

   ::: moniker range="<=vs-2017"

   ![Modelli di progetto](media/vs2017-new-project.png "Finestra di dialogo nuovo progetto di Visual Studio 2017")

   ::: moniker-end

   In generale, è consigliabile usare questi modelli per i nuovi progetti a meno che non si stia usando un progetto CMake esistente o un altro sistema di progetto. Per altre informazioni, vedere [Creazione e gestione di progetti basati su MSBuild](../build/creating-and-managing-visual-cpp-projects.md).

- **CMake** è un sistema di compilazione multipiattaforma integrato nell'IDE di Visual Studio quando si installa il carico di lavoro Sviluppo di applicazioni desktop con C++. È possibile usare il modello di progetto CMake per i nuovi progetti oppure aprire semplicemente una cartella con un file CMakeLists.txt. Per altre informazioni, vedere [Progetti CMake in Visual Studio](../build/cmake-projects-in-visual-studio.md).

- Altri sistemi di compilazione C++, inclusa una raccolta separata di file, sono supportati tramite la funzionalità **Apri cartella**. Creare semplici file JSON per richiamare il programma di compilazione e configurare le sessioni di debug. Per altre informazioni, vedere [Progetti Apri cartella per C++](../build/open-folder-projects-cpp.md).

## <a name="add-to-source-control"></a>Aggiungi al controllo del codice sorgente

Il controllo del codice sorgente consente di coordinare il lavoro tra più sviluppatori, di isolare i lavori in corso dal codice di produzione e di eseguire il backup del codice sorgente. Visual Studio supporta Git e il [controllo della versione di Team Foundation \(TFVC\)](/azure/devops/repos/tfvc/) tramite la finestra **Team Explorer**. 

::: moniker range="vs-2019"

![Team Explorer](media/vs2019-team-explorer.png "Visual Studio 2017 Team Explorer")

::: moniker-end

::: moniker range="<=vs-2017"

![Team Explorer](media/vs2017-team-explorer.png "Visual Studio 2017 Team Explorer")

::: moniker-end

Per altre informazioni sull'integrazione di Git con repository in Azure, vedere [Share your code with Visual Studio 2017 and Azure Repos Git](/azure/devops/repos/git/share-your-code-in-git-vs-2017) (Condividere il codice con Visual Studio 2017 e Azure Repos Git). Per informazioni sull'integrazione di Git con GitHub, vedere [Estensione GitHub per Visual Studio](https://visualstudio.github.com/).

## <a name="obtain-libraries"></a>Ottenere librerie

Usare l'utilità di gestione pacchetti [vcpkg](../build/vcpkg.md) per ottenere e installare librerie di terze parti. Il catalogo attualmente include più di 900 librerie open source.

## <a name="create-user-interfaces-with-designers"></a>Creazione di interfacce utente con le finestre di progettazione

Se il programma ha un'interfaccia utente, è possibile usare una finestra di progettazione per inserirvi rapidamente controlli come pulsanti, caselle di riepilogo e così via. Quando si trascina un controllo dalla finestra degli strumenti e lo si rilascia sulla superficie di disegno, Visual Studio genera le risorse e il codice necessari per fare in modo che tutto funzioni correttamente. Quindi si scrive il codice per personalizzare l'aspetto e il comportamento.

![Finestra di progettazione e casella degli strumenti](media/vs2017-toolbox-designer.png "Casella degli strumenti e finestra di progettazione di Visual Studio 2017")

Per ulteriori informazioni sulla progettazione di un'interfaccia utente per un'app piattaforma UWP (Universal Windows Platform), vedere [progettazione e interfaccia](https://developer.microsoft.com/windows/design)utente.

Per altre informazioni sulla creazione di un'interfaccia utente per un'applicazione MFC, vedere [Applicazioni desktop MFC](../mfc/mfc-desktop-applications.md). Per informazioni sui programmi Windows Win32, vedere [Applicazioni desktop di Windows](../windows/windows-desktop-applications-cpp.md).

## <a name="write-code"></a>Scrittura di codice

Dopo aver creato un progetto, tutti i file di progetto vengono visualizzati nella finestra **Esplora soluzioni**. Una *soluzione* è un contenitore logico per uno o più progetti correlati. Quando si fa clic su un file con estensione h o cpp in **Esplora soluzioni**, il file viene aperto nell'editor di codice.

![Editor Esplora soluzioni e codice](media/vs2017-solution-explorer-code-editor.png "Visual Studio 2017 Esplora soluzioni e l'editor di codice")

L'editor di codice è un elaboratore di testo specializzato per il codice sorgente C++. L'editor applica colori specifici alle parole chiave del linguaggio, ai nomi di metodi e variabili e ad altri elementi del codice per rendere quest'ultimo più leggibile e di più facile comprensione. Offre anche strumenti per effettuare il refactoring del codice, spostarsi tra i diversi file e comprendere come è strutturato il codice. Per altre informazioni, vedere [Scrittura e refactoring del codice](../ide/writing-and-refactoring-code-cpp.md).

## <a name="add-and-edit-resources"></a>Aggiungere e modificare risorse

Un programma o una DLL di Windows include in genere alcune *risorse*, ad esempio finestre di dialogo, icone, immagini, stringhe localizzabili, schermate iniziali, stringhe di connessione del database o dati arbitrari. Visual Studio include strumenti per l'aggiunta e la modifica delle risorse. Per altre informazioni, vedere [uso dei file di risorse](../windows/working-with-resource-files.md).

## <a name="build-compile-and-link"></a>Compilazione (compilare e collegare)

Scegliere **compila** > **Compila soluzione** sulla barra dei menu oppure premere la combinazione di tasti **CTRL + MAIUSC + B** per compilare e collegare un progetto. Gli errori e gli avvisi di compilazione vengono segnalati nella Elenco errori (**CTRL +\\, E**). La finestra di **output** (**ALT + 2**) Mostra le informazioni sul processo di compilazione.

![Finestra di output e Elenco errori](media/vs2017-output-error-list.png "Finestra di output di Visual Studio 2017 e Elenco errori")

Per altre informazioni sulla configurazione delle build, vedere [Uso delle proprietà del progetto](../build/working-with-project-properties.md) e [Progetti e sistemi di compilazione](../build/projects-and-build-systems-cpp.md).

È anche possibile usare il compilatore (cl.exe) e molti altri strumenti autonomi correlati alla compilazione, ad esempio NMAKE e LIB, direttamente dalla riga di comando. Per altre informazioni, vedere [Compilare codice C/C++ nella riga di comando](../build/building-on-the-command-line.md) e [Riferimenti alla compilazione in C/C++](../build/reference/c-cpp-building-reference.md).

## <a name="debug"></a>Debug

È possibile avviare il debug premendo **F5**. L'esecuzione viene sospesa in corrispondenza di tutti i punti di interruzione impostati (premendo **F9**). È anche possibile esaminare il codice una riga alla volta (**F10**), visualizzare i valori delle variabili o dei registri e anche in alcuni casi apportare modifiche al codice e continuare a eseguire il debug senza ricompilare. La figura seguente mostra una sessione di debug in cui l'esecuzione viene arrestata in un punto di interruzione. I valori dei membri della struttura dati sono visibili nella **finestra Espressione di controllo**.

![Sessione di debug](media/vs2017-debug-watch.png "Sessione di debug di Visual Studio 2017")

Per altre informazioni, vedere [Debugging in Visual Studio](/visualstudio/debugger/debugging-in-visual-studio).

## <a name="test"></a>Test

Visual Studio include il framework di unit test Microsoft per C++, nonché il supporto per Boost.Test, Google Test e CTest. Eseguire i test dalla finestra **Esplora test**:

![Esplora test](media/cpp-test-explorer-passed.png "Esplora test di Visual Studio 2017")

Per altre informazioni, vedere [Verifying Code by Using Unit Tests ](/visualstudio/test/unit-test-your-code) (Verifica del codice tramite unit test) e [Scrivere unit test per C/C++ in Visual Studio](/visualstudio/test/writing-unit-tests-for-c-cpp).

## <a name="analyze"></a>Analizza

Visual Studio include strumenti statici di analisi del codice in grado di rilevare potenziali problemi nel codice sorgente. Questi strumenti includono un'implementazione degli strumenti di controllo delle regole [Linee guida di base di C++](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md). Per altre informazioni, vedere [Code analysis for C/C++ overview](/visualstudio/code-quality/code-analysis-for-c-cpp-overview) (Panoramica dell'analisi codice per C/C++).

## <a name="deploy-completed-applications"></a>Distribuire le applicazioni completate

È possibile distribuire ai clienti sia le applicazioni desktop tradizionali che le applicazioni UWP tramite Microsoft Store. La distribuzione di CRT viene gestita automaticamente in background. Per altre informazioni, vedere [Pubblicare app e giochi per Windows](/windows/uwp/publish/).

È anche possibile distribuire un desktop C++ nativo in un altro computer. Per altre informazioni, vedere [Distribuzione di applicazioni desktop](../windows/deploying-native-desktop-applications-visual-cpp.md).

Per altre informazioni sulla distribuzione di un programma C++/CLI, vedere [Guida alla distribuzione per gli sviluppatori](/dotnet/framework/deployment/deployment-guide-for-developers).

## <a name="next-steps"></a>Passaggi successivi

Esplorare più approfonditamente Visual Studio seguendo uno di questi articoli introduttivi:

> [!div class="nextstepaction"]
> [Informazioni su come usare l'editor del codice](/visualstudio/get-started/tutorial-editor)

> [!div class="nextstepaction"]
> [Introduzione a progetti e soluzioni](/visualstudio/get-started/tutorial-projects-solutions)
