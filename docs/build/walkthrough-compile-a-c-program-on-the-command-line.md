---
title: "Procedura dettagliata: Compilazione di un programma in C dalla riga di comando | Microsoft Docs"
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
  - "compilazione di programmi C [C++]"
  - "applicazioni della riga di comando [C++], Programmi C"
  - "compilazione di programmi [C++]"
  - "Visual C, compilazione"
ms.assetid: 7e74cc2d-54b1-49de-b7ad-d3ae6b39ab8d
caps.latest.revision: 46
caps.handback.revision: 31
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Procedura dettagliata: Compilazione di un programma in C dalla riga di comando
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] è incluso un compilatore C che consente di creare da programmi console di base ad applicazioni Windows Desktop.  
  
 In questa procedura dettagliata viene illustrato come creare un programma C di base usando un editor di testo, quindi compilarlo nella riga di comando.  
  
 È possibile usare programmi C personalizzati anziché digitare i programmi di esempio illustrati nella procedura dettagliata.  È inoltre possibile usare qualsiasi programma di esempio di codice C incluso negli argomenti della Guida.  
  
 Per impostazione predefinita, il compilatore di Visual C\+\+ considera tutti i file che terminano in c come codice sorgente di C e tutti i file che terminano in cpp come codice sorgente di C\+\+.  Per far sì che il compilatore consideri tutti i file come C, indipendentemente dall'estensione di file, usare l'opzione del compilatore [\/Tc](../build/reference/tc-tp-tc-tp-specify-source-file-type.md).  
  
## Prerequisiti  
 È necessario comprendere le nozioni di base del linguaggio C.  
  
### Per creare un file di origine C e compilarlo nella riga di comando  
  
1.  Aprire un prompt dei comandi di sviluppo.  In Windows 8, nella schermata **Start** aprire la cartella **Strumenti di Visual Studio**, quindi fare clic sul collegamento **Prompt dei comandi per gli sviluppatori**.  Nelle versioni precedenti di Windows fare clic sul pulsante **Start**, espandere **Tutti i programmi**, **Microsoft Visual Studio** e **Strumenti di Visual Studio** e quindi scegliere **Prompt dei comandi per gli sviluppatori**.  
  
     A seconda della versione di Windows installata nel computer e della configurazione di sicurezza del sistema, potrebbe essere necessario aprire il menu di scelta rapida **Prompt dei comandi per gli sviluppatori**, quindi scegliere **Esegui come amministratore** per compilare ed eseguire correttamente l'applicazione creata seguendo questa procedura.  
  
    > [!NOTE]
    >  Il percorso corretto del compilatore C e le eventuali librerie necessarie vengono impostati automaticamente da **Prompt dei comandi per gli sviluppatori**.  Usare questa finestra in alternativa alla normale finestra del prompt dei comandi.  Per altre informazioni, vedere [Impostazione delle variabili di percorso e di ambiente per la compilazione dalla riga di comando](../build/setting-the-path-and-environment-variables-for-command-line-builds.md).  
  
2.  Al prompt dei comandi creare una directory per il file di origine e configurare tale cartella come cartella di lavoro corrente.  Ad esempio, digitare **md c:\\simple** e premere INVIO per creare una directory denominata simple, quindi digitare **cd c:\\simple** e premere INVIO per passare a tale directory.  
  
3.  Al prompt dei comandi digitare **notepad** e premere INVIO.  
  
4.  Nel Blocco note digitare le righe riportate di seguito.  
  
     [!code-cpp[NVC_Walkthrough_Compile_C#100](../build/codesnippet/CPP/walkthrough-compile-a-c-program-on-the-command-line_1.c)]  
  
5.  Nella barra dei menu scegliere **File**, **Salva** per aprire la finestra di dialogo **Salva con nome**.  Passare alla directory creata.  Nella casella **Nome file** immettere un nome per i file di origine, ad esempio simple.c, quindi nell'elenco a discesa **Salva come** selezionare **Tutti i file \(\*.\*\)**.  Scegliere il pulsante **Salva** per creare un file di origine C nella directory di lavoro.  
  
6.  Al prompt dei comandi immettere **dir** e premere INVIO.  Verrà visualizzato il file di origine creato:  
  
  **C:\\simple\>dir**  
 **Volume in drive C has no label.  Volume Serial Number is CC62\-6545**  
 **Directory of C:\\simple**  
**10\/02\/2012  03:46 PM    \<DIR\>          .  10\/02\/2012  03:46 PM    \<DIR\>          ..  10\/02\/2012  03:36 PM               102 simple.c**  
 **1 File\(s\)            102 bytes**  
 **2 Dir\(s\)  514,900,566,016 bytes free**      I dettagli variano in base al computer.  Se non viene visualizzato il file del codice sorgente, verificare di essere passati alla directory creata e assicurarsi di aver salvato il file di origine in tale directory con l'estensione di file c.  
  
7.  Al prompt dei comandi specificare il comando **cl** insieme al nome del file di origine, ad esempio **cl simple.c**, e premere INVIO per compilare il programma.  Il compilatore cl.exe genera un file .obj contenente il codice compilato e quindi esegue il linker per compilare un programma eseguibile con il nome del file di origine, che tuttavia avrà un'estensione exe, ad esempio simple.exe.  
  
     Il nome del programma eseguibile è visibile nelle righe di informazioni di output visualizzate dal compilatore.  
  
     **Output**  
  
  **Microsoft \(R\) C\/C\+\+ Optimizing Compiler versione 17.00.50727.1 per x86**  
**Copyright \(C\) Microsoft Corporation.  Tutti i diritti sono riservati.  simple.c**  
**Microsoft \(R\) Incremental Linker versione 11.00.50727.1**  
**Copyright \(C\) Microsoft Corporation.  Tutti i diritti sono riservati.  \/out:simple.exe**  
**simple.obj**      Il numero di versione degli strumenti dipende dalla versione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] e dagli aggiornamenti installati.  
  
    > [!NOTE]
    >  Se viene visualizzato un errore simile a "'cl' non è riconosciuto come comando interno o esterno, un programma eseguibile o un file batch", errore C1034 o LNK1104, è necessario impostare l'ambiente per il compilatore e gli strumenti.  Per altre informazioni, esaminare il passaggio 1.  
    >   
    >  Se viene visualizzato un errore o un avviso del compilatore, esaminare il codice sorgente per verificare la presenza di errori, quindi salvarlo ed eseguire di nuovo il compilatore.  Per altre informazioni su errori specifici, usare la casella di ricerca di questa pagina.  
  
8.  Per eseguire il programma, immettere il nome senza estensione di file, ad esempio, **simple**, e premere INVIO.  
  
     Il programma visualizza questo testo e poi viene chiuso:  
  
     `This is a native C program.`  
  
## Vedere anche  
 [Procedura dettagliata: creazione di un programma console Win32 \(C\+\+\)](../windows/walkthrough-creating-a-standard-cpp-program-cpp.md)   
 [Riferimenti del linguaggio C](../c-language/c-language-reference.md)   
 [Compilazione di programmi C\/C\+\+](../build/building-c-cpp-programs.md)   
 [Compatibilità](../c-runtime-library/compatibility.md)