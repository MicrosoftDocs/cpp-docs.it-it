---
title: 'Procedura dettagliata: Compilazione di un programma C++ nativo nella riga di comando | Documenti Microsoft'
ms.custom: conceptual
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- native code [C++]
- Visual C++, native code
- compiling programs [C++]
- command-line applications [C++], native
ms.assetid: b200cfd1-0440-498f-90ee-7ecf92492dc0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c2ba3d1da27b3300f6299e902c35157cfe421f5c
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="walkthrough-compiling-a-native-c-program-on-the-command-line"></a>Procedura dettagliata: compilazione di un programma C++ nativo nella riga di comando
Visual C++ include un compilatore C++ da riga di comando che consente di creare da app console di base per le app Universal Windows Platform, App Desktop, i driver di dispositivo e componenti .NET.  
  
 In questa procedura dettagliata creare una semplice "Hello, World", lo stile di programma C++ tramite un testo dell'editor, quindi compilarlo nella riga di comando. Se si desidera provare l'IDE di Visual Studio anziché tramite la riga di comando, vedere [procedura dettagliata: utilizzo di progetti e soluzioni (C++)](../ide/walkthrough-working-with-projects-and-solutions-cpp.md) o [tramite l'IDE di Visual Studio per lo sviluppo Desktop C++](../ide/using-the-visual-studio-ide-for-cpp-desktop-development.md).  
  
 In questa procedura dettagliata è possibile usare il proprio programma Visual C++ anziché digitare quello riportato nell'esempio oppure usare esempi di codice Visual C++ di altri articoli della Guida.  
  
## <a name="prerequisites"></a>Prerequisiti  
 Per completare questa procedura dettagliata, è necessario avere installato Visual Studio e i componenti facoltativi di Visual C++ o Microsoft Visual C++ compila Tools.  
  
 Visual Studio è un ambiente di sviluppo integrato potente che supporta un editor completo, gestori di risorse, debugger e compilatori per molti linguaggi e piattaforme. Per informazioni su queste funzionalità e su come scaricare e installare Visual Studio, inclusi l'edizione gratuita di Visual Studio Community, vedere [VisualStudio.com](https://www.visualstudio.com/).  
  
 Strumenti di compilazione di Visual Studio installa solo i compilatori della riga di comando, strumenti e le librerie che necessarie per compilare programmi C e C++. È ideale per le esercitazioni di compilazione o classe esercita e installa relativamente rapidamente. Per installare solo gli strumenti da riga di comando, scaricare [strumenti di compilazione di Visual Studio](https://go.microsoft.com/fwlink/p/?linkid=840931) ed eseguire il programma di installazione. Per ulteriori informazioni, vedere [strumenti di compilazione di Visual C++](http://landinghub.visualstudio.com/visual-cpp-build-tools).  
  
 Prima di compilare un programma C o C++ nella riga di comando, è necessario verificare che siano installati gli strumenti e che è possibile accedervi dalla riga di comando. Visual C++ è complessi requisiti per l'ambiente della riga di comando per trovare gli strumenti, intestazioni e librerie utilizzate. **Non è possibile utilizzare Visual C++ in una finestra del prompt dei comandi normale**. Fortunatamente, Visual C++ viene installato per poter avviare un prompt dei comandi per sviluppatori con l'ambiente impostato per la generazione dalla riga di comando di scelta rapida. Sfortunatamente, i nomi dei collegamenti del prompt di sviluppatore e dove si trovano sono diversi in quasi tutte le versioni di Visual C++ e in versioni diverse di Windows. La prima attività di questa procedura dettagliata consiste nel trovare quello corretto da utilizzare.  
  
> [!NOTE]
>  Un collegamento del prompt dei comandi sviluppatore imposta automaticamente i percorsi corretti per il compilatore e gli strumenti e per eventuali intestazioni obbligatorie e librerie. È necessario impostare questi valori di ambiente manualmente se si utilizza una finestra del prompt dei comandi normale. Per ulteriori informazioni, vedere [impostare il percorso e le variabili di ambiente per la compilazione da riga di comando](../build/setting-the-path-and-environment-variables-for-command-line-builds.md). È consigliabile che usare un collegamento del prompt dei comandi per sviluppatori invece di compilare la propria.  
  
### <a name="open-a-developer-command-prompt"></a>Aprire un prompt dei comandi per sviluppatori  
  
1.  Se è stato installato Visual Studio 2017 in Windows 10, aprire il menu Start e scegliere **tutte le app**. Scorrere verso il basso e aprire il **Visual Studio 2017** cartella (non l'applicazione di Visual Studio 2017). Scegliere **prompt dei comandi per sviluppatori per Visual Studio 2017** per aprire la finestra del prompt dei comandi.  
  
     Se è stato installato Microsoft Visual C++ compilare strumenti 2015 in Windows 10, aprire il **avviare** menu e scegliere **tutte le app**. Scorrere verso il basso e aprire il **strumenti di compilazione di Visual C++** cartella. Scegliere **prompt dei comandi degli strumenti nativi Visual C++ 2015 x86** per aprire la finestra del prompt dei comandi.  
  
     Se si utilizza una versione diversa di Visual Studio o eseguita una versione diversa di Windows, cercare nel menu di avvio o pagina di inizio per una cartella Strumenti di Visual Studio contenente un collegamento del prompt dei comandi per sviluppatori. È inoltre possibile utilizzare la funzione di ricerca di Windows per cercare "prompt dei comandi per sviluppatori" e sceglierne uno che corrisponde alla versione installata di Visual Studio. Utilizzare il collegamento per aprire la finestra del prompt dei comandi.  
  
2.  Successivamente, verificare che il prompt dei comandi per sviluppatori di Visual C++ è configurato correttamente. Nella finestra del prompt dei comandi immettere `cl` e verificare che l'output sarà simile al seguente:  
  
    ```Output  
    C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise>cl  
    Microsoft (R) C/C++ Optimizing Compiler Version 19.10.25017 for x86  
    Copyright (C) Microsoft Corporation.  All rights reserved.  
    
    usage: cl [ option... ] filename... [ /link linkoption... ]  
    ```  
  
     Possono essere presenti differenze nella directory corrente o di numeri di versione, a seconda della versione di Visual C++ e gli aggiornamenti installati. Se ciò è simile a ciò che viene visualizzato, si è pronti per compilare programmi C o C++ dalla riga di comando.  
  
    > [!NOTE]
    >  Se si verifica un errore, ad esempio "'cl' non è riconosciuto come comando interno o esterno, programma eseguibile o file batch" errore C1034 o LNK1104 attività quando si esegue il **cl** comando, quindi l'utente non si utilizza un prompt dei comandi per sviluppatori, o si è verificato un errore con l'installazione di Visual C++. Prima di continuare, è necessario correggere questo problema.  
  
     Se non è possibile trovare lo sviluppatore di collegamento del prompt dei comandi, o se viene visualizzato un messaggio di errore quando si immette `cl`, quindi l'installazione di Visual C++ potrebbe presentare un problema. Provare a reinstallare il componente di Visual C++ in Visual Studio o reinstallare Microsoft Visual C++ compila Tools. Non passare alla sezione successiva fino a quando non funziona. Per ulteriori informazioni sull'installazione e la risoluzione dei problemi di Visual C++, vedere [installare Visual Studio](/visualstudio/install/install-visual-studio).  
  
    > [!NOTE]
    >  A seconda della versione di Windows nel computer e la configurazione della sicurezza del sistema, potrebbe essere necessario fare clic per aprire il menu di scelta rapida per il collegamento del prompt dei comandi per sviluppatori, quindi scegliere **Esegui come amministratore** per correttamente, compilare ed eseguire il programma che crei seguendo questa procedura dettagliata.  
  
### <a name="create-a-visual-c-source-file-and-compile-it-on-the-command-line"></a>Creare un file di origine Visual C++ e compilarlo nella riga di comando  
  
1.  Nella finestra del prompt dei comandi per sviluppatori, immettere **md c:\hello** per creare una directory, quindi immettere **c:\hello cd** per passare a tale directory. Si tratta della directory che vengono creati file di origine e del programma compilato in.  
  
2.  Immettere **notepad hello.cpp** nella finestra del prompt dei comandi.  
  
     Scegliere **Sì** quando viene richiesto di creare un file di blocco note. Verrà visualizzata una finestra Blocco note vuota, per immettere il codice in un file denominato hello.cpp.  
  
3.  Nel blocco note, inserire le righe di codice seguente:  
  
    ```cpp  
    #include <iostream>  
    using namespace std;  
    void main()  
    {  
        cout << "Hello, world, from Visual C++!" << endl;  
    }  
    ```  
  
     È un programma molto semplice che scriverà una sola riga di testo sullo schermo e quindi verrà chiuso. Per ridurre al minimo gli errori, copiare il codice e incollarlo nel Blocco note.  
  
4.  Salvare il lavoro. Nel menu **File** del Blocco note scegliere **Salva**.  
  
     Complimenti, è stato creato un file di origine Visual C++, hello.cpp, che è pronto per la compilazione.  
  
5.  Tornare alla finestra del prompt di sviluppatore. Immettere **dir** al prompt dei comandi per elencare il contenuto della directory c:\hello. Verrà visualizzato il hello.cpp del file di origine nell'elenco delle directory, che presenta un aspetto simile al seguente:  
  
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
  
     Le date e altri dettagli variano nel computer in uso. Se non viene visualizzato il file del codice sorgente, Hello. cpp, assicurarsi che la directory c:\hello creata è stato modificato e nel blocco note, verificare che il file di origine è stato salvato in questa directory. Assicurarsi inoltre che è stato salvato il codice sorgente con un'estensione di nome file con estensione cpp, non è un'estensione di file con estensione txt.  
  
6.  Al prompt dei comandi per sviluppatori, immettere `cl /EHsc hello.cpp` per compilare il programma.  
  
     Il compilatore cl.exe genera un file OBJ che contiene il codice compilato, quindi esegue il linker per creare un programma eseguibile denominato hello.exe. Il nome del programma è visibile nelle righe di informazioni di output visualizzate dal compilatore. L'output del compilatore dovrebbe essere simile al seguente:  
  
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
    >  Se si verifica un errore, ad esempio "'cl' non è riconosciuto come comando interno o esterno, programma eseguibile o file batch", errore C1034 o LNK1104, prompt dei comandi per sviluppatori non è configurato correttamente. Per informazioni su come risolvere questo problema, torna indietro per il **aprire un prompt dei comandi per sviluppatori** sezione.  
  
    > [!NOTE]
    >  Se viene visualizzato un avviso del compilatore diverse o errore del linker, esaminare il codice sorgente per correggere gli eventuali errori, quindi salvarlo ed eseguire di nuovo il compilatore. Per informazioni su errori specifici, utilizzare la casella di ricerca in questa pagina MSDN per cercare il numero di errore.  
  
7.  Per eseguire il programma hello.exe, immettere `hello`al prompt dei comandi.  
  
     Il programma viene avviato e chiuso dopo aver visualizzato il testo seguente:  
  
    ```Output  
    Hello, world, from Visual C++!  
    ```  
  
     Complimenti, hai appena compilata ed eseguire un programma C++ utilizzando gli strumenti da riga di comando.  
  
## <a name="next-steps"></a>Passaggi successivi  
 Questo esempio "Hello, World" è circa semplice come è possibile ottenere un programma C++. I programmi reale dispongono di file di intestazione e più file di origine, nelle librerie di collegamento e di eseguire operazioni utili.  
  
 È possibile utilizzare i passaggi in questa procedura dettagliata per compilare codice C++ anziché digitare il codice di esempio illustrato. È anche possibile creare molte applicazioni di esempio codice C++ che trova in un' posizione. È possibile inserire il codice sorgente e compilare le applicazioni in qualsiasi directory scrivibile. Per impostazione predefinita, l'IDE di Visual Studio crea progetti nella cartella documenti, in una sottocartella di progetti di una cartella di Visual Studio denominata per la versione di Visual Studio.  
  
 Per compilare un programma che dispone di più file del codice sorgente, immetterli all nella riga di comando, simile al seguente:  
  
 `cl /EHsc file1.cpp file2.cpp file3.cpp`  
  
 L'opzione della riga di comando **/EHsc** indica al compilatore di abilitare la gestione delle eccezioni di C++. Per altre informazioni, vedere [/EH (Modello di gestione delle eccezioni)](../build/reference/eh-exception-handling-model.md).  
  
 Quando si specifica un file di origine più simile al seguente, il compilatore utilizza il primo file di input per creare il nome del programma. In questo caso, viene restituito un programma denominato file1.exe. Per modificare il nome di program1.exe, aggiungere un [/out](../build/reference/out-output-file-name.md) l'opzione del linker:  
  
 `cl /EHsc file1.cpp file2.cpp file3.cpp /link /out:program1.exe`  
  
 E per intercettare gli errori di programmazione più automaticamente, è consigliabile compilare utilizzando la [/W3](../build/reference/compiler-option-warning-level.md) o [/W4](../build/reference/compiler-option-warning-level.md) opzione relativa al livello di avviso:  
  
 `cl /W4 /EHsc file1.cpp file2.cpp file3.cpp /link /out:program1.exe`  
  
 Il compilatore, cl.exe, include molte altre opzioni è possibile applicare per compilare, ottimizzare, eseguire il debug e analisi del codice. Per un breve elenco immettere **cl /?** al prompt dei comandi per sviluppatori. È anche possibile compilare e collegare separatamente e applicare le opzioni del linker in scenari più complessi di compilazione. Per ulteriori informazioni sul compilatore e le opzioni del linker e utilizzo, vedere [riferimenti alla compilazione in C/C++](../build/reference/c-cpp-building-reference.md).  
  
 Per configurare e compilare progetti più complessi nella riga di comando, è possibile utilizzare NMAKE e makefile o file di progetto e di MSBuild. Per ulteriori informazioni sull'utilizzo di questi strumenti, vedere [riferimenti a NMAKE](../build/nmake-reference.md) e [MSBuild](../build/msbuild-visual-cpp.md).  
  
 I linguaggi C e C++ sono simili, ma non uguali. Il compilatore Visual C++ utilizza una semplice regola per determinare la lingua da utilizzare durante la compilazione del codice. Per impostazione predefinita, il compilatore di Visual C++ considera tutti i file che terminano in c come codice sorgente di C e tutti i file che terminano in cpp come codice sorgente di C++. Per forzare il compilatore consideri tutti i file come C++ indipendentemente dall'estensione di file, utilizzare il [/TC](../build/reference/tc-tp-tc-tp-specify-source-file-type.md) l'opzione del compilatore.  
  
 Il compilatore Visual C++ include un Runtime libreria C (CRT) che è in genere compatibile con lo standard ISO C99, ma non è strettamente conforme. Nella maggior parte dei casi, il codice portabile verrà compilato ed eseguito come previsto. Visual C++ non supporta alcune delle modifiche di CRT in C11 ISO. Alcune funzioni della libreria e i nomi delle funzioni POSIX sono deprecate dal compilatore Visual C++. Le funzioni sono supportate, ma sono stati modificati i nomi Preferiti. Per ulteriori informazioni, vedere [funzionalità di sicurezza in CRT](../c-runtime-library/security-features-in-the-crt.md) e [avviso del compilatore (livello 3) C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Compilazione di programmi C/C++](../build/building-c-cpp-programs.md)   
 [Opzioni del compilatore](../build/reference/compiler-options.md)