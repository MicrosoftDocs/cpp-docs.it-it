---
title: C++ in Visual Studio
description: Visual C++ è il nome del compilatore Microsoft C++, dell'editor di codice e degli strumenti correlati nell'IDE di Visual Studio. Usare Visual C++ per sviluppare programmi per Windows, Linux, Android e iOS.
ms.date: 07/02/2019
ms.technology: cpp-ide
helpviewer_keywords:
- Visual C++, home page
ms.openlocfilehash: cde4bf73548df2dd7f65e20aa39fa7275dd7e11b
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91500164"
---
# <a name="c-in-visual-studio"></a>C++ in Visual Studio

> [!NOTE]
> Questa documentazione per sviluppatori si applica a Visual Studio 2015 e versioni successive. Per visualizzare la documentazione per la versione preferita di Visual Studio, usare il controllo selettore della **versione** . Si trova nella parte superiore del sommario in questa pagina.
>
> Coloro che cercano un package ridistribuibile di Visual C++ per poter eseguire un programma possono visitare l'[Area download Microsoft](https://www.microsoft.com/download/) e digitare **Visual C++** nella casella di ricerca.

Microsoft Visual C++, in genere abbreviato in Visual C++ o MSVC, è il nome di librerie e strumenti di sviluppo in linguaggio assembly, C e C++ disponibili come parte di Visual Studio in Windows. Questi strumenti e librerie consentono di creare app per la piattaforma UWP (Universal Windows Platform), applicazioni server e desktop Windows native, app e librerie multipiattaforma eseguite in Windows, Linux, Android e iOS, nonché librerie e app gestite che usano .NET Framework. È possibile usare Visual C++ per scrivere un'ampia gamma di app che spaziano da semplici app console ad app più sofisticate e complesse per desktop Windows, da driver di dispositivo e componenti del sistema operativo a giochi multipiattaforma per dispositivi mobili e da app per i più piccoli dispositivi IoT ad app HPC (High Performance Computing) multi-server nel cloud di Azure.

Visual Studio 2015, 2017 e 2019 possono essere installati side-by-side. È possibile usare Visual Studio 2019 (set di strumenti del compilatore v142) per modificare e compilare programmi usando il set di strumenti di Visual Studio 2015 (v140) e Visual Studio 2017 (v141).

## <a name="whats-new-and-conformance-history"></a>Novità e cronologia conformità

[Novità di C++ in Visual Studio](what-s-new-for-visual-cpp-in-visual-studio.md)<br/>
Scopri le novità di Visual Studio.

[Novità di C++ da Visual Studio 2003 a Visual Studio 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md)<br/>
Novità di C++ introdotte per ogni versione di Visual Studio, dalla versione 2003 alla versione 2015.

[Miglioramenti della conformità di C++ in Visual Studio 2017](cpp-conformance-improvements.md)<br/>
Informazioni sui miglioramenti della conformità di C++ in Visual Studio.

[Tabella di conformità al linguaggio C++ di Microsoft](visual-cpp-language-conformance.md)<br/>
Elenco dello stato di conformità per funzionalità nel compilatore MSVC C++.

[Cronologia delle modifiche di Visual C++ dal 2003 al 2015](../porting/visual-cpp-change-history-2003-2015.md)<br/>
Informazioni sulle modifiche importanti nelle versioni precedenti.

## <a name="install-visual-studio-and-upgrade-from-earlier-versions"></a>Installare Visual Studio ed eseguire l'aggiornamento dalle versioni precedenti

[Installare il supporto C++ in Visual Studio](../build/vscpp-step-0-installation.md)<br/>
Download di Visual Studio 2017 o Visual Studio 2019 e installazione del set di strumenti Visual C++.

[Guida al porting e aggiornamento in Visual C++](../porting/visual-cpp-porting-and-upgrading-guide.md)<br/>
Linee guida per la portabilità del codice e l'aggiornamento dei progetti a Visual Studio 2015 o versione successiva per beneficiare della maggiore conformità del compilatore allo standard C++, di tempi di compilazione notevolmente migliorati e di funzionalità di sicurezza quali la mitigazione Spectre.

[Strumenti e funzionalità di Visual C++ nelle versioni di Visual Studio](visual-cpp-tools-and-features-in-visual-studio-editions.md)<br/>
Informazioni sulle varie edizioni di Visual Studio.

[Piattaforme supportate](supported-platforms-visual-cpp.md)<br/>
Informazioni sulle piattaforme supportate.

## <a name="learn-c"></a>Informazioni su C++

[Bentornati a C++](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
Altre informazioni sulle moderne tecniche di programmazione C++ basate su C++11 e versioni successive grazie alle quali è possibile scrivere codice sicuro in modo veloce evitando molti dei problemi tipici della programmazione nel linguaggio C.

[C++ standard](https://isocpp.org/)<br/>
Informazioni su C++, panoramica di C++ moderno e collegamenti a libri, articoli, discussioni ed eventi

[Informazioni su Visual C++](../build/vscpp-step-1-create.md)<br/>
Primi passi per acquisire familiarità con C++.

[Esempi di Visual Studio C++](visual-cpp-samples.md)<br/>
Informazioni sugli esempi.

## <a name="c-development-tools"></a>Strumenti di sviluppo C++

[Panoramica dello sviluppo in C++ in Visual Studio](overview-of-cpp-development.md)<br/>
Come usare l'IDE di Visual Studio per creare progetti, modificare il codice, collegare librerie, compilare, eseguire il debug, creare unit test, eseguire analisi statiche, distribuire e altro ancora.

[Progetti e sistemi di compilazione](../build/projects-and-build-systems-cpp.md)<br/>
Come creare e configurare progetti di Visual Studio C++, progetti CMake e altri tipi di progetti con le opzioni del compilatore e del linker MSVC.

[Scrittura e refactoring del codice C++](../ide/writing-and-refactoring-code-cpp.md)<br/>
Come usare le funzionalità di produttività disponibili nell'editor di C++ per esplorare, comprendere, scrivere codice ed effettuarne il refactoring.

[Debug del codice nativo](/visualstudio/debugger/debugging-native-code)<br/>
Usare il debugger di Visual Studio con i progetti C++.

[Cenni preliminari sull'analisi del codice per C/C++](../code-quality/code-analysis-for-c-cpp-overview.md)<br/>
Usare le annotazioni SAL o le verifiche di Linee guida di base di C++ per eseguire l'analisi statica.

[Scrivere unit test per C/C++ in Visual Studio](/visualstudio/test/writing-unit-tests-for-c-cpp)<br/>
Creare unit test usando il framework di testing unità Microsoft per C++, Google Test, Boost.Test o CTest.

## <a name="write-applications-in-c"></a>Scrittura di applicazioni in C++

[App di Windows universale (C++)](../cppcx/universal-windows-apps-cpp.md)<br/>
Guide e contenuto di riferimento di Windows Dev Center. Per informazioni sullo sviluppo di app UWP, vedere [Introduzione alla piattaforma UWP (Universal Windows Platform)](/windows/uwp/get-started/universal-application-platform-guide) e [Creare la prima app UWP in C++](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp).

[Applicazioni desktop (C++)](../windows/desktop-applications-visual-cpp.md)<br/>
Informazioni su come creare applicazioni desktop C++ native tradizionali per Windows.

[Programmazione .NET con C++/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)<br/>
Informazioni su come creare DLL che consentono l'interoperabilità tra programmi C++ e .NET nativi scritti in linguaggi come C# o Visual Basic.

[Programmazione Linux](../linux/index.yml)<br/>
Usare l'IDE di Visual Studio per scrivere codice e distribuirlo in un computer Linux remoto per la compilazione con GCC.

[Creare DLL C/C++ in Visual Studio](../build/dlls-in-visual-cpp.md)<br/>
Informazioni su come usare Win32, ATL e MFC per creare DLL desktop di Windows e su come compilare e registrare la DLL.

[Programmazione parallela](../parallel/parallel-programming-in-visual-cpp.md)<br/>
Informazioni su come usare la libreria PPL (Parallel Patterns Library), C++ AMP, OpenMP e altre funzionalità correlate al multithreading in Windows.

[Procedure di sicurezza consigliate](../security/security-best-practices-for-cpp.md)<br/>
Informazioni su come proteggere le applicazioni da codice dannoso e da un uso non autorizzato.

[Programmazione Web e cloud](../cloud/cloud-and-web-programming-in-visual-cpp.md)<br/>
In C++, esistono diverse opzioni per la connessione al Web e al cloud.

[Accesso ai dati](../data/data-access-in-cpp.md)<br/>
Connettersi ai database tramite ODBC e OLE DB.

[Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)<br/>
Informazioni sull'uso di formati di testo e stringa diversi e sulle codifiche per lo sviluppo locale e internazionale.

## <a name="languages-reference"></a>Informazioni di riferimento sui linguaggi

[Riferimenti per il linguaggio C++](../cpp/cpp-language-reference.md)

[Riferimenti per il preprocessore C/C++](../preprocessor/c-cpp-preprocessor-reference.md)

[Riferimenti per il linguaggio C](../c-language/c-language-reference.md)

[Intrinseci del compilatore e linguaggio dell'assembly](../intrinsics/compiler-intrinsics-and-assembly-language.md)

## <a name="c-libraries-in-visual-studio"></a>Librerie C++ in Visual Studio

Nelle sezioni seguenti vengono fornite informazioni sulle varie librerie C e C++ incluse in Visual Studio.

[Riferimenti alla libreria di runtime C](../c-runtime-library/c-run-time-library-reference.md)<br/>
Include alternative migliorate dal punto di vista della sicurezza alle funzioni note per causare problemi di sicurezza.

[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
La libreria standard di C++.

[Active Template Library (ATL)](../atl/atl-com-desktop-components.md)<br/>
Supporto per app e componenti COM.

[Librerie MFC (Microsoft Foundation Class)](../mfc/mfc-desktop-applications.md)<br/>
Supporto per la creazione di app desktop con interfacce utente tradizionali o in stile Office.

[PPL (Parallel Patterns Library)](../parallel/concrt/parallel-patterns-library-ppl.md)<br/>
Algoritmi paralleli e asincroni eseguiti sulla CPU.

[C++ AMP (C++ Accelerated Massive Parallelism)](../parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)<br/>
Algoritmi paralleli in modalità massiccia eseguiti sulla GPU.

[Libreria di modelli di Windows Runtime (WRL)](../cppcx/wrl/windows-runtime-cpp-template-library-wrl.md)<br/>
App e componenti UWP (Universal Windows Platform).

[Programmazione .NET con C++/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)<br/>
Programmazione per Common Language Runtime (CLR).

## <a name="third-party-open-source-c-libraries"></a>Librerie C++ open source di terze parti

Lo strumento da riga di comando **vcpkg** semplifica notevolmente l'individuazione e l'installazione di oltre 900 librerie C++ open-source. Vedere [vcpkg: gestione pacchetti per C++ per Windows](../build/vcpkg.md).

## <a name="feedback-and-community"></a>Feedback e community

[Come segnalare un problema con il set di strumenti Visual C++](how-to-report-a-problem-with-the-visual-cpp-toolset.md)<br/>
Informazioni su come creare e inoltrare segnalazioni di errore efficaci riguardanti i set di strumenti Visual C++, ad esempio compilatore, linker e altri.

[Blog del team C++](https://devblogs.microsoft.com/cppblog/) Microsoft<br/>
Altre informazioni sulle nuove funzionalità e sugli aggiornamenti più recenti degli sviluppatori degli strumenti C++ in Visual Studio.

[Community degli sviluppatori di Visual Studio](https://developercommunity.visualstudio.com/)<br/>
Informazioni su come ottenere assistenza, segnalare bug e fornire suggerimenti per Visual Studio.

## <a name="see-also"></a>Vedere anche

- [Riferimenti per il linguaggio C](../c-language/c-language-reference.md)
- [Riferimenti alla libreria di runtime C](../c-runtime-library/c-run-time-library-reference.md)
- [Intrinseci del compilatore e linguaggio dell'assembly](../intrinsics/compiler-intrinsics-and-assembly-language.md)
