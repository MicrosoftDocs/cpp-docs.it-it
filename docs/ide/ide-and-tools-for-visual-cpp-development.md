---
title: "IDE e strumenti per lo sviluppo in Visual C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Visual C++, strumenti di sviluppo"
ms.assetid: 56eabafb-1956-4f0f-bec5-29b887763559
caps.latest.revision: 17
caps.handback.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IDE e strumenti per lo sviluppo in Visual C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Come parte dell'ambiente di sviluppo integrato (IDE, Integrated Development Environment) di Visual Studio, Visual C++ ha molte finestre e strumenti in comune con altri linguaggi. Molti di questi strumenti, tra cui **Esplora soluzioni**, l'editor di codice e il debugger, sono descritti nella sezione [Visual Studio IDE](../Topic/Visual%20Studio%20IDE.md)di MSDN Library. Spesso una finestra o uno strumento condiviso include un set di funzionalità leggermente diverso per C++ rispetto ai linguaggi .NET o JavaScript. Alcuni strumenti o finestre sono disponibili solo in Visual Studio Pro o Visual Studio Enterprise. Questo argomento presenta l'IDE di Visual Studio dal punto di vista di Visual C++ e contiene collegamenti ad altri argomenti correlati a Visual C++.  
  
 Oltre agli strumenti condivisi nell'IDE di Visual Studio, Visual C++ include diversi strumenti specifici per lo sviluppo di codice nativo. Tali strumenti sono elencati in questo articolo. Per un elenco degli strumenti disponibili in ogni edizione di Visual Studio, vedere [Visual C++ Tools and Templates in Visual Studio Editions](../ide/visual-cpp-tools-and-templates-in-visual-studio-editions.md).  
  
## <a name="creating-a-solution-and-projects"></a>Creazione di una soluzione e di progetti  
 In tutte le edizioni di Visual C++ il codice sorgente e i file correlati per un eseguibile (ad esempio un file EXE, DLL o LIB) vengono organizzati in un progetto. Un progetto è associato a un file di progetto in formato XML (con estensione vcxproj) che specifica tutti i file e le risorse necessari per compilare il programma, nonché altre impostazioni di configurazione, ad esempio la piattaforma di destinazione (x86, x64 o ARM) e l'indicazione riguardo alla versione del programma compilato, ovvero se si tratta di una versione finale o di una di debug. Un progetto (o più progetti) è contenuto in una *soluzione*che, a sua volta, può contenere ad esempio diversi progetti DLL Win32 e un'unica applicazione console Win32 che usa tali DLL. Quando si compila il progetto, il motore MSBuild usa il file di progetto e produce il file eseguibile e/o altri output personalizzati eventualmente specificati.  
  
 **Modelli di progetto**  
  
 Visual C++ viene fornito con diversi modelli di progetto, che contengono il codice di avvio e le impostazioni necessarie per un'ampia gamma di tipi di programma di base. Si inizia in genere scegliendo **#124; & File Nuovo progetto** per creare un progetto da un modello di progetto, quindi aggiungere nuovi file di codice sorgente al progetto o avviare la codifica file forniti. Per informazioni specifiche sui progetti e le creazioni guidate progetto in C++, vedere [Creating and Managing Visual C++ Projects](../ide/creating-and-managing-visual-cpp-projects.md).  
  
 **Creazioni guidate applicazione**  
  
 Visual C++ include procedure guidate per alcuni tipi di progetto. Una procedura guidata contiene informazioni dettagliate per eseguire il processo di creazione di un nuovo progetto. Ciò risulta utile per i tipi di progetto con molte opzioni e impostazioni. Per altre informazioni, vedere [Creating Desktop Projects By Using Application Wizards](../ide/creating-desktop-projects-by-using-application-wizards.md).  
  
## <a name="creating-user-interfaces-with-designers"></a>Creazione di interfacce utente con finestre di progettazione  
 Se il programma ha un'interfaccia utente, una delle prime attività consiste nell'inserirvi controlli come pulsanti, caselle di riepilogo e così via. Visual Studio include un'area di progettazione visiva e una casella degli strumenti per ogni aspetto dell'applicazione C++. Indipendentemente dal tipo di app che si intende creare, l'idea di base è sempre la stessa: trascinare un controllo dalla finestra della casella degli strumenti e rilasciarlo nel punto desiderato dell'area di progettazione. Visual Studio genera in background le risorse e il codice necessari per il funzionamento.  
  
 Per ulteriori informazioni sulla progettazione di un'interfaccia utente per un'app per piattaforma UWP, vedere  [Progettazione e dell'interfaccia Utente](https://developer.microsoft.com/en-us/windows/design).  
  
 Per altre informazioni sulla creazione di un'interfaccia utente per un'applicazione MFC, vedere [MFC Desktop Applications](../mfc/mfc-desktop-applications.md). Per informazioni sui programmi di Windows Win32, vedere [applicazioni Desktop Windows](../windows/windows-desktop-applications-cpp.md).  
  
 Per informazioni su Windows Forms Application con C++/CLI, vedere [Creazione di una soluzione Windows Forms Application con .NET Framework (C++)](http://msdn.microsoft.com/it-it/8e007885-6c8b-4fb2-a41d-91febd114a9b).  
  
## <a name="writing-and-editing-code"></a>Scrittura e modifica del codice  
 **Colorazione semantica**  
  
 Dopo aver creato un progetto, tutti i file di progetto vengono visualizzati nella finestra Esplora soluzioni. Quando si fa clic su un file con estensione h o cpp in Esplora soluzioni, il file viene aperto nell'editor di codice. L'editor di codice è un elaboratore di testo specializzato per il codice sorgente C++. L'editor applica colori specifici alle parole chiave del linguaggio, ai nomi di metodi e variabili e ad altri elementi del codice per rendere quest'ultimo più leggibile e di più facile comprensione.  
  
 **IntelliSense**  
  
 L'editor di codice supporta anche diverse funzionalità che insieme sono note con il nome IntelliSense. È possibile posizionare il puntatore del mouse su un metodo e visualizzarne alcune informazioni di base. Dopo aver digitato un nome di variabile di classe seguito da . o ->, viene visualizzato un elenco di membri di istanza della classe. Se si digita un nome di classe e quindi ::, viene visualizzato un elenco di membri statici. Quando si inizia a digitare un nome di classe o metodo, l'editor di codice offre suggerimenti per completare l'istruzione. Per altre informazioni, vedere [Using IntelliSense](../Topic/Using%20IntelliSense.md).  
  
 **Frammenti di codice**  
  
 È possibile usare i frammenti di codice di IntelliSense per generare costrutti di codice di uso comune o più complessi con la semplice pressione di una combinazione di tasti. Per altre informazioni, vedere [Code Snippets](../Topic/Code%20Snippets.md).  
  
## <a name="navigating-code"></a>Esplorazione del codice  
 Il menu VISUALIZZA permette di accedere a molti strumenti e finestre per esplorare i file del codice. Per informazioni dettagliate su queste finestre, vedere [Viewing the Structure of Code](../Topic/Viewing%20the%20Structure%20of%20Code.md).  
  
 **Esplora soluzioni**  
  
 In tutte le edizioni di Visual Studio usare il riquadro Esplora soluzioni per spostarsi tra i file in un progetto. Espandere l'icona di un file con estensione h o cpp per visualizzare le classi nel file. Espandere una classe per visualizzarne i membri. Fare doppio clic su un membro per esplorarne la definizione o l'implementazione nel file.  
  
 **Visualizzazione classi e finestra Definizione codice**  
  
 Usare il riquadro Visualizzazione classi per visualizzare gli spazi dei nomi e le classi tra tutti i file, incluse le classi parziali. È possibile espandere ogni spazio dei nomi o classe per visualizzarne i membri e quindi fare doppio clic sul membro per passare alla posizione corrispondente nel file di origine. Se si apre la finestra Definizione codice, è possibile visualizzare la definizione o l'implementazione del tipo quando questo viene selezionato in Visualizzazione classi.  
  
 **Visualizzatore oggetti**  
  
 Usare Visualizzatore oggetti per esplorare le informazioni sui tipi in componenti Windows Runtime (file con estensione winmd), assembly .NET e librerie di tipi COM. Questo strumento non viene usato con le DLL Win32.  
  
 **Vai a definizione o dichiarazione**  
  
 Premere F12 in corrispondenza di qualsiasi nome di API o variabile membro per visualizzarne la definizione. Se la definizione si trova in un file con estensione winmd (per un'app di [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] ), le informazioni sul tipo verranno visualizzate in Visualizzatore oggetti. È anche possibile usare Vai a definizione o Vai a dichiarazione facendo clic con il pulsante destro del mouse sul nome della variabile o del tipo e quindi scegliendo l'opzione dal menu di scelta rapida.  
  
 **Trova tutti i riferimenti**  
  
 In un file del codice sorgente fare clic con il pulsante destro del mouse dopo aver posizionato il cursore sul nome di un tipo, un metodo o una variabile e quindi scegliere Trova tutti i riferimenti per restituire un elenco di posizioni nel file, nel progetto o nella soluzione in cui viene usato il tipo. Trova tutti i riferimenti è un'opzione avanzata e restituisce solo le istanze della stessa identica variabile, anche se altre variabili in ambiti diversi hanno lo stesso nome.  
  
 **Esplora architettura e i grafici delle dipendenze (Ultimate)**  
  
 Usare Esplora architettura per visualizzare le relazioni tra i diversi elementi nel codice. Per altre informazioni, vedere [Trovare codice con Esplora architettura](http://msdn.microsoft.com/it-it/b1707926-ef73-47f9-92cd-e00d0fac7e76). Usare i grafici delle dipendenze per visualizzare le relazioni di dipendenza. Per altre informazioni, vedere [How to: Generate Dependency Graphs for C and C++ Code](http://msdn.microsoft.com/it-it/3bd5cf9f-62f6-41d0-9f35-d4b2637cba3c).  
  
## <a name="adding-and-editing-resources"></a>Aggiunta e modifica di risorse  
 Il termine "risorsa" nel contesto di un progetto desktop di Visual Studio fa riferimento a elementi come finestre di dialogo, icone, stringhe localizzabili, schermate iniziali, stringhe di connessione al database o tutti i dati arbitrari che si vuole includere nel file eseguibile.  
  
 Per altre informazioni sull'aggiunta e la modifica di risorse in progetti C++ desktop nativi, vedere [Working with Resource Files](../mfc/working-with-resource-files.md).  
  
## <a name="building-compiling-and-linking"></a>Compilazione (e collegamento)  
 Premere **CTRL+MAIUSC+B** per compilare e collegare un progetto. Visual Studio usa [MSBuild](MSBuild1.md) per creare codice eseguibile. È possibile impostare le opzioni di compilazione generale in **Strumenti &#124; Opzioni &#124; Progetti e soluzioni** ed è possibile impostare proprietà per progetti specifici in **progetto &#124; Proprietà**. Nell'elenco errori vengono segnalati errori di compilazione e avvisi (**Ctrl +\\, E**). Informazioni aggiuntive vengono a volte visualizzate in Finestra di output (**ALT+2**). Per ulteriori informazioni, vedere  [funziona con le proprietà del progetto](../ide/working-with-project-properties.md) e [compilazione di progetti C++ in Visual Studio](../ide/building-cpp-projects-in-visual-studio.md).  
  
 È anche possibile usare il compilatore Visual C++ (cl.exe) e molti altri strumenti autonomi correlati alla compilazione come NMAKE e LIB direttamente dalla riga di comando. Per altre informazioni, vedere [Building on the Command Line](../build/building-on-the-command-line.md) e [C/C++ Building Reference](../build/reference/c-cpp-building-reference.md).  
  
## <a name="testing"></a>Test  
 Visual Studio include un framework di unit test sia per C++ nativo sia per C++/CLI. Per altre informazioni, vedere [Verifica del codice tramite unit test](../Topic/Unit%20Test%20Your%20Code.md) e [Scrittura di unit test per C/C++ con il framework unit test Microsoft per C++](../Topic/Writing%20Unit%20tests%20for%20C-C++%20with%20the%20Microsoft%20Unit%20Testing%20Framework%20for%20C++.md)  
  
## <a name="debugging"></a>Debug  
 È possibile eseguire il debug del programma premendo F5 quando la configurazione del progetto è impostata su Debug. Durante il debug è possibile impostare punti di interruzione premendo F9, eseguire il codice un'istruzione alla volta premendo F10, visualizzare i valori delle variabili o dei registri specificati e addirittura, in alcuni casi, apportare modifiche al codice e continuare a eseguire il debug senza ricompilare. Per altre informazioni, vedere [Debugging in Visual Studio](../Topic/Debugging%20in%20Visual%20Studio.md).  
  
## <a name="deploying-completed-applications"></a>Distribuzione delle applicazioni completate  
 Si distribuisce un [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] ai clienti tramite Windows Store tramite il **PROGETTO &#124; Archivio** opzione di menu. La distribuzione di CRT viene gestita automaticamente in background. Per altre informazioni, vedere [Vendita applicazioni](http://go.microsoft.com/fwlink/p/?LinkId=262280).  
  
 Quando si distribuisce un'applicazione desktop C++ nativa in un altro computer, è necessario installare l'applicazione stessa e tutti i file di libreria da cui dipende. Esistono tre modi diversi per distribuire il runtime di Visual C++ con un'applicazione: distribuzione centrale, distribuzione locale o collegamento statico. Per ulteriori informazioni, vedere [distribuzione delle applicazioni Desktop](../ide/deploying-native-desktop-applications-visual-cpp.md).  
  
 Per ulteriori informazioni sulla distribuzione di C + + programma CLI, vedere [Guida alla distribuzione per gli sviluppatori](../Topic/.NET%20Framework%20Deployment%20Guide%20for%20Developers.md),  
  
## <a name="other-tools"></a>Altri strumenti  
  
## <a name="related-articles"></a>Articoli correlati  
  
|||  
|-|-|  
|[Strumenti di Visual C++ e modelli nelle edizioni di Visual Studio](../ide/visual-cpp-tools-and-templates-in-visual-studio-editions.md)|Presenta le funzionalità disponibili nelle diverse edizioni di Visual Studio.|  
|[Presentazione guidata di Visual C++](http://msdn.microsoft.com/it-it/499cb66f-7df1-45d6-8b6b-33d94fd1f17c)|Offre una panoramica dell'ambiente di sviluppo di Visual Studio e dei tipi di app C++ che è possibile creare.|  
|[Creazione e gestione di progetti Visual C++](../ide/creating-and-managing-visual-cpp-projects.md)|Offre una panoramica dei progetti C++ in Visual Studio e contiene collegamenti ad altri articoli che descrivono come crearli e gestirli.|  
|[Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)|Descrive come compilare progetti C++.|  
|[Distribuzione di applicazioni Desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)|Offre una panoramica della distribuzione per app C++ e contiene collegamenti ad altri articoli che descrivono la distribuzione in modo dettagliato.|  
|[Porting e aggiornamento di programmi](http://msdn.microsoft.com/it-it/c36c44b3-5a9b-4bb4-9b7a-469aa770ed00)|Include collegamenti ad articoli che descrivono come aprire app C++ create nelle versioni precedenti di Visual Studio, nonché come aprire app create usando strumenti diversi da Visual Studio.|  
|||  
|[Visual C++](../top/visual-cpp-in-visual-studio-2015.md)|Descrive le funzionalità principali di Visual C++ in Visual Studio e i collegamenti al resto della documentazione di Visual C++.|