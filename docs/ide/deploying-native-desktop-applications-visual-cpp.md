---
title: Distribuzione di applicazioni Desktop Native (Visual C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- deploying applications [C++]
- application deployment [C++]
- Visual C++, application deployment
- application deployment [C++], about application deployment
- deploying applications [C++], about deploying applications
- distributing applications [C++]
ms.assetid: 37f1691e-d67c-41e4-926e-528a237a9bac
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1fe88a322314ac24fa5799735e84ff100efa2e79
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="deploying-native-desktop-applications-visual-c"></a>Distribuzione di applicazioni desktop native (Visual C++)
La distribuzione rappresenta il processo con il quale si mette a disposizione un'applicazione o un componente pronto per l'installazione su altri computer. La pianificazione della distribuzione inizia quando viene creata un'applicazione nel computer di uno sviluppatore. La distribuzione termina quando l'applicazione è installata e pronta per essere eseguita nel computer di un utente.  
  
 Visual Studio offre le diverse tecnologie per la distribuzione di applicazioni Windows. Queste includono la distribuzione ClickOnce e distribuzione di Windows Installer.  
  
-   ClickOnce può essere utilizzato per distribuire le applicazioni C++ destinate a common language runtime (CLR), assembly misti, puri e verificabili. Sebbene sia possibile utilizzare Windows Installer per distribuire un'applicazione gestita, è consigliabile utilizzare ClickOnce, in quanto consente di usufruire delle funzionalità di sicurezza di .NET Framework, ad esempio la firma del manifesto. ClickOnce non supporta la distribuzione di applicazioni C++ native. Per altre informazioni, vedere [ClickOnce Deployment for Visual C++ Applications](../ide/clickonce-deployment-for-visual-cpp-applications.md).  
  
-   La tecnologia Windows Installer può essere usata per distribuire applicazioni C++ native o applicazioni C++ destinate al CLR.  
  
 Gli articoli presenti in questa sezione della documentazione illustrano come assicurare che un'applicazione Visual C++ nativa venga eseguita in un qualsiasi computer che offre una piattaforma di destinazione supportata, quali file è necessario includere in un pacchetto di installazione e le modalità consigliate per ridistribuire i componenti da cui dipende l'applicazione.  
  
## <a name="in-this-section"></a>In questa sezione  
 [Distribuzione in Visual C++](../ide/deployment-in-visual-cpp.md)  
  
 [Concetti della distribuzione](../ide/deployment-concepts.md)  
  
 [Informazioni sulle dipendenze di un'applicazione Visual C++](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md)  
  
 [Determinazione delle DLL da ridistribuire](../ide/determining-which-dlls-to-redistribute.md)  
  
 [Scelta di un metodo di distribuzione](../ide/choosing-a-deployment-method.md)  
  
 [Ridistribuzione di file Visual C++](../ide/redistributing-visual-cpp-files.md)  
  
 [Esempi di distribuzione](../ide/deployment-examples.md)  
  
 [Ridistribuzione di applicazioni client Web](../ide/redistributing-web-client-applications.md)  
  
 [Distribuzione ClickOnce per applicazioni Visual C++](../ide/clickonce-deployment-for-visual-cpp-applications.md)  
  
 [Esecuzione di un'applicazione /clr C++ su una versione Runtime precedente](../ide/running-a-cpp-clr-application-on-a-previous-runtime-version.md)  
  
## <a name="related-sections"></a>Sezioni correlate  
 [Compilazione di applicazioni isolate C/C++ e di assembly side-by-side](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)  
  
 [Distribuzione](/dotnet/framework/deployment/index)  
  
 [Risoluzione dei problemi relativi alle applicazioni isolate C/C++ e agli assembly side-by-side](../build/troubleshooting-c-cpp-isolated-applications-and-side-by-side-assemblies.md)