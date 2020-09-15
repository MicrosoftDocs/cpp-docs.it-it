---
title: 'Procedura dettagliata: Compilare un programma in C dalla riga di comando'
description: Procedura dettagliata in cui viene illustrato come creare un semplice programma C di tipo Hello World.
ms.custom: conceptual
ms.date: 9/10/2020
helpviewer_keywords:
- command-line applications [C++], C programs
- Visual C, compiling
- compiling programs [C++]
- C program compiling [C++]
ms.assetid: 7e74cc2d-54b1-49de-b7ad-d3ae6b39ab8d
ms.openlocfilehash: 57276f61ca8ff848db0313935bc1841de50f9874
ms.sourcegitcommit: b492516cc65120250b9ea23f96f7f63f37f99fae
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/14/2020
ms.locfileid: "90075608"
---
# <a name="walkthrough-compile-a-c-program-on-the-command-line"></a>Procedura dettagliata: Compilare un programma in C dalla riga di comando

Visual C++ include un compilatore C che è possibile usare per creare qualsiasi elemento, dai programmi console di base a applicazioni desktop Windows complete, app per dispositivi mobili e altro ancora.

In questa procedura dettagliata viene illustrato come creare un programma C di base "Hello, World" utilizzando un editor di testo e quindi compilarlo nella riga di comando. Se si preferisce usare C++ nella riga di comando, vedere [procedura dettagliata: compilazione di un programma C++ nativo nella riga di comando](walkthrough-compiling-a-native-cpp-program-on-the-command-line.md). Se si vuole provare l'IDE di Visual Studio invece di usare la riga di comando, vedere [procedura dettagliata: uso di progetti e soluzioni (C++)](../ide/walkthrough-working-with-projects-and-solutions-cpp.md) o [uso dell'IDE di Visual Studio per lo sviluppo di applicazioni desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).

## <a name="prerequisites"></a>Prerequisiti

Per completare questa procedura dettagliata, è necessario aver installato Visual Studio e i componenti facoltativi Visual C++ o gli strumenti di compilazione per Visual Studio.

Visual Studio è un Integrated Development Environment potente che supporta un editor completo, gestori di risorse, debugger e compilatori per molti linguaggi e piattaforme. Per informazioni su queste funzionalità e su come scaricare e installare Visual Studio, inclusa la versione gratuita di Visual Studio Community Edition, vedere [installare Visual Studio](/visualstudio/install/install-visual-studio).

La versione build Tools per Visual Studio di Visual Studio installa solo il set di strumenti della riga di comando, i compilatori, gli strumenti e le librerie necessari per compilare programmi C e C++. È perfetto per i laboratori di compilazione o gli esercizi in aula e viene installato relativamente rapidamente. Per installare solo il set di strumenti della riga di comando, scaricare Build Tools per Visual Studio dalla pagina dei [download di Visual Studio](https://visualstudio.microsoft.com/downloads/#build-tools-for-visual-studio-2019) ed eseguire il programma di installazione. Nel programma di installazione di Visual Studio selezionare il carico di lavoro **strumenti di compilazione C++** e scegliere **Installa**.

Prima di poter compilare un programma C o C++ nella riga di comando, è necessario verificare che gli strumenti siano installati e che sia possibile accedervi dalla riga di comando. Visual C++ presenta requisiti complessi per l'ambiente della riga di comando per trovare gli strumenti, le intestazioni e le librerie utilizzate. **Non è possibile usare Visual C++ in una finestra del prompt dei comandi normale** senza alcuna preparazione. È necessaria una finestra del *prompt dei comandi* per gli sviluppatori, ovvero una normale finestra del prompt dei comandi in cui sono impostate tutte le variabili di ambiente necessarie. Fortunatamente, Visual C++ installa i tasti di scelta rapida per avviare prompt dei comandi per gli sviluppatori per i quali l'ambiente è configurato per le compilazioni da riga di comando. Sfortunatamente, i nomi dei tasti di scelta rapida del prompt dei comandi per gli sviluppatori e la posizione in cui si trovano sono diversi in quasi tutte le versioni di Visual C++ e in versioni diverse di Windows. La prima attività dettagliata consiste nel trovare il collegamento corretto da usare.

> [!NOTE]
> Un collegamento al prompt dei comandi per gli sviluppatori imposta automaticamente i percorsi corretti per il compilatore e gli strumenti e per le intestazioni e le librerie necessarie. Alcuni di questi valori sono diversi per ogni configurazione della build. È necessario impostare manualmente questi valori di ambiente se non si utilizza uno dei tasti di scelta rapida. Per altre informazioni, vedere [Impostare le variabili di percorso e di ambiente per le compilazioni da riga di comando](setting-the-path-and-environment-variables-for-command-line-builds.md). Poiché l'ambiente di compilazione è complesso, è consigliabile usare un collegamento al prompt dei comandi per gli sviluppatori anziché crearne uno personalizzato.

Queste istruzioni variano a seconda della versione di Visual Studio in uso. Per visualizzare la documentazione per la versione preferita di Visual Studio, usare il controllo selettore della **versione** . Si trova nella parte superiore del sommario in questa pagina.

::: moniker range="vs-2019"

## <a name="open-a-developer-command-prompt-in-visual-studio-2019"></a>Aprire un prompt dei comandi per gli sviluppatori in Visual Studio 2019

Se è stato installato Visual Studio 2019 in Windows 10, aprire il menu Start, quindi scorrere verso il basso e aprire la cartella **Visual studio 2019** (non l'app visual studio 2019). Scegliere **prompt dei comandi per gli sviluppatori per VS 2019** per aprire la finestra del prompt dei comandi.

Se si usa una versione diversa di Windows, cercare nel menu Start o nella pagina iniziale la cartella strumenti di Visual Studio che contiene un collegamento al prompt dei comandi per gli sviluppatori. È anche possibile usare la funzione di ricerca di Windows per cercare "prompt dei comandi per gli sviluppatori" e sceglierne uno che corrisponda alla versione installata di Visual Studio. Usare il collegamento per aprire la finestra del prompt dei comandi.

::: moniker-end

::: moniker range="vs-2017"

## <a name="open-a-developer-command-prompt-in-visual-studio-2017"></a>Aprire un prompt dei comandi per gli sviluppatori in Visual Studio 2017

Se è stato installato Visual Studio 2017 in Windows 10, aprire il menu Start, quindi scorrere verso il basso e aprire la cartella **Visual studio 2017** (non l'app visual studio 2017). Scegliere **prompt dei comandi per gli sviluppatori per VS 2017** per aprire la finestra del prompt dei comandi.

Se si esegue una versione diversa di Windows, cercare nel menu Start o nella pagina iniziale la cartella strumenti di Visual Studio che contiene un collegamento al prompt dei comandi per gli sviluppatori. È anche possibile usare la funzione di ricerca di Windows per cercare "prompt dei comandi per gli sviluppatori" e sceglierne uno che corrisponda alla versione installata di Visual Studio. Usare il collegamento per aprire la finestra del prompt dei comandi.

::: moniker-end

::: moniker range="vs-2015"

## <a name="open-a-developer-command-prompt-in-visual-studio-2015"></a>Aprire un prompt dei comandi per gli sviluppatori in Visual Studio 2015

Se è stato installato Microsoft Visual C++ Build Tools 2015 in Windows 10, aprire il menu **Start** , quindi scorrere verso il basso e aprire la cartella **Visual C++ Build Tools** . Scegliere **Visual C++ 2015 prompt dei comandi degli strumenti nativi x86** per aprire la finestra del prompt dei comandi.

Se si esegue una versione diversa di Windows, cercare nel menu Start o nella pagina iniziale la cartella strumenti di Visual Studio che contiene un collegamento al prompt dei comandi per gli sviluppatori. È anche possibile usare la funzione di ricerca di Windows per cercare "prompt dei comandi per gli sviluppatori" e sceglierne uno che corrisponda alla versione installata di Visual Studio. Usare il collegamento per aprire la finestra del prompt dei comandi.

::: moniker-end

Verificare quindi che il prompt dei comandi per gli sviluppatori Visual C++ sia configurato correttamente. Nella finestra del prompt dei comandi immettere `cl` e verificare che l'output abbia un aspetto simile al seguente:

```Output
C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise>cl
Microsoft (R) C/C++ Optimizing Compiler Version 19.10.25017 for x86
Copyright (C) Microsoft Corporation.  All rights reserved.

usage: cl [ option... ] filename... [ /link linkoption... ]
```

Potrebbero essere presenti differenze nei numeri di versione o della directory correnti, a seconda della versione di Visual C++ e degli aggiornamenti installati. Se l'output precedente è simile a quello visualizzato, si è pronti per compilare programmi C o C++ dalla riga di comando.

> [!NOTE]
> Se viene rilevato un errore, ad esempio "CL" non è riconosciuto come comando interno o esterno, un programma eseguibile o un file batch, "Error C1034 o LNK1104 di errore quando si esegue il comando **CL** , non si utilizza un prompt dei comandi per gli sviluppatori o si verifica un problema con l'installazione di Visual C++. Per poter continuare, è necessario risolvere il problema.

Se non è possibile trovare il collegamento al prompt dei comandi per gli sviluppatori o se viene visualizzato un messaggio di errore quando si immette `cl` , l'installazione del Visual C++ potrebbe avere un problema. Se si usa Visual Studio 2017 o versione successiva, provare a reinstallare il carico di lavoro **sviluppo di applicazioni desktop con C++** nel programma di installazione di Visual Studio. Per informazioni dettagliate, vedere [installare il supporto C++ in Visual Studio](vscpp-step-0-installation.md). In alternativa, reinstallare gli strumenti di compilazione dalla pagina dei [download di Visual Studio](https://visualstudio.microsoft.com/downloads/) . Non passare alla sezione successiva finché non funziona. Per ulteriori informazioni sull'installazione e la risoluzione dei problemi di Visual Studio, vedere [Install Visual Studio](/visualstudio/install/install-visual-studio).

> [!NOTE]
> A seconda della versione di Windows nel computer e della configurazione della sicurezza del sistema, potrebbe essere necessario fare clic con il pulsante destro del mouse per aprire il menu di scelta rapida per il collegamento prompt dei comandi per gli sviluppatori, quindi scegliere **Esegui come amministratore** per compilare ed eseguire correttamente il programma creato seguendo questa procedura dettagliata.

## <a name="create-a-c-source-file-and-compile-it-on-the-command-line"></a>Creare un file di origine C e compilarlo nella riga di comando

1. Nella finestra del prompt dei comandi per gli sviluppatori immettere `cd c:\` per impostare la directory di lavoro corrente sulla radice dell'unità C:. Immettere quindi `md c:\simple` per creare una directory e quindi immettere `cd c:\simple` per passare a tale directory. Questa directory conterrà il file di origine e il programma compilato.

1. Immettere `notepad simple.c` al prompt dei comandi per gli sviluppatori. Nella finestra di dialogo di avviso del blocco note visualizzata scegliere **Sì** per creare un nuovo file con estensione c semplice nella directory di lavoro.

1. In blocco note immettere le righe di codice seguenti:

    ```C
    #include <stdio.h>

    int main()
    {
        printf("Hello, World! This is a native C program compiled on the command line.\n");
        return 0;
    }
    ```

1. Nella barra dei menu del blocco note scegliere **file**  >  **Salva** per salvare Simple. c nella directory di lavoro.

1. Tornare alla finestra del prompt dei comandi per gli sviluppatori. Immettere `dir` al prompt dei comandi per elencare il contenuto della directory c:\simple. Si noterà che il file di origine è Simple. c nell'elenco di directory, che ha un aspetto simile al seguente:

    ```Output
    C:\simple>dir
     Volume in drive C has no label.
     Volume Serial Number is CC62-6545

     Directory of C:\simple

    10/02/2017  03:46 PM    <DIR>          .
    10/02/2017  03:46 PM    <DIR>          ..
    10/02/2017  03:36 PM               143 simple.c
                   1 File(s)            143 bytes
                   2 Dir(s)  514,900,566,016 bytes free

    ```

   Le date e gli altri dettagli variano nel computer. Se non viene visualizzato il file del codice sorgente, Simple. c, verificare di aver modificato la directory c:\simple creata e, nel blocco note, assicurarsi di aver salvato il file di origine in questa directory. Assicurarsi inoltre che il codice sorgente sia stato salvato con estensione c e non con estensione txt.

1. Per compilare il programma, immettere `cl simple.c` al prompt dei comandi per gli sviluppatori.

   È possibile visualizzare il nome del programma eseguibile, simple.exe, nelle righe di informazioni di output visualizzate dal compilatore:

    ```Output
    c:\simple>cl simple.c
    Microsoft (R) C/C++ Optimizing Compiler Version 19.10.25017 for x86
    Copyright (C) Microsoft Corporation.  All rights reserved.

    simple.c
    Microsoft (R) Incremental Linker Version 14.10.25017.0
    Copyright (C) Microsoft Corporation.  All rights reserved.

    /out:simple.exe
    simple.obj
    ```

   > [!NOTE]
   > Se viene rilevato un errore, ad esempio "CL" non è riconosciuto come comando interno o esterno, programma eseguibile o file batch, "errore C1034 o errore LNK1104, il prompt dei comandi per gli sviluppatori non è configurato correttamente. Per informazioni su come risolvere il problema, tornare alla sezione **aprire un prompt dei comandi** per gli sviluppatori.

   > [!NOTE]
   > Se viene visualizzato un errore o un avviso del linker diverso, esaminare il codice sorgente per correggere eventuali errori, quindi salvarlo ed eseguire di nuovo il compilatore. Per informazioni sugli errori specifici, utilizzare la casella di ricerca nella parte superiore della pagina per cercare il numero di errore.

1. Per eseguire il programma, immettere `simple` al prompt dei comandi.

   Il programma visualizza questo testo e poi viene chiuso:

    ```Output
    Hello, World! This is a native C program compiled on the command line.
    ```

   Congratulazioni, è stato compilato ed eseguito un programma C utilizzando la riga di comando.

## <a name="next-steps"></a>Passaggi successivi

Questo esempio di "Hello, World" è molto semplice quanto un programma C può ottenere. I programmi del mondo reale hanno file di intestazione e più file di origine, collegamenti nelle librerie ed eseguono operazioni utili.

È possibile utilizzare la procedura descritta in questa procedura dettagliata per compilare il proprio codice C anziché digitare il codice di esempio mostrato. È anche possibile compilare molti programmi di esempio di codice C disponibili altrove. Per compilare un programma con file di codice sorgente aggiuntivi, immetterli tutti nella riga di comando, ad esempio:

`cl file1.c file2.c file3.c`

Il compilatore restituisce un programma denominato file1.exe. Per modificare il nome in program1.exe, aggiungere un'opzione del linker [/out](reference/out-output-file-name.md) :

`cl file1.c file2.c file3.c /link /out:program1.exe`

Per rilevare automaticamente più errori di programmazione, è consigliabile eseguire la compilazione con l'opzione [/W3](reference/compiler-option-warning-level.md) o [/W4](reference/compiler-option-warning-level.md) Warning Level:

`cl /W4 file1.c file2.c file3.c /link /out:program1.exe`

Il compilatore, cl.exe, offre molte più opzioni che è possibile applicare per compilare, ottimizzare, eseguire il debug e analizzare il codice. Per un elenco rapido, immettere `cl /?` al prompt dei comandi per gli sviluppatori. È anche possibile compilare e collegare separatamente e applicare le opzioni del linker in scenari di compilazione più complessi. Per ulteriori informazioni sulle opzioni e sull'utilizzo del compilatore e del linker, vedere  [riferimenti alla compilazione in C/C++](reference/c-cpp-building-reference.md).

Per configurare e compilare progetti più complessi dalla riga di comando, è possibile usare NMAKE e i makefile, oppure MSBuild e i file di progetto. Per altre informazioni sull'uso di questi strumenti, vedere informazioni di [riferimento su NMAKE](reference/nmake-reference.md) e [MSBuild](msbuild-visual-cpp.md).

I linguaggi C e C++ sono simili, ma non uguali. Il compilatore Microsoft C/C++ (MSVC) usa una regola semplice per determinare la lingua da usare durante la compilazione del codice. Per impostazione predefinita, il compilatore MSVC considera tutti i file che terminano con. c come codice sorgente C e tutti i file che terminano con. cpp come codice sorgente C++. Per forzare il compilatore a considerare tutti i file come C non dipendenti dall'estensione del nome file, usare l'opzione del compilatore [/TC](reference/tc-tp-tc-tp-specify-source-file-type.md) .

MSVC è compatibile con lo standard ISO C99, ma non è strettamente conforme. Nella maggior parte dei casi, il codice C portatile verrà compilato ed eseguito come previsto. Visual C++ fornisce il supporto per le modifiche apportate a ISO C11/C17. Per eseguire la compilazione con il supporto C11/C17, usare il flag del compilatore `/std:c11` o `/std:c17` . Alcune funzioni di libreria e i nomi di funzione POSIX sono deprecati da MSVC. Le funzioni sono supportate, ma i nomi preferiti sono stati modificati. Per altre informazioni, vedere [funzionalità di sicurezza in CRT](../c-runtime-library/security-features-in-the-crt.md) e [Avviso del compilatore (livello 3) C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md).

## <a name="see-also"></a>Vedere anche

[Procedura dettagliata: creazione di un programma C++ standard (C++)](../windows/walkthrough-creating-a-standard-cpp-program-cpp.md)<br/>
[Riferimenti per il linguaggio C](../c-language/c-language-reference.md)<br/>
[Progetti e sistemi di compilazione](projects-and-build-systems-cpp.md)<br/>
[Compatibilità](../c-runtime-library/compatibility.md)
