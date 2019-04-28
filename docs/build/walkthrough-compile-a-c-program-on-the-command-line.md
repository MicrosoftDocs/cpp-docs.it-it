---
title: 'Procedura dettagliata: Compila un programma C nella riga di comando'
ms.custom: conceptual
ms.date: 09/24/2018
helpviewer_keywords:
- command-line applications [C++], C programs
- Visual C, compiling
- compiling programs [C++]
- C program compiling [C++]
ms.assetid: 7e74cc2d-54b1-49de-b7ad-d3ae6b39ab8d
ms.openlocfilehash: 54f5810e60cdaada6a99651a732570c88ea883ce
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62314182"
---
# <a name="walkthrough-compile-a-c-program-on-the-command-line"></a>Procedura dettagliata: Compila un programma C nella riga di comando

Visual C++ include un compilatore C che è possibile usare per creare da programmi console di base per le applicazioni Desktop di Windows complete, App per dispositivi mobili e altro ancora.

Questa procedura dettagliata viene illustrato come creare una semplice "Hello, World"-lo stile di programmi C utilizzando un testo editor, quindi compilarlo nella riga di comando. Se si preferisce lavorare in C++ nella riga di comando, vedere [procedura dettagliata: Compilazione di un programma C++ nativo nella riga di comando](walkthrough-compiling-a-native-cpp-program-on-the-command-line.md). Se si vuole provare a IDE di Visual Studio anziché usare la riga di comando, vedere [procedura dettagliata: Utilizzo di progetti e soluzioni (C++)](../ide/walkthrough-working-with-projects-and-solutions-cpp.md) oppure [usando l'IDE di Visual Studio per lo sviluppo di applicazioni Desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).

## <a name="prerequisites"></a>Prerequisiti

Per completare questa procedura dettagliata, è necessario avere installato Visual Studio e i componenti facoltativi di Visual C++ o gli strumenti di compilazione per Visual Studio.

Visual Studio è un ambiente di sviluppo integrato avanzato che supporta un editor completo, i gestori di risorse, debugger e compilatori per molti linguaggi e piattaforme. Per informazioni su queste funzionalità e su come scaricare e installare Visual Studio, inclusa l'edizione gratuita di Visual Studio Community, vedere [installazione di Visual Studio](/visualstudio/install/install-visual-studio).

Gli strumenti di compilazione per la versione di Visual Studio di Visual Studio installa solo il set di strumenti della riga di comando, compilatori, strumenti e le librerie che necessari per compilare programmi C e C++. È ideale per i laboratori di compilazione o in aula esercita e installa relativamente rapida. Per installare solo il set di strumenti della riga di comando, scaricare [Build Tools per Visual Studio](https://go.microsoft.com/fwlink/p/?linkid=875721) ed eseguire il programma di installazione.

Prima di poter compilare un programma C o C++ nella riga di comando, è necessario verificare che siano installati gli strumenti e che è possibile accedervi dalla riga di comando. Visual C++ ha requisiti complessi per l'ambiente della riga di comando individuare gli strumenti, intestazioni e librerie utilizzate. **Non è possibile usare Visual C++ in una finestra del prompt dei comandi normale** senza alcune attività di preparazione. È necessario un *prompt dei comandi sviluppatore* finestra, che è una finestra del prompt dei comandi normale dotato di impostare le variabili di ambiente necessarie. Fortunatamente, Visual C++ vengono installati per poter avviare prompt dei comandi per gli sviluppatori che hanno l'ambiente configurato per le compilazioni da riga di comando di scelta rapida. Sfortunatamente, i nomi dei tasti di scelta del prompt dei comandi per gli sviluppatori e in cui si trovano sono diversi in quasi tutte le versioni di Visual C++ e su diverse versioni di Windows. La prima attività di procedura dettagliata consiste nell'usare il collegamento a destra da usare.

> [!NOTE]
> Un collegamento prompt dei comandi per gli sviluppatori imposta automaticamente i percorsi corretti per il compilatore e gli strumenti e per eventuali intestazioni obbligatorie e librerie. Alcuni di questi valori sono diversi per ogni configurazione di compilazione. È necessario impostare questi valori di ambiente manualmente se non si usa uno dei tasti di scelta. Per altre informazioni, vedere [impostare il percorso e le variabili di ambiente per compilazioni da riga di comando](setting-the-path-and-environment-variables-for-command-line-builds.md). Poiché l'ambiente di compilazione è complesso, è fortemente consigliabile che usare un collegamento prompt dei comandi per gli sviluppatori invece di compilare il proprio.

## <a name="open-a-developer-command-prompt"></a>Aprire un prompt dei comandi per gli sviluppatori

1. Se è stato installato Visual Studio 2017 in Windows 10, aprire il menu Start e quindi scorrere verso il basso e aprire il **Visual Studio 2017** cartella (non l'app di Visual Studio 2017). Scegli **prompt dei comandi per gli sviluppatori per VS 2017** per aprire la finestra del prompt dei comandi.

   Se è installato Microsoft Visual C++ Build Tools 2015 in Windows 10, aprire il **avviare** dal menu e quindi scorrere verso il basso e aprire il **Visual C++ Build Tools** cartella. Scegli **prompt dei comandi degli strumenti nativi Visual C++ 2015 x86** per aprire la finestra del prompt dei comandi.

   Se si usa una versione diversa di Visual Studio o eseguita una versione diversa di Windows, cercare nel menu di avvio o avviare pagina per una cartella di strumenti di Visual Studio che contiene un collegamento prompt dei comandi per gli sviluppatori. È anche possibile usare la funzione di ricerca di Windows per cercare "prompt dei comandi per gli sviluppatori" e sceglierne uno che corrisponde alla versione installata di Visual Studio. Utilizzare il collegamento per aprire la finestra del prompt dei comandi.

1. Successivamente, verificare che il prompt dei comandi per gli sviluppatori di Visual C++ è configurato correttamente. Nella finestra del prompt dei comandi, immettere `cl` e verificare che l'output simile al seguente:

   ```Output
   C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise>cl
   Microsoft (R) C/C++ Optimizing Compiler Version 19.10.25017 for x86
   Copyright (C) Microsoft Corporation.  All rights reserved.

   usage: cl [ option... ] filename... [ /link linkoption... ]
   ```

   Possono essere presenti differenze nella directory corrente o numeri di versione, a seconda della versione di Visual C++ e gli aggiornamenti installati. Se l'output sopra riportato è simile a ciò che viene visualizzato, quindi si è pronti per compilare programmi C o C++ nella riga di comando.

   > [!NOTE]
   > Se si verifica un errore, ad esempio "'cl' non è riconosciuto come comando interno o esterno, programma eseguibile o file batch," errore C1034 o LNK1104 quando si esegue la **cl** comando, ovvero non si sta usando un prompt dei comandi per gli sviluppatori, o si è verificato un problema con l'installazione di Visual C++. È necessario correggere questo problema prima di continuare.

   Se non è possibile trovare lo sviluppatore collegamento prompt dei comandi, o se viene visualizzato un messaggio di errore quando si immette `cl`, quindi l'installazione di Visual C++ potrebbe presentare un problema. Se si usa Visual Studio 2017, provare a reinstallare il **sviluppo di applicazioni Desktop con C++** carico di lavoro nel programma di installazione di Visual Studio. Per informazioni dettagliate, vedere [supporto di installazione di C++ in Visual Studio](vscpp-step-0-installation.md). O, reinstallare il [Build Tools per Visual Studio](https://go.microsoft.com/fwlink/p/?linkid=875721). Non passare alla sezione successiva fino a quando non funziona. Per altre informazioni sull'installazione e la risoluzione dei problemi relativi a Visual Studio, vedere [installazione di Visual Studio](/visualstudio/install/install-visual-studio).

   > [!NOTE]
   > A seconda della versione di Windows nel computer e la configurazione della sicurezza del sistema, potrebbe essere necessario fare doppio clic per aprire il menu di scelta rapida per il collegamento prompt dei comandi per gli sviluppatori, quindi scegliere **Esegui come amministratore** a compilare ed eseguire il programma che crea seguendo questa procedura dettagliata correttamente.

## <a name="create-a-c-source-file-and-compile-it-on-the-command-line"></a>Creare un file di origine C e compilarlo nella riga di comando

1. Nella finestra del prompt dei comandi per gli sviluppatori immettere `cd c:\` per modificare la directory di lavoro corrente per la radice dell'unità c:. Quindi, Immetti `md c:\simple` per creare una directory e quindi immettere `cd c:\simple` per passare a tale directory. Questa directory conterrà il file di origine e il programma compilato.

1. Immettere `notepad simple.c` al prompt dei comandi per gli sviluppatori. Il blocco note avviso finestra di dialogo visualizzata, scegliere **Sì** per creare un nuovo file Simple. c nella directory di lavoro.

1. Nel blocco note, inserire le righe di codice seguenti:

    ```C
    #include <stdio.h>

    int main()
    {
        printf("Hello, World! This is a native C program compiled on the command line.\n");
        return 0;
    }
    ```

1. Nella barra dei menu del blocco note, scegliere **File** > **salvare** salvare Simple. c nella directory di lavoro.

1. Passare alla finestra del prompt dei comandi per gli sviluppatori. Immettere `dir` al prompt dei comandi per elencare il contenuto della directory c:\simple. Verrà visualizzato il file di origine Simple. c nell'elenco di directory, simile a:

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

   Le date e altri dettagli variano nel computer. Se non viene visualizzato il file del codice sorgente, Simple. c, assicurarsi che è stato modificato nella directory c:\simple creato e in blocco note, verificare che è stato salvato il file di origine in questa directory. Assicurarsi anche che è stato salvato il codice sorgente con un'estensione di nome file c, non è un'estensione di file con estensione txt.

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
   > Se si verifica un errore, ad esempio "'cl' non è riconosciuto come comando interno o esterno, programma eseguibile o file batch", errore C1034 o LNK1104, il prompt dei comandi per gli sviluppatori non è configurato correttamente. Per informazioni su come risolvere questo problema, tornare indietro per la **aprire un prompt dei comandi per gli sviluppatori** sezione.

   > [!NOTE]
   > Se viene visualizzato un avviso o errore del linker o diversa del compilatore, esaminare il codice sorgente per correggere eventuali errori, quindi salvare il file ed eseguire nuovamente il compilatore. Per informazioni sugli errori specifici, usare la casella di ricerca nella parte superiore della pagina per controllare il numero di errore.

1. Per eseguire il programma, immettere `simple` al prompt dei comandi.

   Il programma visualizza questo testo e poi viene chiuso:

    ```Output
    Hello, World! This is a native C program compiled on the command line.
    ```

   Complimenti, è stata compilata ed eseguire un programma C usando la riga di comando.

## <a name="next-steps"></a>Passaggi successivi

Questo esempio "Hello, World" è circa più semplice di quanto può ottenere un programma C. I programmi mondo reale hanno file di intestazione e altri file di origine, collegare nelle librerie ed eseguire operazioni utili.

È possibile usare i passaggi descritti in questa procedura dettagliata per creare il proprio codice di C invece di digitare il codice di esempio illustrato. È anche possibile compilare molti programmi di esempio codice C che trova in un' posizione. Per compilare un programma che contiene i file di codice di origine aggiuntivi, immetterli all nella riga di comando, ad esempio:

`cl file1.c file2.c file3.c`

Il compilatore genera un programma denominato file1.exe. Per modificare il nome in program1.exe, aggiungere un' [/out](reference/out-output-file-name.md) l'opzione del linker:

`cl file1.c file2.c file3.c /link /out:program1.exe`

E per intercettare gli errori di programmazione più automaticamente, si consiglia si esegue la compilazione usando il [/w3](reference/compiler-option-warning-level.md) oppure [/W4](reference/compiler-option-warning-level.md) opzione a livello di avviso:

`cl /W4 file1.c file2.c file3.c /link /out:program1.exe`

Il compilatore, cl.exe, include molte altre opzioni è possibile applicare per creare, ottimizzare, eseguire il debug e analizzare il codice. Per un rapido elenco, immettere `cl /?` al prompt dei comandi per gli sviluppatori. È anche possibile compilare e linking separatamente e applicare le opzioni del linker in scenari più complessi di compilazione. Per altre informazioni sul compilatore e le opzioni del linker e l'utilizzo, vedere [C/C++ Building Reference](reference/c-cpp-building-reference.md).

È possibile usare NMAKE ed makefile e file MSBuild e del progetto per configurare e compilare progetti più complessi nella riga di comando. Per altre informazioni sull'uso di questi strumenti, vedere [riferimenti a NMAKE](reference/nmake-reference.md) e [MSBuild](msbuild-visual-cpp.md).

I linguaggi C e C++ sono simili, ma non identici. Il compilatore MSVC Usa una semplice regola per determinare la lingua da usare durante la compilazione del codice. Per impostazione predefinita, il compilatore MSVC considera tutti i file che terminano in c come codice sorgente C e tutti i file che terminano in cpp come codice sorgente C++. Per imporre al compilatore di considerare tutti i file come C non dipendente dal nome di estensione del file, usare il [/Tc](reference/tc-tp-tc-tp-specify-source-file-type.md) opzione del compilatore.

Il compilatore Visual C++ C è compatibile con lo standard ISO C99, ma non è strettamente conforme. Nella maggior parte dei casi, il codice C portabile verrà compilato ed eseguito come previsto. Visual C++ non supporta la maggior parte delle modifiche in ISO C11. Alcune funzioni della libreria e i nomi delle funzioni POSIX sono deprecate per il compilatore MSVC. Sono supportate le funzioni, ma sono stati modificati i nomi Preferiti. Per altre informazioni, vedere [funzionalità di sicurezza in CRT](../c-runtime-library/security-features-in-the-crt.md) e [avviso del compilatore (livello 3) C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md).

## <a name="see-also"></a>Vedere anche

[Procedura dettagliata: Creazione di un programma C++ standard (C++)](../windows/walkthrough-creating-a-standard-cpp-program-cpp.md)<br/>
[Riferimenti per il linguaggio C](../c-language/c-language-reference.md)<br/>
[Progetti e sistemi di compilazione](projects-and-build-systems-cpp.md)<br/>
[Compatibilità](../c-runtime-library/compatibility.md)
