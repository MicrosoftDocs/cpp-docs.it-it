---
title: "Procedura dettagliata: compilazione di un programma C++ nativo nella riga di comando | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "applicazioni della riga di comando [C++], nativi"
  - "compilazione di programmi [C++]"
  - "codice nativo [C++]"
  - "Visual C++, codice nativo"
ms.assetid: b200cfd1-0440-498f-90ee-7ecf92492dc0
caps.latest.revision: 63
caps.handback.revision: 57
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Procedura dettagliata: compilazione di un programma C++ nativo nella riga di comando
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Visual C\+\+ include un compilatore C\+\+ da riga di comando che consente di creare qualsiasi tipo di programma, dalle app console di base alle app di Windows universale, alle applicazioni Windows Store e ai componenti .NET.  
  
 In questa procedura dettagliata viene illustrato come creare un programma console C\+\+ di base usando un editor di testo, quindi compilarlo nella riga di comando.  
  
> [!NOTE]
>  Per creare programmi Visual C\+\+ è anche possibile usare l'ambiente di sviluppo integrato \(IDE, Integrated Development Environment\) di Visual Studio. Per altre informazioni, vedere [Procedura dettagliata: utilizzo di progetti e soluzioni \(C\+\+\)](../ide/walkthrough-working-with-projects-and-solutions-cpp.md).  
  
 In questa procedura dettagliata è possibile usare il proprio programma Visual C\+\+ anziché digitare quello riportato nell'esempio oppure usare esempi di codice Visual C\+\+ di altri articoli della Guida.  
  
## Prerequisiti  
 Per completare questa procedura dettagliata, è necessario avere una versione di Visual Studio che include i componenti di Visual C\+\+. È utile comprendere le nozioni di base del linguaggio C\+\+. Queste istruzioni presuppongono che venga usato Windows 10 e Visual Studio 2015, ma le istruzioni per altri ambienti e versioni sono simili.  
  
### Per creare un file di origine Visual C\+\+ e compilarlo nella riga di comando  
  
1.  Aprire prima di tutto un **prompt dei comandi per gli sviluppatori**. Per l'esecuzione del compilatore Visual C\+\+ è necessario un ambiente dei comandi speciale, per cui non è possibile usare un prompt dei comandi normale per questa procedura dettagliata.  
  
     Nel menu **Start** di Windows aprire **Tutte le app**. Scorrere verso il basso fino a trovare e aprire la cartella **Visual Studio** per la versione in uso di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], quindi scegliere il collegamento **Prompt dei comandi per gli sviluppatori**.  
  
2.  Creare una nuova directory per contenere il programma. Nella finestra **Prompt dei comandi per gli sviluppatori** immettere il comando `cd \` per passare alla directory radice dell'unità. Immettere il comando `md examples` per creare una directory per il codice di esempio. Immettere quindi il comando `cd examples` per passare alla directory appena creata e usarla come directory di lavoro corrente. Si tratta della directory in cui verrà inserito il primo programma.  
  
3.  Al prompt dei comandi immettere **notepad hello.cpp**.  
  
     Scegliere **Sì** alla richiesta di creazione di un file. Verrà aperta una finestra Blocco note vuota in cui immettere il codice.  
  
4.  Nel Blocco note, inserire le righe seguenti:  
  
    ```cpp  
    #include <iostream> using namespace std; void main() { cout << "Hello, world, from Visual C++!" << endl; }  
    ```  
  
     È un programma molto semplice che scriverà una sola riga di testo sullo schermo e quindi verrà chiuso. Per ridurre al minimo gli errori, copiare il codice e incollarlo nel Blocco note.  
  
5.  Salvare il lavoro. Nel menu **File** del Blocco note scegliere **Salva**.  
  
     Il file di origine Visual C\+\+ è stato creato.  
  
6.  Al prompt dei comandi immettere `cl /EHsc hello.cpp` per compilare il programma.  
  
     Il compilatore cl.exe genera un file OBJ che contiene il codice compilato, quindi esegue il linker per creare un programma eseguibile denominato hello.exe. Il nome del programma è visibile nelle righe di informazioni di output visualizzate dal compilatore. L'output del compilatore dovrebbe essere simile al seguente:  
  
    ```Output  
    Microsoft (R) C/C++ Optimizing Compiler Version 19.00.23504 for x86 Copyright (C) Microsoft Corporation.  Tutti i diritti sono riservati. hello.cpp Microsoft (R) Incremental Linker Version 14.00.23504.0 Copyright (C) Microsoft Corporation.  Tutti i diritti sono riservati. /out:hello.exe hello.obj  
    ```  
  
     Se sono presenti errori, controllare il codice nel Blocco note per assicurarsi che corrisponda all'esempio. Eseguire di nuovo il comando del compilatore dopo aver salvato le modifiche.  Se il comando cl non viene trovato, verificare di aver usato il prompt dei comandi per gli sviluppatori e non una finestra di comando normale. Se non è già installato, potrebbe essere necessario installare anche il componente Visual C\+\+ nel programma di installazione di Visual Studio.  
  
7.  Per eseguire il programma hello.exe, immettere `hello` al prompt dei comandi.  
  
     Il programma viene avviato e chiuso dopo aver visualizzato il testo seguente:  
  
    ```Output  
    Hello, world, from Visual C++!  
    ```  
  
     È stato così creato e compilato un programma con gli strumenti da riga di comando.  
  
## Passaggi successivi  
 Per altre informazioni su come aprire la finestra Prompt dei comandi per gli sviluppatori per usare gli strumenti da riga di comando, vedere [Impostazione delle variabili di percorso e di ambiente per la compilazione dalla riga di comando](../build/setting-the-path-and-environment-variables-for-command-line-builds.md).  
  
 Per la corretta compilazione del codice in questa procedura dettagliata, a seconda del sistema operativo del computer e della configurazione, potrebbero essere necessarie le credenziali di amministratore. Per eseguire la finestra Prompt dei comandi per gli sviluppatori come amministratore, fare clic con il pulsante destro del mouse per aprire il menu di scelta rapida per il **Prompt dei comandi per gli sviluppatori**, quindi scegliere **Esegui come amministratore**.  
  
 L'opzione della riga di comando **\/EHsc** indica al compilatore di abilitare la gestione delle eccezioni di C\+\+. Per altre informazioni, vedere [\/EH \(Modello di gestione delle eccezioni\)](../build/reference/eh-exception-handling-model.md).  
  
## Vedere anche  
 [Crea la prima applicazione Vista utilizzando MFC](http://msdn.microsoft.com/it-it/499cb66f-7df1-45d6-8b6b-33d94fd1f17c)   
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)   
 [Compilazione di programmi C\/C\+\+](../build/building-c-cpp-programs.md)   
 [Opzioni del compilatore](../build/reference/compiler-options.md)