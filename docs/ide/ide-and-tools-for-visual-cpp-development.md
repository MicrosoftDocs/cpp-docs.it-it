---
title: IDE e strumenti per lo sviluppo di Visual C++ | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: Visual C++, development tools
ms.assetid: 56eabafb-1956-4f0f-bec5-29b887763559
caps.latest.revision: "17"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e503c3ecbf0cd7245aadeb231030a91577e1e865
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ide-and-tools-for-visual-c-development"></a>IDE e strumenti per lo sviluppo in Visual C++
Come parte dell'ambiente di sviluppo integrato (IDE, Integrated Development Environment) di Visual Studio, Visual C++ ha molte finestre e strumenti in comune con altri linguaggi. Molti di questi, tra cui **Esplora**, Editor di codice e il Debugger, sono documentati in [IDE di Visual Studio](/visualstudio/ide/visual-studio-ide). Spesso una finestra o uno strumento condiviso include un set di funzionalità leggermente diverso per C++ rispetto ai linguaggi .NET o JavaScript. Alcuni strumenti o finestre sono disponibili solo in Visual Studio Pro o Visual Studio Enterprise.   
  
 Oltre agli strumenti condivisi nell'IDE di Visual Studio, Visual C++ include diversi strumenti specifici per lo sviluppo di codice nativo. Tali strumenti sono elencati in questo articolo. Per un elenco di cui è disponibile in ogni edizione di Visual Studio tools, vedere [strumenti di Visual C++ e funzionalità in edizioni di Visual Studio](../ide/visual-cpp-tools-and-features-in-visual-studio-editions.md).  
## <a name="creating-a-solution-and-projects"></a>Creazione di una soluzione e di progetti  

Un "progetto" è fondamentalmente un set di file del codice sorgente e risorse quali immagini o file di dati che vengono compilati in un file eseguibile. Visual Studio 2017 può supportare qualsiasi sistema di compilazione o strumenti di compilazione personalizzato che si desiderano utilizzare, con il supporto completo per Intellisense, esplorazione e di debug:
 - MSBuild è il sistema di compilazione "nativo" per Visual Studio e spesso è la scelta ideale per App UWP o legacy applicazioni desktop di Windows che utilizza MFC o ATL. Per ulteriori informazioni sui progetti C++ basate su MSBuild, vedere [creazione e gestione di progetti basati su MSBuild](creating-and-managing-visual-cpp-projects.md).
 - CMake è una multipiattaforma compilare un sistema che è integrato nell'IDE di Visual Studio quando si installa il carico di lavoro di C++ Desktop. Per altre informazioni, vedere [Progetti CMake in Visual C++](cmake-tools-for-visual-cpp.md).
 - Qualsiasi altro sistema di compilazione C++, inclusa una raccolta separata di file, è supportata tramite la funzionalità Apri cartella. Creare file JSON semplici per richiamare il programma di compilazione e configurare le sessioni di debug. Per ulteriori informazioni, vedere [portare il codice C++ in Visual Studio](https://blogs.msdn.microsoft.com/vcblog/2017/04/14/bring-your-cpp-code-to-visual-studio/).
 
 
 **Modelli di progetto (MSBuild)**  
  
 Visual C++ viene fornito con diversi modelli per i progetti basati su MSBuild. Questi modelli contengono codice di avvio e le impostazioni necessarie per un'ampia gamma di tipi di programma di base. In genere iniziare scegliendo **File &#124; Nuovo progetto** per creare un progetto da un modello di progetto, quindi aggiungere nuovi file del codice sorgente al progetto o avviare la codifica nei file forniti. Per informazioni specifiche per i progetti di C++ e le creazioni guidate progetto, vedere [creazione e gestione di progetti Visual C++](../ide/creating-and-managing-visual-cpp-projects.md).  
  
 **Creazioni guidate applicazione (MSBuild)**  
  
 Visual C++ include procedure guidate per alcuni tipi di progetto MSBuild quando si sceglie **File &#124; Nuovo progetto**. Una procedura guidata contiene informazioni dettagliate per eseguire il processo di creazione di un nuovo progetto. Ciò risulta utile per i tipi di progetto con molte opzioni e impostazioni. Per ulteriori informazioni, vedere [creazione Desktop progetti da creazioni guidate applicazione](../ide/creating-desktop-projects-by-using-application-wizards.md).  
  
## <a name="creating-user-interfaces-with-designers-msbuild"></a>Creazione di interfacce utente con finestre di progettazione (MSBuild) 
 Se il programma ha un'interfaccia utente, una delle prime attività consiste nell'inserirvi controlli come pulsanti, caselle di riepilogo e così via. Visual Studio include un'area di progettazione visiva e una casella degli strumenti per ogni aspetto dell'applicazione C++. Indipendentemente dal tipo di app che si intende creare, l'idea di base è sempre la stessa: trascinare un controllo dalla finestra della casella degli strumenti e rilasciarlo nel punto desiderato dell'area di progettazione. Visual Studio genera in background le risorse e il codice necessari per il funzionamento. Quindi possibile scrivere il codice per popolare i controlli con i dati o personalizzare l'aspetto e comportamento.
  
 Per ulteriori informazioni sulla progettazione di un'interfaccia utente per un'app della piattaforma Windows universale, vedere [progettazione e l'interfaccia utente](https://developer.microsoft.com/en-us/windows/design).  
  
 Per ulteriori informazioni sulla creazione di un'interfaccia utente per un'applicazione MFC, vedere [applicazioni Desktop MFC](../mfc/mfc-desktop-applications.md). Per informazioni sui programmi Windows Win32, vedere [applicazioni Desktop di Windows](../windows/windows-desktop-applications-cpp.md).  
  
 Per informazioni sulle applicazioni Windows Forms con C++ c++ /CLI, vedere [creazione di un'applicazione Windows Form .NET Framework (C++)](http://msdn.microsoft.com/en-us/8e007885-6c8b-4fb2-a41d-91febd114a9b).  
  
## <a name="writing-and-editing-code"></a>Scrittura e modifica del codice  
 **Colorazione semantica**  
  
 Dopo aver creato un progetto, tutti i file di progetto vengono visualizzati nel **Esplora** finestra. Quando fa clic su un file con estensione h o cpp in **Esplora**, il file viene aperto nell'editor di codice. L'editor di codice è un elaboratore di testo specializzato per il codice sorgente C++. L'editor applica colori specifici alle parole chiave del linguaggio, ai nomi di metodi e variabili e ad altri elementi del codice per rendere quest'ultimo più leggibile e di più facile comprensione.  
  
 **IntelliSense**  
  
 L'editor di codice supporta anche diverse funzionalità che insieme sono note con il nome IntelliSense. È possibile posizionare il puntatore del mouse su un metodo e visualizzarne alcune informazioni di base. Dopo aver digitato un nome di variabile di classe seguito da . o ->, viene visualizzato un elenco di membri di istanza della classe. Se si digita un nome di classe e quindi ::, viene visualizzato un elenco di membri statici. Quando si inizia a digitare un nome di classe o metodo, l'editor di codice offre suggerimenti per completare l'istruzione. Per altre informazioni, vedere [Using IntelliSense](/visualstudio/ide/using-intellisense) (Uso di IntelliSense).  
  
 **Frammenti di codice**  
  
 È possibile usare i frammenti di codice di IntelliSense per generare costrutti di codice di uso comune o più complessi con la semplice pressione di una combinazione di tasti. Per altre informazioni, vedere [Code Snippets](/visualstudio/ide/code-snippets) (Frammenti di codice).  
  
## <a name="navigating-code"></a>Esplorazione del codice  
 Il **visualizzazione** consente di accedere a molti strumenti e finestre per esplorare i file del codice. Per informazioni dettagliate su queste finestre, vedere [visualizzazione della struttura del codice](/visualstudio/ide/viewing-the-structure-of-code).  
  
 **Esplora soluzioni**  
  
 In tutte le edizioni di Visual Studio usare il riquadro Esplora soluzioni per spostarsi tra i file in un progetto. Espandere l'icona di un file con estensione h o cpp per visualizzare le classi nel file. Espandere una classe per visualizzarne i membri. Fare doppio clic su un membro per esplorarne la definizione o l'implementazione nel file.  
  
 **Visualizzazione classi e finestra Definizione codice**  
  
 Utilizzare il **Visualizzazione classi** riquadro per visualizzare gli spazi dei nomi e le classi tra tutti i file, incluse le classi parziali. È possibile espandere ogni spazio dei nomi o classe per visualizzarne i membri e quindi fare doppio clic sul membro per passare alla posizione corrispondente nel file di origine. Se si apre la finestra Definizione codice, è possibile visualizzare la definizione o l'implementazione del tipo quando questo viene selezionato in Visualizzazione classi.  
  
 **Visualizzatore oggetti**  
  
 Utilizzare **Visualizzatore oggetti** per esplorare le informazioni sui tipi nei componenti Windows Runtime (file con estensione winmd), assembly .NET e COM librerie dei tipi. Questo strumento non viene usato con le DLL Win32.  
  
 **Vai a definizione o dichiarazione**  
  
 Premere F12 in corrispondenza di qualsiasi nome di API o variabile membro per visualizzarne la definizione. Se la definizione si trova in un file con estensione winmd (per un'app di [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)]), le informazioni sul tipo verranno visualizzate in Visualizzatore oggetti. È anche possibile scegliere **Vai a definizione** o **Vai a dichiarazione** facendo clic sul nome della variabile o di tipo e scegliendo l'opzione dal menu di scelta rapida.  
  
 **Trova tutti i riferimenti**  
  
 In un file di codice sorgente, fare clic con il cursore del mouse sul nome del tipo o metodo o variabile e scegliere **Trova tutti i riferimenti** per restituire un elenco di posizioni nel file, progetto o soluzione in cui viene utilizzato il tipo. **Trova tutti i riferimenti** è un'opzione avanzata e restituisce solo le istanze della stessa identica variabile, anche se altre variabili in ambiti diversi hanno lo stesso nome.  
  
 **Esplora architettura e grafici delle dipendenze (Ultimate)**  
  
 Utilizzare **Esplora architettura** per visualizzare le relazioni tra i diversi elementi nel codice. Per ulteriori informazioni, vedere [trovare codice con Esplora architettura](http://msdn.microsoft.com/en-us/b1707926-ef73-47f9-92cd-e00d0fac7e76). Utilizzare i grafici delle dipendenze per visualizzare le relazioni di dipendenza. Per ulteriori informazioni, vedere [procedura: generare grafici delle dipendenze per codice C e C++](http://msdn.microsoft.com/en-us/3bd5cf9f-62f6-41d0-9f35-d4b2637cba3c).  
  
## <a name="adding-and-editing-resources--msbuild"></a>Aggiunta e modifica di risorse (MSBuild)
 Il termine "risorsa" nel contesto di un progetto desktop di Visual Studio fa riferimento a elementi come finestre di dialogo, icone, stringhe localizzabili, schermate iniziali, stringhe di connessione al database o tutti i dati arbitrari che si vuole includere nel file eseguibile.  
  
 Per ulteriori informazioni sull'aggiunta e modifica di risorse in progetti C++ desktop nativi, vedere [lavorare con file di risorse](../windows/working-with-resource-files.md).  
  
## <a name="building-compiling-and-linking"></a>Compilazione (e collegamento)  
 Premere **CTRL+MAIUSC+B** per compilare e collegare un progetto. Per creare codice eseguibile, Visual Studio Usa [MSBuild](/visualstudio/msbuild/msbuild1) o CMake o qualsiasi ambiente di compilazione è impostato tramite **Apri cartella**. Per i progetti MSBuild Imposta opzioni di compilazione generale in **Tools &#124; Opzioni &#124; Progetti e soluzioni** ed è possibile impostare proprietà per progetti specifici in **progetto &#124; Proprietà**. Errori di compilazione e gli avvisi vengono segnalati nella finestra Elenco errori (**Ctrl +\\, E**). Progetti MSBuild non sono configurati con i file JSON creati in Esplora soluzioni. Qualsiasi sistema in uso, la finestra di Output di compilazione (**Alt + 2**) Mostra le informazioni sul processo di compilazione. Per ulteriori informazioni sulle configurazioni di MSBuild, vedere [funziona con le proprietà del progetto](../ide/working-with-project-properties.md) e [compilazione di progetti C++ in Visual Studio](../ide/building-cpp-projects-in-visual-studio.md).  
  
 È anche possibile usare il compilatore Visual C++ (cl.exe) e molti altri strumenti autonomi correlati alla compilazione come NMAKE e LIB direttamente dalla riga di comando. Per ulteriori informazioni, vedere [codice C/C++ di compilazione nella riga di comando](../build/building-on-the-command-line.md) e [riferimenti alla compilazione in C/C++](../build/reference/c-cpp-building-reference.md).  
  
## <a name="testing"></a>Test  
 Visual Studio include un framework di unit test sia per C++ nativo sia per C++/CLI. Per ulteriori informazioni, vedere [verifica del codice tramite Unit test](/visualstudio/test/unit-test-your-code) e [scrittura di Unit test per C/C++ con il Framework per Unit test Microsoft per C++](/visualstudio/test/writing-unit-tests-for-c-cpp-with-the-microsoft-unit-testing-framework-for-cpp)  
  
## <a name="debugging"></a>Debug  
 È possibile eseguire il debug del programma premendo **F5** quando la configurazione del progetto è impostata su Debug. Durante il debug è possibile impostare i punti di interruzione premendo **F9**, eseguire il codice premendo **F10**, visualizzare i valori delle variabili specificate o nei registri, anche in alcuni casi è necessario apportare modifiche al codice e continuare il debug senza ricompilare. Per altre informazioni, vedere [Debug in Visual Studio](/visualstudio/debugger/debugging-in-visual-studio).  
  
## <a name="deploying-completed-applications"></a>Distribuzione delle applicazioni completate  
 Si distribuisce un [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] ai clienti attraverso Windows Store tramite il **progetto &#124; Archivio** opzione di menu. La distribuzione di CRT viene gestita automaticamente in background. Per altre informazioni, vedere [Vendita applicazioni](http://go.microsoft.com/fwlink/p/?LinkId=262280).  
  
 Quando si distribuisce un'applicazione desktop C++ nativa in un altro computer, è necessario installare l'applicazione stessa e tutti i file di libreria da cui dipende. Esistono tre modi diversi per distribuire il runtime di Visual C++ con un'applicazione: distribuzione centrale, distribuzione locale o collegamento statico. Per ulteriori informazioni, vedere [distribuzione di applicazioni Desktop](../ide/deploying-native-desktop-applications-visual-cpp.md).  
  
 Per ulteriori informazioni sulla distribuzione di C + + programma CLI, vedere [Guida alla distribuzione per gli sviluppatori](/dotnet/framework/deployment/deployment-guide-for-developers),  

## <a name="related-articles"></a>Articoli correlati  
  
|||  
|-|-|  
|[Strumenti e funzionalità di Visual C++ nelle versioni di Visual Studio](../ide/visual-cpp-tools-and-features-in-visual-studio-editions.md)|Presenta le funzionalità disponibili nelle diverse edizioni di Visual Studio.|  
|[Creazione e gestione di progetti basati su MSBuild](../ide/creating-and-managing-visual-cpp-projects.md)|Fornisce una panoramica dei progetti basati su MSBuild C++ in Visual Studio e collegamenti ad altri articoli che descrivono come crearli e gestirli.|  
|[CMake progetti in Visual C++](cmake-tools-for-visual-cpp.md).|Viene descritto come compilare CMake o altri progetti non MSBuild in Visual C++.|
|[Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)|Descrive come compilare progetti C++.|  
|[Distribuzione di applicazioni Desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)|Offre una panoramica della distribuzione per app C++ e contiene collegamenti ad altri articoli che descrivono la distribuzione in modo dettagliato.|  
|[Guida al porting e aggiornamento in Visual C++](../porting/visual-cpp-porting-and-upgrading-guide.md)|Informazioni dettagliate su come eseguire l'aggiornamento di applicazioni C++ che sono state create in versioni precedenti di Visual Studio e come eseguire la migrazione di applicazioni che sono state create usando strumenti diversi da Visual Studio.|  
|[Visual C++](../top/visual-cpp-in-visual-studio.md)|Descrive le funzionalità principali di Visual C++ in Visual Studio e i collegamenti al resto della documentazione di Visual C++.|
