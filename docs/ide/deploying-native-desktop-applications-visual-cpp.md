---
title: "Distribuzione di applicazioni desktop native (Visual C++) | Microsoft Docs"
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
  - "distribuzione di applicazioni [C++]"
  - "distribuzione di applicazioni [C++]"
  - "Visual C++, distribuzione di applicazioni"
  - "distribuzione di applicazioni [C++], informazioni sulla distribuzione di applicazioni"
  - "distribuzione di applicazioni [C++], informazioni sulla distribuzione di applicazioni"
  - "distribuzione di applicazioni [C++]"
ms.assetid: 37f1691e-d67c-41e4-926e-528a237a9bac
caps.latest.revision: 28
caps.handback.revision: 28
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Distribuzione di applicazioni desktop native (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La distribuzione rappresenta il processo con il quale si mette a disposizione un'applicazione o un componente pronto per l'installazione su altri computer. La pianificazione della distribuzione inizia quando viene creata un'applicazione nel computer di uno sviluppatore. La distribuzione termina quando l'applicazione è installata e pronta per essere eseguita nel computer di un utente.  
  
 Visual Studio offre le diverse tecnologie per la distribuzione di applicazioni Windows. Queste includono la distribuzione e la distribuzione Windows Installer di [!INCLUDE[ndptecclick](../ide/includes/ndptecclick_md.md)].  
  
-   [!INCLUDE[ndptecclick](../ide/includes/ndptecclick_md.md)] può essere usato per distribuire applicazioni C\+\+ destinate al Common Language Runtime \(CLR\), assembly misti, puri e verificabili. Nonostante sia possibile usare Windows Installer per distribuire un'applicazione gestita, è consigliabile usare [!INCLUDE[ndptecclick](../ide/includes/ndptecclick_md.md)] perché sfrutta le funzionalità di sicurezza di .NET Framework come, ad esempio, la firma del manifesto.[!INCLUDE[ndptecclick](../ide/includes/ndptecclick_md.md)] non supporta la distribuzione di applicazioni C\+\+ native. Per altre informazioni, vedere [Distribuzione ClickOnce per applicazioni Visual C\+\+](../ide/clickonce-deployment-for-visual-cpp-applications.md).  
  
-   La tecnologia Windows Installer può essere usata per distribuire applicazioni C\+\+ native o applicazioni C\+\+ destinate al CLR.  
  
 Gli articoli presenti in questa sezione della documentazione illustrano come assicurare che un'applicazione Visual C\+\+ nativa venga eseguita in un qualsiasi computer che offre una piattaforma di destinazione supportata, quali file è necessario includere in un pacchetto di installazione e le modalità consigliate per ridistribuire i componenti da cui dipende l'applicazione.  
  
## In questa sezione  
 [Distribuzione in Visual C\+\+](../ide/deployment-in-visual-cpp.md)  
  
 [Concetti principali della distribuzione](../ide/deployment-concepts.md)  
  
 [Informazioni sulle dipendenze di un'applicazione Visual C\+\+](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md)  
  
 [Determinazione delle DLL da ridistribuire](../ide/determining-which-dlls-to-redistribute.md)  
  
 [Scelta di un metodo di distribuzione](../ide/choosing-a-deployment-method.md)  
  
 [Ridistribuzione di file Visual C\+\+](../ide/redistributing-visual-cpp-files.md)  
  
 [Esempi di distribuzione](../ide/deployment-examples.md)  
  
 [Ridistribuzione di applicazioni client Web](../ide/redistributing-web-client-applications.md)  
  
 [Distribuzione ClickOnce per applicazioni Visual C\+\+](../ide/clickonce-deployment-for-visual-cpp-applications.md)  
  
 [Esecuzione di un'applicazione \/clr C\+\+ su una versione runtime precedente](../ide/running-a-cpp-clr-application-on-a-previous-runtime-version.md)  
  
## Sezioni correlate  
 [Compilazione di applicazioni isolate C\/C\+\+ e di assembly side\-by\-side](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)  
  
 [Distribuzione](../Topic/Deploying%20the%20.NET%20Framework%20and%20Applications.md)  
  
 [Risoluzione dei problemi](../build/troubleshooting-c-cpp-isolated-applications-and-side-by-side-assemblies.md)