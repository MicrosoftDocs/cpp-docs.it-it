---
title: 'Procedura dettagliata: compilazione di un programma C++ nativo nella riga di comando'
description: Utilizzare il compilatore di Microsoft C, da un prompt dei comandi.
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

Visual Studio include un compilatore C e C. Puoi usarlo per creare tutto, dalle app console di base alle app della piattaforma Windows universale, alle app desktop, ai driver di dispositivo e ai componenti .NET.

In questa procedura dettagliata viene creato un programma di base, di tipo "Hello, World", in linguaggio C, utilizzando un editor di testo e quindi lo si compila nella riga di comando. Se si desidera provare l'IDE di Visual Studio invece di utilizzare la riga di comando, vedere [Procedura dettagliata: utilizzo di progetti e soluzioni (c'è)](../ide/walkthrough-working-with-projects-and-solutions-cpp.md) o [Utilizzo dell'IDE](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md)di Visual Studio per lo sviluppo desktop di C .

In questa procedura dettagliata, è possibile utilizzare il proprio programma di C , anziché digitare quello che viene visualizzato. In alternativa, è possibile usare un esempio di codice c'è da un altro articolo della Guida.

## <a name="prerequisites"></a>Prerequisiti

Per completare questa procedura dettagliata, è necessario aver installato Visual Studio e lo sviluppo desktop facoltativo con il carico di lavoro di **C** , o gli strumenti di compilazione dalla riga di comando per Visual Studio.

Visual Studio è un ambiente di *sviluppo integrato* (IDE). Supporta un editor completo, gestori di risorse, debugger e compilatori per molti linguaggi e piattaforme. Le versioni disponibili includono l'edizione gratuita della community di Visual Studio, e tutte sono in grado di supportare lo sviluppo gratuito di C e C. Per informazioni su come scaricare e installare Visual Studio, vedere Installare il supporto di [Visual](vscpp-step-0-installation.md)Studio.

Gli strumenti di compilazione per Visual Studio consentono di installare solo i compilatori da riga di comando, gli strumenti e le librerie necessari per la compilazione di programmi C e C. E 'perfetto per costruire laboratori o esercizi in classe e installa relativamente rapidamente. Per installare solo gli strumenti da riga di comando, cercare Build Tools for Visual Studio nella pagina Download di [Visual Studio.](https://visualstudio.microsoft.com/downloads/#build-tools-for-visual-studio-2019)

Prima di poter compilare un programma C o C, verificare che gli strumenti siano installati e che sia possibile accedervi dalla riga di comando. Per trovare gli strumenti, le intestazioni e le librerie che utilizza è necessario individuare i requisiti complessi dell'ambiente della riga di comando. **Non è possibile utilizzare Visual C, in una semplice finestra del prompt dei comandi** senza eseguire una preparazione. Per fortuna, Visual C .NET installa i collegamenti per l'avvio di un prompt dei comandi per sviluppatori con l'ambiente impostato per le compilazioni da riga di comando. Sfortunatamente, i nomi dei tasti di scelta rapida del prompt dei comandi per gli sviluppatori e in cui si trovano sono diversi in quasi tutte le versioni di Visual C e nelle diverse versioni di Windows. La prima attività dettagliata consiste nel trovare quella giusta da usare.

> [!NOTE]
> Un collegamento al prompt dei comandi per sviluppatori imposta automaticamente i percorsi corretti per il compilatore e gli strumenti e per tutte le intestazioni e le librerie necessarie. È necessario impostare questi valori di ambiente manualmente se si utilizza una normale finestra **del prompt dei comandi.** Per altre informazioni, vedere [Impostare le variabili di percorso e di ambiente per le compilazioni da riga di comando](setting-the-path-and-environment-variables-for-command-line-builds.md). Si consiglia di utilizzare un collegamento al prompt dei comandi per sviluppatori anziché crearvi di un'impostazione personalizzata.

### <a name="open-a-developer-command-prompt"></a>Aprire un prompt dei comandi per sviluppatoriOpen a developer command prompt

1. Se è stato installato Visual Studio 2017 o versione successiva in Windows 10, aprire il menu Start e scegliere **Tutte le app**. Scorrere verso il basso e aprire la cartella **di Visual Studio** (non l'applicazione di Visual Studio). Scegliere **Prompt dei comandi per sviluppatori per VS** per aprire la finestra del prompt dei comandi.

   Se in Windows 10 è stato installato Microsoft Visual C, Build Tools 2015, aprire il menu **Start** e scegliere **Tutte le app**. Scorrere verso il basso e aprire la cartella **Strumenti di compilazione** di Visual C. Per aprire la finestra del prompt dei comandi, scegliere Il prompt dei comandi **di Visual C.NET 2015 x86 .**

   È inoltre possibile utilizzare la funzione di ricerca di Windows per cercare "prompt dei comandi per sviluppatori" e sceglierne uno che corrisponda alla versione installata di Visual Studio.You can also use the Windows search function to search for "developer command prompt" and choose one that matches your installed version of Visual Studio. Utilizzare il collegamento per aprire la finestra del prompt dei comandi.

1. Verificare quindi che il prompt dei comandi per gli sviluppatori di Visual Cè sia configurato correttamente. Nella finestra del prompt `cl` dei comandi, immettere e verificare che l'output sia simile al seguente:

   ```Output
   C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise>cl
   Microsoft (R) C/C++ Optimizing Compiler Version 19.10.25017 for x86
   Copyright (C) Microsoft Corporation.  All rights reserved.

   usage: cl [ option... ] filename... [ /link linkoption... ]
   ```

   Potrebbero esserci differenze nella directory corrente o nei numeri di versione. Questi valori dipendono dalla versione di Visual C e dagli eventuali aggiornamenti installati. Se l'output di cui sopra è simile a quello che si vede, allora si è pronti per compilare i programmi C o C , dalla riga di comando.

   > [!NOTE]
   > Se viene visualizzato un errore, ad esempio "'cl' non è riconosciuto come un comando interno o esterno, programma operabile o file **`cl`** batch," errore C1034, o errore LNK1104 quando si esegue il comando, quindi non si sta utilizzando un prompt dei comandi di sviluppo, o qualcosa non è andato con l'installazione di Visual C . È necessario risolvere questo problema prima di continuare.

   Se non è possibile trovare il collegamento al prompt dei comandi `cl`per gli sviluppatori o se viene visualizzato un messaggio di errore quando si immette , è possibile che si sia verificato un problema durante l'installazione di Visual C. Provare a reinstallare il componente Di C, in Visual Studio, oppure reinstallare gli strumenti di compilazione di Microsoft Visual C. Non passare alla sezione successiva finché il **`cl`** comando non funziona. Per ulteriori informazioni sull'installazione e la risoluzione dei problemi relativi a Visual C, vedere Installazione di [Visual Studio](/visualstudio/install/install-visual-studio).

   > [!NOTE]
   > A seconda della versione di Windows nel computer e della configurazione di protezione del sistema, potrebbe essere necessario fare clic con il pulsante destro del mouse per aprire il menu di scelta rapida per il prompt dei comandi per gli sviluppatori e quindi scegliere **Esegui come amministratore** per compilare ed eseguire correttamente il programma creato seguendo questa procedura dettagliata.

### <a name="create-a-visual-c-source-file-and-compile-it-on-the-command-line"></a>Creare un file di origine di Visual C, quindi compilarlo dalla riga di comando

1. Nella finestra del prompt `md c:\hello` dei comandi per gli `cd c:\hello` sviluppatori, immettere per creare una directory e quindi immettere per passare a tale directory. Questa directory è dove vengono creati il file di origine e il programma compilato.

1. Immettere `notepad hello.cpp` nella finestra del prompt dei comandi.

   Scegliere **Sì** quando Blocco note richiede di creare un file. Questo passaggio apre una finestra vuota del Blocco note, pronta per l'immissione del codice in un file denominato hello.cpp.

1. Nel Blocco note immettere le seguenti righe di codice:

   ```cpp
   #include <iostream>
   using namespace std;
   int main()
   {
       cout << "Hello, world, from Visual C++!" << endl;
   }
   ```

   Questo codice è un semplice programma che scriverà una riga di testo sullo schermo e quindi uscire. Per ridurre al minimo gli errori, copiare il codice e incollarlo nel Blocco note.

1. Salvare il lavoro. Nel menu **File** del Blocco note scegliere **Salva**.

   Congratulazioni, è stato creato un file di origine di C, hello.cpp, che è pronto per la compilazione.

1. Tornare alla finestra del prompt dei comandi per sviluppatori. Immettere `dir` al prompt dei comandi per elencare il contenuto della directory c:. Dovresti vedere il file di origine hello.cpp nell'elenco delle directory, che ha un aspetto simile al:

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

   Le date e altri dettagli saranno diversi sul tuo computer. Se il file del codice sorgente *hello.cpp*non viene visualizzato, assicurarsi di aver modificato la directory *\\c: hello* creata. Nel Blocco note verificare di aver salvato il file di origine in questa directory. Assicurarsi inoltre di aver salvato *`.cpp`* il codice sorgente *`.txt`* con un'estensione di file, non con estensione.

1. Al prompt dei comandi `cl /EHsc hello.cpp` per gli sviluppatori, immettere per compilare il programma.

   Il compilatore cl.exe genera un file OBJ che contiene il codice compilato, quindi esegue il linker per creare un programma eseguibile denominato hello.exe. Il nome del programma è visibile nelle righe di informazioni di output visualizzate dal compilatore. L'output del compilatore dovrebbe essere simile al seguente:The output of the compiler should look something like:

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
   > Se viene visualizzato un errore come "'cl' non è riconosciuto come un comando interno o esterno, programma operabile o file batch", errore C1034 o errore LNK1104, il prompt dei comandi per sviluppatori non è impostato correttamente. Per informazioni su come risolvere questo problema, tornare alla sezione Aprire un prompt dei comandi per **sviluppatori.**

   > [!NOTE]
   > Se viene visualizzato un errore o un avviso del compilatore o del linker diverso, esaminare il codice sorgente per correggere eventuali errori, quindi salvarlo ed eseguirlo nuovamente. Per informazioni su errori specifici, utilizzare la casella di ricerca in questa pagina MSDN per cercare il numero di errore.

1. Per eseguire il programma hello.exe, immettere `hello`al prompt dei comandi.

   Il programma viene avviato e chiuso dopo aver visualizzato il testo seguente:

   ```Output
   Hello, world, from Visual C++!
   ```

   Congratulazioni, è stato compilato ed eseguito un programma in C, utilizzando gli strumenti della riga di comando.

## <a name="next-steps"></a>Passaggi successivi

Questo esempio "Hello, World" è semplice come un programma c'è possibile ottenere. I programmi reali di solito hanno file di intestazione, più file di origine e si collegano alle librerie.

È possibile utilizzare i passaggi descritti in questa procedura dettagliata per compilare il proprio codice C, anziché digitare il codice di esempio illustrato. Questi passaggi consentono anche di compilare molti programmi di esempio di codice C , che si trovano altrove. Puoi inserire il codice sorgente e compilare le tue app in qualsiasi directory scrivibile. Per impostazione predefinita, l'IDE di Visual Studio crea progetti nella cartella utente, in una sottocartella di repository di *origine.\\* Le versioni precedenti possono inserire progetti in una *cartella Documenti\\di Visual Studio \<>\\ *Progetti.

Per compilare un programma con file di codice sorgente aggiuntivi, immetterli tutti nella riga di comando, ad esempio:

`cl /EHsc file1.cpp file2.cpp file3.cpp`

L'opzione `/EHsc` della riga di comando indica al compilatore di abilitare il comportamento standard di gestione delle eccezioni di C. Senza di essa, le eccezioni generate possono causare perdite di risorse e oggetti non distrutti. Per altre informazioni, vedere [/EH (Modello di gestione delle eccezioni)](reference/eh-exception-handling-model.md).

Quando si forniscono file di origine aggiuntivi, il compilatore utilizza il primo file di input per creare il nome del programma. In questo caso, restituisce un programma denominato file1.exe. Per modificare il nome in program1.exe, aggiungere un'opzione del linker [/out:](reference/out-output-file-name.md)

`cl /EHsc file1.cpp file2.cpp file3.cpp /link /out:program1.exe`

E per rilevare automaticamente più errori di programmazione, si consiglia di compilare utilizzando l'opzione [/W3](reference/compiler-option-warning-level.md) o [/W4](reference/compiler-option-warning-level.md) livello di avviso:

`cl /W4 /EHsc file1.cpp file2.cpp file3.cpp /link /out:program1.exe`

Il compilatore, cl.exe, ha molte altre opzioni. È possibile applicarli per compilare, ottimizzare, eseguire il debug e analizzare il codice. Per un elenco `cl /?` rapido, immettere al prompt dei comandi per sviluppatori. È inoltre possibile compilare e collegare separatamente e applicare le opzioni del linker in scenari di compilazione più complessi. Per ulteriori informazioni sulle opzioni e sull'utilizzo del compilatore e del linker, vedere Riferimenti per la compilazione di [C/C.](reference/c-cpp-building-reference.md)

È possibile utilizzare NMAKE e makefile, MSBuild e i file di progetto, o CMake, per configurare e compilare progetti più complessi dalla riga di comando. Per ulteriori informazioni sull'utilizzo di questi strumenti, vedere [Riferimenti nMAKE,](reference/nmake-reference.md) [MSBuild](msbuild-visual-cpp.md)e [progetti CMake in Visual Studio](cmake-projects-in-visual-studio.md).

I linguaggi C e C è simile, ma non lo stesso. Il compilatore MSVC utilizza una regola semplice per determinare il linguaggio da utilizzare quando compila il codice. Per impostazione predefinita, il compilatore *`.c`* MSVC considera i file che *`.cpp`* terminano come codice sorgente C e i file che terminano con codice sorgente C. Per forzare il compilatore a considerare tutti i file come C , indipendentemente dall'estensione del nome file, utilizzare l'opzione del compilatore [/TP.](reference/tc-tp-tc-tp-specify-source-file-type.md)

Il compilatore MSVC include una libreria di runtime C (CRT) conforme allo standard ISO C99, con eccezioni minori. Il codice portabile in genere viene compilato ed eseguito come previsto. Alcune funzioni di libreria obsolete e diversi nomi di funzione POSIX sono deprecati dal compilatore MSVC. Le funzioni sono supportate, ma i nomi preferiti sono stati modificati. Per ulteriori informazioni, vedere Funzionalità di sicurezza in AVVISO di [codice CRT](../c-runtime-library/security-features-in-the-crt.md) e [del compilatore (livello 3) C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md).

## <a name="see-also"></a>Vedere anche

[Guida di riferimento al linguaggio C](../cpp/cpp-language-reference.md)<br/>
[Progetti e sistemi di compilazione](projects-and-build-systems-cpp.md)<br/>
[Opzioni del compilatore MSVC](reference/compiler-options.md)
