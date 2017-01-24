---
title: "Scelta di un metodo di distribuzione | Microsoft Docs"
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
  - "distribuzione di applicazioni [C++], metodi"
  - "distribuzione di applicazioni [C++], metodi"
  - "DLL [C++], ridistribuzione"
  - "collegamento dinamico [C++]"
  - "librerie [C++], problemi relativi alla distribuzione di applicazioni"
  - "manifesti [C++]"
  - "ridistribuzione di DLL"
  - "assembly side-by-side [C++]"
  - "collegamento statico [C++]"
ms.assetid: fd8eb956-f4a0-4ffb-b401-328c73e66986
caps.latest.revision: 35
caps.handback.revision: 35
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Scelta di un metodo di distribuzione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

A meno che l'applicazione di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] non sia completa e distribuibile tramite un comando di copia, è consigliabile utilizzare Windows Installer per la distribuzione.  Windows Installer supporta l'installazione, il ripristino e la disinstallazione, oltre all'aggiornamento atomico dei file, delle dipendenze e delle voci del Registro di sistema dell'applicazione.  
  
> [!NOTE]
>  Sebbene la distribuzione [ClickOnce](../Topic/ClickOnce%20Security%20and%20Deployment.md) per applicazioni native di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] sia possibile in Visual Studio, richiede passaggi aggiuntivi.  Per ulteriori informazioni, vedere [Distribuzione ClickOnce per applicazioni Visual C\+\+](../ide/clickonce-deployment-for-visual-cpp-applications.md).  
  
## Le librerie di Visual C\+\+ sono DLL condivise  
 Poiché le librerie di Visual C\+\+ vengono installate nella directory %windir%\\system32\\ dal programma di installazione di Visual Studio, quando si sviluppa un'applicazione Visual C\+\+ con dipendenze da tali librerie, il funzionamento sarà quello previsto.  Tuttavia, per distribuire l'applicazione in computer in cui Visual Studio potrebbe non essere presente, è consigliabile assicurarsi che le librerie vengano installate in questi computer insieme all'applicazione.  
  
## Ridistribuzione delle librerie di Visual C\+\+  
 Nelle distribuzioni è possibile ridistribuire qualsiasi versione di una libreria di Visual C\+\+ concessa in licenza per la ridistribuzione.  Di seguito sono descritti tre modi per distribuirla:  
  
-   Distribuzione centrale tramite pacchetti ridistribuibili: consente di installare le librerie di Visual C\+\+ come DLL condivise nella directory %windir%\\system32\\. \(L'installazione in questa cartella richiede diritti di amministratore\). È possibile creare uno script o un programma di installazione che esegua il pacchetto ridistribuibile prima dell'installazione dell'applicazione nel computer di destinazione.  I pacchetti ridistribuibili sono disponibili per le piattaforme x86, x64 e ARM \(VCRedist\_x86.exe, VCRedist\_x64.exe o VCRedist\_arm.exe\).  In Visual Studio questi pacchetti sono contenuti in %ProgramFiles\(x86\)%\\Microsoft Visual Studio `version`\\VC\\Redist\\`locale ID`\\.  È inoltre possibile scaricarli dall'[Area download Microsoft](http://go.microsoft.com/fwlink/?LinkId=132793). \(Nell'Area download cercare "[!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] Redistributable Package *Visual Studio version and update*" corrispondente all'applicazione.  Se ad esempio si è utilizzato l'aggiornamento 4 di Visual Studio 2012 per compilare l'applicazione, cercare "Visual C\+\+ Redistributable Package 2012 update 4"\). Per informazioni su come utilizzare un pacchetto ridistribuibile, vedere [Procedura dettagliata: distribuire un'applicazione Visual C\+\+ tramite Visual C\+\+ Redistributable Package](../ide/deploying-visual-cpp-application-by-using-the-vcpp-redistributable-package.md).  
  
-   Distribuzione centrale tramite modelli unione: ognuno di questi modelli installa una determinata libreria di Visual C\+\+ come DLL condivisa nella directory %windir%\\system32\\. \(L'installazione in questa cartella richiede diritti di amministratore\). I modelli unione diventano parte del file del programma di installazione MSI dell'applicazione.  I modelli unione ridistribuibili di Visual C\+\+ sono inclusi in Visual Studio, nella directory \\Program Files \(x86\)\\Common Files\\Merge Modules\\.  Per ulteriori informazioni, vedere [Ridistribuzione tramite modelli unione](../ide/redistributing-components-by-using-merge-modules.md).  
  
-   Distribuzione locale: le DLL di Visual C\+\+ vengono copiate dall'installazione di Visual Studio, in genere la directory \\Programmi \(x86\)\\Microsoft Visual Studio `version`\\VC\\Redist\\`platform`\\`library`\\, e installate nei computer di destinazione nella stessa cartella dell'eseguibile dell'applicazione.  È possibile utilizzare questo metodo di distribuzione per consentire l'installazione a utenti che non dispongono dei diritti di amministratore o per applicazioni eseguibili da una condivisione di rete.  
  
 Se una distribuzione utilizza i modelli unione ridistribuibili e un'installazione viene eseguita da un utente che non dispone dei diritti di amministratore, le DLL di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] non vengono installate e l'applicazione non viene eseguita.  Inoltre, i programmi di installazione compilati con modelli unione che consentono l'installazione su base utente, installano le librerie in percorsi condivisi che hanno un impatto su tutti gli utenti del sistema.  È possibile utilizzare la distribuzione locale per installare le DLL di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] necessarie nella directory di un'applicazione di un determinato utente senza influire su altri utenti o richiedere i privilegi di amministratore.  Poiché questo può creare problemi di manutenzione, è consigliabile evitare la distribuzione locale delle DLL ridistribuibili di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)].  
  
 L'errata distribuzione delle librerie di Visual C\+\+ può causare errori di runtime durante l'esecuzione di un'applicazione che dipende da tali librerie.  Quando il sistema operativo carica l'applicazione, utilizza l'ordine di ricerca descritto in [LoadLibraryEx](http://go.microsoft.com/fwlink/?LinkId=132792)  
  
## Il collegamento dinamico è preferibile rispetto a quello statico  
 È consigliabile evitare il collegamento statico per ridistribuire le librerie di [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)].  Sebbene il collegamento statico non migliori quasi mai le prestazioni dell'applicazione, quasi sempre rende più costosa la manutenzione.  Si consideri ad esempio un'applicazione collegata in modo statico a una libreria che è stata aggiornata a livello di sicurezza. L'applicazione non trarrà alcun vantaggio, a meno che non venga ricompilata e ridistribuita.  È invece consigliabile collegare in modo dinamico le applicazioni alle librerie da cui dipendono in modo da consentire l'aggiornamento delle librerie ovunque vengano distribuite.  
  
## Vedere anche  
 [Distribuzione di applicazioni desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)   
 [Not in Build: Choosing a Deployment Strategy](http://msdn.microsoft.com/it-it/ecd632d8-063c-4028-b785-81bba045107b)   
 [Windows Installer Deployment Overview](http://msdn.microsoft.com/it-it/3ce4610a-b54f-404e-b650-42f4a55dfc3b)   
 [ClickOnce Security and Deployment](../Topic/ClickOnce%20Security%20and%20Deployment.md)   
 [Esempi di distribuzione](../ide/deployment-examples.md)