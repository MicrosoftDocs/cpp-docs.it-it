---
title: "Procedura: abilitare un set di strumenti Visual C++ a 64 bit dalla riga di comando | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "compilatore a 64 bit [C++], utilizzo di righe di comando"
  - "compilatore a 64 bit [C++], set di strumenti (abilitazione dalla riga di comando)"
  - "riga di comando [C++], compilatore a 64 bit"
  - "IPF"
  - "IPF, compilatore a riga di comando"
  - "Itanium [C++]"
  - "Itanium [C++], compilatore a riga di comando"
  - "x64 [C++]"
  - "x64 [C++], compilatore a riga di comando"
ms.assetid: 4da93a19-e20d-4778-902a-5eee9a6a90b5
caps.latest.revision: 30
caps.handback.revision: 30
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Procedura: abilitare un set di strumenti Visual C++ a 64 bit dalla riga di comando
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Visual C\+\+ include compilatori che è possibile utilizzare per creare applicazioni eseguibili su sistemi operativi Windows a 32 bit o a 64 bit o ARM.  
  
> [!NOTE]
>  Per informazioni sugli strumenti specifici inclusi in ogni edizione di Visual C\+\+, vedere [Strumenti e modelli Visual C\+\+ nelle edizioni di Visual Studio](../ide/visual-cpp-tools-and-templates-in-visual-studio-editions.md).  
>   
>  Per informazioni su come usare l'IDE di Visual Studio per creare applicazioni a 64 bit, vedere [Procedura: Configurare i progetti Visual C\+\+ per piattaforme a 64 bit](../build/how-to-configure-visual-cpp-projects-to-target-64-bit-platforms.md).  
  
 [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] include compilatori a 32 bit, ospitati in x86, nativi e incrociati per destinazioni x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] e ARM.  Quando [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] viene installato in un sistema operativo Windows a 64 bit, per ogni destinazione \(x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] e ARM\) vengono installati i compilatori nativi e incrociati a 32 bit ospitati da x86 e inoltre i compilatori nativi e incrociati a 64 bit ospitati da [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)].  I compilatori a 32 e 64 bit per ogni destinazione generano codice identico, ma i compilatori a 64 bit supportano più memoria per i simboli di intestazione precompilati e le opzioni di ottimizzazione dell'intero programma \([\/GL](../build/reference/gl-whole-program-optimization.md), [\/LTCG](../build/reference/ltcg-link-time-code-generation.md)\).  In caso di limiti della memoria quando si utilizza un compilatore a 32 bit, provare il compilatore a 64 bit.  
  
 Quando Visual Studio è installato in un sistema operativo Windows a 64 bit, sono disponibili ulteriori collegamenti al prompt dei comandi per i compilatori a 64 bit nativi e incrociati per [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] e x86.  Per accedere a questo prompt dei comandi in Windows 8, nella schermata **Start** aprire **Tutte le app**.  Nella versione installata di **[!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]** aprire **Strumenti di Visual Studio** e scegliere uno dei prompt dei comandi degli strumenti nativi o incrociati.  Nelle versioni precedenti di Windows fare clic sul pulsante **Start**, espandere **Tutti i programmi**, **[!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]**, **Strumenti di Visual Studio**, quindi scegliere un prompt dei comandi.  
  
## Vcvarsall.bat  
 I compilatori possono essere usati da riga di comando eseguendo il file di comando vcvarsall.bat, per configurare il percorso e le variabili di ambiente che supportano il set di strumenti del compilatore.  Poiché non sono disponibili collegamenti al prompt dei comandi che consentano di abilitare un set di strumenti a 64 bit per piattaforme x86 o ARM, per usare il set di strumenti a 64 bit eseguire vcvarsall.bat in una finestra del prompt dei comandi.  Per altre informazioni, vedere [Impostazione delle variabili di percorso e di ambiente per la compilazione dalla riga di comando](../build/setting-the-path-and-environment-variables-for-command-line-builds.md).  
  
 I passaggi seguenti mostrano come configurare un prompt dei comandi per l'uso del set di strumenti nativo a 64 bit per piattaforme x86, x64 e ARM.  
  
#### Per eseguire vcvarsall.bat in modo da usare un set di strumenti a 64 bit  
  
1.  Al prompt dei comandi passare alla directory di installazione di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)].  Il percorso dipende dal sistema e dall'installazione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], ma in genere corrisponde a C:\\Programmi \(x86\)\\Microsoft Visual Studio *versione*\\VC\\. Ad esempio, immettere quanto segue:  
  
     cd "\\Programmi \(x86\)\\Microsoft Visual Studio 12.0\\VC"  
  
2.  Per configurare questa finestra del prompt dei comandi per compilazioni da riga di comando a 64 bit destinate a piattaforme x64, al prompt dei comandi immettere quanto segue:  
  
     `vcvarsall amd64`  
  
3.  Per configurare questa finestra del prompt dei comandi per compilazioni da riga di comando a 64 bit destinate a piattaforme x86, al prompt dei comandi immettere quanto segue:  
  
     `vcvarsall amd64_x86`  
  
4.  Per configurare questa finestra del prompt dei comandi per compilazioni da riga di comando a 64 bit destinate a piattaforme ARM, al prompt dei comandi immettere quanto segue:  
  
     `vcvarsall amd64_arm`  
  
## Vedere anche  
 [Configurazione di programmi per processori a 64 bit](../build/configuring-programs-for-64-bit-visual-cpp.md)