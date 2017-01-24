---
title: "Compilazione dalla riga di comando | Microsoft Docs"
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
  - "compilazioni [C++], riga di comando"
  - "riga di comando [C++], compilazione"
  - "riga di comando [C++], compilatori"
  - "compilazioni dalla riga di comando [C++]"
  - "compilazione di codice sorgente [C++], riga di comando"
ms.assetid: 7ca9daed-a003-4162-842d-908f79058365
caps.latest.revision: 22
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compilazione dalla riga di comando
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile compilare applicazioni C e C\+\+ nella riga di comando tramite gli strumenti inclusi in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  Con ogni edizione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] viene installato un set di strumenti della riga di comando in cui sono inclusi un compilatore, un linker, altri strumenti di compilazione e un file di comando per l'impostazione dell'ambiente di compilazione necessario.  Per impostazione predefinita, questi strumenti vengono installati in *unità*:\\Programmi \(x86\)\\Microsoft Visual Studio *versione*\\VC\\bin\\.  La directory effettiva nel computer in uso dipende dal sistema, dalla versione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] e dalle opzioni di installazione selezionate.  
  
 Per funzionare correttamente, gli strumenti per la compilazione da riga di comando di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] richiedono diverse variabili di ambiente, personalizzate per l'installazione specifica.  Durante l'installazione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], viene creato un file di comando vcvarsall.bat che è possibile eseguire per impostare le variabili di ambiente necessarie.  Viene inoltre creato un collegamento che avvia una finestra del prompt dei comandi per gli sviluppatori in cui queste variabili sono già impostate.  Queste variabili di ambiente sono specifiche per l'installazione e potrebbero essere modificate da aggiornamenti del prodotto.  È pertanto consigliabile usare il file vcvarsall.bat o un collegamento al prompt dei comandi per gli sviluppatori anziché impostarle personalmente.  Per altre informazioni, vedere [Impostazione delle variabili di percorso e di ambiente per la compilazione dalla riga di comando](../build/setting-the-path-and-environment-variables-for-command-line-builds.md).  
  
### Per aprire una finestra del prompt dei comandi per gli sviluppatori  
  
1.  Nella schermata Start di Windows 8 digitare Strumenti di Visual Studio.  I risultati della ricerca cambiano durante la digitazione. Quando compare **Strumenti di Visual Studio** selezionare questa opzione.  
  
     Nelle versioni precedenti di Windows, scegliere **Start**, quindi digitare Strumenti di Visual Studio nella casella di ricerca.  Quando **Strumenti di Visual Studio** compare nei risultati della ricerca, selezionare questa opzione.  
  
2.  Nella cartella **Strumenti di Visual Studio** aprire il **Prompt dei comandi per gli sviluppatori** relativo alla versione in uso di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
 Per compilare un progetto C\/C\+\+ nella riga di comando, è possibile usare questi strumenti da riga di comando di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)]:  
  
 [CL](../build/reference/compiling-a-c-cpp-program.md)  
 Usare il compilatore \(cl.exe\) per compilare e collegare file del codice sorgente in app, librerie e DLL.  
  
 [Link](../build/reference/linking.md)  
 Usare il linker \(link.exe\) per collegare file oggetto e librerie compilati in app e DLL.  
  
 [MSBuild \(Visual C\+\+\)](../build/msbuild-visual-cpp.md)  
 Usare MSBuild \(msbuild.exe\) per compilare progetti [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] e soluzioni [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  Equivale a eseguire il comando **Compila** progetto o **Compila soluzione** nell'ambiente IDE di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
 [DEVENV](../Topic/Devenv%20Command%20Line%20Switches.md)  
 Usare DEVENV \(devenv.exe\) in combinazione con un'opzione della riga di comando, ad esempio **\/Build** o **\/Clean** per eseguire determinati comandi di compilazione senza visualizzare l'ambiente IDE di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
 [NMAKE](../build/nmake-reference.md)  
 Usare NMAKE \(nmake.exe\) per automatizzare attività per la compilazione di progetti di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] usando un makefile tradizionale.  
  
 Durante la compilazione nella riga di comando, per ottenere informazioni su avvisi, errori e messaggi è possibile avviare [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] e quindi scegliere **?** e **Cerca** sulla barra dei menu.  
  
## In questa sezione  
 Negli articoli inclusi in questa sezione della documentazione viene illustrato come compilare app nella riga di comando, viene descritto come personalizzare l'ambiente di compilazione da riga di comando per usare i set di strumenti a 64 bit e le piattaforme x86, x64 e ARM e vengono fornite informazioni su come usare gli strumenti di sviluppo da riga di comando MSBuild e NMAKE.  
  
 [Procedura dettagliata: compilazione di un programma C\+\+ nativo nella riga di comando](../build/walkthrough-compiling-a-native-cpp-program-on-the-command-line.md)  
 Presenta un esempio in cui viene illustrato come creare e compilare un semplice programma C\+\+ nella riga di comando.  
  
 [Procedura dettagliata: Compilazione di un programma in C dalla riga di comando](../Topic/Walkthrough:%20Compiling%20a%20C%20Program%20on%20the%20Command%20Line.md)  
 Descrive come compilare un programma nel linguaggio di programmazione C.  
  
 [Procedura dettagliata: Compilazione di un programma in C\+\+\/CLI dalla riga di comando](../build/walkthrough-compiling-a-cpp-cli-program-on-the-command-line.md)  
 Descrive come creare e compilare un programma C\+\+\/CLI che usa .NET Framework.  
  
 [Procedura dettagliata: Compilazione di un programma in C\+\+\/CX dalla riga di comando](../build/walkthrough-compiling-a-cpp-cx-program-on-the-command-line.md)  
 Descrive come creare e compilare un programma C\+\+\/CX che usa Windows Runtime.  
  
 [Impostazione delle variabili di percorso e di ambiente per la compilazione dalla riga di comando](../build/setting-the-path-and-environment-variables-for-command-line-builds.md)  
 Descrive come avviare una finestra del prompt dei comandi in cui sono impostate le variabili di ambiente necessarie per la compilazione da riga di comando per le piattaforme x86, x64 e ARM con un set di strumenti a 32 o 64 bit.  
  
 [Riferimenti a NMAKE](../build/nmake-reference.md)  
 Fornisce collegamenti ad articoli in cui viene descritta l'utilità Microsoft Program Maintenance Utility \(NMAKE.EXE\).  
  
 [MSBuild \(Visual C\+\+\)](../build/msbuild-visual-cpp.md)  
 Fornisce collegamenti ad articoli in cui vengono descritte le modalità di utilizzo di MSBuild.exe.  
  
## Sezioni correlate  
 [\/MD, \/MT, \/LD \(utilizzo della libreria di runtime\)](../build/reference/md-mt-ld-use-run-time-library.md)  
 Descrive come usare queste opzioni del compilatore per l'utilizzo di una libreria di runtime di debug o di rilascio.  
  
 [Opzioni del compilatore C\/C\+\+](../build/reference/compiler-options.md)  
 Fornisce collegamenti ad articoli in cui vengono descritte le opzioni del compilatore C e C\+\+ e fornite informazioni su CL.exe.  
  
 [Opzioni del linker](../build/reference/linker-options.md)  
 Fornisce collegamenti ad articoli in cui vengono descritte le opzioni del linker e fornite informazioni su CL.exe.  
  
 [Strumenti per la compilazione in C\/C\+\+](../build/reference/c-cpp-build-tools.md)  
 Fornisce collegamenti agli strumenti di sviluppo per C\/C\+\+ inclusi in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
## Vedere anche  
 [Compilazione di programmi C\/C\+\+](../build/building-c-cpp-programs.md)