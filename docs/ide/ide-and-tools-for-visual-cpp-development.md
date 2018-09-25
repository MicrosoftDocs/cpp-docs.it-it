---
title: IDE e strumenti per lo sviluppo in Visual C++ | Microsoft Docs
ms.custom: ''
ms.date: 06/02/2018
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
ms.openlocfilehash: d4e7742afd3fecc4dd115624da0c1650dc662004
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46412522"
---
# <a name="ide-and-tools-for-visual-c-development"></a>IDE e strumenti per lo sviluppo in Visual C++

Microsoft Visual C++ (MSVC) fa parte dell'ambiente di sviluppo integrato (IDE, Integrated Development Environment) di Visual Studio e condivide molti strumenti e finestre con altri linguaggi. Molti di questi, tra cui **Esplora soluzioni**, l'editor di codice e il debugger, sono documentati nell'articolo [IDE di Visual Studio](/visualstudio/ide/visual-studio-ide). Spesso una finestra o uno strumento condiviso include un set di funzionalità leggermente diverso per C++ rispetto ai linguaggi .NET o JavaScript. Alcuni strumenti o finestre sono disponibili solo in Visual Studio Pro o Visual Studio Enterprise.

Oltre agli strumenti condivisi nell'IDE di Visual Studio, MSVC include diversi strumenti specifici per lo sviluppo di codice nativo. Tali strumenti sono elencati in questo articolo. Per un elenco degli strumenti disponibili in ogni edizione di Visual Studio, vedere [Strumenti e funzionalità di Visual C++ nelle versioni di Visual Studio](../ide/visual-cpp-tools-and-features-in-visual-studio-editions.md).

## <a name="creating-a-solution-and-projects"></a>Creazione di una soluzione e di progetti

Un *progetto* è fondamentalmente un set di file di codice sorgente e risorse, ad esempio immagini o file di dati, incorporati in un file eseguibile.

Visual Studio 2015 offre il supporto per i progetti MSBuild. È possibile scaricare le estensioni di Visual Studio per altri sistemi di compilazione, ad esempio Qt o CMake.

Visual Studio 2017 offre il supporto per qualsiasi sistema di compilazione o strumento di compilazione personalizzato, nonché il supporto completo per IntelliSense, esplorazione e debug:

- MSBuild è il sistema di compilazione nativo per Visual Studio ed è spesso la scelta migliore per le app della piattaforma UWP (Universal Windows Platform) o le applicazioni desktop legacy di Windows che usano MFC o ATL. Per altre informazioni sui progetti C++ basati su MSBuild, vedere [Creazione e gestione di progetti basati su MSBuild](creating-and-managing-visual-cpp-projects.md).
- CMake è un sistema di compilazione multipiattaforma integrato nell'IDE di Visual Studio quando si installa il carico di lavoro Sviluppo di applicazioni desktop con C++. Per altre informazioni, vedere [Progetti CMake in Visual C++](cmake-tools-for-visual-cpp.md).
- Altri sistemi di compilazione C++, inclusa una raccolta separata di file, sono supportati tramite la funzionalità Apri cartella. Creare semplici file JSON per richiamare il programma di compilazione e configurare le sessioni di debug. Per altre informazioni, vedere il [post sull'uso del codice C++ in Visual Studio](https://blogs.msdn.microsoft.com/vcblog/2017/04/14/bring-your-cpp-code-to-visual-studio/).

### <a name="project-templates-msbuild"></a>Modelli di progetto (MSBuild)

Visual Studio viene fornito con diversi modelli per i progetti basati su MSBuild. Questi modelli contengono il codice di avvio e le impostazioni necessarie per un'ampia gamma di tipi di programma di base. Per iniziare, in genere è necessario scegliere **File** > **Nuovo progetto** per creare un progetto da un modello e quindi aggiungere al progetto nuovi file di codice sorgente o avviare la codifica nei file forniti. Per informazioni specifiche relative a progetti e procedure guidate per i progetti C++, vedere [Creazione e gestione di progetti Visual C++](../ide/creating-and-managing-visual-cpp-projects.md).

### <a name="application-wizards-msbuild"></a>Creazioni guidate applicazioni (MSBuild)

Quando si sceglie **File** > **Nuovo progetto**, Visual Studio offre procedure guidate per alcuni tipi di progetto MSBuild. Una procedura guidata contiene informazioni dettagliate per eseguire il processo di creazione di un nuovo progetto. Ciò risulta utile per i tipi di progetto con molte opzioni e impostazioni. Per altre informazioni, vedere [Creazione di progetti desktop tramite le creazioni guidate applicazioni](../ide/creating-desktop-projects-by-using-application-wizards.md).

## <a name="creating-user-interfaces-with-designers-msbuild"></a>Creazione di interfacce utente con finestre di progettazione (MSBuild)

Se il programma ha un'interfaccia utente, una delle prime attività consiste nell'inserirvi controlli come pulsanti, caselle di riepilogo e così via. Visual Studio include un'area di progettazione visiva e una casella degli strumenti per ogni aspetto dell'applicazione C++. Indipendentemente dal tipo di app che si intende creare, l'idea di base è sempre la stessa: trascinare un controllo dalla finestra della casella degli strumenti e rilasciarlo nel punto desiderato dell'area di progettazione. Visual Studio genera in background le risorse e il codice necessari per il funzionamento. È quindi possibile scrivere il codice per popolare i controlli con i dati o personalizzarne l'aspetto e il comportamento.

Per altre informazioni sulla progettazione di un'interfaccia utente per un'app della piattaforma UWP (Universal Windows Platform), vedere [Progettazione e interfaccia utente](https://developer.microsoft.com/en-us/windows/design).

Per altre informazioni sulla creazione di un'interfaccia utente per un'applicazione MFC, vedere [Applicazioni desktop MFC](../mfc/mfc-desktop-applications.md). Per informazioni sui programmi Windows Win32, vedere [Applicazioni desktop di Windows](../windows/windows-desktop-applications-cpp.md).

## <a name="writing-and-editing-code"></a>Scrittura e modifica del codice

### <a name="semantic-colorization"></a>Applicazione di colori alla semantica

Dopo aver creato un progetto, tutti i file di progetto vengono visualizzati nella finestra **Esplora soluzioni**. Quando si fa clic su un file con estensione h o cpp in **Esplora soluzioni**, il file viene aperto nell'editor di codice. L'editor di codice è un elaboratore di testo specializzato per il codice sorgente C++. L'editor applica colori specifici alle parole chiave del linguaggio, ai nomi di metodi e variabili e ad altri elementi del codice per rendere quest'ultimo più leggibile e di più facile comprensione.

### <a name="intellisense"></a>IntelliSense

L'editor di codice supporta anche diverse funzionalità che insieme sono note con il nome IntelliSense. È possibile posizionare il puntatore del mouse su un metodo e visualizzarne alcune informazioni di base. Dopo aver digitato un nome di variabile di classe seguito da . o ->, viene visualizzato un elenco di membri di istanza della classe. Se si digita un nome di classe e quindi ::, viene visualizzato un elenco di membri statici. Quando si inizia a digitare un nome di classe o metodo, l'editor di codice offre suggerimenti per completare l'istruzione. Per altre informazioni, vedere [Using IntelliSense](/visualstudio/ide/using-intellisense) (Uso di IntelliSense).

### <a name="code-snippets"></a>Frammenti di codice

È possibile usare i frammenti di codice di IntelliSense per generare costrutti di codice di uso comune o più complessi con la semplice pressione di una combinazione di tasti. Per altre informazioni, vedere [Code Snippets](/visualstudio/ide/code-snippets) (Frammenti di codice).

## <a name="navigating-code"></a>Esplorazione del codice

Il menu **Visualizza** consente di accedere a molti strumenti e finestre per spostarsi all'interno dei file di codice. Per informazioni dettagliate su queste finestre, vedere [Visualizzazione della struttura del codice](/visualstudio/ide/viewing-the-structure-of-code).

### <a name="solution-explorer"></a>Esplora soluzioni

In tutte le edizioni di Visual Studio usare il riquadro **Esplora soluzioni** per spostarsi tra i file di un progetto. Espandere l'icona di un file con estensione h o cpp per visualizzare le classi nel file. Espandere una classe per visualizzarne i membri. Fare doppio clic su un membro per esplorarne la definizione o l'implementazione nel file.

### <a name="class-view-and-code-definition-window"></a>Riquadro Visualizzazione classi e finestra Definizione codice

Usare il riquadro **Visualizzazione classi** per visualizzare gli spazi dei nomi e le classi di tutti i file, incluse le classi parziali. È possibile espandere ogni spazio dei nomi o classe per visualizzarne i membri e quindi fare doppio clic sul membro per passare alla posizione corrispondente nel file di origine. Se si apre la **finestra Definizione codice**, è possibile visualizzare la definizione o l'implementazione del tipo quando questo viene selezionato in **Visualizzazione classi**.

### <a name="object-browser"></a>Visualizzatore oggetti

Usare **Visualizzatore oggetti** per esplorare le informazioni sui tipi nei componenti Windows Runtime (file con estensione winmd), negli assembly .NET e nelle librerie dei tipi COM. Questo strumento non viene usato con le DLL Win32.

### <a name="go-to-definitiondeclaration"></a>Vai a definizione/Vai a dichiarazione

Premere F12 in corrispondenza di qualsiasi nome di API o variabile membro per visualizzarne la definizione. Se la definizione si trova in un file con estensione winmd (per un'app UWP o di Windows 8.x Store), le informazioni sul tipo verranno visualizzate in Visualizzatore oggetti. È anche possibile scegliere **Vai a definizione** o **Vai a dichiarazione** facendo clic con il pulsante destro del mouse sul nome della variabile o del tipo e quindi scegliendo l'opzione dal menu di scelta rapida.

### <a name="find-all-references"></a>Trova tutti i riferimenti

In un file di codice sorgente fare clic con il pulsante destro del mouse dopo aver posizionato il cursore sul nome di un tipo, un metodo o una variabile e scegliere **Trova tutti i riferimenti** per ottenere un elenco di posizioni nel file, nel progetto o nella soluzione in cui il tipo viene usato. **Trova tutti i riferimenti** è un'opzione avanzata e restituisce solo le istanze della stessa identica variabile, anche se altre variabili in ambiti diversi hanno lo stesso nome.

## <a name="add-and-edit-resources--msbuild"></a>Aggiungere e modificare risorse (MSBuild)

Il termine *risorsa* nel contesto di un progetto desktop di Visual Studio include elementi quali finestre di dialogo, icone, stringhe localizzabili, schermate iniziali, stringhe di connessione di database o eventuali dati arbitrari che si vuole includere nel file eseguibile.

Per altre informazioni sull'aggiunta e la modifica di risorse in progetti C++ desktop nativi, vedere [Uso di file di risorse](../windows/working-with-resource-files.md).

## <a name="build-compile-and-link"></a>Compilazione (compilare e collegare)

Nella barra dei menu scegliere **Compila** > **Compila soluzione** oppure premere la combinazione di tasti CTRL+MAIUSC+B per compilare e collegare un progetto. Per creare codice eseguibile, Visual Studio usa [MSBuild](/visualstudio/msbuild/msbuild1) o CMake oppure qualsiasi ambiente di compilazione configurato tramite la funzionalità **Apri cartella**. Per i progetti MSBuild, le opzioni di compilazione generali vengono impostate in **Strumenti** > **Opzioni** > **Progetti e soluzioni** ed è possibile impostare le proprietà per progetti specifici in **Progetto** > **Proprietà**. Errori e avvisi di compilazione vengono segnalati in Elenco errori (CTRL+\\, E). I progetti non MSBuild vengono configurati con file JSON creati in Esplora soluzioni. Indipendentemente dal sistema di compilazione in uso, la finestra di **output** (ALT+2) visualizza le informazioni relative al processo di compilazione. Per altre informazioni sulle configurazioni di MSBuild, vedere [Uso delle proprietà del progetto](../ide/working-with-project-properties.md) e [Compilazione di progetti C++ in Visual Studio](../ide/building-cpp-projects-in-visual-studio.md).

È anche possibile usare il compilatore (cl.exe) e molti altri strumenti autonomi correlati alla compilazione, ad esempio NMAKE e LIB, direttamente dalla riga di comando. Per altre informazioni, vedere [Compilare codice C/C++ nella riga di comando](../build/building-on-the-command-line.md) e [Riferimenti alla compilazione in C/C++](../build/reference/c-cpp-building-reference.md).

## <a name="test"></a>Test

Visual Studio include un framework di unit test sia per C++ nativo sia per C++/CLI. Per altre informazioni, vedere [Verifica del codice tramite unit test](/visualstudio/test/unit-test-your-code) e [Scrittura di unit test per C/C++ con il framework di testing unità Microsoft per C++](/visualstudio/test/writing-unit-tests-for-c-cpp-with-the-microsoft-unit-testing-framework-for-cpp)

## <a name="analyze"></a>Analyze

Visual Studio include strumenti per l'analisi codice statica per C++, compresa un'implementazione di controlli delle regole delle [Linee guida di base di C++](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md). Per altre informazioni, vedere [Code analysis for C/C++ overview](/visualstudio/code-quality/code-analysis-for-c-cpp-overview) (Panoramica dell'analisi codice per C/C++).

## <a name="debug"></a>Debug

Quando la configurazione del progetto è impostata su Debug è possibile eseguire il debug del programma premendo **F5**. Durante il debug è possibile impostare punti di interruzione premendo **F9**, eseguire il codice un'istruzione alla volta premendo **F10**, visualizzare i valori delle variabili o dei registri specificati e addirittura, in alcuni casi, apportare modifiche al codice e continuare a eseguire il debug senza ricompilare. Per altre informazioni, vedere [Debug in Visual Studio](/visualstudio/debugger/debugging-in-visual-studio).

## <a name="deploy-completed-applications"></a>Distribuire le applicazioni completate

Per distribuire un'app UWP ai clienti tramite Microsoft Store usare l'opzione di menu **Progetto** > **Store**. La distribuzione di CRT viene gestita automaticamente in background. Per altre informazioni, vedere [Pubblicare app e giochi per Windows](/windows/uwp/publish/).

Quando si distribuisce un'applicazione desktop C++ nativa in un altro computer, è necessario installare l'applicazione stessa e tutti i file di libreria da cui dipende. Esistono tre modi diversi per distribuire il runtime Universal C++ (UCRT) con un'applicazione: distribuzione centrale, distribuzione locale o collegamento statico. Per altre informazioni, vedere [Distribuzione di applicazioni desktop](../ide/deploying-native-desktop-applications-visual-cpp.md).

Per altre informazioni sulla distribuzione di un programma C++/CLI, vedere [Guida alla distribuzione per gli sviluppatori](/dotnet/framework/deployment/deployment-guide-for-developers).

## <a name="related-articles"></a>Articoli correlati

|||
|-|-|
|[Strumenti e funzionalità di Visual C++ nelle versioni di Visual Studio](../ide/visual-cpp-tools-and-features-in-visual-studio-editions.md)|Presenta le funzionalità disponibili nelle diverse edizioni di Visual Studio.|
|[Creazione e gestione di progetti basati su MSBuild](../ide/creating-and-managing-visual-cpp-projects.md)|Offre una panoramica dei progetti C++ basati su MSBuild in Visual Studio e contiene collegamenti ad altri articoli che descrivono come crearli e gestirli.|
|[Progetti CMake in Visual C++](cmake-tools-for-visual-cpp.md).|Illustra come compilare progetti CMake o altri progetti non MSBuild in Visual C++.|
|[Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)|Descrive come compilare progetti C++.|
|[Distribuzione di applicazioni desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)|Offre una panoramica della distribuzione per app C++ e contiene collegamenti ad altri articoli che descrivono la distribuzione in modo dettagliato.|
|[Guida al porting e aggiornamento in Visual C++](../porting/visual-cpp-porting-and-upgrading-guide.md)|Informazioni dettagliate per l'aggiornamento di applicazioni C++ create nelle versioni precedenti di Visual Studio, nonché per la migrazione di applicazioni create usando strumenti diversi da Visual Studio.|
|[Visual C++](../visual-cpp-in-visual-studio.md)|Descrive le funzionalità principali di Visual C++ in Visual Studio e i collegamenti al resto della documentazione di Visual C++.|
