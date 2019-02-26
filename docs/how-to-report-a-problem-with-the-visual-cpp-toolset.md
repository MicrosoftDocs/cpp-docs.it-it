---
title: Come segnalare un problema con il set di strumenti di Visual C++
ms.date: 06/21/2018
ms.technology: cpp-ide
author: corob-msft
ms.author: corob
ms.openlocfilehash: 7758905f6db537260ec9e8b6e516bfa409e97ad2
ms.sourcegitcommit: fbc05d8581913bca6eff664e5ecfcda8e471b8b1
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/25/2019
ms.locfileid: "56809737"
---
# <a name="how-to-report-a-problem-with-the-visual-c-toolset-or-documentation"></a>Come segnalare un problema con il set di strumenti Visual C++ o la documentazione

Se si riscontrano problemi con il compilatore, il linker o altri strumenti e librerie di Microsoft Visual C++ è necessario inviare una segnalazione a Microsoft. Anche se il problema è riguarda la documentazione, è opportuno riportarlo.

## <a name="how-to-report-a-c-toolset-issue"></a>Come segnalare un problema con il set di strumenti C++

Il modo migliore per segnalare un problema è inviare un report con una descrizione del problema riscontrato, informazioni dettagliate su come viene compilato il programma e una *procedura di riproduzione*, vale a dire un test case per riprodurre il problema nei computer Microsoft. In questo modo è possibile verificare rapidamente se il problema riguarda il codice Microsoft e non l'ambiente locale, determinare se ha effetto su altre versioni del compilatore e diagnosticarne la causa.

Nelle sezioni riportate di seguito viene spiegato cosa costituisce un buon report, come generare una ripetizione per il tipo di problema individuato e come inviare il report al team di prodotto. I report sono strumenti importanti per tutti gli sviluppatori. Grazie per contribuire a migliorare Visual C++.

## <a name="how-to-prepare-your-report"></a>Come preparare il report

È importante creare un report esaustivo in quanto è molto difficile riprodurre il problema riscontrato nei computer Microsoft senza avere informazioni complete. Più il report è completo, più alta è la probabilità che si possa ricreare il problema ed eseguire la diagnosi.

Il report deve contenere almeno le informazioni seguenti

- Informazioni complete sulla versione del set di strumenti usata.

- L'intera riga di comando cl.exe usata per compilare il codice.

- Una descrizione dettagliata del problema riscontrato.

- Una procedura di riproduzione: un esempio di codice sorgente completo, semplificato e indipendente, che illustra il problema.

Continuare a leggere per sapere dove trovare le informazioni specifiche necessarie e come creare una procedura di riproduzione del problema esaustiva.

### <a name="the-toolset-version"></a>Versione del set di strumenti

È necessario comunicare la versione completa del set di strumenti e la relativa architettura di destinazione che causa il problema in modo che sia possibile testare la procedura di riproduzione usando lo stesso set di strumenti nei computer Microsoft. Se il problema può essere riprodotto, queste informazioni rappresentano anche un punto di partenza per capire quali altre versioni del set di strumenti presentano lo stesso problema.

#### <a name="to-report-the-full-version-of-the-compiler-youre-using"></a>Per segnalare la versione completa del compilatore in uso

1. Aprire il **prompt dei comandi per gli sviluppatori** corrispondente alla versione di Visual Studio e all'architettura di configurazione usata per compilare il progetto. Ad esempio, se si usa Visual Studio 2017 in computer x64 per computer di destinazione x64, scegliere **Prompt dei comandi degli strumenti nativi x64 per VS 2017**. Per altre informazioni, vedere [Collegamenti al prompt dei comandi per gli sviluppatori](build/building-on-the-command-line.md#developer-command-prompt-shortcuts).

1. Nella finestra della console del prompt dei comandi per gli sviluppatori immettere il comando **cl /Bv**.

L'output sarà simile al seguente:

```Output
C:\Users\username\Source>cl /Bv
Microsoft (R) C/C++ Optimizing Compiler Version 19.14.26428.1 for x86
Copyright (C) Microsoft Corporation.  All rights reserved.

Compiler Passes:
 C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.14.26428\bin\HostX86\x86\cl.exe:        Version 19.14.26428.1
 C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.14.26428\bin\HostX86\x86\c1.dll:        Version 19.14.26428.1
 C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.14.26428\bin\HostX86\x86\c1xx.dll:      Version 19.14.26428.1
 C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.14.26428\bin\HostX86\x86\c2.dll:        Version 19.14.26428.1
 C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.14.26428\bin\HostX86\x86\link.exe:      Version 14.14.26428.1
 C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.14.26428\bin\HostX86\x86\mspdb140.dll:  Version 14.14.26428.1
 C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.14.26428\bin\HostX86\x86\1033\clui.dll: Version 19.14.26428.1

cl : Command line error D8003 : missing source filename
```

Copiare e incollare l'intero output nel report.

### <a name="the-command-line"></a>Riga di comando

È necessario specificare l'esatta riga di comando (cl.exe e tutti i relativi argomenti) che l'utente ha usato per compilare il codice in modo che sia possibile compilare il codice nello stesso modo nei computer Microsoft. Questo passaggio è importante perché il problema riscontrato potrebbe verificarsi solo quando si compila un determinato argomento o una combinazione di argomenti.

Per trovare facilmente queste informazioni, vedere il log di compilazione immediatamente dopo che si è verificato il problema. La riga di comando conterrà quindi esattamente gli stessi argomenti che potrebbero essere la causa del problema.

#### <a name="to-report-the-contents-of-the-command-line"></a>Per segnalare i contenuti della riga di comando

1. Individuare il file **CL.command.1.tlog** e aprirlo. Per impostazione predefinita, questo file si trova nella cartella Documenti in \\Visual Studio *versione*\\Progetti\\*NomeSoluzione*\\*NomeProgetto*\\*Configurazione*\\*NomeProgetto*TLOG\\CL.command.1.tlog, o nella cartella Utente in \\Origine\\Repository\\*NomeSoluzione*\\*NomeProgetto*\\*Configurazione*\\*NomeProgetto*TLOG\\CL.command.1.tlog. Se si usa un altro sistema di compilazione o se è stato modificato il percorso predefinito per il progetto, il file può trovarsi in una posizione diversa.

   Il file contiene i nomi dei file del codice sorgente seguiti dagli argomenti della riga di comando usati per la compilazione, disposti su singole righe.

1. Individuare la riga che contiene il nome del file del codice sorgente in cui si verifica il problema. La riga sottostante contiene gli argomenti del comando cl.exe corrispondenti.

Copiare e incollare l'intera riga di comando nel report.

### <a name="a-description-of-the-problem"></a>Descrizione del problema

Per poter visualizzare lo stesso errore che si verifica nei computer utente, è necessario specificare una descrizione dettagliata del problema riscontrato. È talvolta utile anche sapere cosa si stava eseguendo e cosa si prevedeva come risultato.

Indicare **esattamente i messaggi di errore** generati dal set di strumenti o specificare l'esatto comportamento del runtime. Queste informazioni sono necessarie per verificare che il problema sia stato riprodotto correttamente. Includere **tutto** l'output del compilatore e non solo l'ultimo messaggio di errore. È necessario avere a disposizione tutti gli elementi che hanno causato il problema segnalato. Se possibile, duplicare il problema usando il compilatore da riga di comando in quanto genera un output più utile. Può succedere che l'IDE e altri sistemi di compilazione filtrino i messaggi di errore visualizzati o acquisiscano solo la prima riga di un messaggio di errore.

Se il problema consiste nel fatto che il compilatore accetta il codice non valido e non genera una diagnostica, segnalarlo in questo report.

Per segnalare un problema di comportamento del runtime, includere una **copia esatta** della stampa del programma e di ciò che dovrebbe essere visualizzato. Teoricamente queste informazioni sono disponibili nell'output dell'istruzione, ad esempio `printf("This should be 5: %d\n", actual_result);`. Segnalare anche se il programma si arresta in modo anomalo o si blocca.

Aggiungere qualsiasi altro dettaglio che potrebbe contribuire a diagnosticare il problema riscontrato, ad esempio eventuali soluzioni alternative adottate. Non ripetere le informazioni già specificate in altre sezioni del report.

### <a name="the-repro"></a>Procedura di riproduzione

La procedura di riproduzione è un esempio di codice sorgente completo e indipendente che illustra, riproducendolo, il problema riscontrato. Da qui il suo nome. La procedura di riproduzione è necessaria perché sia possibile riprodurre l'errore nei computer Microsoft. Il codice dovrebbe essere di sé sufficiente per creare un semplice eseguibile di compilazione ed esecuzione, o dovrebbe eseguire queste due operazioni se non fosse per il problema riscontrato. La procedura di riproduzione non è un frammento di codice. Deve contenere funzioni e classi complete e tutte le direttive include necessarie, anche per le intestazioni standard.

#### <a name="what-makes-a-good-repro"></a>Procedura di riproduzione esaustiva

Una procedura di riproduzione esaustiva è:

- **Minima.** È necessario che le procedure di riproduzione siano minime, ma devono comunque illustrare esattamente il problema riscontrato. Le procedure di riproduzione non devono essere complesse o realistiche. Devono illustrare solo il codice conforme allo standard o l'implementazione del compilatore documentata oppure, nel caso di mancanza di diagnostica, il codice non conforme. Sono preferibili procedure di riproduzione semplici e pertinenti, che contengono codice sufficiente a illustrare il problema. Se possibile, eliminare o semplificare il codice rimanendo conformi e lasciando inalterato il problema. Non è necessario includere esempi contatore di codice funzionante.

- **Indipendente.** È consigliabile non includere nelle procedure di riproduzione dipendenze non necessarie. Se possibile, riprodurre il problema senza usare librerie di terzi. Se possibile, riprodurre il problema senza usare codice di libreria oltre alle semplici istruzioni di output. Usare ad esempio `puts("this shouldn't compile");`, `std::cout << value;`e `printf("%d\n", value);`. È preferibile ridurre l'esempio a un singolo file di codice sorgente senza riferimento a intestazioni utente. È molto utile ridurre la quantità di codice da analizzare come possibile responsabile del problema.

- **Confronto con l'ultima versione del compiler** Se possibile, per le procedure di riproduzione è necessario usare l'aggiornamento più recente dell'ultima versione del set di strumenti o la versione provvisoria più recente dell'ultimo aggiornamento o della versione principale successiva. Molto spesso è possibile che i problemi che si verificano ancora nelle versioni precedenti del set di strumenti sono stati risolti nelle versioni più recenti. Il backporting delle correzioni in versioni precedenti avviene solo in casi eccezionali.

- **Confronto con altri compilatori**, se pertinente. Le procedure di riproduzione che contengono codice C++ portabile devono verificare il comportamento confrontandolo con altri compilatori se possibile. Alla fine è lo standard a determinare se il programma è corretto. Non esistono compilatori perfetti, ma quando Clang e GCC accettano il codice senza generare diagnostica e il compilatore MSVC non lo fa, è probabile che sia il compilatore Microsoft a contenere un bug. È anche possibile che vi siano differenze nel comportamento di Unix e Windows o livelli diversi di implementazione degli standard C++ e così via. Se invece tutti i compilatori rifiutano il codice, è probabile che il codice non sia corretto. Analizzare messaggi di errore diversi può aiutare l'utente a diagnosticare il problema.

   In [Online C++ compilers](https://isocpp.org/blog/2013/01/online-c-compilers) (Compilatori C++ online) oppure in questo elenco dettagliato [List of Online C++ Compilers](https://arnemertz.github.io/online-compilers/) (Elenco di compilatori C++ online) in GitHub sono disponibili elenchi di compilatori online per testare e confrontare il codice. Alcuni esempi specifici sono [Wandbox](https://wandbox.org/), [Compiler Explorer](https://godbolt.org/) e [Coliru](http://coliru.stacked-crooked.com/).

   > [!NOTE]
   > I siti Web dei compilatori online non sono associati a Microsoft. Molti di questi siti sono gestiti come progetti personali. È possibile che alcuni non siano disponibili quando si leggerà questo articolo. Tramite una ricerca è tuttavia possibile trovarne altri da usare.

I problemi che riguardano compilatore, linker e librerie sono soliti manifestarsi in modi particolari. In base al tipo di problema riscontrato, è necessario scegliere il tipo di procedura di riproduzione da includere nel report. Senza una corretta procedura di riproduzione, è impossibile eseguire un'analisi. Di seguito sono elencati alcuni tipi di problemi riscontrabili e le istruzioni per la generazione dei tipi di procedura di riproduzione da usare per segnalare ogni singolo problema.

#### <a name="frontend-parser-crash"></a>Arresto anomalo del front-end (parser)

Gli arresti anomali del front-end si verificano durante la fase di analisi del compilatore. In genere il compilatore crea l'[errore irreversibile C1001](error-messages/compiler-errors-1/fatal-error-c1001.md) e segnala il file del codice sorgente e il numero della riga in cui si è verificato l'errore. Viene spesso indicato un file msc1.cpp, dettaglio che può essere tuttavia tralasciato.

Per questo tipo di arresto anomalo, inviare una [procedura di riproduzione pre-elaborata](#preprocessed-repros).

Di seguito è riportato un esempio di output del compilatore per questo tipo di arresto anomalo:

```Output
SandBoxHost.cpp
d:\o\dev\search\foundation\common\tools\sandbox\managed\managed.h(929):
        fatal error C1001: An internal error has occurred in the compiler.
(compiler file 'msc1.cpp', line 1369)
To work around this problem, try simplifying or changing the program near the
        locations listed above.
Please choose the Technical Support command on the Visual C++
Help menu, or open the Technical Support help file for more information
d:\o\dev\search\foundation\common\tools\sandbox\managed\managed.h(929):
        note: This diagnostic occurred in the compiler generated function
        'void Microsoft::Ceres::Common::Tools::Sandbox::SandBoxedProcess::Dispose(bool)'
Internal Compiler Error in d:\o\dev\otools\bin\x64\cl.exe.  You will be prompted
        to send an error report to Microsoft later.
INTERNAL COMPILER ERROR in 'd:\o\dev\otools\bin\x64\cl.exe'
    Please choose the Technical Support command on the Visual C++
    Help menu, or open the Technical Support help file for more information
```

#### <a name="backend-code-generation-crash"></a>Arresto anomalo del back-end (generazione del codice)

Gli arresti anomali del back-end si verificano durante la fase di generazione del codice del compilatore. In genere il compilatore genera l'[errore irreversibile C1001](error-messages/compiler-errors-1/fatal-error-c1001.md) e non sempre segnala il file del codice sorgente e il numero della riga in cui si è verificato l'errore. Viene spesso indicato il file compiler\\utc\\src\\p2\\main.c, dettaglio che può essere tuttavia tralasciato.

Per questo tipo di arresto anomalo, inviare una [procedura di riproduzione del collegamento](#link-repros) se si usa la Generazione codice in fase di collegamento, abilitata dall'argomento della riga di comando **/GL** in cl.exe. Altrimenti, inviare una [procedura di riproduzione pre-elaborata](#preprocessed-repros).

Di seguito è riportato un esempio di output del compilatore per un arresto anomalo del back-end in cui la Generazione codice in fase di collegamento non è in uso. Se l'output del compilatore è simile al seguente è necessario inviare una [procedura di riproduzione pre-elaborata](#preprocessed-repros).

```Output
repro.cpp
\\officefile\public\tadg\vc14\comperror\repro.cpp(13) : fatal error C1001:
        An internal error has occurred in the compiler.
(compiler file 'f:\dd\vctools\compiler\utc\src\p2\main.c', line 230)
To work around this problem, try simplifying or changing the program near the
        locations listed above.
Please choose the Technical Support command on the Visual C++
Help menu, or open the Technical Support help file for more information
INTERNAL COMPILER ERROR in
        'C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\BIN\cl.exe'
    Please choose the Technical Support command on the Visual C++
    Help menu, or open the Technical Support help file for more information
```

Se la riga che inizia con **INTERNAL COMPILER ERROR** specifica link.exe anziché cl.exe, significa che la Generazione codice in fase di collegamento è stata abilitata ed è necessario inviare una [procedura di riproduzione del collegamento](#link-repros). Se dal messaggio di errore del compilatore non è chiaro se la Generazione codice in fase di collegamento era abilitata, può essere necessario esaminare gli argomenti della riga di comando copiata dal log di compilazione nel passaggio precedente per l'argomento della riga di comando **/GL**.

#### <a name="linker-crash"></a>Arresto anomalo del linker

Gli arresti anomali del linker si verificano durante la fase di collegamento, dopo l'esecuzione del compilatore. In genere il linker crea l'[errore strumenti del linker LNK1000](error-messages/tool-errors/linker-tools-error-lnk1000.md).

> [!NOTE]
> Se invece l'output specifica C1001 o include la Generazione codice in fase di collegamento, fare riferimento a [Arresto anomalo del back-end (generazione del codice)](#backend-code-generation-crash) per altre informazioni.

Per questo tipo di arresto anomalo, inviare una [procedura di riproduzione del collegamento](#link-repros).

Di seguito è riportato un esempio di output del compilatore per questo tipo di arresto anomalo.

```Output
z:\foo.obj : error LNK1000: Internal error during IMAGE::Pass2

  Version 14.00.22816.0

  ExceptionCode            = C0000005
  ExceptionFlags           = 00000000
  ExceptionAddress         = 00007FF73C9ED0E6 (00007FF73C9E0000)
        "z:\tools\bin\x64\link.exe"
  NumberParameters         = 00000002
  ExceptionInformation[ 0] = 0000000000000000
  ExceptionInformation[ 1] = FFFFFFFFFFFFFFFF

CONTEXT:

  Rax    = 0000000000000400  R8     = 0000000000000000
  Rbx    = 000000655DF82580  R9     = 00007FF840D2E490
  Rcx    = 005C006B006F006F  R10    = 000000655F97E690
  Rdx    = 000000655F97E270  R11    = 0000000000000400
  Rsp    = 000000655F97E248  R12    = 0000000000000000
  Rbp    = 000000655F97EFB0  E13    = 0000000000000000
  Rsi    = 000000655DF82580  R14    = 000000655F97F390
  Rdi    = 0000000000000000  R15    = 0000000000000000
  Rip    = 00007FF73C9ED0E6  EFlags = 0000000000010206
  SegCs  = 0000000000000033  SegDs  = 000000000000002B
  SegSs  = 000000000000002B  SegEs  = 000000000000002B
  SegFs  = 0000000000000053  SegGs  = 000000000000002B
  Dr0    = 0000000000000000  Dr3    = 0000000000000000
  Dr1    = 0000000000000000  Dr6    = 0000000000000000
  Dr2    = 0000000000000000  Dr7    = 0000000000000000
```

Se è abilitato il collegamento incrementale e l'arresto anomalo si è verificato solo dopo il collegamento iniziale, vale a dire solo dopo il primo collegamento completo su cui si basa il collegamento incrementale successivo, inviare anche una copia dei file oggetto (con estensione obj) e libreria (con estensione lib) che corrispondono ai file sorgente che sono stati modificati al completamento del collegamento iniziale.

#### <a name="bad-code-generation"></a>Generazione di codice errato

La generazione di codice errato è un evento raro, che si verifica tuttavia quando il compilatore genera erroneamente codice non corretto che causa l'arresto anomalo dell'applicazione in fase di esecuzione anziché rilevare il problema in fase di compilazione. Se si ritiene che il problema determini la generazione di codice errato, organizzare il report come nel caso di [Arresto anomalo del back-end (generazione del codice)](#backend-code-generation-crash).

Per questo tipo di arresto anomalo inviare una [procedura di riproduzione del collegamento](#link-repros) se si usa la Generazione codice in fase di collegamento, abilitata dall'argomento della riga di comando **/GL** in cl.exe. Altrimenti, inviare una [procedura di riproduzione pre-elaborata](#preprocessed-repros).

## <a name="how-to-generate-a-repro"></a>Come generare una procedura di riproduzione

Per poter risalire alla causa del problema, è essenziale una [procedura di riproduzione esaustiva](#what-makes-a-good-repro). Prima di eseguire i passaggi descritti di seguito per tipi specifici di riproduzione, ridurre il più possibile il codice che illustra il problema. Eliminare o ridurre al minimo dipendenze, intestazioni necessarie e librerie e, se possibile, limitare le opzioni del compilatore e le definizioni del preprocessore usate.

Di seguito sono disponibili le istruzioni per la generazione dei vari tipi di procedure di riproduzione che verranno usate per segnalare i diversi problemi.

### <a name="preprocessed-repros"></a>Procedure di riproduzione pre-elaborate

Una *procedura di riproduzione pre-elaborata* è un unico file di origine che illustra un problema e che è stato generato dall'output del preprocessore C tramite l'opzione del compilatore **/P** nel file di origine della procedura di riproduzione originale. Comprende le intestazioni incluse per rimuovere le dipendenze da altri file di origine e di intestazione e risolve anche macro, #ifdefs e altri comandi del preprocessore che potrebbero dipendere dall'ambiente locale.

> [!NOTE]
> Le procedure di riproduzione pre-elaborate non sono adatte a segnalare problemi causati probabilmente da bug presenti nell'implementazione della libreria standard. Capita spesso infatti che Microsoft decida di sostituire l'ultima implementazione non definitiva per verificare se il problema è già stato risolto. In questo caso non pre-elaborare la procedure di riproduzione. Se non è possibile ridurre il problema a un solo file di origine, comprimere il codice in un file ZIP, o simile, oppure usare una procedura di riproduzione del progetto IDE. Per altre informazioni, vedere [Altre procedure di riproduzione](#other-repros).

#### <a name="to-preprocess-a-source-code-file"></a>Per pre-elaborare un file del codice sorgente

1. Acquisire gli argomenti della riga di comando usati per compilare la procedura di riproduzione, come descritto in [Per segnalare i contenuti della riga di comando](#to-report-the-contents-of-the-command-line).

1. Aprire il **prompt dei comandi per gli sviluppatori** corrispondente alla versione di Visual Studio e all'architettura di configurazione usata per compilare il progetto.

1. Passare alla directory che contiene il progetto della procedura di riproduzione.

1. Nella finestra della console del prompt dei comandi per gli sviluppatori immettere il comando **cl /P** *argomenti* *nomefile.cpp*, dove *argomenti* è l'elenco degli argomenti acquisiti in precedenza e *nomefile.cpp* è il nome del file di origine della procedura di riproduzione. Questo comando consente di replicare la riga di comando usata per la riproduzione, ma arresta la compilazione al passaggio del preprocessore e restituisce il codice di origine pre-elaborato in *nomefile*.i.

Se è in pre-elaborazione un file del codice sorgente C++/CX o è in uso una funzionalità dei moduli C++, sono necessari alcuni passaggi aggiuntivi. Per altre informazioni, vedere le sezioni riportate di seguito.

Dopo aver generato il file pre-elaborato, è consigliabile verificare che il problema sia ancora riproducibile usando il file pre-elaborato.

#### <a name="to-confirm-that-the-error-still-repros-with-the-preprocessed-file"></a>Per confermare che l'errore è ancora riproducibile con il file pre-elaborato

1. Nella finestra della console del prompt dei comandi per gli sviluppatori immettere**cl** *argomenti* **/TP** *nomefile*.1 perché cl.exe compili il file pre-elaborato come file di origine C++, dove *argomenti* è l'elenco degli argomenti acquisiti in precedenza, senza gli argomenti **/D** e **/I** che sono stati rimossi perché già inclusi nel file pre-elaborato, e dove *nomefile*.i è il nome del file pre-elaborato.

1. Verificare che il problema viene riprodotto.

Infine, allegare la procedura di riproduzione pre-elaborata *nomefile*.i al report.

### <a name="preprocessed-ccx-winrtuwp-code-repros"></a>Procedure di riproduzione del codice C++/CX WinRT/UWP pre-elaborato

Se si usa C++/CX per compilare l'eseguibile, sono necessari alcuni passaggi aggiuntivi per creare e convalidare una procedura di riproduzione pre-elaborata.

#### <a name="to-preprocess-ccx-source-code"></a>Per pre-elaborare un file del codice sorgente C++/CX

1. Creare un file del codice sorgente pre-elaborato come descritto in [Per pre-elaborare un file del codice sorgente](#to-preprocess-a-source-code-file).

1. Cercare il file _nomefile_.i generato per le direttive **#using**.

1. Creare un elenco di tutti i file di riferimento. Escludere tutti i file Windows\*.winmd, platform.winmd e mscorlib.dll.

Per prepararsi a convalidare la riproduzione del problema usando il file pre-elaborato

1. Creare una nuova directory per il file pre-elaborato e copiarlo nella nuova directory.

1. Copiare i file con estensione winmd dall'elenco **#using** nella nuova directory.

1. Creare un file vccorlib.h vuoto nella nuova directory.

1. Modificare il file pre-elaborato per rimuovere qualsiasi direttiva **#using** per mscorlib.dll.

1. Modificare il file pre-elaborato per modificare eventuali percorsi assoluti ai nomi di file bare per i file con estensione winmd copiati.

Confermare che il problema di cui sopra sia ancora riproducibile dal file pre-elaborato.

### <a name="preprocessed-c-modules-repros"></a>Procedure di riproduzione dei moduli C++ pre-elaborati

Se si usa la funzionalità di moduli del compilatore C++, sono necessari alcuni passaggi diversi per creare e convalidare una procedura di riproduzione pre-elaborata.

#### <a name="to-preprocess-a-source-code-file-that-uses-a-module"></a>Per pre-elaborare un file del codice sorgente che usa un modulo

1. Acquisire gli argomenti della riga di comando usati per compilare la procedura di riproduzione, come descritto in [Per segnalare i contenuti della riga di comando](#to-report-the-contents-of-the-command-line).

1. Aprire il **prompt dei comandi per gli sviluppatori** corrispondente alla versione di Visual Studio e all'architettura di configurazione usata per compilare il progetto.

1. Passare alla directory che contiene il progetto della procedura di riproduzione.

1. Nella finestra della console del prompt dei comandi per gli sviluppatori immettere il comando **cl /P** *argomenti* *nomefile.cpp*, dove *argomenti* è l'elenco degli argomenti acquisiti in precedenza e *nomefile.cpp* è il nome del file di origine che usa il modulo.

1. Passare alla directory contenente il progetto di riproduzione con cui è stata compilata l'interfaccia del modulo (output con estensione ifc).

1. Acquisire gli argomenti della riga di comando usati per compilare l'interfaccia del modulo.

1. Nella finestra della console del prompt dei comandi per gli sviluppatori immettere il comando **cl /P** *argomenti* *nomemodulo.ixx*, dove *argomenti* è l'elenco degli argomenti acquisiti in precedenza e *nomemodulo.ixx* è il nome del file del file che crea l'interfaccia del modulo.

Dopo aver generato i file pre-elaborati, è consigliabile verificare che il problema sia ancora riproducibile usando il file pre-elaborato.

#### <a name="to-confirm-that-the-error-still-repros-with-the-preprocessed-file"></a>Per confermare che l'errore è ancora riproducibile con il file pre-elaborato

1. Nella finestra della console per gli sviluppatori passare alla directory che contiene il progetto della procedura di riproduzione.

1. Immettere il comando **cl** *argomenti* **/TP** *nomefile*.i come descritto in precedenza, per compilare il file pre-elaborato come se fosse un file di origine C++.

1. Confermare che il problema sia ancora riproducibile dal file pre-elaborato.

Infine, allegare alla segnalazione i file pre-elaborati per la procedura di riproduzione (*nomefile*.i e *nomemodulo*.i) e l'output con estensione ifc.

### <a name="link-repros"></a>Procedure di riproduzione del collegamento

Una *procedura di riproduzione del collegamento* è costituita da una directory di contenuti del linker specificata dalla variabile di ambiente **link\_repro**. Contiene gli elementi di compilazione che insieme contribuiscono a illustrare un problema che si verifica in fase di collegamento, ad esempio un arresto anomalo del back-end che interessa la Generazione codice in fase di collegamento oppure un arresto anomalo del linker. Gli elementi di compilazione sono necessari come input del linker in modo che il problema sia riproducibile. È possibile creare facilmente una procedura di riproduzione del collegamento usando questa variabile di ambiente per abilitare la funzionalità integrata di generazione delle procedure di riproduzione del linker.

#### <a name="to-generate-a-link-repro"></a>Per generare una procedura di riproduzione del collegamento

1. Acquisire gli argomenti della riga di comando usati per compilare la procedura di riproduzione, come descritto in [Per segnalare i contenuti della riga di comando](#to-report-the-contents-of-the-command-line).

1. Aprire il **prompt dei comandi per gli sviluppatori** corrispondente alla versione di Visual Studio e all'architettura di configurazione usata per compilare il progetto.

1. Nella finestra della console del prompt dei comandi per gli sviluppatori passare alla directory che contiene il progetto della procedura di riproduzione.

1. Immettere **mkdir linkrepro** per creare una directory per la procedura di riproduzione.

1. Immettere il comando **set link\_repro=linkrepro** per impostare la variabile di ambiente **link\_repro** nella directory appena creata. Se la compilazione viene eseguita da una directory diversa, come avviene spesso per i progetti più complessi, allora impostare **link\_repro** nel percorso completo della directory linkrepro.

1. Per compilare il progetto della procedura di riproduzione in Visual Studio, immettere il comando **devenv** nella finestra della console del prompt dei comandi per gli sviluppatori. In questo modo il valore della variabile di ambiente **link\_repro** sarà visibile in Visual Studio. Per compilare il progetto nella riga di comando, usare gli argomenti della riga di comando acquisiti in precedenza per duplicare la compilazione della procedura di riproduzione.

1. Compilare il progetto della procedura di riproduzione e confermare che il problema previsto si è verificato.

1. Chiudere Visual Studio se è stato usato per eseguire la compilazione.

1. Nella finestra della console del prompt dei comandi per gli sviluppatori immettere il comando **set link\_repro=** per cancellare la variabile di ambiente **link\_repro**.

Infine comprimere l'intera directory linkrepro in un file ZIP o simile e allegare il file al report.

### <a name="other-repros"></a>Altre procedure di riproduzione

Se il problema non può essere ridotto a un singolo file di origine o a una procedura di riproduzione pre-elaborata, e non è necessaria una procedura di riproduzione del collegamento per testare il problema, è possibile analizzare un progetto IDE. Valgono tuttavia tutte le indicazioni su come creare una procedura di riproduzione esaustiva. Il codice deve essere minimo e indipendente, il problema deve verificarsi negli strumenti Microsoft più recenti, ed eventualmente, il problema non deve manifestarsi in altri compilatori.

Creare la procedura di riproduzione come progetto IDE minimo, comprimere l'intera struttura della directory in un file con estensione zip o simile e allegarla al report.

## <a name="ways-to-send-your-report"></a>Modi per inviare il report

Esistono un paio di modi utili per inviare il report a Microsoft. È possibile usare lo strumento predefinito di Visual Studio [Segnala un problema ](/visualstudio/ide/how-to-report-a-problem-with-visual-studio-2017), o le pagine della [Community degli sviluppatori Visual Studio](https://developercommunity.visualstudio.com/). È inoltre possibile accedere direttamente alle pagine della nostra community di sviluppatori scegliendo il pulsante **Commenti e suggerimenti** nella parte inferiore della pagina. La scelta dipende dal fatto che si vogliano usare gli strumenti dell'IDE per acquisire gli screenshot e organizzare la segnalazione da pubblicare nelle pagine della community degli sviluppatori o che si preferisca usare direttamente il sito Web.

> [!NOTE]
> Indipendentemente dalla modalità di invio del report, Microsoft rispetta la privacy degli utenti. Microsoft garantisce conformità a tutte le leggi che regolano la privacy dei dati. Per informazioni sul trattamento dei dati inviati a Microsoft, vedere l'[Informativa sulla privacy di Microsoft](https://privacy.microsoft.com/privacystatement).

### <a name="use-the-report-a-problem-tool"></a>Usare lo strumento Segnala un problema

**Segnala un problema** è uno strumento di Visual Studio che consente agli utenti di segnalare una serie di problemi in pochi clic. Offre un semplice modulo in cui specificare le informazioni dettagliate sul problema rilevato e consente di inviare il report senza mai uscire dall'IDE.

Segnalare il problema tramite lo strumento **Segnala un problema** dall'IDE è facile e comodo. È possibile accedere dalla barra del titolo scegliendo l'icona **Commenti e suggerimenti** accanto alla casella di ricerca **Avvio veloce** oppure è possibile visualizzarlo nella barra dei menu in **Guida**  >  **Commenti e suggerimenti** > **Segnala un problema**.

Quando si sceglie di segnalare un problema, eseguire la ricerca di problemi simili nella Community degli sviluppatori. Se il problema è stato segnalato in precedenza, votare a favore dell'argomento e aggiungere un commento con informazioni specifiche. Se non viene visualizzato un problema analogo, fare clic sul pulsante **Segnala un nuovo problema** nella parte inferiore della finestra di dialogo Commenti e suggerimenti di Visual Studio e seguire i passaggi per segnalare il problema.

### <a name="use-the-visual-studio-developer-community-pages"></a>Usare le pagine della community di sviluppatori di Visual Studio

Le pagine della community di sviluppatori di Visual Studio sono un altro modo pratico per segnalare problemi e trovare soluzioni per Visual Studio e il compilatore C++, strumenti e librerie. Sono disponibili pagine specifiche della community di sviluppatori per [Visual Studio](https://developercommunity.visualstudio.com/spaces/8/index.html), [Visual Studio per Mac](https://developercommunity.visualstudio.com/spaces/41/index.html), [.NET](https://developercommunity.visualstudio.com/spaces/61/index.html), [C++](https://developercommunity.visualstudio.com/spaces/62/index.html), [Azure DevOps](https://developercommunity.visualstudio.com/spaces/21/index.html) e [TFS](https://developercommunity.visualstudio.com/spaces/22/index.html). Sotto queste schede nella parte superiore di ogni pagina è presente una casella di ricerca che è possibile usare per trovare post o argomenti che segnalano problemi simili a quello in questione. Possono già essere presenti soluzioni o altre informazioni utili relative al problema. Se un utente ha riportato lo stesso problema in precedenza, votare a favore del problema e immettere un commento anziché procedere con una nuova segnalazione del problema. Per commentare, votare o segnalare un nuovo problema, è possibile che venga richiesto di accedere al proprio account di Visual Studio e di accettare per concedere l'accesso all'app della community degli sviluppatori al proprio profilo.

Per problemi con l'uso del compilatore, del linker e altri strumenti e librerie di C++, usare la pagina relativa a [C++](https://developercommunity.visualstudio.com/spaces/62/index.html). Se un problema non è stato segnalato in precedenza, fare clic sul pulsante **Segnala un problema** accanto alla casella di ricerca nella parte superiore della pagina. È possibile includere il codice della procedura di ripetizione e la riga di comando, schermate, i collegamenti alle discussioni correlate e qualsiasi altra informazione attinente e utile.

> [!TIP]
> Per altri tipi di problemi riscontrabili in Visual Studio non correlati al set di strumenti C++ (ad esempio, problemi dell'interfaccia utente, funzionalità dell'IDE interrotta o arresti anomali generali), usare lo strumento **Segnala un problema** nell'IDE. Si tratta della scelta migliore, considerate le funzionalità di screenshot e la possibilità di registrare le azioni dell'interfaccia utente responsabili del problema riscontrato. Questi tipi di errori possono essere cercati anche nel sito della [community degli sviluppatori](https://developercommunity.visualstudio.com/). Per altre informazioni, vedere [Come segnalare un problema con Visual Studio](/visualstudio/ide/how-to-report-a-problem-with-visual-studio-2017).

### <a name="reports-and-privacy"></a>Segnalazioni e privacy

Per impostazione predefinita **tutte le informazioni contenute nelle segnalazioni, i commenti e le risposte sono pubblicamente visibili**. In genere, tutto ciò rappresenta un vantaggio, in quanto consente all'intera community di visualizzare i problemi, le soluzioni e soluzioni alternative individuate da altri utenti. Tuttavia, se per motivi di privacy o di proprietà intellettuale, si teme che i propri dati o la propria identità diventino di dominio pubblico, sono disponibili alcune opzioni.

Se non si vuole rivelare la propria identità [creare un nuovo account Microsoft](https://signup.live.com/) che non divulghi informazioni dettagliate personali. Usare questo account per creare la segnalazione.

**Nel titolo o nel contenuto della segnalazione iniziale che sono pubblici, non inserire informazioni che si vogliono mantenere private.** Si noti invece che i dettagli saranno inviati privatamente in un commento a parte. Per assicurarsi che la segnalazione sia indirizzata al destinatario corretto, includere **cppcompiler** nell'elenco degli argomenti nella segnalazione del problema. Dopo aver segnalato il problema, è possibile specificare chi potrà visualizzare le risposte e gli allegati.

#### <a name="to-create-a-problem-report-for-private-information"></a>Per creare una segnalazione di un problema con informazioni private

1. Nella segnalazione creata scegliere **Aggiungi commento** per creare la descrizione privata del problema.

1. Nell'editor di risposta usare l'elenco a discesa per il controllo sotto i pulsanti **Invia** e **Annulla** per specificare chi potrà visualizzare la risposta. Solo le persone specificate potranno visualizzare le risposte private, le immagini, i collegamenti o il codice inclusi nelle risposte. Scegliere **Viewable by moderators and the original poster** (Visualizzabile da moderatori e dall'autore originale del post) per limitare la visibilità ai dipendenti Microsoft e all'utente.

1. Aggiungere la descrizione ed eventuali altre informazioni, immagini e allegati di file necessari per la procedura di riproduzione. Scegliere il pulsante **Invia** per inviare queste informazioni privatamente.

   Si noti che esiste un limite di 2GB per i file allegati e un massimo di 10 file. Per caricare file di dimensioni maggiori, richiedere un URL di caricamento in un commento privato.

Le risposte in questo commento sono soggette allo stesso limite di visibilità specificata, anche se l'elenco a discesa per il controllo nelle risposte non visualizza correttamente lo stato di visibilità limitata.

Per garantire la privacy e assicurarsi che le informazioni riservate non siano visualizzabili pubblicamente, gestire sempre le risposte con Microsoft usando questo commento limitato. Le risposte ad altri commenti potrebbero accidentalmente divulgare informazioni riservate.

## <a name="how-to-report-a-c-documentation-issue"></a>Come segnalare un problema di documentazione di C++

Utilizziamo i problemi GitHub per tenere traccia dei problemi segnalati nella nostra documentazione. È ora possibile creare problemi in GitHub direttamente da una pagina contenuto, che consente di interagire in modo molto più efficace con gli autori e i team di prodotto. Se si nota un problema in un documento, un esempio di codice non valido, una spiegazione confusa, una mancanza critica o semplicemente un errore di ortografia, è possibile segnalare facilmente il problema. Scorrere fino alla fine della pagina e selezionare **Sign in to give documentation feedback** (Accedi per fornire commenti e suggerimenti sulla documentazione). È necessario creare un account GitHub, se non si è già provveduto, ma una volta fatto sarà possibile visualizzare tutti i problemi relativi alla documentazione, il relativo stato e ricevere notifiche quando vengono apportate modifiche per l'errore segnalato. Per altre informazioni, vedere [A New Feedback System Is Coming to docs.microsoft.com](/teamblog/a-new-feedback-system-is-coming-to-docs) (Nuovo sistema di commenti e suggerimenti per docs.microsoft.com).

Quando si segnala un problema di documentazione su GitHub usando il pulsante Commenti e suggerimenti, il problema viene automaticamente compilato con alcune informazioni relative alla pagina in cui è stato creato il problema, in modo da sapere dove si trova il problema. Non modificare queste informazioni. Aggiungere solo i dettagli sull'errore ed eventualmente suggerire una correzione. [La documentazione è open source](https://github.com/MicrosoftDocs/cpp-docs/), pertanto, se l'utente desidera apportare una correzione e proporla personalmente, può farlo. Per ulteriori informazioni su come contribuire alla documentazione, vedere la nostra [Contributing guide](https://github.com/MicrosoftDocs/cpp-docs/blob/master/CONTRIBUTING.md) (Guida ai contributi) su GitHub.

