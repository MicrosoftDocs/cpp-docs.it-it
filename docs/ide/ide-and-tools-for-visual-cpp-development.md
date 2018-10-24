---
title: IDE e strumenti per lo sviluppo in Visual C++ | Microsoft Docs
description: IDE di Visual Studio supporta lo sviluppo di C++ in Windows, Linux, Android e iOS con un editor di codice, debugger, framework di test, analizzatori statici e altri strumenti di programmazione.
ms.custom: ''
ms.date: 09/27/2018
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Visual C++, development tools
ms.assetid: 56eabafb-1956-4f0f-bec5-29b887763559
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 31b9c0c8668ec16d84ad84627eb73a0f406eb21e
ms.sourcegitcommit: 3f4e92266737ecb70507871e87dc8e2965ad7e04
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/15/2018
ms.locfileid: "49328376"
---
# <a name="ide-and-compiler-tools-for-visual-c-development"></a>IDE e strumenti di compilazione per lo sviluppo in Visual C++

Microsoft Visual C++ (MSVC) fa parte dell'ambiente di sviluppo integrato (IDE, Integrated Development Environment) di Visual Studio e condivide molti strumenti e finestre con altri linguaggi. Molti di questi, tra cui **Esplora soluzioni**, l'editor di codice e il debugger, sono documentati nell'articolo [IDE di Visual Studio](/visualstudio/ide/visual-studio-ide). Spesso una finestra o uno strumento condiviso include un set di funzionalità leggermente diverso per C++ rispetto ai linguaggi .NET o JavaScript. Alcuni strumenti o finestre sono disponibili solo nelle edizioni Visual Studio Professional o Visual Studio Enterprise.

Oltre agli strumenti condivisi nell'IDE di Visual Studio, MSVC include diversi strumenti specifici per lo sviluppo di codice nativo. Tali strumenti sono elencati in questo articolo. Per un elenco degli strumenti disponibili in ogni edizione di Visual Studio, vedere [Strumenti e funzionalità di Visual C++ nelle versioni di Visual Studio](visual-cpp-tools-and-features-in-visual-studio-editions.md).

## <a name="create-projects"></a>Creazione di progetti

Un *progetto* è fondamentalmente un set di file di codice sorgente e risorse, ad esempio immagini o file di dati, incorporati in un file eseguibile. 

Visual Studio 2015 offre il supporto per i progetti MSBuild. È possibile scaricare le estensioni di Visual Studio per altri sistemi di compilazione, ad esempio Qt o CMake.

Visual Studio 2017 offre il supporto per qualsiasi sistema di compilazione o strumento di compilazione personalizzato, nonché il supporto completo per IntelliSense, esplorazione e debug:

- **MSBuild** è il sistema di compilazione nativo di Visual Studio. Quando si seleziona **File** > **Nuovo** > **progetto** dal menu principale, sono visibili molti tipi di *modelli di progetto*  MSBuild che consentono di iniziare rapidamente lo sviluppo di tipi diversi di applicazioni C++.

   ![Modelli di progetto](media/vs2017-new-project.png "Finestra di dialogo Nuovo progetto di Visual Studio 2017")

   In generale, è consigliabile usare questi modelli per i nuovi progetti a meno che non si disponga di un motivo preciso per usare CMake o un altro sistema di progetto. Alcuni progetti dispongono di una *procedura guidata* che offre informazioni dettagliate per eseguire il processo di creazione di un nuovo progetto. Per altre informazioni, vedere [Creazione e gestione di progetti basati su MSBuild](creating-and-managing-visual-cpp-projects.md).

- **CMake** è un sistema di compilazione multipiattaforma integrato nell'IDE di Visual Studio quando si installa il carico di lavoro Sviluppo di applicazioni desktop con C++. Per altre informazioni, vedere [Progetti CMake in Visual C++](cmake-tools-for-visual-cpp.md).
- Altri sistemi di compilazione C++, inclusa una raccolta separata di file, sono supportati tramite la funzionalità **Apri cartella**. Creare semplici file JSON per richiamare il programma di compilazione e configurare le sessioni di debug. Per altre informazioni, vedere [Open Folder projects in Visual C++](non-msbuild-projects.md) (Aprire una cartella di progetti in Visual C++).

## <a name="add-to-source-control"></a>Aggiungi al controllo del codice sorgente

Il controllo del codice sorgente consente di coordinare il lavoro tra più sviluppatori, di isolare i lavori in corso dal codice di produzione e di eseguire il backup del codice sorgente. Visual Studio supporta Git e il [controllo della versione di Team Foundation \(TFVC\)](/azure/devops/repos/tfvc/) tramite la finestra **Team Explorer**.

![Team Explorer](media/vs2017-team-explorer.png "Visual Studio 2017 Team Explorer")

Per altre informazioni sull'integrazione di Git con repository in Azure, vedere [Share your code with Visual Studio 2017 and Azure Repos Git](/azure/devops/repos/git/share-your-code-in-git-vs-2017) (Condividere il codice con Visual Studio 2017 e Azure Repos Git). Per informazioni sull'integrazione di Git con GitHub, vedere [Estensione GitHub per Visual Studio](https://visualstudio.github.com/).

## <a name="create-user-interfaces-with-designers"></a>Creazione di interfacce utente con le finestre di progettazione

Se il programma ha un'interfaccia utente, è possibile usare una finestra di progettazione per inserirvi rapidamente controlli come pulsanti, caselle di riepilogo e così via. Quando si trascina un controllo dalla finestra degli strumenti e lo si rilascia sulla superficie di disegno, Visual Studio genera le risorse e il codice necessari per fare in modo che tutto funzioni correttamente. Quindi si scrive il codice per personalizzare l'aspetto e il comportamento.

![Finestra di progettazione e casella degli strumenti](media/vs2017-toolbox-designer.png "Casella degli strumenti e finestra di progettazione di Visual Studio 2017")

Per altre informazioni sulla progettazione di un'interfaccia utente per un'app della piattaforma UWP (Universal Windows Platform), vedere [Progettazione e interfaccia utente](https://developer.microsoft.com/windows/design).

Per altre informazioni sulla creazione di un'interfaccia utente per un'applicazione MFC, vedere [Applicazioni desktop MFC](../mfc/mfc-desktop-applications.md). Per informazioni sui programmi Windows Win32, vedere [Applicazioni desktop di Windows](../windows/windows-desktop-applications-cpp.md).

## <a name="write-code"></a>Scrittura di codice

Dopo aver creato un progetto, tutti i file di progetto vengono visualizzati nella finestra **Esplora soluzioni**. (Una *soluzione* è un contenitore logico per uno o più progetti correlati.) Quando si fa clic su un file con estensione h o cpp in **Esplora soluzioni**, il file viene aperto nell'editor di codice. 

![Esplora soluzioni ed editor di codice](media/vs2017-solution-explorer-code-editor.png "Esplora soluzioni ed editor di codice di Visual Studio 2017")

L'editor di codice è un elaboratore di testo specializzato per il codice sorgente C++. L'editor applica colori specifici alle parole chiave del linguaggio, ai nomi di metodi e variabili e ad altri elementi del codice per rendere quest'ultimo più leggibile e di più facile comprensione.

Per altre informazioni, vedere [Scrittura e refactoring del codice](writing-and-refactoring-code-cpp.md).

## <a name="add-and-edit-resources"></a>Aggiungere e modificare risorse

Il termine *risorsa* include elementi quali finestre di dialogo, icone, immagini, stringhe localizzabili, schermate iniziali, stringhe di connessione di database o eventuali dati arbitrari che si vuole includere nel file eseguibile.

Per altre informazioni sull'aggiunta e la modifica di risorse in progetti C++ desktop nativi, vedere [Uso di file di risorse](../windows/working-with-resource-files.md).

## <a name="build-compile-and-link"></a>Compilazione (compilare e collegare)

Nella barra dei menu scegliere **Compila** > **Compila soluzione** oppure premere la combinazione di tasti CTRL+MAIUSC+B per compilare e collegare un progetto. Errori e avvisi di compilazione vengono segnalati in Elenco errori (CTRL+\\, E). La finestra di **output** (ALT+2) visualizza le informazioni relative al processo di compilazione.

![Finestra di output ed elenco errori](media/vs2017-output-error-list.png "Finestra di output ed elenco errori di Visual Studio 2017") Per altre informazioni sulle configurazioni di MSBuild, vedere [Uso delle proprietà del progetto](working-with-project-properties.md) e [Compilazione di progetti C++ in Visual Studio](building-cpp-projects-in-visual-studio.md).

È anche possibile usare il compilatore (cl.exe) e molti altri strumenti autonomi correlati alla compilazione, ad esempio NMAKE e LIB, direttamente dalla riga di comando. Per altre informazioni, vedere [Compilare codice C/C++ nella riga di comando](../build/building-on-the-command-line.md) e [Riferimenti alla compilazione in C/C++](../build/reference/c-cpp-building-reference.md).

## <a name="debug"></a>Debug

È possibile avviare il debug premendo **F5**. L'esecuzione viene sospesa in qualsiasi punto di interruzione impostato. È inoltre possibile eseguire il passaggio nel codice una riga alla volta, visualizzare i valori delle variabili o dei registri e addirittura, in alcuni casi, apportare modifiche al codice e continuare a eseguire il debug senza ricompilare. La figura seguente mostra una sessione di debug in cui l'esecuzione viene arrestata in un punto di interruzione. I valori dei membri della struttura dati sono visibili nella **finestra Espressione di controllo**.

![Sessione di debug](media/vs2017-debug-watch.png "Sessione di debug di Visual Studio 2017")

Per altre informazioni, vedere [Debug in Visual Studio](/visualstudio/debugger/debugging-in-visual-studio).

## <a name="test"></a>Test

Visual Studio include framework di unit test sia per C++ nativo sia per C++/CLI. Sono supportati anche Boost.Test, Google Test e CTest. Eseguire i test dalla finestra **Esplora test**:

![Esplora test](media/cpp-test-explorer-passed.png "Esplora test di Visual Studio 2017")

Per altre informazioni, vedere [Verifying Code by Using Unit Tests ](/visualstudio/test/unit-test-your-code) (Verifica del codice tramite unit test) e [Scrivere unit test per C/C++ in Visual Studio](/visualstudio/test/writing-unit-tests-for-c-cpp).

## <a name="analyze"></a>Analyze

Visual Studio include strumenti statici di analisi del codice in grado di rilevare potenziali problemi nel codice sorgente. Questi strumenti includono un'implementazione degli strumenti di controllo delle regole [Linee guida di base di C++](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md). Per altre informazioni, vedere [Code analysis for C/C++ overview](/visualstudio/code-quality/code-analysis-for-c-cpp-overview) (Panoramica dell'analisi codice per C/C++).

## <a name="deploy-completed-applications"></a>Distribuire le applicazioni completate

È possibile distribuire ai clienti sia le applicazioni desktop tradizionali che le applicazioni UWP tramite Microsoft Store. La distribuzione di CRT viene gestita automaticamente in background. Per altre informazioni, vedere [Pubblicare app e giochi per Windows](/windows/uwp/publish/).

È inoltre possibile distribuire un desktop C++ nativo a un altro computer. Per altre informazioni, vedere [Distribuzione di applicazioni desktop](deploying-native-desktop-applications-visual-cpp.md).

Per altre informazioni sulla distribuzione di un programma C++/CLI, vedere [Guida alla distribuzione per gli sviluppatori](/dotnet/framework/deployment/deployment-guide-for-developers).

## <a name="related-articles"></a>Articoli correlati

|||
|-|-|
|[Strumenti e funzionalità di Visual C++ nelle versioni di Visual Studio](visual-cpp-tools-and-features-in-visual-studio-editions.md)|Presenta le funzionalità disponibili nelle diverse edizioni di Visual Studio.|
|[Creazione e gestione di progetti basati su MSBuild](creating-and-managing-visual-cpp-projects.md)|Offre una panoramica dei progetti C++ basati su MSBuild in Visual Studio e contiene collegamenti ad altri articoli che descrivono come crearli e gestirli.|
|[Progetti CMake in Visual C++](cmake-tools-for-visual-cpp.md).|Illustra come compilare progetti CMake o altri progetti non MSBuild in Visual C++.|
|[Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)|Descrive come compilare progetti C++.|
|[Distribuzione di applicazioni desktop](deploying-native-desktop-applications-visual-cpp.md)|Offre una panoramica della distribuzione per app C++ e contiene collegamenti ad altri articoli che descrivono la distribuzione in modo dettagliato.|
|[Guida al porting e aggiornamento in Visual C++](../porting/visual-cpp-porting-and-upgrading-guide.md)|Informazioni dettagliate per l'aggiornamento di applicazioni C++ create nelle versioni precedenti di Visual Studio, nonché per la migrazione di applicazioni create usando strumenti diversi da Visual Studio.|
|[Visual C++](../visual-cpp-in-visual-studio.md)|Descrive le funzionalità principali di Visual C++ in Visual Studio e i collegamenti al resto della documentazione di Visual C++.|
