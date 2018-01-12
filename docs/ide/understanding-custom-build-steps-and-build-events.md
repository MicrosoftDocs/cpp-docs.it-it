---
title: Informazioni sulle istruzioni di compilazione personalizzata e gli eventi di compilazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- builds [C++], events
- custom build steps [C++], customizing builds
- events [C++], build
- custom build steps [C++]
- build steps [C++]
- build events [C++], order of events and build steps
- build steps [C++], build events
- builds [C++], custom build steps
ms.assetid: beb2f017-3e9f-4b2c-9b57-2572fd2628e4
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9abb7ff0b9a39656999e7a53b476056f7a5b1558
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="understanding-custom-build-steps-and-build-events"></a>Informazioni sulle istruzioni di compliazione personalizzate e sugli eventi di compilazione
All'interno dell'ambiente di sviluppo di Visual C++, esistono tre modi principali per personalizzare il processo di compilazione:  
  
 **Istruzioni di compilazione personalizzate**  
 Un'istruzione di compilazione personalizzata è una regola di compilazione associata a un progetto. Un'istruzione di compilazione personalizzato è possibile specificare una riga di comando da eseguire, qualsiasi input aggiuntivo o file di output e un messaggio da visualizzare. Per ulteriori informazioni, vedere [procedura: aggiungere un'istruzione di compilazione personalizzata a progetti MSBuild](../build/how-to-add-a-custom-build-step-to-msbuild-projects.md).  
  
 **Strumenti di compilazione personalizzata**  
 Uno strumento di compilazione personalizzata è una regola di compilazione associata a uno o più file. Un'istruzione di compilazione personalizzato è possibile passare i file di input a uno strumento di compilazione personalizzata, che restituisce uno o più file di output. Ad esempio, i file della Guida in un'applicazione MFC vengono compilati con uno strumento di compilazione personalizzata. Per ulteriori informazioni, vedere [procedura: aggiungere creare strumenti personalizzati a progetti MSBuild](../build/how-to-add-custom-build-tools-to-msbuild-projects.md) e [strumenti di compilazione personalizzato specificando](../ide/specifying-custom-build-tools.md).  
  
 **Eventi di compilazione**  
 Gli eventi di compilazione consentano di personalizzare la compilazione del progetto. Esistono tre eventi di compilazione: *pre-compilazione*, *pre-collegamento*, e *post-compilazione*. Un evento di compilazione consente di specificare un'azione da eseguire in un momento specifico nel processo di compilazione. Ad esempio, è possibile utilizzare un evento di compilazione per registrare un file con **regsvr32.exe** termine della compilazione del progetto. Per ulteriori informazioni, vedere [specificare eventi di compilazione](../ide/specifying-build-events.md).  
  
 [Risoluzione dei problemi di compilazione personalizzazioni](../ide/troubleshooting-build-customizations.md) consentono di verificare che le istruzioni di compilazione personalizzata e compilare gli eventi vengono eseguiti come previsto.  
  
 Il formato di output di un oggetto personalizzato di istruzione di compilazione o evento di compilazione può anche migliorare l'utilizzabilità dello strumento. Per altre informazioni, vedere [Formattazione dell'output di un'istruzione di compilazione personalizzata o un evento di compilazione](../ide/formatting-the-output-of-a-custom-build-step-or-build-event.md).  
  
 Gli eventi di compilazione e personalizzata di compilazione passaggi eseguiti nell'ordine seguente insieme ad altre operazioni di compilazione:  
  
1.  Evento di pre-compilazione  
  
2.  Strumenti sui singoli file di compilazione personalizzata  
  
3.  MIDL  
  
4.  Compilatore di risorse  
  
5.  Il compilatore C/C++  
  
6.  evento di pre-collegamento  
  
7.  Linker o Gestione librerie (se necessario)  
  
8.  Strumento Manifesto  
  
9. BSCMake  
  
10. Istruzione di compilazione personalizzata nel progetto  
  
11. Evento di post-compilazione  
  
 Il `custom build step on the project` e `post-build event` eseguire in sequenza dopo la compilazione di tutti gli altri processi.  
  
## <a name="see-also"></a>Vedere anche  
 [Compilazione di progetti C++ in Visual Studio](../ide/building-cpp-projects-in-visual-studio.md)   
 [Macro comuni per le proprietà e i comandi di compilazione](../ide/common-macros-for-build-commands-and-properties.md)   
 [Finestra di dialogo Strumento ordine di compilazione](http://msdn.microsoft.com/en-us/6204c5b1-7ce9-4948-9ff6-0268642ee14c)