---
title: "Impostazione delle variabili di percorso e di ambiente per la compilazione dalla riga di comando | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
f1_keywords: 
  - "include"
  - "Lib"
  - "Path"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "compilatore cl.exe [C++], variabili di ambiente"
  - "compilazione di codice sorgente [C++], dalla riga di comando"
  - "variabili di ambiente [C++]"
  - "variabili di ambiente [C++], compilatore CL"
  - "INCLUDE (parola riservata)"
  - "variabile di ambiente LIB"
  - "LINK (strumento) [C++], variabili di ambiente"
  - "LINK (strumento) [C++], percorso"
  - "PATH (parola riservata)"
  - "VCVARS32.bat (file)"
ms.assetid: 99389528-deb5-43b9-b99a-03c8773ebaf4
caps.latest.revision: 17
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Impostazione delle variabili di percorso e di ambiente per la compilazione dalla riga di comando
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli strumenti per la compilazione da riga di comando di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] richiedono diverse variabili di ambiente, personalizzate per l'installazione specifica.  Durante l'installazione, [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] crea file di comando che impostano le variabile di ambiente necessarie, quindi crea i collegamenti per l'avvio di una finestra del prompt dei comandi in cui sono già state impostate queste variabili.  Per usare gli strumenti da riga di comando, è possibile eseguire uno dei collegamenti oppure aprire una normale finestra del prompt dei comandi e quindi eseguire il file di comando vcvarsall.bat.  
  
 Gli strumenti da riga di comando di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] usano le variabili di ambiente PATH, TMP, INCLUDE, LIB e LIBPATH e possono usare anche variabili di ambiente specifiche per il singolo strumento.  Poiché i valori di queste variabili di ambiente sono specifici per l'installazione attiva e possono essere modificati da aggiornamenti del prodotto, è consigliabile usare vcvarsall.bat o un collegamento del prompt dei comandi per gli sviluppatori invece di configurarli personalmente.  Per informazioni sulle variabili di ambiente specifiche usate dal compilatore e dal linker, vedere [Variabili di ambiente CL](../build/reference/cl-environment-variables.md) e [Variabili di ambiente LINK](../build/reference/link-environment-variables.md).  
  
> [!NOTE]
>  Per alcuni strumenti da riga di comando oppure per alcune opzioni degli strumenti sono necessarie autorizzazioni di amministratore.  Per usarli, è consigliabile aprire una finestra del prompt dei comandi usando l'opzione **Esegui come amministratore**, disponibile nel menu di scelta rapida della finestra del prompt dei comandi da aprire.  
  
## Uso dei collegamenti del prompt dei comandi  
 Il collegamento del prompt dei comandi per gli sviluppatori incluso in ogni edizione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] apre una finestra del prompt dei comandi e configura l'ambiente in modo che usi il set di strumenti a 32 bit nativi x86 per processori x86.  Sono disponibili anche prompt dei comandi per compilatori incrociati a 32 bit per piattaforme x64 e ARM.  In base al sistema in uso e alla versione installata di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] è possibile che siano disponibili anche un collegamento del prompt dei comandi per un set di strumenti a 64 bit nativi x64 per processori x64 e un collegamento per un compilatore incrociato a 64 bit per processori x86.  Queste versioni del set di strumenti da riga di comando sono disponibili in tutte le edizioni di Visual Studio:  
  
 x86 su x86  
 Usare questo set di strumenti per creare file di output per computer x86.  Viene eseguito come un processo a 32 bit, nativo in un computer x86 e in WOW64 in un sistema operativo Windows a 64 bit.  
  
 [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] su x86 \(compilatore incrociato [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]\)  
 Usare questo set di strumenti per creare file di output per [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)].  Viene eseguito come un processo a 32 bit, nativo in un computer x86 e in WOW64 in un sistema operativo Windows a 64 bit.  
  
 ARM su x86 \(compilatore incrociato ARM\)  
 Usare questo set di strumenti per creare file di output per computer ARM.  Viene eseguito come un processo a 32 bit, nativo in un computer x86 e in WOW64 in un sistema operativo Windows a 64 bit.  
  
 Queste versioni del set di strumenti da riga di comando sono disponibili in piattaforme a 64 bit:  
  
 x86 su [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]  
 Usare questo set di strumenti per creare file di output per computer x86.  Viene eseguito come un processo nativo in un sistema operativo Windows a 64 bit.  
  
 [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] su [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]  
 Usare questo set di strumenti per creare file di output per computer [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)].  Viene eseguito come un processo nativo in un sistema operativo Windows a 64 bit.  
  
 ARM su x64 \(compilatore incrociato ARM\)  
 Usare questo set di strumenti per creare file di output per computer ARM.  Viene eseguito come processo a 64 bit nativo in un sistema operativo Windows a 64 bit.  
  
#### Per aprire una finestra del prompt dei comandi per gli sviluppatori  
  
1.  Nella schermata Start di Windows 8 digitare Strumenti di Visual Studio.  I risultati della ricerca cambiano durante la digitazione. Quando compare **Strumenti di Visual Studio** selezionare questa opzione.  
  
     Nelle versioni precedenti di Windows, scegliere **Start**, quindi digitare Strumenti di Visual Studio nella casella di ricerca.  Quando **Strumenti di Visual Studio** compare nei risultati della ricerca, selezionare questa opzione.  
  
2.  Nella cartella **Strumenti di Visual Studio** aprire il **Prompt dei comandi per gli sviluppatori** relativo alla versione in uso di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  Per l'esecuzione come amministratore, scegliere **Esegui come amministratore** dal menu di scelta rapida per il prompt dei comandi per gli sviluppatori.  
  
 Il prompt dei comandi per gli sviluppatori configura l'ambiente per l'uso del set di strumenti a 32 bit nativo per processori x86.  Scegliere **Prompt dei comandi degli strumenti x64** per usare il set di strumenti a 32 bit nativo per processori x64.  Scegliere **Prompt dei comandi degli strumenti ARM** per usare il set di strumenti a 32 bit nativo per processori ARM.  Scegliere **Prompt dei comandi degli strumenti nativi x64** per usare il set di strumenti a 64 bit nativo per processori x64.  
  
## Uso di vcvarsall.bat in una finestra del prompt dei comandi  
 L'esecuzione di vcvarsall.bat in una semplice finestra del prompt dei comandi permette di impostare le variabili di ambiente per configurare la riga di comando per la compilazione nativa a 32 bit o a 64 bit oppure per la compilazione incrociata per processori x86, x64 o ARM.  Se non sono forniti argomenti, il file vcvarsall.bat configura le variabili di ambiente per usare il compilatore nativo a 32 bit per destinazioni x86.  È tuttavia possibile utilizzarlo per configurare qualsiasi compilatore.  Se si specifica una configurazione del compilatore che non è installata o non è disponibile nell'architettura del computer, sarà visualizzato un messaggio.  Nella tabella seguente sono elencati gli argomenti supportati.  
  
|Argomento di vcvarsall.bat|Compilatore|Architettura del computer di compilazione|Architettura dell'output di compilazione|  
|--------------------------------|-----------------|-----------------------------------------------|----------------------------------------------|  
|x86|x86 nativo a 32 bit|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|x86|  
|x86\_amd64|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] su x86 \(incrociato\)|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|x86\_arm|ARM su x86 \(incrociato\)|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|ARM|  
|amd64|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] nativo a 64 bit|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|amd64\_x86|x86 su [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] \(incrociato\)|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|x86|  
|amd64\_arm|ARM su [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] \(incrociato\)|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|ARM|  
  
 I passaggi seguenti mostrano come configurare un prompt dei comandi per l'uso del set di strumenti nativo a 32 bit per piattaforme x86.  
  
#### Per eseguire vcvarsall.bat  
  
1.  Al prompt dei comandi passare alla directory di installazione di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)].  Il percorso dipende dal sistema e dall'installazione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], ma in genere corrisponde a C:\\Programmi \(x86\)\\Microsoft Visual Studio *versione*\\VC\\. Ad esempio, immettere quanto segue:  
  
     cd "\\Programmi \(x86\)\\Microsoft Visual Studio 12.0\\VC"  
  
2.  Per configurare questa finestra del prompt dei comandi per compilazioni da riga di comando x86 a 32 bit, al prompt dei comandi immettere quanto segue:  
  
     `vcvarsall x86`  
  
 In [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] è anche disponibile un file vcvars32.bat per la configurazione di un ambiente da riga di comando.  Il file vcvars32.bat può solo configurare le variabili di ambiente appropriate per abilitare compilazioni da riga di comando x86 a 32 bit.  Equivale al comando `vcvarsall x86`.  
  
 Se si usa [DEVENV](../Topic/Devenv%20Command%20Line%20Switches.md) per compilazioni da riga di comando, l'ambiente configurato da vcvarsall.bat o vcvars32.bat influirà sulle compilazioni solo se si specifica anche l'opzione **\/useenv**.  
  
> [!CAUTION]
>  Il file vcvarsall.bat può variare da computer a computer.  Non sostituire un file vcvarsall.bat mancante o danneggiato usando un file da un altro computer.  Eseguire di nuovo il programma di installazione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] per sostituire il file mancante.  
>   
>  Il file vcvarsall.bat varia anche da versione a versione.  Se la versione corrente di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] è installata in un computer che include anche la versione precedente di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)], non eseguire vcvarsall.bat o vcvars32.bat da diverse versioni nella stessa finestra del prompt dei comandi.  
  
## Vedere anche  
 [Compilazione dalla riga di comando](../build/building-on-the-command-line.md)   
 [Collegamento](../build/reference/linking.md)   
 [Opzioni del linker](../build/reference/linker-options.md)   
 [Compilazione di un programma C\/C\+\+](../build/reference/compiling-a-c-cpp-program.md)   
 [Opzioni del compilatore](../build/reference/compiler-options.md)