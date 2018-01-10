---
title: Concetti relativi alla distribuzione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- Windows Installer [C++]
- dependencies [C++], application deployment and
- application deployment [C++], about application deployment
- deploying applications [C++], about deploying applications
- libraries [C++], application deployment issues
ms.assetid: ebd7f246-ab54-40e8-87fa-dac02c0047b3
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: b40865266548067e2dda3782e66802c0dbe2844e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="deployment-concepts"></a>Concetti principali della distribuzione
Questa sezione illustra le principali considerazioni per la distribuzione di applicazioni C++.  
  
## <a name="windows-installer-deployment-in-c"></a>Distribuzione di Windows Installer in C++  
 Progetti Visual C++, in genere, utilizzare il programma di installazione tradizionale di Windows Installer per la distribuzione. Per preparare una distribuzione di Windows Installer, un pacchetto dell'applicazione in un file setup.exe e distribuire tale file, insieme a un pacchetto di installazione (MSI). Gli utenti, quindi, eseguire setup.exe per installare l'applicazione.  
  
 Un pacchetto dell'applicazione mediante l'aggiunta di un progetto di installazione per la soluzione. durante la compilazione, viene creato il programma di installazione e il programma di installazione i file di pacchetto da distribuire agli utenti. Per ulteriori informazioni, vedere [scelta di un metodo di distribuzione](../ide/choosing-a-deployment-method.md).  
  
## <a name="library-dependencies"></a>Dipendenze libreria  
 Quando un'applicazione C/C++ viene compilata con funzionalità fornite dalle librerie di Visual C++, diventa dipendente dalla presenza di tali librerie in fase di esecuzione. Affinché l'esecuzione dell'applicazione, è necessario collegare, in modo statico o dinamico, le librerie di Visual C++ necessari. Se un'applicazione in modo dinamico i collegamenti a una raccolta di Visual C++, quindi, durante l'esecuzione di tale libreria devono essere presenti in modo può essere caricato. D'altra parte, se l'applicazione collegata in modo statico in una raccolta di Visual C++, quindi non è necessario le DLL corrispondenti siano presenti nel computer dell'utente. Collegamento statico, tuttavia, presenta alcuni aspetti negativi, ad esempio l'aumento delle dimensioni dei file dell'applicazione e rendendo potenzialmente più difficile la manutenzione. Per ulteriori informazioni, vedere [vantaggi dell'utilizzo delle DLL](../build/dlls-in-visual-cpp.md#advantages-of-using-dlls).  
  
## <a name="packaging-and-redistributing"></a>Creazione di pacchetti e la ridistribuzione  
 Sono inclusi nel pacchetto di librerie di Visual C++ come DLL, e tutte le librerie necessarie per le applicazioni C/C++ sono installate da Visual Studio sul computer dello sviluppatore. Tuttavia, quando si distribuisce l'applicazione agli utenti, non è consentita in molti casi di installazione di Visual Studio per eseguire l'applicazione. È importante essere in grado di ridistribuire solo le parti di Visual C++ necessari per eseguire correttamente l'applicazione.  
  
 Per ulteriori informazioni sulla creazione di pacchetti e la ridistribuzione, vedere gli argomenti seguenti:  
  
-   [Determinazione delle DLL da ridistribuire](../ide/determining-which-dlls-to-redistribute.md).  
  
-   [Scelta di un metodo di distribuzione](../ide/choosing-a-deployment-method.md).  
  
 Per esempi di distribuzione e suggerimenti sulla risoluzione dei problemi, vedere:  
  
-   [Esempi di distribuzione](../ide/deployment-examples.md).  
  
-   [Risoluzione dei problemi di C/C++ di applicazioni isolate e assembly Side-by-side](../build/troubleshooting-c-cpp-isolated-applications-and-side-by-side-assemblies.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Distribuzione di applicazioni Desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)   
 [Informazioni sulle dipendenze di un'applicazione Visual C++](../ide/understanding-the-dependencies-of-a-visual-cpp-application.md)   
 [Distribuzione con Windows Installer](http://msdn.microsoft.com/en-us/121be21b-b916-43e2-8f10-8b080516d2a0)