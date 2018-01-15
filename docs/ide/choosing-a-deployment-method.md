---
title: Scelta di un metodo di distribuzione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- redistributing DLLs
- manifests [C++]
- DLLs [C++], redistributing
- side-by-side assemblies [C++]
- dynamic linking [C++]
- application deployment [C++], methods
- deploying applications [C++], methods
- static linking [C++]
- libraries [C++], application deployment issues
ms.assetid: fd8eb956-f4a0-4ffb-b401-328c73e66986
caps.latest.revision: "35"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1c444b3319c60b80bdfdc14000a41d65869d0514
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="choosing-a-deployment-method"></a>Scelta di un metodo di distribuzione
A meno che l'applicazione Visual C++ è indipendente e può essere distribuita tramite un comando di copia, è consigliabile utilizzare Windows Installer per la distribuzione. Windows Installer supporta l'installazione, il ripristino e la disinstallazione, oltre all'aggiornamento atomico dei file, delle dipendenze e delle voci del Registro di sistema dell'applicazione.  
  
> [!NOTE]
>  Sebbene [ClickOnce](/visualstudio/deployment/clickonce-security-and-deployment) distribuzione per applicazioni native di Visual C++ è possibile in Visual Studio, richiede passaggi aggiuntivi. Per altre informazioni, vedere [ClickOnce Deployment for Visual C++ Applications](../ide/clickonce-deployment-for-visual-cpp-applications.md).  
  
## <a name="visual-c-libraries-are-shared-dlls"></a>Le librerie di Visual C++ sono DLL condivise  
 Poiché le librerie di Visual C++ vengono installate nella directory %windir%\system32\ dal programma di installazione di Visual Studio, quando si sviluppa un'applicazione Visual C++ con dipendenze da tali librerie, il funzionamento sarà quello previsto. Tuttavia, per distribuire l'applicazione in computer in cui Visual Studio potrebbe non essere presente, è consigliabile assicurarsi che le librerie vengano installate in questi computer insieme all'applicazione.  
  
## <a name="redistributing-visual-c-libraries"></a>Ridistribuzione delle librerie di Visual C++  
 Nelle distribuzioni è possibile ridistribuire qualsiasi versione di una libreria di Visual C++ concessa in licenza per la ridistribuzione. Di seguito sono descritti tre modi per distribuirla:  
  
-   Distribuzione centrale tramite pacchetti ridistribuibili, che consente di installare le librerie di Visual C++ come DLL condivise nella directory %windir%\system32\\. (L'installazione in questa cartella richiede diritti di amministratore). È possibile creare uno script o un programma di installazione che esegua il pacchetto ridistribuibile prima dell'installazione dell'applicazione nel computer di destinazione. I pacchetti ridistribuibili sono disponibili per le piattaforme x86, x64 e ARM (VCRedist_x86.exe, VCRedist_x64.exe o VCRedist_arm.exe). Visual Studio include i pacchetti in % ProgramFiles (x86) %\Microsoft Visual Studio `version`\vc\redist.\\`locale ID`\\. È inoltre possibile scaricare dal [Microsoft Download Center](http://go.microsoft.com/fwlink/p/?linkid=132793). (Nell'area download, cercare il "Visual C++ Redistributable Package *versione di Visual Studio e aggiornamento*" che corrisponde all'applicazione. Se ad esempio si è utilizzato l'aggiornamento 4 di Visual Studio 2012 per compilare l'applicazione, cercare "Visual C++ Redistributable Package 2012 update 4"). Per informazioni sull'utilizzo di un pacchetto ridistribuibile, vedere [procedura dettagliata: distribuzione di un Visual C++ applicazione mediante Visual C++ Redistributable Package](../ide/deploying-visual-cpp-application-by-using-the-vcpp-redistributable-package.md).  
  
-   Distribuzione centrale tramite modelli unione, ognuno dei quali installa una determinata libreria di Visual C++ come DLL condivisa nella directory %windir%\system32\\. (L'installazione in questa cartella richiede diritti di amministratore). I modelli merge diventano parte del file del programma di installazione MSI dell'applicazione. I modelli unione ridistribuibili di Visual C++ sono inclusi in Visual Studio, in \Programmi Files (x86) \Common moduli\\. Per ulteriori informazioni, vedere [ridistribuzione da tramite modelli unione](../ide/redistributing-components-by-using-merge-modules.md).  
  
-   Distribuzione locale, in cui DLL di Visual C++ dall'installazione di Visual Studio, in genere in \Programmi (x86) \Microsoft Visual Studio `version`\vc\redist.\\`platform`\\`library`\—and li installano nel computer di destinazione nella stessa cartella del file eseguibile dell'applicazione. È possibile utilizzare questo metodo di distribuzione per consentire l'installazione a utenti che non dispongono dei diritti di amministratore o per applicazioni eseguibili da una condivisione di rete.  
  
 Se una distribuzione utilizza i modelli unione ridistribuibili e un'installazione viene eseguita da un utente che dispone di diritti amministrativi, la DLL di Visual C++ non sono installate e non verrà eseguita l'applicazione. Inoltre, i programmi di installazione compilati con modelli merge che consentono l'installazione su base utente, installano le librerie in percorsi condivisi che hanno un impatto su tutti gli utenti del sistema. È possibile utilizzare la distribuzione locale per installare la DLL di Visual C++ necessari nella directory dell'applicazione di un determinato utente senza influire su altri utenti o richiedere i privilegi di amministratore. Poiché questo può creare problemi di facilità di manutenzione, è consigliabile non distribuzione locale delle DLL ridistribuibili di Visual C++.  
  
 L'errata distribuzione delle librerie di Visual C++ può causare errori di runtime durante l'esecuzione di un'applicazione che dipende da tali librerie. Quando il sistema operativo viene caricata l'applicazione, viene utilizzato l'ordine di ricerca descritto in [LoadLibraryEx](http://go.microsoft.com/fwlink/p/?linkid=132792)  
  
## <a name="dynamic-linking-is-better-than-static-linking"></a>Il collegamento dinamico è preferibile rispetto a quello statico  
 Si consiglia di evitare il collegamento statico quando si ridistribuire le librerie di Visual C++. Sebbene il collegamento statico non migliori quasi mai le prestazioni dell'applicazione, quasi sempre rende più costosa la manutenzione. Si consideri ad esempio un'applicazione collegata in modo statico a una libreria che è stata aggiornata a livello di sicurezza. L'applicazione non trarrà alcun vantaggio, a meno che non venga ricompilata e ridistribuita. È invece consigliabile collegare in modo dinamico le applicazioni alle librerie da cui dipendono in modo da consentire l'aggiornamento delle librerie ovunque vengano distribuite.  
  
## <a name="see-also"></a>Vedere anche  
 [Distribuzione di applicazioni Desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)   
 [Non incluso nella Build: scelta di una strategia di distribuzione](http://msdn.microsoft.com/en-us/ecd632d8-063c-4028-b785-81bba045107b)   
 [Cenni preliminari sulla distribuzione di Windows Installer](http://msdn.microsoft.com/en-us/3ce4610a-b54f-404e-b650-42f4a55dfc3b)   
 [Sicurezza e distribuzione di ClickOnce](/visualstudio/deployment/clickonce-security-and-deployment)   
 [Esempi di distribuzione](../ide/deployment-examples.md)