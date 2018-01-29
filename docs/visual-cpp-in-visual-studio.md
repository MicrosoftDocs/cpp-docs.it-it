---
title: Visual C++ in Visual Studio | Microsoft Docs
ms.custom: 
ms.date: 1/02/2018
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- unmanaged code, C++
- development environment, Visual C++
- unmanaged code
- Visual C++
- Visual C++, reference
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6fecc7f821bec90321095130fb21147d7227685c
ms.sourcegitcommit: 6f40bba1772a09ff0e3843d5f70b553e1a15ab50
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2018
---
# <a name="visual-c-in-visual-studio"></a>Visual C++ in Visual Studio

Il linguaggio di programmazione e gli strumenti di sviluppo di Visual Studio 2017 consentono lo sviluppo di app native di Windows universale, applicazioni desktop e server native, librerie multipiattaforma in esecuzione su Android e iOS nonché in Windows e app gestite in esecuzione su .NET Framework.

**Destinatari della documentazione**

Questo contenuto è destinato agli sviluppatori di C++ che si occupano della scrittura dei programmi.

- Se si cerca uno specifico package ridistribuibile di C++ e componenti di runtime per poter eseguire un programma, visitare il sito Web [Microsoft](http://www.microsoft.com/) e immettere **Visual C++ Redistributable** nella casella di ricerca. Scaricare e installare il package ridistribuibile per l'architettura del computer (ad esempio x64 se si esegue Windows a 64 bit) e la versione di Visual C++ necessaria. 

- Coloro che cercano informazioni introduttive sulla programmazione di C++ possono visitare uno dei numerosi siti Web che offrono questi contenuti oppure richiedere una copia della [pubblicazione relativa alla programmazione, ai principi e alle procedure con C++ (seconda edizione)](http://stroustrup.com/Programming/) di Bjarne Stroustup, ideatore di C++. I contenuti di Visual C++ prevedono una certa familiarità con C++.

- Coloro che cercano il compilatore Visual C++ devono scaricare una versione a pagamento o gratuita di Visual Studio da [https://www.visualstudio.com/](https://www.visualstudio.com/).

## <a name="general-information-about-visual-c"></a>Informazioni generali su Visual C++

[Novità di Visual C++](what-s-new-for-visual-cpp-in-visual-studio.md)  
Novità di Visual C++.

[Miglioramenti della conformità in Visual Studio 2017](cpp-conformance-improvements-2017.md)  
Informazioni sui miglioramenti della conformità di C++ in Visual Studio 2017.

[Conformità al linguaggio Visual C++](visual-cpp-language-conformance.md)  
Elenco dello stato di conformità a Visual C++ per funzionalità.

[Cronologia delle modifiche di Visual C++ dal 2003 al 2015](porting/visual-cpp-change-history-2003-2015.md)  
Informazioni sulle modifiche importanti nelle versioni precedenti.

[Bentornati a C++](cpp/welcome-back-to-cpp-modern-cpp.md)  
Altre informazioni sulle tecniche moderne di programmazione di C++ basate su C++11 e C++14, con le quali è possibile scrivere codice sicuro in modo veloce, senza incorrere nelle numerose trappole che la programmazione C nasconde.

[Come segnalare un problema con il set di strumenti di Visual C++](how-to-report-a-problem-with-the-visual-cpp-toolset.md)  
 Informazioni su come creare e inoltrare segnalazioni di errore efficaci riguardanti i set di strumenti Visual C++, ad esempio compilatore, linker e altri.

[Guida al porting e aggiornamento in Visual C++](porting/visual-cpp-porting-and-upgrading-guide.md)  
Linee guida per il trasferimento di codice e l'aggiornamento di progetti in Visual C++ in Visual Studio 2017, incluso il trasferimento di codice C++ in Windows 10 e la piattaforma UWP (Universal Windows Platform).

[Blog del team di Visual C++](http://blogs.msdn.com/b/vcblog/)  
 Altre informazioni sulle nuove funzionalità e sugli aggiornamenti più recenti degli sviluppatori di [!INCLUDE[vcprvc](build/includes/vcprvc_md.md)].

[Download di Visual Studio](http://go.microsoft.com/fwlink/p/?linkid=235233)  
Download di Visual C++.

[Strumenti e funzionalità di Visual C++ nelle versioni di Visual Studio](ide/visual-cpp-tools-and-features-in-visual-studio-editions.md)  
Informazioni sulle varie edizioni di Visual Studio.

[Piattaforme supportate](supported-platforms-visual-cpp.md)  
Informazioni sulle piattaforme supportate.

[Esempi di Visual C++](visual-cpp-samples.md)  
Informazioni sugli esempi.

[Community di sviluppatori di Visual Studio](https://developercommunity.visualstudio.com/)  
Informazioni su come ottenere assistenza, segnalare bug e fornire suggerimenti per Visual Studio.

## <a name="writing-applications-in-c"></a>Scrittura di applicazioni in C++

[App di Windows universale](windows/universal-windows-apps-cpp.md)  
Guide e contenuto di riferimento di Windows Dev Center. Per informazioni sullo sviluppo di app Windows Store, vedere [Sviluppare app di Windows Store con Visual Studio](http://go.microsoft.com/fwlink/p/?LinkId=248364) e [Roadmap per app di Windows Store scritte in C++](http://go.microsoft.com/fwlink/p/?LinkId=244654).

[Applicazioni desktop (Visual C++)](windows/desktop-applications-visual-cpp.md)  
Informazioni sulla creazione di applicazioni desktop con ciclo di messaggi e callback.

[DLL in Visual C++](build/dlls-in-visual-cpp.md)  
Informazioni su come usare Win32, ATL e MFC per creare DLL desktop di Windows e su come compilare e registrare la DLL.

[Programmazione parallela](parallel/parallel-programming-in-visual-cpp.md)  
Informazioni su come usare la libreria PPL (Parallel Patterns Library), C++ AMP, OpenMP e altre funzionalità correlate al multithreading in Windows.

[Procedure di sicurezza consigliate](security/security-best-practices-for-cpp.md)  
Informazioni su come proteggere le applicazioni da codice dannoso e da un uso non autorizzato.

[Programmazione Web e cloud](cloud/cloud-and-web-programming-in-visual-cpp.md)  
In C++, esistono diverse opzioni per la connessione al Web e al cloud.

[Accesso ai dati](http://msdn.microsoft.com/Library/a9455752-39c4-4457-b14e-197772d3df0b)  
Connettersi ai database mediante ODBC e altre tecnologie di accesso ai database.

[Testo e stringhe](text/text-and-strings-in-visual-cpp.md)  
Informazioni sull'uso di formati di testo e stringa diversi e sulle codifiche per lo sviluppo locale e internazionale.

## <a name="c-development-tools"></a>Strumenti di sviluppo C++

Per informazioni su come creare progetti, lavorare con file di codice sorgente, collegarsi a librerie, compilare, eseguire il debug, profilare, distribuire e altro ancora, vedere l'articolo sugli [strumenti di sviluppo di Visual C++](ide/ide-and-tools-for-visual-cpp-development.md).

## <a name="c-language-reference"></a>Riferimenti al linguaggio C++

Per informazioni sul linguaggio C++, vedere [C++ Language Reference](cpp/cpp-language-reference.md).

Per informazioni sul preprocessore C++, vedere [C/C++ Preprocessor Reference](preprocessor/c-cpp-preprocessor-reference.md).

## <a name="c-libraries-in-visual-studio"></a>Librerie C++ in Visual Studio

Nelle sezioni seguenti vengono fornite informazioni sulle varie librerie C++ incluse con Visual C++.

[Riferimenti della libreria di runtime C](c-runtime-library/c-run-time-library-reference.md)  
Include alternative migliorate dal punto di vista della sicurezza alle funzioni note per causare problemi di sicurezza.

[Libreria standard C++](standard-library/cpp-standard-library-reference.md)  
La libreria standard di C++.

[Active Template Library (ATL)](atl/atl-com-desktop-components.md)  
Supporto per app e componenti COM.

[Librerie MFC (Microsoft Foundation Class)](mfc/mfc-desktop-applications.md)  
Supporto per la creazione di app desktop con interfacce utente tradizionali o in stile Office.

[PPL (Parallel Patterns Library)](parallel/concrt/parallel-patterns-library-ppl.md)  
Algoritmi paralleli e asincroni eseguiti sulla CPU.

[C++ AMP (C++ Accelerated Massive Parallelism)](parallel/amp/cpp-amp-cpp-accelerated-massive-parallelism.md)  
Algoritmi paralleli in modalità massiccia eseguiti sulla GPU.

[Libreria di modelli di Windows Runtime (WRL)](http://msdn.microsoft.com/library/windows/apps/hh438466.aspx)  
App e componenti [!INCLUDE[win8_appname_long](build/includes/win8_appname_long_md.md)].

[Programmazione .NET con C++/CLI (Visual C++)](dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)  
Programmazione per Common Language Runtime (CLR).

Vedere anche la documentazione per [STL/CLR](dotnet/stl-clr-library-reference.md) e [C++ Support Library](dotnet/cpp-support-library.md).

## <a name="other-c-libraries"></a>Altre librerie di C++

In questa sezione vengono forniti collegamenti a librerie che non sono incluse in Visual Studio, ma possono essere scaricate e usate con Visual C++.

[Boost](http://www.boost.org/)  
Una libreria diffusa e ampiamente usata.

[C++ REST SDK](http://casablanca.codeplex.com).  
Una libreria Microsoft per comunicare con i servizi Web tramite HTTP.

## <a name="more-resources"></a>Altre risorse

[Risorse di Visual C++](http://msdn.microsoft.com/vstudio/hh386302.aspx)  
Altre risorse di Visual C++.

[C++ standard](http://isocpp.org/)  
Informazioni su C++, panoramica di C++ moderno e collegamenti a libri, articoli, discussioni ed eventi

[Informazioni su Visual C++](http://msdn.microsoft.com/vstudio/hh386302.aspx)  
Primi passi per acquisire familiarità con C++.

## <a name="see-also"></a>Vedere anche

[Riferimenti del linguaggio C](c-language/c-language-reference.md)   
[Riferimenti della libreria di runtime C](c-runtime-library/c-run-time-library-reference.md)   
[Intrinseci del compilatore e linguaggio assembly](intrinsics/compiler-intrinsics-and-assembly-language.md)
