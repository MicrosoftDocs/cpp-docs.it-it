---
title: 'Procedura dettagliata: compilazione di un programma in C dalla riga di comando'
ms.custom: conceptual
ms.date: 04/25/2019
helpviewer_keywords:
- command-line applications [C++], C programs
- Visual C, compiling
- compiling programs [C++]
- C program compiling [C++]
ms.assetid: 7e74cc2d-54b1-49de-b7ad-d3ae6b39ab8d
ms.openlocfilehash: d807fa75b32b515c2222fec9ea9d070266303e33
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81335254"
---
# <a name="walkthrough-compile-a-c-program-on-the-command-line"></a>Procedura dettagliata: compilazione di un programma in C dalla riga di comando

In Visual Cè è incluso un compilatore C che è possibile usare per creare tutto, dai programmi console di base alle applicazioni desktop complete di Windows, alle app per dispositivi mobili e altro ancora.

In questa procedura dettagliata viene illustrato come creare un programma C di base di tipo "Hello, World" utilizzando un editor di testo e quindi compilarlo nella riga di comando. Se si preferisce utilizzare il linguaggio C, nella riga di comando, vedere [Procedura dettagliata: compilazione di un programma nativo](walkthrough-compiling-a-native-cpp-program-on-the-command-line.md)in C, nella riga di comando . Se si desidera provare l'IDE di Visual Studio invece di utilizzare la riga di comando, vedere [Procedura dettagliata: utilizzo di progetti e soluzioni (c'è)](../ide/walkthrough-working-with-projects-and-solutions-cpp.md) o [Utilizzo dell'IDE](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md)di Visual Studio per lo sviluppo desktop di C .

## <a name="prerequisites"></a>Prerequisiti

Per completare questa procedura dettagliata, è necessario aver installato Visual Studio e i componenti facoltativi di Visual C, oppure gli strumenti di compilazione per Visual Studio.

Visual Studio è un potente ambiente di sviluppo integrato che supporta un editor completo, gestori di risorse, debugger e compilatori per molti linguaggi e piattaforme. Per informazioni su queste funzionalità e su come scaricare e installare Visual Studio, inclusa l'edizione gratuita della community di Visual Studio, vedere [Installare Visual Studio](/visualstudio/install/install-visual-studio).

La versione di Visual Studio build Tools for Visual Studio consente di installare solo il set di strumenti da riga di comando, i compilatori, gli strumenti e le librerie necessari per compilare i programmi C e C. E 'perfetto per costruire laboratori o esercizi in classe e installa relativamente rapidamente. Per installare solo il set di strumenti della riga di comando, scaricare Build Tools for Visual Studio dalla pagina dei download di [Visual Studio](https://visualstudio.microsoft.com/downloads/#build-tools-for-visual-studio-2019) ed eseguire il programma di installazione. Nel programma di installazione di Visual Studio, selezionare il carico di lavoro degli **strumenti di compilazione** di C, quindi scegliere **Installa**.

Prima di poter compilare un programma C o C, nella riga di comando, è necessario verificare che gli strumenti siano installati e che sia possibile accedervi dalla riga di comando. Per trovare gli strumenti, le intestazioni e le librerie che utilizza è necessario individuare i requisiti complessi dell'ambiente della riga di comando. **Non è possibile utilizzare Visual C, in una semplice finestra del prompt dei comandi** senza una certa preparazione. È necessaria una finestra del prompt dei comandi per *sviluppatori,* ovvero una normale finestra del prompt dei comandi con tutte le variabili di ambiente necessarie impostate. Per fortuna, Visual C .NET installa i collegamenti per l'avvio di prompt dei comandi per sviluppatori con l'ambiente impostato per le compilazioni da riga di comando. Sfortunatamente, i nomi dei tasti di scelta rapida del prompt dei comandi per gli sviluppatori e in cui si trovano sono diversi in quasi tutte le versioni di Visual C e nelle diverse versioni di Windows. La prima attività dettagliata consiste nell'trovare il collegamento corretto da utilizzare.

> [!NOTE]
> Un collegamento al prompt dei comandi per sviluppatori imposta automaticamente i percorsi corretti per il compilatore e gli strumenti e per tutte le intestazioni e le librerie necessarie. Alcuni di questi valori sono diversi per ogni configurazione di compilazione. È necessario impostare questi valori di ambiente manualmente se non si utilizza uno dei tasti di scelta rapida. Per altre informazioni, vedere [Impostare le variabili di percorso e di ambiente per le compilazioni da riga di comando](setting-the-path-and-environment-variables-for-command-line-builds.md). Poiché l'ambiente di compilazione è complesso, è consigliabile usare un collegamento al prompt dei comandi per sviluppatori anziché crearne uno personalizzato.

Queste istruzioni variano a seconda della versione di Visual Studio in uso. Per visualizzare la documentazione per la versione preferita di Visual Studio, usare il controllo Selettore **versione.** Si trova nella parte superiore del sommario in questa pagina.

::: moniker range="vs-2019"

## <a name="open-a-developer-command-prompt-in-visual-studio-2019"></a>Aprire un prompt dei comandi per sviluppatori in Visual Studio 2019Open a developer command prompt in Visual Studio 2019

Se è stato installato Visual Studio 2019 in Windows 10, aprire il menu Start e quindi scorrere verso il basso e aprire la cartella **di Visual Studio 2019** (non l'app di Visual Studio 2019). Scegliere Prompt dei comandi per **sviluppatori per VS 2019** per aprire la finestra del prompt dei comandi.

Se si usa una versione diversa di Windows, cercare nel menu Start o nella pagina Start una cartella degli strumenti di Visual Studio contenente un collegamento al prompt dei comandi per sviluppatori. È inoltre possibile utilizzare la funzione di ricerca di Windows per cercare "prompt dei comandi per sviluppatori" e sceglierne uno che corrisponda alla versione installata di Visual Studio.You can also use the Windows search function to search for "developer command prompt" and choose one that matches your installed version of Visual Studio. Utilizzare il collegamento per aprire la finestra del prompt dei comandi.

::: moniker-end

::: moniker range="vs-2017"

## <a name="open-a-developer-command-prompt-in-visual-studio-2017"></a>Aprire un prompt dei comandi per sviluppatori in Visual Studio 2017Open a developer command prompt in Visual Studio 2017

Se hai installato Visual Studio 2017 in Windows 10, apri il menu Start, quindi scorri verso il basso e apri la cartella **Visual Studio 2017** (non l'app Visual Studio 2017). Scegliere Prompt dei comandi per **sviluppatori per VS 2017** per aprire la finestra del prompt dei comandi.

Se si esegue una versione diversa di Windows, cercare nel menu Start o nella pagina Start una cartella degli strumenti di Visual Studio contenente un collegamento al prompt dei comandi per sviluppatori. È inoltre possibile utilizzare la funzione di ricerca di Windows per cercare "prompt dei comandi per sviluppatori" e sceglierne uno che corrisponda alla versione installata di Visual Studio.You can also use the Windows search function to search for "developer command prompt" and choose one that matches your installed version of Visual Studio. Utilizzare il collegamento per aprire la finestra del prompt dei comandi.

::: moniker-end

::: moniker range="vs-2015"

## <a name="open-a-developer-command-prompt-in-visual-studio-2015"></a>Aprire un prompt dei comandi per sviluppatori in Visual Studio 2015Open a developer command prompt in Visual Studio 2015

Se in Windows 10 è stato installato Microsoft Visual C, Build Tools 2015, aprire il menu **Start,** quindi scorrere verso il basso e aprire la cartella Strumenti di compilazione di **Visual C.** Per aprire la finestra del prompt dei comandi, scegliere Il prompt dei comandi **di Visual C.NET 2015 x86 .**

Se si esegue una versione diversa di Windows, cercare nel menu Start o nella pagina Start una cartella degli strumenti di Visual Studio contenente un collegamento al prompt dei comandi per sviluppatori. È inoltre possibile utilizzare la funzione di ricerca di Windows per cercare "prompt dei comandi per sviluppatori" e sceglierne uno che corrisponda alla versione installata di Visual Studio.You can also use the Windows search function to search for "developer command prompt" and choose one that matches your installed version of Visual Studio. Utilizzare il collegamento per aprire la finestra del prompt dei comandi.

::: moniker-end

Verificare quindi che il prompt dei comandi per gli sviluppatori di Visual Cè sia configurato correttamente. Nella finestra del prompt `cl` dei comandi, immettere e verificare che l'output sia simile al seguente:

```Output
C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise>cl
Microsoft (R) C/C++ Optimizing Compiler Version 19.10.25017 for x86
Copyright (C) Microsoft Corporation.  All rights reserved.

usage: cl [ option... ] filename... [ /link linkoption... ]
```

Potrebbero esserci differenze nella directory corrente o nei numeri di versione, a seconda della versione di Visual C e degli eventuali aggiornamenti installati. Se l'output di cui sopra è simile a quello che si vede, allora si è pronti per compilare i programmi C o C , dalla riga di comando.

> [!NOTE]
> Se viene visualizzato un errore, ad esempio "'cl' non è riconosciuto come un comando interno o esterno, programma operabile o file batch," errore C1034, o errore LNK1104 quando si esegue il comando **cl,** quindi non si sta utilizzando un prompt dei comandi di sviluppo, o qualcosa non va con l'installazione di Visual C. È necessario risolvere questo problema prima di continuare.

Se non è possibile trovare il collegamento al prompt dei comandi `cl`per gli sviluppatori o se viene visualizzato un messaggio di errore quando si immette , è possibile che si sia verificato un problema durante l'installazione di Visual C. Se si usa Visual Studio 2017 o versione successiva, provare a reinstallare il carico di lavoro **Sviluppo desktop con C .** Per informazioni dettagliate, vedere Installazione del supporto per [C' in Visual Studio](vscpp-step-0-installation.md). In alternativa, reinstallare gli strumenti di compilazione dalla pagina di download di [Visual Studio.](https://visualstudio.microsoft.com/downloads/) Non passare alla sezione successiva fino a quando non funziona. Per ulteriori informazioni sull'installazione e la risoluzione dei problemi di Visual Studio, vedere [Installare Visual Studio](/visualstudio/install/install-visual-studio).

> [!NOTE]
> A seconda della versione di Windows nel computer e della configurazione di protezione del sistema, potrebbe essere necessario fare clic con il pulsante destro del mouse per aprire il menu di scelta rapida per il prompt dei comandi per sviluppatori e quindi scegliere **Esegui come amministratore** per compilare ed eseguire correttamente il programma creato seguendo questa procedura dettagliata.

## <a name="create-a-c-source-file-and-compile-it-on-the-command-line"></a>Creare un file di origine C e compilarlo nella riga di comandoCreate a C source file and compile it on the command line

1. Nella finestra del prompt `cd c:\` dei comandi per gli sviluppatori, immettere per modificare la directory di lavoro corrente nella directory principale dell'unità C:. Successivamente, `md c:\simple` immettere per creare una `cd c:\simple` directory e quindi immettere per passare a tale directory. Questa directory conterrà il file di origine e il programma compilato.

1. Immettere `notepad simple.c` al prompt dei comandi per sviluppatori. Nella finestra di dialogo di avviso Blocco note visualizzata scegliere **Sì** per creare un nuovo file simple.c nella directory di lavoro.

1. Nel Blocco note immettere le seguenti righe di codice:

    ```C
    #include <stdio.h>

    int main()
    {
        printf("Hello, World! This is a native C program compiled on the command line.\n");
        return 0;
    }
    ```

1. Sulla barra dei menu Blocco note scegliere**Salva** **file** > per salvare simple.c nella directory di lavoro.

1. Tornare alla finestra del prompt dei comandi per sviluppatori. Immettere `dir` al prompt dei comandi per elencare il contenuto della directory c:. Dovresti vedere il file di origine simple.c nell'elenco delle directory, che ha un aspetto simile al:

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

   Le date e altri dettagli saranno diversi sul tuo computer. Se il file del codice sorgente non è visualizzato, simple.c, assicurarsi di aver modificato la directory c: , simple creata e nel Blocco note, assicurarsi di aver salvato il file di origine in questa directory. Assicurarsi inoltre di aver salvato il codice sorgente con estensione c, non con estensione txt.

1. Per compilare il `cl simple.c` programma, immettere al prompt dei comandi per sviluppatori.

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
   > Se viene visualizzato un errore come "'cl' non è riconosciuto come un comando interno o esterno, programma operabile o file batch", errore C1034 o errore LNK1104, il prompt dei comandi per sviluppatori non è impostato correttamente. Per informazioni su come risolvere questo problema, tornare alla sezione Aprire un prompt dei comandi per **sviluppatori.**

   > [!NOTE]
   > Se viene visualizzato un errore o un avviso del compilatore o del linker diverso, esaminare il codice sorgente per correggere eventuali errori, quindi salvarlo ed eseguirlo nuovamente. Per informazioni su errori specifici, utilizzare la casella di ricerca nella parte superiore di questa pagina per cercare il numero di errore.

1. Per eseguire il `simple` programma, immettere al prompt dei comandi.

   Il programma visualizza questo testo e poi viene chiuso:

    ```Output
    Hello, World! This is a native C program compiled on the command line.
    ```

   Congratulazioni, è stato compilato ed eseguito un programma C utilizzando la riga di comando.

## <a name="next-steps"></a>Passaggi successivi

Questo esempio "Hello, World" è semplice come un programma C può ottenere. I programmi del mondo reale hanno file di intestazione e più file di origine, si collegano nelle librerie e fanno un lavoro utile.

È possibile utilizzare i passaggi di questa procedura dettagliata per compilare il proprio codice C anziché digitare il codice di esempio illustrato. È anche possibile compilare molti programmi di esempio di codice C che si trovano altrove. Per compilare un programma con file di codice sorgente aggiuntivi, immetterli tutti nella riga di comando, ad esempio:

`cl file1.c file2.c file3.c`

Il compilatore genera un programma denominato file1.exe. Per modificare il nome in program1.exe, aggiungere un'opzione del linker [/out:](reference/out-output-file-name.md)

`cl file1.c file2.c file3.c /link /out:program1.exe`

E per rilevare automaticamente più errori di programmazione, si consiglia di compilare utilizzando l'opzione [/W3](reference/compiler-option-warning-level.md) o [/W4](reference/compiler-option-warning-level.md) livello di avviso:

`cl /W4 file1.c file2.c file3.c /link /out:program1.exe`

Il compilatore, cl.exe, dispone di molte altre opzioni che è possibile applicare per compilare, ottimizzare, eseguire il debug e analizzare il codice. Per un elenco `cl /?` rapido, immettere al prompt dei comandi per sviluppatori. È inoltre possibile compilare e collegare separatamente e applicare le opzioni del linker in scenari di compilazione più complessi. Per ulteriori informazioni sulle opzioni e sull'utilizzo del compilatore e del linker, vedere Riferimenti per la compilazione di [C/C.](reference/c-cpp-building-reference.md)

È possibile utilizzare NMAKE e makefile oppure msBuild e i file di progetto per configurare e compilare progetti più complessi nella riga di comando. Per ulteriori informazioni sull'utilizzo di questi strumenti, vedere Riferimenti a [NMAKE](reference/nmake-reference.md) e [MSBuild](msbuild-visual-cpp.md).

I linguaggi C e C è simile, ma non lo stesso. Il compilatore di Microsoft C/Cè (MSVC) utilizza una regola semplice per determinare quale linguaggio utilizzare durante la compilazione del codice. Per impostazione predefinita, il compilatore MSVC considera tutti i file che terminano in .c come codice sorgente C e tutti i file che terminano con .cpp come codice sorgente C. Per forzare il compilatore a considerare tutti i file come C non dipendente dall'estensione del nome file, utilizzare l'opzione del compilatore [/Tc.](reference/tc-tp-tc-tp-specify-source-file-type.md)

MSVC è compatibile con lo standard ISO C99, ma non è strettamente conforme. Nella maggior parte dei casi, il codice C portabile verrà compilato ed eseguito come previsto. La maggior parte delle modifiche apportate in ISO C11 non è supportata. Alcune funzioni di libreria e nomi di funzioni POSIX sono deprecati da MSVC. Le funzioni sono supportate, ma i nomi preferiti sono stati modificati. Per ulteriori informazioni, vedere Funzionalità di sicurezza in AVVISO di [codice CRT](../c-runtime-library/security-features-in-the-crt.md) e [del compilatore (livello 3) C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md).

## <a name="see-also"></a>Vedere anche

[Procedura dettagliata: creazione di un programma C++ standard (C++)](../windows/walkthrough-creating-a-standard-cpp-program-cpp.md)<br/>
[Riferimenti al linguaggio C](../c-language/c-language-reference.md)<br/>
[Progetti e sistemi di compilazione](projects-and-build-systems-cpp.md)<br/>
[Compatibilità](../c-runtime-library/compatibility.md)
