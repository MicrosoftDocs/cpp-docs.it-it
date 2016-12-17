---
title: "Informazioni sulle istruzioni di compliazione personalizzate e sugli eventi di compilazione | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "eventi di compilazione [C++], ordine degli eventi e istruzioni di compilazione"
  - "istruzioni di compilazione [C++]"
  - "istruzioni di compilazione [C++], eventi di compilazione"
  - "compilazioni [C++], istruzioni di compilazione personalizzate"
  - "compilazioni [C++], eventi"
  - "istruzioni di compilazione personalizzate [C++]"
  - "istruzioni di compilazione personalizzate [C++], personalizzazione di compilazioni"
  - "eventi (C++), compilazione"
ms.assetid: beb2f017-3e9f-4b2c-9b57-2572fd2628e4
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Informazioni sulle istruzioni di compliazione personalizzate e sugli eventi di compilazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

All'interno dell'ambiente di sviluppo di Visual C\+\+, il processo di compilazione può essere personalizzato in tre modi principali:  
  
 **Istruzioni di compilazione personalizzate**  
 Un'istruzione di compilazione personalizzata e una regola di compilazione associata ad un progetto.  Un'istruzione di compilazione personalizzata può specificare una riga di comando per eseguire, qualsiasi input aggiuntivo o file di output e un messaggio da visualizzare.  Per ulteriori informazioni, vedere [Procedura: aggiungere un'istruzione di compilazione personalizzata a progetti MSBuild](../build/how-to-add-a-custom-build-step-to-msbuild-projects.md).  
  
 **Strumenti per la compilazione in C\/C\+\+ personalizzati**  
 Uno strumento di compilazione personalizzato è una regola di compilazione associata a uno o più file.  Un'istruzione di compilazione personalizzata può passare file di input a uno strumento di compilazione personalizzato, producendo uno o più file di output.  I file della Guida in un'applicazione MFC, ad esempio, vengono compilati con uno strumento di compilazione personalizzato.  Per ulteriori informazioni, vedere [Procedura: aggiungere uno strumento di compilazione personalizzato a progetti MSBuild](../build/how-to-add-custom-build-tools-to-msbuild-projects.md) e [Specifica di strumenti di compilazione personalizzata](../ide/specifying-custom-build-tools.md).  
  
 **Eventi di compilazione**  
 Gli eventi di compilazione consentono di personalizzare la compilazione di un progetto.  Esistono tre eventi di compilazione: *pre\-compilazione*, *pre\-collegamento* e *post\-compilazione*.  Un evento di compilazione consente di specificare che un'azione si verifichi in un momento specifico nel processo di compilazione.  È possibile, ad esempio, utilizzare un evento di compilazione per registrare un file con **regsvr32.exe** al termine della compilazione del progetto.  Per ulteriori informazioni, vedere [Specifica di eventi di compilazione](../ide/specifying-build-events.md).  
  
 [Risoluzione dei problemi relativi alle personalizzazioni della compilazione](../ide/troubleshooting-build-customizations.md) consente di verificare che le istruzioni di compilazione personalizzata e gli eventi di compilazione vengano eseguiti nel modo previsto.  
  
 Il formato di output di un'istruzione di compilazione personalizzata o un evento di compilazione può anche migliorare le potenzialità di utilizzo dello strumento.  Per ulteriori informazioni, vedere [Formattazione dell'output di un'istruzione di compilazione personalizzata o un evento di compilazione](../ide/formatting-the-output-of-a-custom-build-step-or-build-event.md).  
  
 Gli eventi di compilazione e le istruzioni di compilazione personalizzata vengono eseguiti nell'ordine indicato di seguito insieme ad altre operazioni di compilazione:  
  
1.  Evento Pre\-compilazione  
  
2.  Strumenti di compilazione personalizzata su singoli file  
  
3.  MIDL  
  
4.  Compilatore di risorse  
  
5.  Compilatore C\/C\+\+  
  
6.  Evento Pre\-collegamento  
  
7.  Linker o gestione librerie \(a seconda dei casi\)  
  
8.  Strumento Manifesto  
  
9. BSCMake  
  
10. Istruzione di compilazione personalizzata sul progetto  
  
11. Evento Post\-compilazione  
  
 `custom build step on the project` e `post-build event` vengono eseguiti in sequenza al termine di tutti gli altri processi di compilazione.  
  
## Vedere anche  
 [Compilazione di progetti C\+\+ in Visual Studio](../ide/building-cpp-projects-in-visual-studio.md)   
 [Macro per comandi e proprietà di compilazione](../ide/common-macros-for-build-commands-and-properties.md)   
 [Tool Build Order Dialog Box](http://msdn.microsoft.com/it-it/6204c5b1-7ce9-4948-9ff6-0268642ee14c)