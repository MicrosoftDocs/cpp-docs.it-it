---
title: "Preparazione di un computer per il test per l&#39;esecuzione di un file eseguibile di debug | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "eseguibile di debug, preparazione di un computer di prova per l'esecuzione"
ms.assetid: f0400989-cc2e-4dce-9788-6bdbe91c6f5a
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# Preparazione di un computer per il test per l&#39;esecuzione di un file eseguibile di debug
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per preparare un computer per il test della versione di debug di un'applicazione compilata con Visual C\+\+, è necessario distribuire le versioni delle DDL della libreria di Visual C\+\+ da cui dipende l'applicazione.  Per identificare quali DDL devono essere distribuite, seguire i passaggi illustrati in [Informazioni sulle dipendenze di un'applicazione Visual C\+\+](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md).  Tipicamente, le versioni di debug delle DLL della libreria di Visual C\+\+ hanno nomi che terminano in "d"; per esempio, la versione di debug della DLL msvcr100.dll è denominata msvcr100d.dll.  
  
> [!NOTE]
>  Le versioni di debug di un'applicazione non sono ridistribuibili, così come nessuna delle versioni di debug delle DDL della libreria di Visual C\+\+.  È possibile distribuire le versioni di debug delle applicazioni e le DLL di Visual C\+\+ solo ai propri computer, al solo scopo di eseguire il debug e di fare test delle applicazioni su un computer su cui non è installato Visual Studio.  Per ulteriori informazioni, vedere [Ridistribuzione di file Visual C\+\+](../ide/redistributing-visual-cpp-files.md).  
  
 Ci sono tre modi per distribuire le versioni di debug dei DDL della libreria di Visual C\+\+ insieme alla versione di debug di un'applicazione.  
  
-   Utilizzare la distribuzione centrale per installare una versione di debug di una determinata DLL di Visual C\+\+ nella directory %windir%\\system32\\ utilizzando un progetto di installazione che include modelli unione per la versione corretta della libreria e della architettura dell'applicazione.  I modelli unione sono contenuti nella directory Programmi o Programmi \(x86\) in \\File Comuni\\Merge Modules\\.  La versione di debug di un modello unione ha nel proprio nome il termine "Debug", ad esempio, Microsoft\_VC110\_DebugCRT\_x86.msm.  Per un esempio di questa distribuzione, vedere [Procedura dettagliata: distribuire un'applicazione Visual C\+\+ tramite un progetto di installazione](../ide/walkthrough-deploying-a-visual-cpp-application-by-using-a-setup-project.md).  
  
-   Utilizzare la distribuzione locale per installare una versione di debug di una determinata DLL di Visual C\+\+ nella directory di installazione dell'applicazione utilizzando i file forniti nella directory Programmi o Programmi \(x86\) in \\Microsoft Visual Studio \<version\>\\VC\\redist\\Debug\_NonRedist\\.  
  
    > [!NOTE]
    >  Per il debug remoto dell'applicazione compilata con Visual C\+\+ 2005 o Visual C\+\+ 2008 in un altro computer, è necessario distribuire le versioni di debug delle DLL della libreria di Visual C\+\+ come assembly affiancati condivisi.  È possibile utilizzare un progetto di installazione o Windows Installer per installare i modelli unione corrispondenti.  
  
-   Utilizzare l'opzione \_**Distribuisci** nella finestra di dialogo **Gestione configurazione** in Visual Studio per copiare l'output del progetto e altri file nel computer remoto.  Per un esempio di questa distribuzione, vedere [Impostazione del debug remoto per un progetto di Visual Studio](../Topic/Set%20Up%20Remote%20Debugging%20for%20a%20Visual%20Studio%20Project.md).  
  
 Dopo aver installato le DDL della libreria di Visual C\+\+, è possibile eseguire un debugger remoto attraverso una condivisione di rete.  Per ulteriori informazioni sul debug remoto, consultare [Impostare Remote Tools sul dispositivo](../Topic/Set%20Up%20the%20Remote%20Tools%20on%20the%20Device.md).  
  
## Vedere anche  
 [Impostare Remote Tools sul dispositivo](../Topic/Set%20Up%20the%20Remote%20Tools%20on%20the%20Device.md)   
 [Distribuzione in Visual C\+\+](../ide/deployment-in-visual-cpp.md)   
 [Opzioni della riga di comando di Windows Installer](http://msdn.microsoft.com/library/windows/desktop/aa367988.aspx)   
 [Esempi di distribuzione](../ide/deployment-examples.md)