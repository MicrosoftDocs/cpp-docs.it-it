---
title: 'Procedura dettagliata: compilazione di un programma C++ nativo nella riga di comando'
description: Usare il compilatore C++ Microsoft da un prompt dei comandi.
ms.custom: conceptual
ms.date: 04/23/2019
helpviewer_keywords:
- native code [C++]
- Visual C++, native code
- compiling programs [C++]
- command-line applications [C++], native
ms.assetid: b200cfd1-0440-498f-90ee-7ecf92492dc0
ms.openlocfilehash: daab00768f8140869a8db39c73f4fec3ab6304c7
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74051520"
---
# <a name="walkthrough-compiling-a-native-c-program-on-the-command-line"></a>Procedura dettagliata: compilazione di un programma C++ nativo nella riga di comando

Visual Studio include un compilatore da riga C++ di comando che è possibile usare per creare tutti gli elementi, dalle app console di base alle app piattaforma UWP (Universal Windows Platform), alle app desktop, ai driver di dispositivo e ai componenti .NET.

In questa procedura dettagliata viene creato un programma di tipo C++ "Hello, World" di base usando un editor di testo e quindi compilato nella riga di comando. Se si vuole provare l'IDE di Visual Studio invece di usare la riga di comando, vedere [procedura dettagliata: uso di progetti e soluzioniC++()](../ide/walkthrough-working-with-projects-and-solutions-cpp.md) o [uso dell'IDE di Visual C++ Studio per lo sviluppo](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md)di applicazioni desktop.

In questa procedura dettagliata è possibile usare il proprio programma Visual C++ anziché digitare quello riportato nell'esempio oppure usare esempi di codice Visual C++ di altri articoli della Guida.

## <a name="prerequisites"></a>Prerequisites

Per completare questa procedura dettagliata, è necessario aver installato Visual Studio e lo **sviluppo di desktop facoltativo C++ con** carico di lavoro oppure gli strumenti di compilazione da riga di comando per Visual Studio.

Visual Studio è un potente Integrated Development Environment (IDE) che supporta un editor completo, gestori di risorse, debugger e compilatori per molti linguaggi e piattaforme. Per informazioni su come scaricare e installare Visual Studio, inclusa la versione gratuita di Visual Studio Community Edition e per includere il supporto per CC++ /sviluppo, [vedere C++ installare il supporto in Visual Studio](vscpp-step-0-installation.md).

Gli strumenti di compilazione per Visual Studio installano solo i compilatori della riga di comando, gli strumenti e le librerie necessari C++ per compilare i programmi C e. È perfetto per i laboratori di compilazione o gli esercizi in aula e viene installato relativamente rapidamente. Per installare solo gli strumenti da riga di comando, cercare Build Tools per Visual Studio nella pagina dei [download di Visual Studio](https://visualstudio.microsoft.com/downloads/#build-tools-for-visual-studio-2019) .

Prima di poter compilare un programma C C++ o nella riga di comando, è necessario verificare che gli strumenti siano installati e che sia possibile accedervi dalla riga di comando. L' C++ oggetto visivo presenta requisiti complessi per l'ambiente della riga di comando per trovare gli strumenti, le intestazioni e le librerie utilizzate. **Non è possibile usare C++ Visual in una finestra del prompt dei comandi normale** senza eseguire alcune operazioni di preparazione. Fortunatamente, Visual C++ installa i tasti di scelta rapida per avviare un prompt dei comandi per gli sviluppatori in cui è configurato l'ambiente per le compilazioni della riga di comando. Sfortunatamente, i nomi dei tasti di scelta rapida del prompt dei comandi per gli sviluppatori e la posizione in cui si trovano C++ sono diversi in quasi tutte le versioni di Visual e in versioni diverse di Windows. Il primo processo di procedura dettagliata è trovare quello giusto da usare.

> [!NOTE]
> Un collegamento al prompt dei comandi per gli sviluppatori imposta automaticamente i percorsi corretti per il compilatore e gli strumenti e per le intestazioni e le librerie necessarie. È necessario impostare manualmente questi valori di ambiente se si utilizza una normale finestra del **prompt dei comandi** . Per altre informazioni, vedere [Impostare le variabili di percorso e di ambiente per le compilazioni da riga di comando](setting-the-path-and-environment-variables-for-command-line-builds.md). Si consiglia di usare un collegamento al prompt dei comandi per gli sviluppatori anziché crearne uno personalizzato.

### <a name="open-a-developer-command-prompt"></a>Aprire un prompt dei comandi per gli sviluppatori

1. Se è stato installato Visual Studio 2017 o versione successiva in Windows 10, aprire il menu Start e scegliere **tutte le app**. Scorrere verso il basso e aprire la cartella di **Visual Studio** (non l'applicazione di Visual Studio). Scegliere **prompt dei comandi per gli sviluppatori per Visual** Studio per aprire la finestra del prompt dei comandi.

   Se è stato installato Microsoft Visual C++ Build Tools 2015 in Windows 10, aprire il menu **Start** e scegliere **tutte le app**. Scorrere verso il basso e aprire la cartella  **C++ Visual Build Tools** . Scegliere **Visual C++ 2015 prompt dei comandi degli strumenti nativi x86** per aprire la finestra del prompt dei comandi.

   È anche possibile usare la funzione di ricerca di Windows per cercare "prompt dei comandi per gli sviluppatori" e sceglierne uno che corrisponda alla versione installata di Visual Studio. Usare il collegamento per aprire la finestra del prompt dei comandi.

1. Verificare quindi che il prompt dei C++ comandi di Visual Developer sia configurato correttamente. Nella finestra del prompt dei comandi immettere `cl` e verificare che l'output abbia un aspetto simile al seguente:

   ```Output
   C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise>cl
   Microsoft (R) C/C++ Optimizing Compiler Version 19.10.25017 for x86
   Copyright (C) Microsoft Corporation.  All rights reserved.

   usage: cl [ option... ] filename... [ /link linkoption... ]
   ```

   Potrebbero essere presenti differenze nei numeri di versione o della directory correnti, a seconda della versione di Visual C++ e degli aggiornamenti installati. Se l'output precedente è simile a quello visualizzato, si è pronti per compilare i programmi C o C++ nella riga di comando.

   > [!NOTE]
   > Se viene visualizzato un errore, ad esempio "CL" non è riconosciuto come comando interno o esterno, programma eseguibile o file batch, "errore C1034 o errore LNK1104 quando si esegue il comando **CL** , non si utilizza un prompt dei comandi per gli sviluppatori oppure si verifica un problema con l'installazione di Visual C++. Per poter continuare, è necessario risolvere il problema.

   Se non è possibile trovare il collegamento al prompt dei comandi per gli sviluppatori o se viene visualizzato un messaggio di errore quando si immette C++ `cl`, l'installazione visiva potrebbe avere un problema. Provare a reinstallare il componente visivo C++ in Visual Studio oppure reinstallare Microsoft Visual C++ build Tools. Non passare alla sezione successiva finché non funziona. Per ulteriori informazioni sull'installazione e la risoluzione dei C++problemi relativi a oggetti visivi, vedere [Install Visual Studio](/visualstudio/install/install-visual-studio).

   > [!NOTE]
   > A seconda della versione di Windows nel computer e della configurazione della sicurezza del sistema, potrebbe essere necessario fare clic con il pulsante destro del mouse per aprire il menu di scelta rapida per il collegamento prompt dei comandi per gli sviluppatori, quindi scegliere **Esegui come amministratore** per compilare ed eseguire correttamente il programma creato seguendo questa procedura dettagliata.

### <a name="create-a-visual-c-source-file-and-compile-it-on-the-command-line"></a>Creare un file C++ di origine visiva e compilarlo nella riga di comando

1. Nella finestra del prompt dei comandi per gli sviluppatori immettere `md c:\hello` per creare una directory e quindi immettere `cd c:\hello` per passare a tale directory. Questa directory è la posizione in cui viene creato il file di origine e il programma compilato.

1. Immettere `notepad hello.cpp` nella finestra del prompt dei comandi.

   Scegliere **Sì** quando il blocco note richiede la creazione di un file. Questo passaggio apre una finestra del blocco note vuota, pronta per l'immissione del codice in un file denominato Hello. cpp.

1. In blocco note immettere le righe di codice seguenti:

   ```cpp
   #include <iostream>
   using namespace std;
   void main()
   {
       cout << "Hello, world, from Visual C++!" << endl;
   }
   ```

   Questo codice è un semplice programma che scrive una riga di testo sullo schermo e quindi si chiude. Per ridurre al minimo gli errori, copiare il codice e incollarlo nel Blocco note.

1. Salvare il lavoro. Nel menu **File** del Blocco note scegliere **Salva**.

   Congratulazioni, è stato creato un C++ file di origine, Hello. cpp, che è pronto per la compilazione.

1. Tornare alla finestra del prompt dei comandi per gli sviluppatori. Immettere `dir` al prompt dei comandi per elencare il contenuto della directory c:\hello. Il file di origine Hello. cpp dovrebbe essere visualizzato nell'elenco di directory, che ha un aspetto simile al seguente:

   ```Output
   c:\hello>dir
    Volume in drive C has no label.
    Volume Serial Number is CC62-6545

    Directory of c:\hello

   05/24/2016  05:36 PM    <DIR>          .
   05/24/2016  05:36 PM    <DIR>          ..
   05/24/2016  05:37 PM               115 hello.cpp
                  1 File(s)            115 bytes
                  2 Dir(s)  571,343,446,016 bytes free

   ```

   Le date e gli altri dettagli variano nel computer. Se non viene visualizzato il file del codice sorgente, Hello. cpp, verificare di aver modificato la directory c:\hello creata e, nel blocco note, assicurarsi di aver salvato il file di origine in questa directory. Assicurarsi anche di aver salvato il codice sorgente con un'estensione del nome di file cpp, non con estensione txt.

1. Al prompt dei comandi per gli sviluppatori immettere `cl /EHsc hello.cpp` per compilare il programma.

   Il compilatore cl.exe genera un file OBJ che contiene il codice compilato, quindi esegue il linker per creare un programma eseguibile denominato hello.exe. Il nome del programma è visibile nelle righe di informazioni di output visualizzate dal compilatore. L'output del compilatore dovrebbe avere un aspetto simile al seguente:

   ```Output
   c:\hello>cl /EHsc hello.cpp
   Microsoft (R) C/C++ Optimizing Compiler Version 19.10.25017 for x86
   Copyright (C) Microsoft Corporation.  All rights reserved.

   hello.cpp
   Microsoft (R) Incremental Linker Version 14.10.25017.0
   Copyright (C) Microsoft Corporation.  All rights reserved.

   /out:hello.exe
   hello.obj
   ```

   > [!NOTE]
   > Se viene rilevato un errore, ad esempio "CL" non è riconosciuto come comando interno o esterno, programma eseguibile o file batch, "errore C1034 o errore LNK1104, il prompt dei comandi per gli sviluppatori non è configurato correttamente. Per informazioni su come risolvere il problema, tornare alla sezione **aprire un prompt dei comandi** per gli sviluppatori.

   > [!NOTE]
   > Se viene visualizzato un errore o un avviso del linker diverso, esaminare il codice sorgente per correggere eventuali errori, quindi salvarlo ed eseguire di nuovo il compilatore. Per informazioni su errori specifici, utilizzare la casella di ricerca in questa pagina MSDN per cercare il numero di errore.

1. Per eseguire il programma hello.exe, immettere `hello`al prompt dei comandi.

   Il programma viene avviato e chiuso dopo aver visualizzato il testo seguente:

   ```Output
   Hello, world, from Visual C++!
   ```

   Congratulazioni, è stato compilato ed eseguito un C++ programma usando gli strumenti da riga di comando.

## <a name="next-steps"></a>Passaggi successivi

Questo esempio di "Hello, World" è molto semplice come C++ un programma che può ottenere. I programmi del mondo reale hanno file di intestazione e più file di origine, collegamenti nelle librerie ed eseguono operazioni utili.

È possibile utilizzare la procedura descritta in questa procedura dettagliata per compilare C++ codice personalizzato anziché digitare il codice di esempio illustrato. È anche possibile compilare molti C++ programmi di esempio di codice disponibili altrove. È possibile inserire il codice sorgente e compilare le app in qualsiasi directory scrivibile. Per impostazione predefinita, l'IDE di Visual Studio crea progetti nella cartella documenti, in una sottocartella progetti di una cartella di Visual Studio denominata per la versione di Visual Studio.

Per compilare un programma con file di codice sorgente aggiuntivi, immetterli tutti nella riga di comando, ad esempio:

`cl /EHsc file1.cpp file2.cpp file3.cpp`

L'opzione della riga di comando `/EHsc` indica al compilatore di abilitare la gestione delle eccezioni di C++. Per altre informazioni, vedere [/EH (Modello di gestione delle eccezioni)](reference/eh-exception-handling-model.md).

Quando si forniscono file di origine aggiuntivi, il compilatore usa il primo file di input per creare il nome del programma. In questo caso, viene restituito un programma denominato file1. exe. Per modificare il nome in Program1. exe, aggiungere un'opzione del linker [/out](reference/out-output-file-name.md) :

`cl /EHsc file1.cpp file2.cpp file3.cpp /link /out:program1.exe`

Per rilevare automaticamente più errori di programmazione, è consigliabile eseguire la compilazione con l'opzione [/W3](reference/compiler-option-warning-level.md) o [/W4](reference/compiler-option-warning-level.md) Warning Level:

`cl /W4 /EHsc file1.cpp file2.cpp file3.cpp /link /out:program1.exe`

Il compilatore, cl. exe, offre molte più opzioni che è possibile applicare per compilare, ottimizzare, eseguire il debug e analizzare il codice. Per un elenco rapido, immettere `cl /?` al prompt dei comandi per gli sviluppatori. È anche possibile compilare e collegare separatamente e applicare le opzioni del linker in scenari di compilazione più complessi. Per ulteriori informazioni sulle opzioni e sull'utilizzo del compilatore e del linker, vedere [C/C++ Building Reference](reference/c-cpp-building-reference.md).

Per configurare e compilare progetti più complessi dalla riga di comando, è possibile usare NMAKE e i makefile, oppure MSBuild e i file di progetto. Per altre informazioni sull'uso di questi strumenti, vedere informazioni di [riferimento su NMAKE](reference/nmake-reference.md) e [MSBuild](msbuild-visual-cpp.md).

I linguaggi C C++ e sono simili, ma non uguali. Il compilatore MSVC usa una regola semplice per determinare quale lingua usare durante la compilazione del codice. Per impostazione predefinita, il compilatore MSVC considera tutti i file che terminano con. c come codice sorgente C e tutti i file che terminano C++ con. cpp come codice sorgente. Per forzare il compilatore a trattare tutti i C++ file come non dipendenti dall'estensione del nome file, usare l'opzione del compilatore [/TP](reference/tc-tp-tc-tp-specify-source-file-type.md) .

Il compilatore MSVC include una libreria di runtime C (CRT) compatibile con lo standard ISO C99, ma non strettamente conforme. Nella maggior parte dei casi, il codice portatile verrà compilato ed eseguito come previsto. L' C++ oggetto visivo non supporta alcune delle modifiche CRT in ISO C11. Alcune funzioni di libreria e i nomi di funzione POSIX sono deprecati dal compilatore MSVC. Le funzioni sono supportate, ma i nomi preferiti sono stati modificati. Per altre informazioni, vedere [funzionalità di sicurezza in CRT](../c-runtime-library/security-features-in-the-crt.md) e [Avviso del compilatore (livello 3) C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md).

## <a name="see-also"></a>Vedere anche

[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Progetti e sistemi di compilazione](projects-and-build-systems-cpp.md)<br/>
[Opzioni del compilatore MSVC](reference/compiler-options.md)
