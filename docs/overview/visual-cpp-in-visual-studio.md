---
title: C++ in Visual Studio
description: Informazioni su come usare il compilatore Microsoft C/C++, l'editor di codice e gli strumenti correlati in Visual Studio per sviluppare programmi per Windows, Linux, Android e iOS.
ms.date: 11/05/2020
ms.technology: cpp-ide
helpviewer_keywords:
- Visual C++, home page
ms.openlocfilehash: 32d8f45c1ae0ffeabcfd7b22988f125b138c1f4d
ms.sourcegitcommit: 12eb6a824dd7187a065d44fceca4c410f58e121e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/06/2020
ms.locfileid: "94334156"
---
# <a name="c-in-visual-studio"></a>C++ in Visual Studio

:::moniker range="msvc-160"

> [!NOTE]
> Questa documentazione per sviluppatori si applica a Visual Studio 2019. Per visualizzare la documentazione per la versione preferita di Visual Studio, usare il controllo selettore della **versione** . Si trova nella parte superiore del sommario in questa pagina.
>
> Se si sta cercando un pacchetto ridistribuibile Microsoft Visual C++ 2019, in modo da poter eseguire un programma, passare alla pagina di [download](https://visualstudio.microsoft.com/downloads/) del sito Microsoft Visual Studio. In **tutti i download** , espandere la sezione **altri strumenti, Framework e ridistribuibili** . Selezionare l'architettura di destinazione, quindi scegliere il pulsante **download** .
>
> Per i ridistribuibili precedenti, aprire la pagina di [download precedente](https://visualstudio.microsoft.com/vs/older-downloads/) . Espandere la sezione **altri strumenti, Framework e ridistribuibili** . Trovare la versione ridistribuibile che si vuole scaricare, selezionare l'architettura di destinazione, quindi scegliere il pulsante **download** .

:::moniker-end

:::moniker range="msvc-150"

> [!NOTE]
> Questa documentazione per sviluppatori si applica a Visual Studio 2017. Per visualizzare la documentazione per la versione preferita di Visual Studio, usare il controllo selettore della **versione** . Si trova nella parte superiore del sommario in questa pagina.
>
> Se si sta cercando un pacchetto ridistribuibile Microsoft Visual C++ 2017 o versione precedente, in modo da poter eseguire un programma, passare alla pagina di [download più obsoleta](https://visualstudio.microsoft.com/vs/older-downloads/) del sito Microsoft Visual Studio. Espandere la sezione **altri strumenti, Framework e ridistribuibili** . Trovare la versione ridistribuibile che si vuole scaricare, selezionare l'architettura di destinazione, quindi scegliere il pulsante **download** .

:::moniker-end

:::moniker range="msvc-140"

> [!NOTE]
> Questa documentazione per sviluppatori si applica a Visual Studio 2015. Per visualizzare la documentazione per la versione preferita di Visual Studio, usare il controllo selettore della **versione** . Si trova nella parte superiore del sommario in questa pagina.
>
> Se si sta cercando un pacchetto ridistribuibile Microsoft Visual C++ 2015 o versione precedente, in modo da poter eseguire un programma, passare alla pagina di [download più obsoleta](https://visualstudio.microsoft.com/vs/older-downloads/) del sito Microsoft Visual Studio. Espandere la sezione **altri strumenti, Framework e ridistribuibili** . Trovare la versione ridistribuibile che si vuole scaricare, selezionare l'architettura di destinazione, quindi scegliere il pulsante **download** .

:::moniker-end

Microsoft Visual C++ (MSVC) si riferisce agli strumenti e alle librerie di sviluppo del linguaggio C++, C e assembly disponibili come parte di Visual Studio in Windows. Questi strumenti e librerie consentono di creare app per la piattaforma UWP (Universal Windows Platform), applicazioni server e desktop Windows native, app e librerie multipiattaforma eseguite in Windows, Linux, Android e iOS, nonché librerie e app gestite che usano .NET Framework. È possibile usare MSVC per scrivere qualsiasi elemento da semplici app console alle app più sofisticate e complesse per Windows desktop, da driver di dispositivo e componenti del sistema operativo a giochi multipiattaforma per dispositivi mobili e dai più piccoli dispositivi Internet alle High Performance Computing multiserver nel cloud di Azure.

Visual Studio 2015, 2017 e 2019 possono essere installati side-by-side. È possibile usare Visual Studio 2019 (set di strumenti del compilatore V142) o Visual Studio 2017 (V141) per modificare e compilare programmi usando il set di strumenti di Visual Studio 2017 (V141) e Visual Studio 2015 (V140).

## <a name="whats-new-and-conformance-history"></a>Novità e cronologia conformità

[Novità di C++ in Visual Studio](what-s-new-for-visual-cpp-in-visual-studio.md)\
Scopri le novità di Visual Studio.

[Novità di C++ in Visual Studio da 2003 a 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md)\
Novità di C++ introdotte per ogni versione di Visual Studio, dalla versione 2003 alla versione 2015.

[Miglioramenti della conformità di C++ in Visual Studio](cpp-conformance-improvements.md)\
Informazioni sui miglioramenti della conformità di C++ in Visual Studio.

[Tabella di conformità del linguaggio Microsoft C++](visual-cpp-language-conformance.md)\
Elenco dello stato di conformità per funzionalità nel compilatore MSVC C++.

[Cronologia delle modifiche di Microsoft C/C++ 2003-2015](../porting/visual-cpp-change-history-2003-2015.md)\
Informazioni sulle modifiche importanti nelle versioni precedenti.

## <a name="install-visual-studio-and-upgrade-from-earlier-versions"></a>Installare Visual Studio ed eseguire l'aggiornamento dalle versioni precedenti

[Installare il supporto di C++ in Visual Studio](../build/vscpp-step-0-installation.md)\
Scaricare Visual Studio e installare il set di strumenti di Microsoft C/C++.

[Guida al porting e aggiornamento di Microsoft C++](../porting/visual-cpp-porting-and-upgrading-guide.md)\
Linee guida per la portabilità del codice e l'aggiornamento dei progetti a Visual Studio 2015 o versione successiva per beneficiare della maggiore conformità del compilatore allo standard C++, di tempi di compilazione notevolmente migliorati e di funzionalità di sicurezza quali la mitigazione Spectre.

[Strumenti e funzionalità di C++ nelle edizioni di Visual Studio](visual-cpp-tools-and-features-in-visual-studio-editions.md)\
Informazioni sulle varie edizioni di Visual Studio.

[Piattaforme supportate](supported-platforms-visual-cpp.md)\
Individuare le piattaforme supportate dal compilatore Microsoft C/C++.

## <a name="learn-c"></a>Informazioni su C++

[C++](../cpp/welcome-back-to-cpp-modern-cpp.md)\
Altre informazioni sulle moderne tecniche di programmazione C++ basate su C++11 e versioni successive grazie alle quali è possibile scrivere codice sicuro in modo veloce evitando molti dei problemi tipici della programmazione nel linguaggio C.

[C++ standard](https://isocpp.org/)\
Informazioni su C++, panoramica di C++ moderno e collegamenti a libri, articoli, discussioni ed eventi

[Scopri Visual Studio e crea il tuo primo progetto C++](../build/vscpp-step-1-create.md)\
Inizia a imparare a scrivere C++ in Visual Studio.

[Esempi di Visual Studio C++](visual-cpp-samples.md)\
Informazioni sugli esempi di codice C++ forniti da Microsoft.

## <a name="c-development-tools"></a>Strumenti di sviluppo C++

[Panoramica dello sviluppo in C++ in Visual Studio](overview-of-cpp-development.md)\
Come usare l'IDE di Visual Studio per creare progetti, modificare il codice, collegare librerie, compilare, eseguire il debug, creare unit test, eseguire analisi statiche, distribuire e altro ancora.

[Progetti e sistemi di compilazione](../build/projects-and-build-systems-cpp.md)\
Come creare e configurare progetti di Visual Studio C++, progetti CMake e altri tipi di progetti con le opzioni del compilatore e del linker MSVC.

[Scrittura e refactoring del codice C++](../ide/writing-and-refactoring-code-cpp.md)\
Come usare le funzionalità di produttività disponibili nell'editor di C++ per esplorare, comprendere, scrivere codice ed effettuarne il refactoring.

[Debug del codice nativo](/visualstudio/debugger/debugging-native-code)\
Usare il debugger di Visual Studio con i progetti C++.

[Cenni preliminari sull'analisi del codice per C/C++](../code-quality/code-analysis-for-c-cpp-overview.md)\
Usare le annotazioni SAL o le verifiche di Linee guida di base di C++ per eseguire l'analisi statica.

[Scrivere unit test per C/C++ in Visual Studio](/visualstudio/test/writing-unit-tests-for-c-cpp)\
Creare unit test usando il framework di testing unità Microsoft per C++, Google Test, Boost.Test o CTest.

## <a name="write-applications-in-c"></a>Scrittura di applicazioni in C++

[App di Windows universale (C++)](../cppcx/universal-windows-apps-cpp.md)\
Guide e contenuto di riferimento di Windows Dev Center. Per informazioni sullo sviluppo di app UWP, vedere [Introduzione alla piattaforma UWP (Universal Windows Platform)](/windows/uwp/get-started/universal-application-platform-guide) e [Creare la prima app UWP in C++](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp).

[Applicazioni desktop (C++)](../windows/desktop-applications-visual-cpp.md)\
Informazioni su come creare applicazioni desktop C++ native tradizionali per Windows.

[Programmazione .NET con C++/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)\
Informazioni su come creare DLL che consentono l'interoperabilità tra programmi C++ e .NET nativi scritti in linguaggi come C# o Visual Basic.

[Programmazione Linux](../linux/index.yml)\
Usare l'IDE di Visual Studio per scrivere codice e distribuirlo in un computer Linux remoto per la compilazione con GCC.

[Creare DLL C/C++ in Visual Studio](../build/dlls-in-visual-cpp.md)\
Informazioni su come usare Win32, ATL e MFC per creare DLL desktop di Windows e su come compilare e registrare la DLL.

[Programmazione parallela](../parallel/parallel-programming-in-visual-cpp.md)\
Informazioni su come usare la libreria PPL (Parallel Patterns Library), C++ AMP, OpenMP e altre funzionalità correlate al multithreading in Windows.

[Procedure di sicurezza consigliate](../security/security-best-practices-for-cpp.md)\
Informazioni su come proteggere le applicazioni da codice dannoso e da un uso non autorizzato.

[Programmazione Web e cloud](../cloud/cloud-and-web-programming-in-visual-cpp.md)\
In C++, esistono diverse opzioni per la connessione al Web e al cloud.

[Accesso ai dati](../data/data-access-in-cpp.md)\
Connettersi ai database tramite ODBC e OLE DB.

[Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)\
Informazioni sull'uso di formati di testo e stringa diversi e sulle codifiche per lo sviluppo locale e internazionale.

## <a name="languages-reference"></a>Informazioni di riferimento sui linguaggi

[Riferimenti per il linguaggio C++](../cpp/cpp-language-reference.md)\
Guida di riferimento all'implementazione Microsoft del linguaggio di programmazione C++.

[Riferimenti per il preprocessore C/C++](../preprocessor/c-cpp-preprocessor-reference.md)\
Riferimento comune al preprocessore del linguaggio C e C++ condiviso.

[Riferimenti per il linguaggio C](../c-language/c-language-reference.md)\
Guida di riferimento per l'implementazione Microsoft del linguaggio di programmazione C.

[Intrinseci del compilatore e linguaggio dell'assembly](../intrinsics/compiler-intrinsics-and-assembly-language.md)\
Guide alle funzioni intrinseche del compilatore supportate o implementate dai compilatori Microsoft C/C++ in ogni piattaforma.

## <a name="c-libraries-in-visual-studio"></a>Librerie C++ in Visual Studio

Nelle sezioni seguenti vengono fornite informazioni sulle varie librerie C e C++ incluse in Visual Studio.

[Riferimenti alla libreria di runtime C](../c-runtime-library/c-run-time-library-reference.md)\
Include alternative migliorate dal punto di vista della sicurezza alle funzioni note per causare problemi di sicurezza.

[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)\
La libreria standard di C++.

[Active Template Library (ATL)](../atl/atl-com-desktop-components.md)\
Supporto per app e componenti COM.

[Librerie MFC (Microsoft Foundation Class)](../mfc/mfc-desktop-applications.md)\
Supporto per la creazione di app desktop con interfacce utente tradizionali o in stile Office.

[PPL (Parallel Patterns Library)](../parallel/concrt/parallel-patterns-library-ppl.md)\
Algoritmi paralleli e asincroni eseguiti sulla CPU.

[C++ AMP (C++ Accelerated Massive Parallelism)](../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)\
Algoritmi paralleli in modalità massiccia eseguiti sulla GPU.

[Libreria di modelli Windows Runtime (WRL)](../cppcx/wrl/windows-runtime-cpp-template-library-wrl.md)\
App e componenti UWP (Universal Windows Platform).

[Programmazione .NET con C++/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)\
Programmazione per Common Language Runtime (CLR).

## <a name="third-party-open-source-c-libraries"></a>Librerie C++ open source di terze parti

Lo strumento da riga di comando **vcpkg** semplifica notevolmente l'individuazione e l'installazione di oltre 900 librerie C++ open-source. Vedere [vcpkg: gestione pacchetti per C++ per Windows](../build/vcpkg.md).

## <a name="feedback-and-community"></a>Feedback e community

[Microsoft Docs Q&A](/answers/topics/c%2B%2B.html)\
Microsoft Docs ospita forum disponibili per la ricerca di domande e risposte. Aggiungere un `C++` tag al post per l'assistenza della community sui problemi correlati a C++.

[Come segnalare un problema con il set di strumenti di Microsoft C/C++](how-to-report-a-problem-with-the-visual-cpp-toolset.md)\
Informazioni su come creare report di errori efficaci sul set di strumenti di Microsoft C/C++ (compilatore, linker e altri strumenti) e su come inviare il report.

[Blog del team](https://devblogs.microsoft.com/cppblog/) di Microsoft C++\
Altre informazioni sulle nuove funzionalità e sugli aggiornamenti più recenti degli sviluppatori degli strumenti C++ in Visual Studio.

[Community degli sviluppatori di Visual Studio C++](https://aka.ms/vsfeedback/browsecpp)\
Ottenere supporto, archiviare bug e inviare suggerimenti per C++ in Visual Studio.
