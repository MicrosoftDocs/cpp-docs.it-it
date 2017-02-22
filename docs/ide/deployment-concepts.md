---
title: "Concetti principali della distribuzione | Microsoft Docs"
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
  - "distribuzione di applicazioni [C++], informazioni sulla distribuzione di applicazioni"
  - "dipendenze [C++], distribuzione di applicazioni"
  - "distribuzione di applicazioni [C++], informazioni sulla distribuzione di applicazioni"
  - "librerie [C++], problemi relativi alla distribuzione di applicazioni"
  - "Windows Installer [C++]"
ms.assetid: ebd7f246-ab54-40e8-87fa-dac02c0047b3
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Concetti principali della distribuzione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questa sezione vengono illustrate le principali considerazioni sulla distribuzione di applicazioni C\+\+.  
  
## Distribuzione in C\+\+ mediante Windows Installer  
 I progetti di Visual C\+\+ in genere utilizzano il programma di installazione tradizionale di Windows Installer per la distribuzione.  Per preparare la distribuzione mediante Windows Installer, l'applicazione viene assemblata in un file setup.exe e tale file viene distribuito insieme a un package di installazione \(con estensione msi\).  Gli utenti dovranno quindi eseguire setup.exe per installare l'applicazione.  
  
 Nell'assemblare l'applicazione, viene aggiunto un progetto di installazione alla soluzione. Quando viene compilato, il progetto crea il file di installazione e quelli del package di installazione da distribuire agli utenti.   Per ulteriori informazioni, vedere [Scelta di un metodo di distribuzione](../ide/choosing-a-deployment-method.md).  
  
## Dipendenze di libreria  
 Quando un'applicazione C\/C\+\+ viene compilata con funzionalità fornite dalle librerie di Visual C\+\+, diventa dipendente dalla presenza di tali librerie in fase di esecuzione.  Per poter essere eseguita, l'applicazione deve essere collegata, in modo statico o dinamico, alle librerie di Visual C\+\+ necessarie.  Se un'applicazione viene collegata in modo dinamico a una libreria di Visual C\+\+, è necessario che al momento dell'esecuzione tale libreria sia presente in modo che possa essere caricata.  Se invece l'applicazione viene collegata in modo statico a una libreria di Visual C\+\+, non sarà necessaria la presenza delle DLL corrispondenti sul computer dell'utente.  Il collegamento statico presenta tuttavia alcuni aspetti negativi, quali l'aumento delle dimensioni dei file dell'applicazione e la possibilità di maggiori difficoltà nella manutenzione.  Per ulteriori informazioni, vedere [Vantaggi dell'utilizzo delle DLL](../build/advantages-of-using-dlls.md).  
  
## Creazione del package e ridistribuzione  
 Le librerie di Visual C\+\+ vengono inserite nel package come DLL e tutte le librerie necessarie per le applicazioni C\/C\+\+ vengono installate mediante Visual Studio nel computer dello sviluppatore.   Al momento della distribuzione di un'applicazione agli utenti, tuttavia, non è possibile in molti casi richiedere loro di installare Visual Studio per consentire l'esecuzione dell'applicazione.  È importante pertanto che sia possibile ridistribuire solo le parti di Visual C\+\+ necessarie per la corretta esecuzione dell'applicazione.  
  
 Per ulteriori informazioni sulla creazione del package e la ridistribuzione, vedere gli argomenti riportati di seguito:  
  
-   [Determinazione delle DLL da ridistribuire](../ide/determining-which-dlls-to-redistribute.md).  
  
-   [Scelta di un metodo di distribuzione](../ide/choosing-a-deployment-method.md).  
  
 Per esempi di distribuzione e suggerimenti relativi alla risoluzione dei problemi, vedere:  
  
-   [Esempi di distribuzione](../ide/deployment-examples.md).  
  
-   [Risoluzione dei problemi](../build/troubleshooting-c-cpp-isolated-applications-and-side-by-side-assemblies.md).  
  
## Vedere anche  
 [Distribuzione di applicazioni desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)   
 [Informazioni sulle dipendenze di un'applicazione Visual C\+\+](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md)   
 [Windows Installer Deployment](http://msdn.microsoft.com/it-it/121be21b-b916-43e2-8f10-8b080516d2a0)