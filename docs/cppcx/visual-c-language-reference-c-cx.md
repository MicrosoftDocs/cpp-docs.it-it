---
title: Riferimenti al linguaggio Visual C++ (C++/CX)
ms.date: 09/15/2017
ms.assetid: 3f6abf92-4e5e-4ed8-8e11-f9252380d30a
ms.openlocfilehash: ce0272499b653b9077a891e39e9b29797e7e051d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62384946"
---
# <a name="visual-c-language-reference-ccx"></a>Riferimenti al linguaggio Visual C++ (C++/CX)

C + c++ /CX è un set di estensioni del linguaggio C++ che consentono la creazione di App di Windows e componenti Windows Runtime in un linguaggio più vicino possibile a moderno C++. Usare C++per scrivere le app di Windows e i componenti nativi il codice con facilità /CX interagire con Visual C#, Visual Basic, JavaScript e altri linguaggi che supportano il Runtime di Windows. In rari casi che richiedono l'accesso diretto alle interfacce COM non elaborate, o codice non eccezionale, è possibile usare la [libreria modelli C++ (WRL) di Windows Runtime](../windows/windows-runtime-cpp-template-library-wrl.md).

> [!NOTE]
> **[C++/ WinRT](/windows/uwp/cpp-and-winrt-apis/index) è l'alternativa consigliata per C++/CX**. È una nuova, standard C++ 17 proiezione del linguaggio for Windows Runtime APIs, disponibile in Windows 10 SDK più recente dalla versione 1803 poi. C++/ WinRT è implementata interamente nel file di intestazione e progettato per fornire un accesso all'API Windows moderna.
>
> Con C++/WinRT, è possibile utilizzare e creare Windows Runtime APIs usando qualsiasi conforme agli standard C + + 17 del compilatore. C++/ WinRT è in genere offre prestazioni migliori e produce file binari più piccoli rispetto a un'altra opzione di linguaggio per il Runtime di Windows. Continueremo a supportare C++/CX e WRL, ma è consigliabile usano le nuove applicazioni C++/WinRT. Per altre informazioni, vedere [ C++/WinRT](/windows/uwp/cpp-and-winrt-apis/index).

Tramite C++//CX, è possibile creare:

- Le app C++ Universal Windows Platform (UWP) che usano XAML per l'utente di definire l'interfaccia e usano lo stack nativo. Per altre informazioni, vedere [creare un'app "hello world" in C++ (UWP)](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp).

- Componenti di Windows Runtime C++ che possono essere usati da applicazioni Windows basate su JavaScript. Per altre informazioni, vedere [Creating Windows Runtime Components in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp).

- App ad elevato contenuto grafico e giochi DirectX per Windows. Per altre informazioni, vedere [creare un semplice gioco UWP con DirectX](/windows/uwp/gaming/tutorial--create-your-first-uwp-directx-game).

## <a name="related-articles"></a>Articoli correlati

|||
|-|-|
|[Riferimento rapido](../cppcx/quick-reference-c-cx.md)|Tabella delle parole chiave e gli operatori per C++/CX.|
|[Sistema di tipi](../cppcx/type-system-c-cx.md)|Descrive base C++tipi /CX e costrutti di programmazione e come utilizzare C++/CX per creare tipi Windows Runtime e utilizzare.|
|[Compilazione di app e librerie](../cppcx/building-apps-and-libraries-c-cx.md)|Viene illustrato come usare l'IDE per compilare le App e collegarsi a librerie statiche e DLL.|
|[Interoperabilità con altri linguaggi](../cppcx/interoperating-with-other-languages-c-cx.md)|Viene illustrato come i componenti scritti usando C++/CX può essere usato con i componenti sono scritti in JavaScript, qualsiasi linguaggio o gestiti il Runtime di Windows C++ libreria di modelli.|
|[Threading e marshalling](../cppcx/threading-and-marshaling-c-cx.md)|Viene illustrato come specificare il comportamento di threading e di marshalling dei componenti creati.|
|[Riferimenti a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)|Documentazione di riferimento per gli spazi dei nomi predefinito, Platform, Platform::Collections e correlati.|
|[Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md)|Elenca le funzioni CRT non disponibili per l'uso nelle app di Windows Runtime.|
|[Guide alle procedure per le app Windows 10](https://msdn.microsoft.com/library/windows/apps/xaml/mt244352.aspx)|Offre indicazioni di alto livello sulle app di Windows 10 e collegamenti ad altre informazioni.|
|[C + c++ /CX parte 0 di \[n\]: Introduzione](https://blogs.msdn.microsoft.com/vcblog/2012/08/29/ccx-part-0-of-n-an-introduction/)<br /><br />[C + c++ /CX-parte 1 del \[n\]: Una classe semplice](https://blogs.msdn.microsoft.com/vcblog/2012/09/05/ccx-part-1-of-n-a-simple-class/)<br /><br />[C + c++ /CX-parte 2 di \[n\]: Tipi con accenti circonflessi](https://blogs.msdn.microsoft.com/vcblog/2012/09/17/ccx-part-2-of-n-types-that-wear-hats/)<br /><br />[C + c++ /CX-parte 3 di \[n\]: In fase di costruzione](https://blogs.msdn.microsoft.com/vcblog/2012/10/05/ccx-part-3-of-n-under-construction/)<br /><br />[C + c++ /CX-parte 4 di \[n\]: Funzioni membro statiche](https://blogs.msdn.microsoft.com/vcblog/2012/10/19/ccx-part-4-of-n-static-member-functions/)|Un oggetto visivo introduttivo C++ serie di blog sulla C++/CX.|
