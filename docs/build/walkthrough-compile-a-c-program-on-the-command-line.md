---
title: 'Procedura dettagliata: Compilare un programma C nella riga di comando | Documenti Microsoft'
ms.custom: conceptual
ms.date: 06/21/2018
ms.technology:
- cpp-tools
ms.topic: conceptual
helpviewer_keywords:
- command-line applications [C++], C programs
- Visual C, compiling
- compiling programs [C++]
- C program compiling [C++]
ms.assetid: 7e74cc2d-54b1-49de-b7ad-d3ae6b39ab8d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f3578fbc5a85757fedda3e9078e54934016607eb
ms.sourcegitcommit: e013acba70aa29fed60ae7945162adee23e19c3b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/22/2018
ms.locfileid: "36322235"
---
# <a name="walkthrough-compile-a-c-program-on-the-command-line"></a>Procedura dettagliata: Compilare un programma C nella riga di comando

Visual C++ include un compilatore C che è possibile utilizzare per creare da programmi console di base per le applicazioni Windows Desktop complete, App per dispositivi mobili e altro ancora.

Questa procedura dettagliata viene illustrato come creare una semplice "Hello, World", lo stile di programma C tramite un testo dell'editor, quindi compilarlo nella riga di comando. Se si preferisce utilizzare c++ nella riga di comando, vedere [procedura dettagliata: compilazione di un programma C++ nativo nella riga di comando](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md). Se si desidera provare l'IDE di Visual Studio anziché tramite la riga di comando, vedere [procedura dettagliata: utilizzo di progetti e soluzioni (C++)](../ide/walkthrough-working-with-projects-and-solutions-cpp.md) oppure [tramite l'IDE di Visual Studio per lo sviluppo Desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).

## <a name="prerequisites"></a>Prerequisiti

Per completare questa procedura dettagliata, è necessario avere installato Visual Studio e i componenti facoltativi di Visual C++ o gli strumenti di compilazione per Visual Studio.

Visual Studio è un ambiente di sviluppo integrato potente che supporta un editor completo, i gestori di risorse, debugger e compilatori per molti linguaggi e piattaforme. Per informazioni su queste funzionalità e su come scaricare e installare Visual Studio, inclusi l'edizione gratuita di Visual Studio Community, vedere [installare Visual Studio](/visualstudio/install/install-visual-studio).

Strumenti di compilazione per Visual Studio versione di Visual Studio installa solo il set di strumenti della riga di comando, compilatori, strumenti e le librerie che necessarie per compilare programmi C e C++. È ideale per le esercitazioni di compilazione o classe esercita e installa relativamente rapidamente. Per installare solo il set di strumenti della riga di comando, scaricare [Build Tools per Visual Studio](https://go.microsoft.com/fwlink/p/?linkid=875721) ed eseguire il programma di installazione.

Prima che sia possibile compilare un programma C o C++ nella riga di comando, è necessario verificare che siano installati gli strumenti e che è possibile accedervi dalla riga di comando. Visual C++ è complessi requisiti per l'ambiente della riga di comando per individuare gli strumenti, le intestazioni e librerie utilizzate. **Non è possibile utilizzare Visual C++ in una finestra del prompt dei comandi normale** senza alcune attività di preparazione. È necessario un *prompt dei comandi sviluppatore* finestra, che è una finestra del prompt dei comandi normale dotato di impostare tutte le variabili di ambiente necessarie. Fortunatamente, Visual C++ viene installato per poter avviare prompt dei comandi per sviluppatori che hanno l'ambiente impostato per le compilazioni della riga di comando di scelta rapida. Sfortunatamente, i nomi dei collegamenti il prompt dei comandi per sviluppatori e dove si trovano sono diversi in quasi tutte le versioni di Visual C++ e in versioni diverse di Windows. La prima attività di questa procedura dettagliata consiste nell'individuare il collegamento a destra da usare.

> [!NOTE]
> Un collegamento del prompt dei comandi per sviluppatori imposta automaticamente i percorsi corretti per il compilatore e gli strumenti e per eventuali intestazioni obbligatorie e librerie. Alcuni di questi valori sono diversi per ogni configurazione di compilazione. È necessario impostare questi valori di ambiente manualmente se non si usa uno dei collegamenti di. Per altre informazioni, vedere [impostare il percorso e le variabili di ambiente per la compilazione dalla riga di comando](../build/setting-the-path-and-environment-variables-for-command-line-builds.md). Perché l'ambiente di compilazione è complessa, è consigliabile che utilizzare un collegamento del prompt dei comandi per sviluppatori invece di compilare la propria.

## <a name="open-a-developer-command-prompt"></a>Aprire un prompt dei comandi per sviluppatori

1. Se è stato installato Visual Studio 2017 in Windows 10, aprire il menu Start, quindi scorrere verso il basso e aprire la **Visual Studio 2017** cartella (non l'app Visual Studio 2017). Scegliere **prompt dei comandi per sviluppatori per Visual Studio 2017** per aprire la finestra del prompt dei comandi.

   Se è stato installato Microsoft Visual C++ compilare strumenti 2015 in Windows 10, aprire il **avviare** dal menu e quindi scorrere verso il basso e aprire la **strumenti di compilazione di Visual C++** cartella. Scegliere **prompt dei comandi degli strumenti nativi Visual C++ 2015 x86** per aprire la finestra del prompt dei comandi.

   Se si utilizza una versione diversa di Visual Studio o si esegue una versione diversa di Windows, cercare nel menu di avvio o pagina di inizio per una cartella Strumenti di Visual Studio contenente un collegamento del prompt dei comandi per sviluppatori. È inoltre possibile utilizzare la funzione di ricerca di Windows per cercare "prompt dei comandi per sviluppatori" e sceglierne uno che corrisponde alla versione installata di Visual Studio. Utilizzare il collegamento per aprire la finestra del prompt dei comandi.

2. Successivamente, verificare che il prompt dei comandi di Visual C++ sviluppatore sia configurata correttamente. Nella finestra del prompt dei comandi, immettere `cl` e verificare che l'output sarà simile al seguente:

   ```Output
   C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise>cl
   Microsoft (R) C/C++ Optimizing Compiler Version 19.10.25017 for x86
   Copyright (C) Microsoft Corporation.  All rights reserved.

   usage: cl [ option... ] filename... [ /link linkoption... ]

   C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise>
   ```

   Possono essere presenti differenze nella directory corrente o di numeri di versione, a seconda della versione di Visual C++ e gli aggiornamenti installati. Se ciò è simile a ciò che viene visualizzato, si è pronti per compilare programmi C o C++ nella riga di comando.

   > [!NOTE]
   > Se si verifica un errore, ad esempio "'cl' non è riconosciuto come comando interno o esterno, programma eseguibile o un file batch," errore C1034 o LNK1104 quando si esegue il **cl** comando, quindi oppure non si utilizza un prompt dei comandi per sviluppatori, o si è verificato un errore con l'installazione di Visual C++. È necessario correggere questo problema prima di continuare.

   Se non è possibile trovare lo sviluppatore del collegamento del prompt dei comandi o se viene visualizzato un messaggio di errore quando si immette `cl`, quindi l'installazione di Visual C++ potrebbe presentare un problema. Se si usa Visual Studio 2017, provare a reinstallare il **lo sviluppo Desktop con C++** carico di lavoro del programma di installazione di Visual Studio. Per informazioni dettagliate, vedere [supporto di installazione di C++ in Visual Studio](../build/vscpp-step-0-installation.md). O reinstallare il [Build Tools per Visual Studio](https://go.microsoft.com/fwlink/p/?linkid=875721). Non passare alla sezione successiva fino a quando non funziona. Per ulteriori informazioni sull'installazione e la risoluzione dei problemi di Visual Studio, vedere [installare Visual Studio](/visualstudio/install/install-visual-studio).

   > [!NOTE]
   > A seconda della versione di Windows nel computer e la configurazione della sicurezza del sistema, potrebbe essere necessario fare doppio clic su per aprire il menu di scelta rapida per il collegamento del prompt dei comandi per sviluppatori, quindi scegliere **Esegui come amministratore** a compilare ed eseguire il programma che crei seguendo questa procedura dettagliata correttamente.

## <a name="create-a-c-source-file-and-compile-it-on-the-command-line"></a>Creare un file di origine C e compilarlo nella riga di comando

1. Nella finestra del prompt dei comandi per sviluppatori, immettere **c: cd\\**  per modificare la directory di lavoro corrente alla radice dell'unità c:. Quindi, immettere **md c:\simple** per creare una directory, quindi immettere **c:\simple cd** per passare a tale directory. Si tratta della directory che conterrà il file di origine e del programma compilato.

2. Immettere **notepad simple. c** al prompt dei comandi per sviluppatori. Il blocco note finestra di dialogo avviso che viene visualizzato, scegliere **Sì** per creare un nuovo file Simple. c nella directory di lavoro.

3. Nel blocco note, inserire le righe di codice seguenti:

    ```C
    #include <stdio.h>

    int main()
    {
        printf("Hello, World! This is a native C program compiled on the command line.\n");
        return 0;
    } 
    ```

4. Nella barra dei menu di blocco note, scegliere **File**, **salvare** salvare Simple. c nella directory di lavoro.

5. Tornare alla finestra del prompt dei comandi per sviluppatori. Immettere **dir** al prompt dei comandi per elencare il contenuto della directory c:\simple. È necessario visualizzare il file di origine Simple. c nell'elenco delle directory, che presenta un aspetto simile al seguente:

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

   Le date e altri dettagli variano del computer. Se non viene visualizzato il file del codice sorgente, Simple. c, assicurarsi che è stato modificato per la directory c:\simple creata e nel blocco note, verificare che il file di origine è stato salvato in questa directory. Assicurarsi inoltre che è stato salvato il codice sorgente con un'estensione di nome file c, non un'estensione. txt.

6. Per compilare il programma, immettere **cl simple. c** al prompt dei comandi per sviluppatori.

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
   > Se si verifica un errore, ad esempio "'cl' non è riconosciuto come comando interno o esterno, programma eseguibile o file batch", errore C1034 o LNK1104, prompt dei comandi per sviluppatori non è configurato correttamente. Per informazioni su come risolvere questo problema, tornare indietro per il **aprire un prompt dei comandi per sviluppatori** sezione.

   > [!NOTE]
   > Se viene visualizzato un avviso del compilatore diverse o errore del linker, esaminare il codice sorgente per correggere gli eventuali errori, quindi salvarlo ed eseguire nuovamente il compilatore. Per informazioni su errori specifici, utilizzare la casella di ricerca nella parte superiore di questa pagina per controllare il numero di errore.

7. Per eseguire il programma, immettere **semplice** al prompt dei comandi.

   Il programma visualizza questo testo e poi viene chiuso:

    ```Output
    Hello, World! This is a native C program compiled on the command line.
    ```

   Complimenti, si è appena compilato ed eseguito un programma C utilizzando la riga di comando.

## <a name="next-steps"></a>Passaggi successivi

Questo esempio "Hello, World" è circa semplice come otterrà un programma C. I programmi reali dispongono di file di intestazione e più file di origine, nelle librerie di collegamento ed eseguire operazioni utili.

È possibile utilizzare i passaggi in questa procedura dettagliata per compilare codice C anziché digitare il codice di esempio illustrato. È anche possibile creare molte applicazioni di esempio codice C che trova in un' posizione. Per compilare un programma che dispone di più file del codice sorgente, immetterli all nella riga di comando, simile al seguente:

`cl file1.c file2.c file3.c`

Il compilatore genera un programma denominato file1.exe. Per modificare il nome in program1.exe, aggiungere un [/out](../build/reference/out-output-file-name.md) opzione del linker:

`cl file1.c file2.c file3.c /link /out:program1.exe`

E che consente di rilevare automaticamente ulteriori errori di programmazione, è consigliabile compilare utilizzando la [/W3](../build/reference/compiler-option-warning-level.md) oppure [/W4](../build/reference/compiler-option-warning-level.md) opzione a livello di avviso:

`cl /W4 file1.c file2.c file3.c /link /out:program1.exe`

Il compilatore, cl.exe, include molte altre opzioni è possibile applicare per compilare, ottimizzare, eseguire il debug e analisi del codice. Per un rapido elenco, immettere **cl /?** al prompt dei comandi per sviluppatori. È anche possibile compilare e collegare separatamente e applicare le opzioni del linker in scenari più complessi di compilazione. Per ulteriori informazioni sul compilatore e delle opzioni del linker e sull'utilizzo, vedere [riferimenti alla compilazione in C/C++](../build/reference/c-cpp-building-reference.md).

È possibile utilizzare NMAKE e makefile o file MSBuild e del progetto per configurare e compilare progetti più complessi nella riga di comando. Per ulteriori informazioni sull'utilizzo di questi strumenti, vedere [riferimenti a NMAKE](../build/nmake-reference.md) e [MSBuild](../build/msbuild-visual-cpp.md).

I linguaggi C e C++ sono simili, ma non coincidono. Il compilatore Visual C++ utilizza una semplice regola per determinare la lingua da utilizzare durante la compilazione del codice. Per impostazione predefinita, il compilatore di Visual C++ considera tutti i file che terminano in c come codice sorgente di C e tutti i file che terminano in cpp come codice sorgente di C++. Per forzare il compilatore consideri tutti i file come C, indipendentemente dall'estensione di file, usare il [/Tc](../build/reference/tc-tp-tc-tp-specify-source-file-type.md) opzione del compilatore.

Il compilatore Visual C++ C è in genere compatibile con lo standard ISO C99, ma non è strettamente conforme. Nella maggior parte dei casi, il codice C portabile verrà compilato ed eseguito come previsto. Visual C++ non supporta la maggior parte delle modifiche in C11 ISO. Alcune funzioni della libreria e i nomi delle funzioni POSIX sono deprecate dal compilatore Visual C++. Le funzioni sono supportate, ma sono stati modificati i nomi Preferiti. Per altre informazioni, vedere [funzionalità di sicurezza in CRT](../c-runtime-library/security-features-in-the-crt.md) e [avviso del compilatore (livello 3) l'avviso C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md).

## <a name="see-also"></a>Vedere anche

[Procedura dettagliata: creazione di un programma C++ standard (C++)](../windows/walkthrough-creating-a-standard-cpp-program-cpp.md)  
[Riferimenti per il linguaggio C](../c-language/c-language-reference.md)  
[Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)  
[Compatibilità](../c-runtime-library/compatibility.md)  
