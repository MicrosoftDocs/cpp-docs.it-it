---
title: Come segnalare un problema con il set di strumenti Visual C++ | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: ec24a49c-411d-47ce-aa4b-8398b6d3e8f6
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 4a669b2935e4c21421d0c760e6de0c5c7340bed4
ms.sourcegitcommit: 1b480aa74886930b3bd0435d71cfcc3ccda36424
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 11/15/2017
---
# <a name="how-to-report-a-problem-with-the-visual-c-toolset"></a>Come segnalare un problema con il set di strumenti Visual C++

Se si riscontrano problemi con il compilatore, il linker o altri strumenti di Visual C++ è necessario inviare una segnalazione a Microsoft.

Il modo migliore per segnalare un problema è inviare un report con una descrizione del problema riscontrato, informazioni dettagliate su come viene compilato il programma e parte del codice necessario per riprodurre il problema nei computer Microsoft. In questo modo è possibile verificare rapidamente se il problema sussiste solo nell'ambiente locale, determinare se ha effetto su altre versioni del compilatore e diagnosticarne la causa.

In questo documento verranno trattati gli argomenti seguenti

- [Come preparare il report](#prepare) con le informazioni essenziali.

- [Modi per inviare il report](#send) e caratteristiche dei singoli report.

- [Come generare una procedura di riproduzione](#generate) e i diversi tipi di procedure.

I report sono strumenti importanti per tutti gli sviluppatori. Grazie per contribuire a migliorare Visual C++.

## <a name="prepare"></a> Come preparare il report

È importante creare un report esaustivo in quanto è molto difficile riprodurre il problema riscontrato nei computer utente senza avere informazioni complete. Più il report è completo, più alta è la probabilità che si possa ricreare il problema ed eseguire la diagnosi.

Il report deve contenere almeno le informazioni seguenti

- Informazioni complete sulla versione del set di strumenti usata.

- L'intera riga di comando cl.exe usata per compilare il codice.

- Una descrizione dettagliata del problema riscontrato.

- Una "procedura di riproduzione", vale a dire il codice sorgente che illustra il problema.

Continuare a leggere per sapere dove trovare le informazioni specifiche necessarie.

### <a name="the-toolset-version"></a>Versione del set di strumenti

È necessario comunicare la versione completa del set di strumenti in uso in modo che sia possibile testare la procedura di riproduzione usando lo stesso set di strumenti applicato nei computer utente. Se il problema può essere riprodotto, queste informazioni rappresentano anche un punto di partenza per capire quali altre versioni del set di strumenti presentano lo stesso problema.

#### <a name="to-report-the-full-version-of-the-compiler-youre-using"></a>Per segnalare la versione completa del compilatore in uso

1. Premere WINDOWS sulla tastiera e digitare `Developer Command Prompt`.

1. Dall'elenco delle corrispondenze scegliere la versione del **prompt dei comandi per gli sviluppatori** che corrisponde alla versione di Visual Studio usata.

1. Nella console **Prompt dei comandi per gli sviluppatori** immettere il comando `cl /Bv /CLR`.

L'output sarà simile al seguente:

```Output
C:\Compiler>cl /Bv /CLR
Microsoft (R) C/C++ Optimizing Compiler Version 18.00.40209
for Microsoft (R) .NET Framework version 4.00.30319.34014
Copyright (C) Microsoft Corporation.  All rights reserved.

Compiler Passes:
 C:\WinCComp\binaries.x86chk\bin\i386\cl.exe:        Version 18.00.40209.0
 C:\WinCComp\binaries.x86chk\bin\i386\c1.dll:        Version 18.00.40209.0
 C:\WinCComp\binaries.x86chk\bin\i386\c1xx.dll:      Version 18.00.40209.0
 C:\WinCComp\binaries.x86chk\bin\i386\c2.dll:        Version 18.00.40209.0
 C:\WinCComp\binaries.x86chk\bin\i386\link.exe:      Version 12.00.40209.0
 C:\WinCComp\binaries.x86chk\bin\i386\mspdb120.dll:  Version 12.00.40209.0
 C:\WinCComp\binaries.x86chk\bin\i386\1033\clui.dll: Version 18.00.40209.0
 Common Language Runtime:                            Version  4.00.30319.34014

cl : Command line error D8003 : missing source filename
```

Copiare e incollare l'intero output nel report.

### <a name="the-command-line"></a>Riga di comando

È necessario specificare l'intera riga di comando (cl.exe e relativi argomenti) che l'utente ha usato per compilare il codice in modo che sia possibile compilare il codice esattamente come nei computer utente. Questo passaggio è importante perché il problema riscontrato potrebbe verificarsi solo quando si compila un determinato argomento o una combinazione di argomenti.

Per trovare facilmente queste informazioni, vedere il log di compilazione immediatamente dopo che si è verificato il problema. La riga di comando conterrà quindi esattamente gli stessi argomenti che potrebbero essere la causa del problema.

#### <a name="to-report-the-contents-of-the-command-line"></a>Per segnalare i contenuti della riga di comando

1. Individuare il file **CL.command.1.tlog** e aprirlo. Per impostazione predefinita, questo file si trova in \\...\Visual Studio Version\Projects\SolutionName\ProjectName\Config\ProjectName.tlog\CL.command.1.tlog.

   Il file contiene i nomi dei file del codice sorgente seguiti dagli argomenti della riga di comando usati per la compilazione, disposti su singole righe.

1. Individuare la riga che contiene il nome del file del codice sorgente in cui si verifica il problema. La riga sottostante contiene il comando cl.exe corrispondente e i relativi argomenti.

Copiare e incollare l'intera riga di comando nel report.

### <a name="a-description-of-the-problem"></a>Descrizione del problema

Per poter visualizzare lo stesso errore che si verifica nei computer utente, è necessario specificare una descrizione dettagliata del problema riscontrato. È talvolta utile anche sapere cosa si stava eseguendo e cosa si prevedeva come risultato.

Specificare i messaggi di errore precisi generati dal set di strumenti, una breve descrizione di ciò che si stava tentando di eseguire per comprendere il codice della procedura di riproduzione e tutti i dettagli che potrebbero essere utili per diagnosticare il problema riscontrato, ad esempio eventuali soluzioni alternative adottate. Non ripetere le informazioni già specificate in altre sezioni del report.

### <a name="the-repro"></a>Procedura di riproduzione

Perché sia possibile *riprodurre* l'errore che si è verificato nei computer utente, è necessaria una procedura di riproduzione, vale a dire un esempio di codice sorgente indipendente che illustra il problema riscontrato. In base al tipo di problema riscontrato, è necessario scegliere il tipo di procedura di riproduzione da includere nel report. Senza una corretta procedura di riproduzione, è impossibile eseguire un'analisi.

È possibile includere direttamente nel testo del report procedure di riproduzione di codice sorgente brevi e indipendenti. È invece consigliabile allegare al report procedure di riproduzione di codice più estese. Le procedure di riproduzione che non possono essere ridotte a un singolo file del codice sorgente devono essere compresse in una directory contenente tutti i file con estensione zip o simile da allegare al report. Altri dettagli aggiuntivi specifici dello scenario devono essere sempre inclusi nel testo del report, mai nel codice sorgente.

La procedura di riproduzione migliore è la *procedura di riproduzione minima*. Si tratta di un unico file del codice sorgente indipendente (senza riferimenti a intestazioni utente) che contiene codice a sufficienza per illustrare il problema. Se possibile, è sufficiente allegare questo file del codice sorgente per segnalare tutte le informazioni necessarie.

Se non fosse possibile riassumere il problema in una procedura di riproduzione minima senza dipendenze, fare riferimento alle sezioni seguenti per determinare il tipo di procedura di riproduzione da includere nel report.

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

#### <a name="backend_crash"></a> Arresto anomalo del back-end (generazione del codice)

Gli arresti anomali del back-end si verificano durante la fase di generazione del codice del compilatore. In genere il compilatore crea l'[errore irreversibile C1001](error-messages/compiler-errors-1/fatal-error-c1001.md) e non sempre segnala il file del codice sorgente e il numero della riga in cui si è verificato l'errore. Viene spesso indicato un file compiler\utc\src\p2\main.c, dettaglio che può essere tuttavia tralasciato.

Per questo tipo di arresto anomalo inviare una [procedura di riproduzione del collegamento](#link-repros) se si usa la Generazione codice in fase di collegamento, diversamente inviare una [procedura di riproduzione pre-elaborata](#preprocessed-repros). La Generazione codice in fase di collegamento è abilitata dall'argomento della riga di comando `/GL` per cl.exe.

Di seguito è riportato un esempio di output del compilatore per questo tipo di arresto anomalo in cui la Generazione codice in fase di collegamento **non** è in uso. Se l'output del compilatore è simile al seguente è necessario inviare una [procedura di riproduzione pre-elaborata](#preprocessed-repros).

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

Se la riga che inizia con **INTERNAL COMPILER ERROR** specifica link.exe anziché cl.exe, significa che la Generazione codice in fase di collegamento è stata abilitata ed è necessario inviare una [procedura di riproduzione del collegamento](#link-repros). Se dal messaggio di errore del compilatore non è chiaro se la Generazione codice in fase di collegamento è stata abilitata, è possibile esaminare gli argomenti della riga di comando copiata dal log di compilazione nel passaggio precedente per l'argomento della riga di comando `/GL`.

#### <a name="linker-crash"></a>Arresto anomalo del linker

Gli arresti anomali del linker si verificano durante la fase di collegamento, dopo l'esecuzione del compilatore. In genere il linker crea l'[errore strumenti del linker LNK1000](error-messages/tool-errors/linker-tools-error-lnk1000.md).

> [!NOTE]
> Se invece l'output specifica C1001 o include la Generazione codice in fase di collegamento, fare riferimento a [Arresto anomalo del back-end (generazione del codice)](#backend_crash) per altre informazioni.

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

La generazione di codice errato è un evento raro, che si verifica tuttavia quando il compilatore genera erroneamente codice non corretto che causa l'arresto anomalo dell'applicazione in fase di esecuzione anziché rilevare il problema in fase di compilazione. Se si ritiene che il problema determini la generazione di codice errato, organizzare il report come nel caso di [Arresto anomalo del back-end (generazione del codice)](#backend_crash).

Per questo tipo di arresto anomalo inviare una [procedura di riproduzione del collegamento](#link-repros) se si usa la Generazione codice in fase di collegamento, diversamente inviare una [procedura di riproduzione pre-elaborata](#preprocessed-repros). La Generazione codice in fase di collegamento è abilitata dall'argomento della riga di comando `/GL` per cl.exe.

## <a name="send"></a> Modi per inviare il report

Esistono diversi modi per inviare il report a Microsoft. È possibile usare lo [strumento Segnala un problema](/visualstudio/ide/how-to-report-a-problem-with-visual-studio-2017) predefinito di Visual Studio o inviare un messaggio di posta elettronica. La scelta dipende dal tipo di problema riscontrato, da come si vuole interagire con i tecnici che analizzeranno il report e se si vuole tenere traccia dello stato di avanzamento o condividere il report con la community.

> [!NOTE]
> Indipendentemente dalla modalità di invio del report, Microsoft rispetta la privacy degli utenti. Per informazioni sul trattamento dei dati inviati a Microsoft, vedere l'[Informativa sulla privacy della famiglia dei prodotti Microsoft Visual Studio](https://www.visualstudio.com/dn948229).

### <a name="send-an-email"></a>Inviare un messaggio di posta elettronica

Per contattare direttamente il team di Visual C++ è anche possibile inviare il report tramite posta elettronica all'indirizzo [compilercrash@microsoft.com](mailto:compilercrash@microsoft.com).

Se si sceglie di inviare il report tramite posta elettronica, è possibile usare il modello seguente come corpo del messaggio di posta elettronica. Ricordarsi di allegare il codice sorgente o altri file, se non si includono tali informazioni nel corpo del messaggio di posta elettronica.

```Example
To: compilercrash@microsoft.com
Subject: Visual C++ Error Report
-----

Compiler version:

CL.EXE command line:

Problem description:

Source code and repro steps:

```

### <a name="use-the-report-a-problem-tool"></a>Usare lo strumento Segnala un problema

Segnala un problema è uno strumento di Visual Studio che consente agli utenti di Visual Studio di segnalare una serie di problemi in pochi clic. Offre un semplice modulo in cui specificare le informazioni dettagliate sul problema rilevato e consente di inviare il report senza mai uscire dall'IDE.

Segnalare il problema tramite lo strumento Segnala un problema non è la scelta più comune per i tipi di problemi che riguardano il set degli strumenti discussi in questo documento. È tuttavia una possibilità che può essere adottata se preferibile ad altre.

> [!TIP]
> Per altri tipi di problemi che si possono verificare in Visual Studio e che non sono correlati al set di strumenti, ad esempio problemi con l'interfaccia utente, funzionalità IDE interrotte o arresti anomali generali, lo strumento Segnala un problema può essere un'ottima scelta, grazie alle sue funzionalità di screenshot e alla possibilità di registrare le azioni dell'interfaccia utente responsabili del problema riscontrato. Non segnalare mai questi altri tipi di errore tramite l'invio di messaggi di posta elettronica a compilercrash@microsoft.com.

## <a name="generate"></a> Generare una procedura di riproduzione

Una procedura di riproduzione è un esempio di codice completo e indipendente, che illustra il problema segnalato. Una procedura di riproduzione **non** è un frammento di codice. Deve invece essere un esempio completo di codice che viene, o dovrebbe, essere compilato, eccezione fatta per gli errori generati dal problema che si segnala. Deve contenere tutte le direttive #include necessarie, anche per le intestazioni standard.

Caratteristiche di una buona procedura di riproduzione

- **Minima.** È necessario che le procedure di riproduzione siano minime, ma devono comunque illustrare esattamente il problema riscontrato. Le procedure di riproduzione non devono essere né complesse né realistiche, devono piuttosto essere semplici e pertinenti. Non è necessario includere anche esempi di codice funzionante, anche se possono essere aggiunti qualora siano d'ausilio. Essenziale è solo l'esempio di codice che causa il problema.

- **Indipendente.** È consigliabile non includere nelle procedure di riproduzione dipendenze non necessarie. Se possibile, riprodurre il problema senza usare librerie di terzi. Se possibile, riprodurre il problema senza usare codice di libreria. `std::out` e `printf()` sono accettabili. È molto utile ridurre la quantità di codice da analizzare come possibile responsabile del problema.

- **Confronto con l'ultima versione del compiler** Le procedure di riproduzione devono usare l'ultima versione del set di strumenti quando possibile. Molto spesso i problemi che potrebbero ancora verificarsi nelle versioni precedenti del set di strumenti sono stati risolti nelle versioni più recenti.

- **Confronto con altri compilatori**, se pertinente. Le procedure di riproduzione che contengono codice C++ portabile devono verificare il comportamento confrontandolo con altri compilatori se possibile.

   Questo passaggio consente di determinare se il codice è corretto, come quando MSVC non è in accordo con Clang e GCC, o se non è corretto, quando invece MSVC, Clang e GCC accettano che il codice generi l'errore.

Di seguito sono disponibili le istruzioni per la generazione dei vari tipi di procedure di riproduzione che verranno usate per segnalare i diversi problemi.

### <a name="preprocessed-repros"></a>Procedure di riproduzione pre-elaborate

Una procedura di riproduzione pre-elaborata è un unico file di origine che illustra un problema e che è stato generato dall'output del preprocessore C durante l'elaborazione del file di origine. Questo processo comprende le intestazioni incluse per rimuovere le dipendenze da altri file di origine e di intestazione e risolve anche macro, #ifdefs e altri comandi del preprocessore che potrebbero dipendere dall'ambiente locale.

> [!NOTE]
> Si noti che le procedure di riproduzione pre-elaborate sono la soluzione meno adatta a segnalare problemi causati probabilmente da bug presenti nell'implementazione della libreria standard. Capita spesso infatti che Microsoft decida di sostituire l'ultima implementazione non definitiva per verificare se il problema è già stato risolto. In questo caso non pre-elaborare la procedure di riproduzione. Se non è possibile ridurre il problema a un solo file di origine, comprimere il codice in un file con estensione zip, o simile, oppure usare una procedure di riproduzione del progetto IDE (vedere la sezione successiva [Altre procedure di riproduzione](#other-repros)).

#### <a name="to-preprocess-a-source-code-file"></a>Per pre-elaborare un file del codice sorgente

1. Premere WINDOWS sulla tastiera e digitare `Developer Command Prompt`.

1. Dall'elenco delle corrispondenze scegliere la versione del **prompt dei comandi per gli sviluppatori** che corrisponde alla versione di Visual Studio usata.

1. Nella finestra della console **Prompt dei comandi per gli sviluppatori** immettere il comando `cl /P argumentsfilename.cpp`.

Dopo aver creato il file pre-elaborato (ora nomefile.i), è consigliabile verificare che il problema sia ancora riproducibile usando il file pre-elaborato. È possibile usare l'argomento della riga di comando `/TP` per indicare a cl.exe di ignorare il passaggio del preprocessore e di tentare la compilazione come di consueto.

#### <a name="to-confirm-that-the-error-still-repros-with-the-preprocessed-file"></a>Per confermare che l'errore è ancora riproducibile con il file pre-elaborato

1. Premere WINDOWS sulla tastiera e digitare `Developer Command Prompt`.

1. Dall'elenco delle corrispondenze scegliere la versione del **prompt dei comandi per gli sviluppatori** che corrisponde alla versione di Visual Studio usata.

1. Nella finestra della console **Prompt dei comandi per gli sviluppatori** immettere il comando `cl arguments /TP filename.i`.

1. Verificare che il problema viene riprodotto.

Alla fine allegare questa procedura di riproduzione al report.

### <a name="link-repros"></a>Procedure di riproduzione del collegamento

Una procedura di riproduzione del collegamento è una singola directory che contiene gli artefatti di compilazione che insieme illustrano un problema che si verifica in fase di collegamento, ad esempio un arresto anomalo del back-end che coinvolge la Generazione codice in fase di collegamento o un arresto anomalo del linker. La procedura di riproduzione include quegli artefatti di compilazione necessari come input per il linker perché possa riprodurre il problema. È possibile creare facilmente le procedure di riproduzione del collegamento tramite le funzionalità disponibili nel linker.

#### <a name="to-generate-a-link-repro"></a>Per generare una procedura di riproduzione del collegamento

1. Aprire un prompt dei comandi e immettere il comando `mkdir directory` per creare una directory per la procedura di riproduzione del collegamento.

1. Impostare la variabile di ambiente link_repro nella directory appena creata. Immettere il comando `set link_repro=directory`.

1. Se si vuole eseguire la compilazione da Visual Studio, avviarlo dal prompt dei comandi immettendo il comando `devenv`. In questo modo il valore della variabile di ambiente link_repro sarà visibile in Visual Studio.

1. Compilare l'applicazione e confermare che il problema previsto si è verificato.

1. Chiudere ora Visual Studio se è stato avviato nel passaggio 3.

1. Cancellare la variabile di ambiente link_repro. Immettere il comando `set link_repro=`

Infine comprimere l'intera directory della procedura di riproduzione in un file con estensione zip o simile e allegarla al report.

### <a name="other-repros"></a>Altre procedure di riproduzione

Se il problema non può essere ridotto a un singolo file di origine o a una procedura di riproduzione pre-elaborata, e non è necessaria una procedura di riproduzione del collegamento per testare il problema, è possibile analizzare un progetto IDE. Il codice contenuto nel progetto deve essere minimo. Tutto il materiale sussidiario descritto in questo documento è applicabile anche in questo caso.

Creare la procedura di riproduzione come progetto IDE minimo, comprimere l'intera struttura della directory in un file con estensione zip o simile e allegarla al report.