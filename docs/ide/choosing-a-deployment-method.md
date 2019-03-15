---
title: Scelta di un metodo di distribuzione
ms.date: 11/04/2016
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
ms.openlocfilehash: e755ad44d088dca77f012569cd3783079cd23f86
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57739716"
---
# <a name="choosing-a-deployment-method"></a>Scelta di un metodo di distribuzione

A meno che l'applicazione Visual C++ non sia completa e distribuibile tramite un comando di copia, è consigliabile usare Windows Installer per la distribuzione. Windows Installer supporta l'installazione, il ripristino e la disinstallazione, oltre all'aggiornamento atomico dei file, delle dipendenze e delle voci del Registro di sistema dell'applicazione.

> [!NOTE]
>  Sebbene la distribuzione [ClickOnce](/visualstudio/deployment/clickonce-security-and-deployment) per applicazioni Visual C++ native sia possibile in Visual Studio, richiede passaggi aggiuntivi. Per altre informazioni, vedere [ClickOnce Deployment for Visual C++ Applications](../ide/clickonce-deployment-for-visual-cpp-applications.md).

## <a name="visual-c-libraries-are-shared-dlls"></a>Le librerie di Visual C++ sono DLL condivise

Poiché le librerie di Visual C++ vengono installate nella directory %windir%\system32\ dal programma di installazione di Visual Studio, quando si sviluppa un'applicazione Visual C++ con dipendenze da tali librerie, il funzionamento sarà quello previsto. Tuttavia, per distribuire l'applicazione in computer in cui Visual Studio potrebbe non essere presente, è consigliabile assicurarsi che le librerie vengano installate in questi computer insieme all'applicazione.

## <a name="redistributing-visual-c-libraries"></a>Ridistribuzione delle librerie di Visual C++

Nelle distribuzioni è possibile ridistribuire qualsiasi versione di una libreria di Visual C++ concessa in licenza per la ridistribuzione. Di seguito sono descritti tre modi per distribuirla:

- Distribuzione centrale tramite pacchetti ridistribuibili: consente di installare le librerie di Visual C++ come DLL condivise nella directory %windir%\system32\\. Per l'installazione in questa cartella è necessario avere diritti di amministratore. È possibile creare uno script o un programma di installazione che esegua il pacchetto ridistribuibile prima dell'installazione dell'applicazione nel computer di destinazione. I pacchetti ridistribuibili sono disponibili per le piattaforme x86, x64 e ARM (VCRedist_x86.exe, VCRedist_x64.exe o VCRedist_arm.exe). In Visual Studio questi pacchetti sono contenuti in %ProgramFiles(x86)%\Microsoft Visual Studio `version`\VC\Redist\\`locale ID`\\. È anche possibile scaricarli dall'[Area download Microsoft](http://go.microsoft.com/fwlink/p/?linkid=132793). Usare la casella di ricerca nell'Area download per cercare "Visual C++ Redistributable Package *versione e aggiornamento di Visual Studio*" che corrisponde all'applicazione. Se ad esempio per compilare l'applicazione si è usato l'aggiornamento 3 di Visual Studio 2015, cercare "Visual C++ Redistributable Package 2015 aggiornamento 3". Per informazioni sull'uso di un pacchetto ridistribuibile, vedere [Procedura dettagliata: Distribuzione di un'applicazione Visual C++ tramite Visual C++ Redistributable Package](../ide/deploying-visual-cpp-application-by-using-the-vcpp-redistributable-package.md).

- Distribuzione centrale tramite modelli unione: ognuno di questi modelli installa una determinata libreria di Visual C++ come DLL condivisa nella directory %windir%\system32\\. Per l'installazione in questa cartella è necessario avere diritti di amministratore. I modelli unione diventano parte del file del programma di installazione con estensione msi per l'applicazione. I modelli unione ridistribuibili di Visual C++ sono inclusi in Visual Studio, nella directory \Programmi (x86)\Common Files\Merge Modules\\. Per altre informazioni, vedere [Ridistribuzione tramite modelli unione](../ide/redistributing-components-by-using-merge-modules.md).

- Distribuzione locale: le DLL di Visual C++ vengono copiate dall'installazione di Visual Studio, in genere la directory \Programmi (x86)\Microsoft Visual Studio `version`\VC\Redist\\`platform`\\`library`\, e installate nei computer di destinazione nella stessa cartella dell'eseguibile dell'applicazione. È possibile utilizzare questo metodo di distribuzione per consentire l'installazione a utenti che non dispongono dei diritti di amministratore o per applicazioni eseguibili da una condivisione di rete.

Se una distribuzione usa i modelli unione ridistribuibili e un'installazione viene eseguita da un utente che non ha diritti di amministratore, le DLL di Visual C++ non vengono installate e l'applicazione non viene eseguita. Inoltre, i programmi di installazione compilati con modelli unione che consentono l'installazione su base utente, installano le librerie in percorsi condivisi che hanno un impatto su tutti gli utenti del sistema. È possibile usare la distribuzione locale per installare le DLL di Visual C++ necessarie nella directory di un'applicazione di un determinato utente senza influire su altri utenti o richiedere i privilegi di amministratore. Poiché questo può creare problemi di manutenzione, è consigliabile evitare la distribuzione locale delle DLL ridistribuibili di Visual C++.

L'errata distribuzione delle librerie di Visual C++ può causare errori di runtime durante l'esecuzione di un'applicazione che dipende da tali librerie. Quando il sistema operativo carica l'applicazione, usa l'ordine di ricerca descritto in [LoadLibraryEx](http://go.microsoft.com/fwlink/p/?linkid=132792)

## <a name="dynamic-linking-is-better-than-static-linking"></a>Il collegamento dinamico è preferibile rispetto a quello statico

Per la ridistribuzione delle librerie di Visual C++, è consigliabile evitare il collegamento statico. Sebbene il collegamento statico non migliori quasi mai le prestazioni dell'applicazione, quasi sempre rende più costosa la manutenzione. Si consideri ad esempio un'applicazione collegata in modo statico a una libreria che è stata aggiornata a livello di sicurezza. L'applicazione non trarrà alcun vantaggio, a meno che non venga ricompilata e ridistribuita. È invece consigliabile collegare in modo dinamico le applicazioni alle librerie da cui dipendono in modo da consentire l'aggiornamento delle librerie ovunque vengano distribuite.

## <a name="see-also"></a>Vedere anche

[Distribuzione di applicazioni desktop](../ide/deploying-native-desktop-applications-visual-cpp.md)<br>
[Sicurezza e distribuzione di ClickOnce](/visualstudio/deployment/clickonce-security-and-deployment)<br>
[Esempi di distribuzione](../ide/deployment-examples.md)
