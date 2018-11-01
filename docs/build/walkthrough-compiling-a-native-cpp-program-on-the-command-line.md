---
title: 'Procedura dettagliata: compilazione di un programma C++ nativo nella riga di comando'
ms.custom: conceptual
ms.date: 09/24/2018
helpviewer_keywords:
- native code [C++]
- Visual C++, native code
- compiling programs [C++]
- command-line applications [C++], native
ms.assetid: b200cfd1-0440-498f-90ee-7ecf92492dc0
ms.openlocfilehash: 2d02560f9a76ee6f7a2aa7170f2bca6a95fe3ce8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50602254"
---
# <a name="walkthrough-compiling-a-native-c-program-on-the-command-line"></a>Procedura dettagliata: compilazione di un programma C++ nativo nella riga di comando

Visual C++ include un compilatore C++ da riga di comando che è possibile usare per creare tutti gli elementi da app console di base per le app della piattaforma Windows universale, applicazioni Desktop, i driver di dispositivo e componenti .NET.

In questa procedura dettagliata, si crea una semplice "Hello, World"-lo stile di programma C++ tramite un testo dell'editor, quindi compilarlo nella riga di comando. Se si vuole provare a IDE di Visual Studio anziché usare la riga di comando, vedere [procedura dettagliata: utilizzo di progetti e soluzioni (C++)](../ide/walkthrough-working-with-projects-and-solutions-cpp.md) oppure [usando l'IDE di Visual Studio per lo sviluppo Desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).

In questa procedura dettagliata è possibile usare il proprio programma Visual C++ anziché digitare quello riportato nell'esempio oppure usare esempi di codice Visual C++ di altri articoli della Guida.

## <a name="prerequisites"></a>Prerequisiti

Per completare questa procedura dettagliata, è necessario avere installato Visual Studio e l'opzione facoltativa **sviluppo di applicazioni Desktop con C++** carico di lavoro o gli strumenti da riga di comando di compilazione per Visual Studio.

Visual Studio è un ambiente di sviluppo integrato avanzato (IDE) che supporta un editor completo, i gestori di risorse, debugger e compilatori per molti linguaggi e piattaforme. Per informazioni su come scaricare e installare Visual Studio, inclusa l'edizione gratuita di Visual Studio Community e includono il supporto per lo sviluppo in C/C++, vedere [supporto di installazione di C++ in Visual Studio](../build/vscpp-step-0-installation.md).

Build Tools per Visual Studio installa solo i compilatori della riga di comando, strumenti e le librerie che necessari per compilare programmi C e C++. È ideale per i laboratori di compilazione o in aula esercita e installa relativamente rapida. Per installare solo gli strumenti da riga di comando, scaricare [Build Tools per Visual Studio 2017](https://go.microsoft.com/fwlink/p/?linkid=875721).

Prima di poter compilare un programma C o C++ nella riga di comando, è necessario verificare che siano installati gli strumenti e che è possibile accedervi dalla riga di comando. Visual C++ ha requisiti complessi per l'ambiente della riga di comando individuare gli strumenti, intestazioni e librerie utilizzate. **Non è possibile usare Visual C++ in una finestra del prompt dei comandi normale** senza eseguire alcune attività di preparazione. Fortunatamente, Visual C++ vengono installati per poter avviare un prompt dei comandi per gli sviluppatori con l'ambiente configurato per le compilazioni da riga di comando di scelta rapida. Sfortunatamente, i nomi dei tasti di scelta del prompt dei comandi per gli sviluppatori e in cui si trovano sono diversi in quasi tutte le versioni di Visual C++ e su diverse versioni di Windows. La prima attività di questa procedura dettagliata consiste nel trovare quello giusto da usare.

> [!NOTE]
> Un collegamento prompt dei comandi per gli sviluppatori imposta automaticamente i percorsi corretti per il compilatore e gli strumenti e per eventuali intestazioni obbligatorie e librerie. È necessario impostare questi valori di ambiente manualmente se si usa una normale **prompt dei comandi** finestra. Per altre informazioni, vedere [impostare il percorso e le variabili di ambiente per compilazioni da riga di comando](../build/setting-the-path-and-environment-variables-for-command-line-builds.md). È consigliabile che usare un collegamento prompt dei comandi per gli sviluppatori invece di compilare il proprio.

### <a name="open-a-developer-command-prompt"></a>Aprire un prompt dei comandi per gli sviluppatori

1. Se è stato installato Visual Studio 2017 in Windows 10, aprire il menu Start e scegliere **tutte le app**. Scorrere verso il basso e aprire il **Visual Studio 2017** cartella (non l'app di Visual Studio 2017). Scegli **prompt dei comandi per gli sviluppatori per VS 2017** per aprire la finestra del prompt dei comandi.

   Se è installato Microsoft Visual C++ Build Tools 2015 in Windows 10, aprire il **avviare** dal menu e scegliere **tutte le app**. Scorrere verso il basso e aprire il **Visual C++ Build Tools** cartella. Scegli **prompt dei comandi degli strumenti nativi Visual C++ 2015 x86** per aprire la finestra del prompt dei comandi.

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

   Se non è possibile trovare lo sviluppatore collegamento prompt dei comandi, o se viene visualizzato un messaggio di errore quando si immette `cl`, quindi l'installazione di Visual C++ potrebbe presentare un problema. Provare a reinstallare il componente Visual C++ in Visual Studio, o reinstallare Microsoft Visual C++ Build Tools. Non passare alla sezione successiva fino a quando non funziona. Per altre informazioni sull'installazione e la risoluzione dei problemi relativi a Visual C++, vedere [installazione di Visual Studio](/visualstudio/install/install-visual-studio).

   > [!NOTE]
   > A seconda della versione di Windows nel computer e la configurazione della sicurezza del sistema, potrebbe essere necessario fare doppio clic per aprire il menu di scelta rapida per il collegamento prompt dei comandi per gli sviluppatori, quindi scegliere **Esegui come amministratore** a compilare ed eseguire il programma che crea seguendo questa procedura dettagliata correttamente.

### <a name="create-a-visual-c-source-file-and-compile-it-on-the-command-line"></a>Creare un file di origine Visual C++ e compilarlo nella riga di comando

1. Nella finestra del prompt dei comandi per gli sviluppatori, immettere `md c:\hello` per creare una directory e quindi immettere `cd c:\hello` per passare a tale directory. Questa directory è in cui vengono creati i file di origine e il programma compilato.

1. Immettere `notepad hello.cpp` nella finestra del prompt dei comandi.

   Scegli **Sì** quando il blocco note viene richiesto di creare un file. Questo passaggio apre una finestra Blocco note vuota, è possibile immettere il codice in un file denominato Hello. cpp.

1. Nel blocco note, inserire le righe di codice seguenti:

   ```cpp
   #include <iostream>
   using namespace std;
   void main()
   {
       cout << "Hello, world, from Visual C++!" << endl;
   }
   ```

   Questo codice è un programma semplice che scriverà una sola riga di testo sullo schermo e quindi chiudere. Per ridurre al minimo gli errori, copiare il codice e incollarlo nel Blocco note.

1. Salvare il lavoro. Nel menu **File** del Blocco note scegliere **Salva**.

   Congratulazioni, è stato creato un file di origine Visual C++, cpp, che è pronto per la compilazione.

1. Passare alla finestra del prompt dei comandi per gli sviluppatori. Immettere `dir` al prompt dei comandi per elencare il contenuto della directory c:\hello. Verrà visualizzato il cpp file di origine nell'elenco di directory, simile a:

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

   Le date e altri dettagli variano nel computer. Se non viene visualizzato il file del codice sorgente, cpp, assicurarsi che è stato modificato nella directory c:\hello creata e nel blocco note, verificare che è stato salvato il file di origine in questa directory. Assicurarsi anche che è stato salvato il codice sorgente con un'estensione nome file. cpp, non è un'estensione di file con estensione txt.

1. Al prompt dei comandi per gli sviluppatori, immettere `cl /EHsc hello.cpp` per compilare il programma.

   Il compilatore cl.exe genera un file OBJ che contiene il codice compilato, quindi esegue il linker per creare un programma eseguibile denominato hello.exe. Il nome del programma è visibile nelle righe di informazioni di output visualizzate dal compilatore. L'output del compilatore dovrebbe essere simile a:

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
   > Se si verifica un errore, ad esempio "'cl' non è riconosciuto come comando interno o esterno, programma eseguibile o file batch", errore C1034 o LNK1104, il prompt dei comandi per gli sviluppatori non è configurato correttamente. Per informazioni su come risolvere questo problema, tornare indietro per la **aprire un prompt dei comandi per gli sviluppatori** sezione.

   > [!NOTE]
   > Se viene visualizzato un avviso o errore del linker o diversa del compilatore, esaminare il codice sorgente per correggere eventuali errori, quindi salvare il file ed eseguire nuovamente il compilatore. Per informazioni sugli errori specifici, usare la casella di ricerca in questa pagina MSDN per cercare il numero di errore.

1. Per eseguire il programma hello.exe, immettere `hello`al prompt dei comandi.

   Il programma viene avviato e chiuso dopo aver visualizzato il testo seguente:

   ```Output
   Hello, world, from Visual C++!
   ```

   Complimenti, è stata compilata ed eseguire un programma C++ utilizzando gli strumenti da riga di comando.

## <a name="next-steps"></a>Passaggi successivi

Questo esempio "Hello, World" è circa più semplice di quanto può ottenere un programma C++. I programmi mondo reale hanno file di intestazione e altri file di origine, collegare nelle librerie ed eseguire operazioni utili.

È possibile usare i passaggi descritti in questa procedura dettagliata per creare il proprio codice C++ anziché digitare il codice di esempio illustrato. È anche possibile compilare molti programmi di esempio codice C++ che trova in un' posizione. È possibile inserire il codice sorgente e compilare le App in qualsiasi directory scrivibile. Per impostazione predefinita, l'IDE di Visual Studio crea progetti nella cartella documenti, in una sottocartella di progetti di una cartella di Visual Studio denominata per la versione di Visual Studio.

Per compilare un programma che contiene i file di codice di origine aggiuntivi, immetterli all nella riga di comando, ad esempio:

`cl /EHsc file1.cpp file2.cpp file3.cpp`

L'opzione della riga di comando `/EHsc` indica al compilatore di abilitare la gestione delle eccezioni di C++. Per altre informazioni, vedere [/EH (Modello di gestione delle eccezioni)](../build/reference/eh-exception-handling-model.md).

Quando si specificano un file di origine, il compilatore Usa il primo file di input per creare il nome del programma. In questo caso, restituisce come output un programma denominato file1.exe. Per modificare il nome in program1.exe, aggiungere un' [/out](../build/reference/out-output-file-name.md) l'opzione del linker:

`cl /EHsc file1.cpp file2.cpp file3.cpp /link /out:program1.exe`

E per intercettare gli errori di programmazione più automaticamente, si consiglia si esegue la compilazione usando il [/w3](../build/reference/compiler-option-warning-level.md) oppure [/W4](../build/reference/compiler-option-warning-level.md) opzione a livello di avviso:

`cl /W4 /EHsc file1.cpp file2.cpp file3.cpp /link /out:program1.exe`

Il compilatore, cl.exe, include molte altre opzioni è possibile applicare per creare, ottimizzare, eseguire il debug e analizzare il codice. Per un rapido elenco, immettere `cl /?` al prompt dei comandi per gli sviluppatori. È anche possibile compilare e linking separatamente e applicare le opzioni del linker in scenari più complessi di compilazione. Per altre informazioni sul compilatore e le opzioni del linker e l'utilizzo, vedere [C/C++ Building Reference](../build/reference/c-cpp-building-reference.md).

È possibile usare NMAKE ed makefile e file MSBuild e del progetto per configurare e compilare progetti più complessi nella riga di comando. Per altre informazioni sull'uso di questi strumenti, vedere [riferimenti a NMAKE](../build/nmake-reference.md) e [MSBuild](../build/msbuild-visual-cpp.md).

I linguaggi C e C++ sono simili, ma non identici. Il compilatore Visual C++ Usa una semplice regola per determinare la lingua da usare durante la compilazione del codice. Per impostazione predefinita, il compilatore di Visual C++ considera tutti i file che terminano in c come codice sorgente di C e tutti i file che terminano in cpp come codice sorgente di C++. Per imporre al compilatore di considerare tutti i file come C++ non dipendente sull'estensione del nome file, usare il [/TC](../build/reference/tc-tp-tc-tp-specify-source-file-type.md) opzione del compilatore.

Il compilatore Visual C++ include un Runtime di libreria C (CRT) che è compatibile con lo standard ISO C99, ma non è strettamente conforme. Nella maggior parte dei casi, il codice portabile verrà compilato ed eseguito come previsto. Visual C++ non supporta alcune delle modifiche di CRT in ISO C11. Alcune funzioni della libreria e i nomi delle funzioni POSIX sono deprecate dal compilatore Visual C++. Sono supportate le funzioni, ma sono stati modificati i nomi Preferiti. Per altre informazioni, vedere [funzionalità di sicurezza in CRT](../c-runtime-library/security-features-in-the-crt.md) e [avviso del compilatore (livello 3) C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md).

## <a name="see-also"></a>Vedere anche

[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)<br/>
[Opzioni del compilatore](../build/reference/compiler-options.md)
