---
title: 'Procedura dettagliata: compilazione di un programma C++ nativo nella riga di comando'
description: Usare il compilatore Microsoft C++ da un prompt dei comandi.
ms.custom: conceptual
ms.date: 04/02/2020
helpviewer_keywords:
- native code [C++]
- Visual C++, native code
- compiling programs [C++]
- command-line applications [C++], native
ms.assetid: b200cfd1-0440-498f-90ee-7ecf92492dc0
ms.openlocfilehash: c24fdfdaef612059d5c2fbaaa58f10d83f5fe3a8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81335237"
---
# <a name="walkthrough-compiling-a-native-c-program-on-the-command-line"></a>Procedura dettagliata: compilazione di un programma C++ nativo nella riga di comando

Visual Studio include un compilatore C e C++ da riga di comando. È possibile usarlo per creare qualsiasi elemento da app console di base per piattaforma UWP (Universal Windows Platform) app, applicazioni desktop, driver di dispositivo e componenti .NET.

In questa procedura dettagliata viene creato un programma C++ di base "Hello, World" usando un editor di testo e quindi compilato nella riga di comando. Se si vuole provare l'IDE di Visual Studio invece di usare la riga di comando, vedere [procedura dettagliata: uso di progetti e soluzioni (C++)](../ide/walkthrough-working-with-projects-and-solutions-cpp.md) o [uso dell'IDE di Visual Studio per lo sviluppo di applicazioni desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).

In questa procedura dettagliata è possibile usare il proprio programma C++ anziché digitare quello visualizzato. In alternativa, è possibile usare un esempio di codice C++ da un altro articolo della guida.

## <a name="prerequisites"></a>Prerequisiti

Per completare questa procedura dettagliata, è necessario aver installato Visual Studio e il carico di lavoro **sviluppo di applicazioni desktop con C++** oppure gli strumenti di compilazione da riga di comando per Visual Studio.

Visual Studio è un *Integrated Development Environment* (IDE). Supporta un editor completo, gestori di risorse, debugger e compilatori per molti linguaggi e piattaforme. Le versioni disponibili includono l'edizione gratuita di Visual Studio community e possono supportare lo sviluppo in C e C++. Per informazioni su come scaricare e installare Visual Studio, vedere [installare il supporto C++ in Visual Studio](vscpp-step-0-installation.md).

Gli strumenti di compilazione per Visual Studio installano solo i compilatori della riga di comando, gli strumenti e le librerie necessari per compilare programmi C e C++. È perfetto per i laboratori di compilazione o gli esercizi in aula e viene installato relativamente rapidamente. Per installare solo gli strumenti da riga di comando, cercare Build Tools per Visual Studio nella pagina dei [download di Visual Studio](https://visualstudio.microsoft.com/downloads/#build-tools-for-visual-studio-2019) .

Prima di poter compilare un programma C o C++ nella riga di comando, verificare che gli strumenti siano installati ed è possibile accedervi dalla riga di comando. Visual C++ presenta requisiti complessi per l'ambiente della riga di comando per trovare gli strumenti, le intestazioni e le librerie utilizzate. **Non è possibile usare Visual C++ in una finestra del prompt dei comandi normale** senza eseguire alcune operazioni di preparazione. Fortunatamente, Visual C++ installa i tasti di scelta rapida per avviare un prompt dei comandi per gli sviluppatori in cui è configurato l'ambiente per le compilazioni della riga di comando. Sfortunatamente, i nomi dei tasti di scelta rapida del prompt dei comandi per gli sviluppatori e la posizione in cui si trovano sono diversi in quasi tutte le versioni di Visual C++ e in versioni diverse di Windows. Il primo processo di procedura dettagliata è trovare quello giusto da usare.

> [!NOTE]
> Un collegamento al prompt dei comandi per gli sviluppatori imposta automaticamente i percorsi corretti per il compilatore e gli strumenti e per le intestazioni e le librerie necessarie. È necessario impostare manualmente questi valori di ambiente se si utilizza una normale finestra del **prompt dei comandi** . Per altre informazioni, vedere [Impostare le variabili di percorso e di ambiente per le compilazioni da riga di comando](setting-the-path-and-environment-variables-for-command-line-builds.md). Si consiglia di usare un collegamento al prompt dei comandi per gli sviluppatori anziché crearne uno personalizzato.

### <a name="open-a-developer-command-prompt"></a>Aprire un prompt dei comandi per gli sviluppatori

1. Se è stato installato Visual Studio 2017 o versione successiva in Windows 10, aprire il menu Start e scegliere **tutte le app**. Scorrere verso il basso e aprire la cartella di **Visual Studio** (non l'applicazione di Visual Studio). Scegliere **prompt dei comandi per gli sviluppatori per Visual** Studio per aprire la finestra del prompt dei comandi.

   Se è stato installato Microsoft Visual C++ Build Tools 2015 in Windows 10, aprire il menu **Start** e scegliere **tutte le app**. Scorrere verso il basso e aprire la cartella **Visual C++ Build Tools** . Scegliere **Visual C++ 2015 prompt dei comandi degli strumenti nativi x86** per aprire la finestra del prompt dei comandi.

   È anche possibile usare la funzione di ricerca di Windows per cercare "prompt dei comandi per gli sviluppatori" e sceglierne uno che corrisponda alla versione installata di Visual Studio. Usare il collegamento per aprire la finestra del prompt dei comandi.

1. Verificare quindi che il prompt dei comandi per gli sviluppatori Visual C++ sia configurato correttamente. Nella finestra del prompt dei comandi immettere `cl` e verificare che l'output abbia un aspetto simile al seguente:

   ```Output
   C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise>cl
   Microsoft (R) C/C++ Optimizing Compiler Version 19.10.25017 for x86
   Copyright (C) Microsoft Corporation.  All rights reserved.

   usage: cl [ option... ] filename... [ /link linkoption... ]
   ```

   Potrebbero essere presenti differenze nei numeri di versione o della directory corrente. Questi valori dipendono dalla versione di Visual C++ e da eventuali aggiornamenti installati. Se l'output precedente è simile a quello visualizzato, si è pronti per compilare programmi C o C++ dalla riga di comando.

   > [!NOTE]
   > Se si verifica un errore, ad esempio "CL" non è riconosciuto come comando interno o esterno, un programma eseguibile o un file batch, "Error C1034 o LNK1104 di errore quando si **`cl`** esegue il comando, non si utilizza un prompt dei comandi per gli sviluppatori o si verifica un problema con l'installazione di Visual C++. Per poter continuare, è necessario risolvere il problema.

   Se non è possibile trovare il collegamento al prompt dei comandi per gli sviluppatori o se viene visualizzato un messaggio `cl`di errore quando si immette, l'installazione del Visual C++ potrebbe avere un problema. Provare a reinstallare il componente Visual C++ in Visual Studio oppure reinstallare gli strumenti di Microsoft Visual C++ Build. Non passare alla sezione successiva finché il **`cl`** comando non funziona. Per ulteriori informazioni sull'installazione e la risoluzione dei problemi Visual C++, vedere [Install Visual Studio](/visualstudio/install/install-visual-studio).

   > [!NOTE]
   > A seconda della versione di Windows nel computer e della configurazione della sicurezza del sistema, potrebbe essere necessario fare clic con il pulsante destro del mouse per aprire il menu di scelta rapida per il collegamento prompt dei comandi per gli sviluppatori, quindi scegliere **Esegui come amministratore** per compilare ed eseguire correttamente il programma creato seguendo questa procedura dettagliata.

### <a name="create-a-visual-c-source-file-and-compile-it-on-the-command-line"></a>Creare un file di origine di Visual C++ e compilarlo nella riga di comando

1. Nella finestra del prompt dei comandi per gli `md c:\hello` sviluppatori immettere per creare una directory e quindi `cd c:\hello` immettere per passare a tale directory. Questa directory è la posizione in cui viene creato il file di origine e il programma compilato.

1. Immettere `notepad hello.cpp` nella finestra del prompt dei comandi.

   Scegliere **Sì** quando il blocco note richiede la creazione di un file. Questo passaggio apre una finestra del blocco note vuota, pronta per l'immissione del codice in un file denominato Hello. cpp.

1. In blocco note immettere le righe di codice seguenti:

   ```cpp
   #include <iostream>
   using namespace std;
   int main()
   {
       cout << "Hello, world, from Visual C++!" << endl;
   }
   ```

   Questo codice è un semplice programma che scrive una riga di testo sullo schermo e quindi si chiude. Per ridurre al minimo gli errori, copiare il codice e incollarlo nel Blocco note.

1. Salvare il lavoro. Nel menu **File** del Blocco note scegliere **Salva**.

   Congratulazioni, è stato creato un file di origine C++, Hello. cpp, che è pronto per la compilazione.

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

   Le date e gli altri dettagli variano nel computer. Se non viene visualizzato il file del codice sorgente, *Hello. cpp*, assicurarsi di aver modificato la directory *c\\: Hello* creata. In blocco note, assicurarsi di aver salvato il file di origine in questa directory. Assicurarsi anche di aver salvato il codice sorgente con un' *`.cpp`* estensione del nome file, non con *`.txt`* un'estensione.

1. Al prompt dei comandi per gli sviluppatori `cl /EHsc hello.cpp` immettere per compilare il programma.

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

   Congratulazioni, è stato compilato ed eseguito un programma C++ usando gli strumenti da riga di comando.

## <a name="next-steps"></a>Passaggi successivi

Questo esempio di "Hello, World" è semplice quanto un programma C++ può ottenere. I programmi del mondo reale hanno in genere file di intestazione, più file di origine e collegamenti alle librerie.

È possibile utilizzare la procedura descritta in questa procedura dettagliata per compilare codice C++ personalizzato anziché digitare il codice di esempio mostrato. Questi passaggi consentono inoltre di compilare molti programmi di esempio di codice C++ disponibili altrove. È possibile inserire il codice sorgente e compilare le app in qualsiasi directory scrivibile. Per impostazione predefinita, l'IDE di Visual Studio crea progetti nella cartella dell'utente, in una sottocartella *repository di origine\\* . Le versioni precedenti possono inserire progetti in una cartella *\\documenti \<di Visual \\Studio versione>* Projects *.

Per compilare un programma con file di codice sorgente aggiuntivi, immetterli tutti nella riga di comando, ad esempio:

`cl /EHsc file1.cpp file2.cpp file3.cpp`

L' `/EHsc` opzione della riga di comando indica al compilatore di abilitare il comportamento di gestione delle eccezioni standard di C++. Senza di esso, le eccezioni generate possono comportare l'eliminazione di oggetti e perdite di risorse. Per altre informazioni, vedere [/EH (Modello di gestione delle eccezioni)](reference/eh-exception-handling-model.md).

Quando si forniscono file di origine aggiuntivi, il compilatore usa il primo file di input per creare il nome del programma. In questo caso, viene restituito un programma denominato file1. exe. Per modificare il nome in Program1. exe, aggiungere un'opzione del linker [/out](reference/out-output-file-name.md) :

`cl /EHsc file1.cpp file2.cpp file3.cpp /link /out:program1.exe`

Per rilevare automaticamente più errori di programmazione, è consigliabile eseguire la compilazione con l'opzione [/W3](reference/compiler-option-warning-level.md) o [/W4](reference/compiler-option-warning-level.md) Warning Level:

`cl /W4 /EHsc file1.cpp file2.cpp file3.cpp /link /out:program1.exe`

Il compilatore, cl. exe, dispone di molte altre opzioni. È possibile applicarli per compilare, ottimizzare, eseguire il debug e analizzare il codice. Per un elenco rapido, immettere `cl /?` al prompt dei comandi per gli sviluppatori. È anche possibile compilare e collegare separatamente e applicare le opzioni del linker in scenari di compilazione più complessi. Per ulteriori informazioni sulle opzioni e sull'utilizzo del compilatore e del linker, vedere [riferimenti alla compilazione in C/C++](reference/c-cpp-building-reference.md).

È possibile usare NMAKE e Makefile, MSBuild e i file di progetto o CMake per configurare e compilare progetti più complessi dalla riga di comando. Per altre informazioni sull'uso di questi strumenti, vedere [riferimenti a NMAKE](reference/nmake-reference.md), [MSBuild](msbuild-visual-cpp.md)e [progetti CMake in Visual Studio](cmake-projects-in-visual-studio.md).

I linguaggi C e C++ sono simili, ma non uguali. Il compilatore MSVC usa una regola semplice per determinare quale lingua usare durante la compilazione del codice. Per impostazione predefinita, il compilatore MSVC considera i file che *`.c`* terminano come codice sorgente C e i file che *`.cpp`* terminano come codice sorgente C++. Per forzare il compilatore a considerare tutti i file come C++ indipendenti dall'estensione del nome file, usare l'opzione del compilatore [/TP](reference/tc-tp-tc-tp-specify-source-file-type.md) .

Il compilatore MSVC include una libreria di runtime C (CRT) conforme allo standard ISO C99, con eccezioni secondarie. Il codice portatile viene in genere compilato ed eseguito come previsto. Alcune funzioni di libreria obsolete e diversi nomi di funzioni POSIX sono deprecati dal compilatore MSVC. Le funzioni sono supportate, ma i nomi preferiti sono stati modificati. Per altre informazioni, vedere [funzionalità di sicurezza in CRT](../c-runtime-library/security-features-in-the-crt.md) e [Avviso del compilatore (livello 3) C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md).

## <a name="see-also"></a>Vedere anche

[Riferimenti per il linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Progetti e sistemi di compilazione](projects-and-build-systems-cpp.md)<br/>
[Opzioni del compilatore MSVC](reference/compiler-options.md)
