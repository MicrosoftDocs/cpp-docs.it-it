---
title: C++Informazioni di riferimento sul linguaggio/CX
ms.date: 09/15/2017
ms.assetid: 3f6abf92-4e5e-4ed8-8e11-f9252380d30a
ms.openlocfilehash: ed8e2374daf862e99517fb113e869504b7c7aabc
ms.sourcegitcommit: 180f63704f6ddd07a4172a93b179cf0733fd952d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2019
ms.locfileid: "70740859"
---
# <a name="ccx-language-reference"></a>C++Informazioni di riferimento sul linguaggio/CX

C++/CX è un set di estensioni per il C++ linguaggio che consente la creazione di app di Windows e componenti Windows Runtime in un idioma il più vicino possibile alla moderna C++. USA C++/CX per scrivere app e componenti di Windows in codice nativo che interagiscono facilmente C#con oggetti visivi, Visual Basic e JavaScript e altri linguaggi che supportano l'Windows Runtime. Nei rari casi in cui è richiesto l'accesso diretto alle interfacce COM non elaborate o a codice non eccezionale, è possibile utilizzare la [libreria di modelli Windows Runtime C++ (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md).

> [!NOTE]
> **/WinRT è l'alternativa consigliata C++a/CX. [ C++](/windows/uwp/cpp-and-winrt-apis/index)** Si tratta di una nuova proiezione del linguaggio C++ 17 standard per Windows Runtime API, disponibile nella versione più recente di Windows 10 SDK dalla versione 1803 in poi. C++/WinRT viene implementato interamente nei file di intestazione e progettato per offrire all'utente l'accesso di prima classe alla moderna API Windows.
>
> Con C++/WinRT è possibile utilizzare e creare Windows Runtime API utilizzando un compilatore c++ 17 conforme agli standard. C++/WinRT offre in genere prestazioni migliori e produce binari più piccoli rispetto a qualsiasi altra opzione del linguaggio per il Windows Runtime. Microsoft continuerà a supportare C++/CX e WRL, ma è consigliabile usare C++/WinRT per le nuove applicazioni. Per altre informazioni, vedere [C++/WinRT](/windows/uwp/cpp-and-winrt-apis/index).

Utilizzando C++/CX, è possibile creare:

- C++Le app piattaforma UWP (Universal Windows Platform) (UWP) che usano XAML per definire l'interfaccia utente e usano lo stack nativo. Per ulteriori informazioni, vedere la pagina relativa alla [creazione di un'app C++ "Hello World" in (UWP)](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp).

- C++Windows Runtime componenti che possono essere utilizzati da app di Windows basate su JavaScript. Per altre informazioni, vedere [Creating Windows Runtime Components in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp).

- App ad elevato contenuto grafico e giochi DirectX per Windows. Per altre informazioni, vedere [creare un semplice gioco UWP con DirectX](/windows/uwp/gaming/tutorial--create-your-first-uwp-directx-game).

## <a name="related-articles"></a>Articoli correlati

|||
|-|-|
|[Riferimento rapido](../cppcx/quick-reference-c-cx.md)|Tabella di parole chiave e operatori C++per/CX.|
|[Sistema di tipi](../cppcx/type-system-c-cx.md)|Vengono descritti C++i tipi di/CX di base e i costrutti di programmazione C++e viene illustrato come utilizzare/CX per utilizzare e creare Windows Runtime tipi.|
|[Compilazione di app e librerie](../cppcx/building-apps-and-libraries-c-cx.md)|Viene illustrato come utilizzare l'IDE per compilare app e come collegarsi a librerie statiche e dll.|
|[Interoperabilità con altri linguaggi](../cppcx/interoperating-with-other-languages-c-cx.md)|Viene descritto come i componenti scritti mediante C++/CX possono essere utilizzati con componenti scritti in JavaScript, in qualsiasi linguaggio gestito o nella libreria di modelli Windows Runtime C++ .|
|[Threading e marshalling](../cppcx/threading-and-marshaling-c-cx.md)|Viene illustrato come specificare il comportamento di threading e di marshalling dei componenti creati.|
|[Riferimenti a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)|Documentazione di riferimento per gli spazi dei nomi predefinito, Platform, Platform::Collections e correlati.|
|[Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md)|Elenca le funzioni CRT non disponibili per l'uso nelle app di Windows Runtime.|
|[Inizia a usare le app di Windows 10](/windows/uwp/get-started/)|Offre indicazioni di alto livello sulle app di Windows 10 e collegamenti ad altre informazioni.|
|[C++/CX parte 0 di \[n\]: Introduzione](https://blogs.msdn.microsoft.com/vcblog/2012/08/29/ccx-part-0-of-n-an-introduction/)<br /><br />[C++/CX parte 1 di \[n\]: Classe semplice](https://blogs.msdn.microsoft.com/vcblog/2012/09/05/ccx-part-1-of-n-a-simple-class/)<br /><br />[C++/CX parte 2 di \[n\]: Tipi che indossano cappelli](https://blogs.msdn.microsoft.com/vcblog/2012/09/17/ccx-part-2-of-n-types-that-wear-hats/)<br /><br />[C++/CX parte 3 di \[n\]: In costruzione](https://blogs.msdn.microsoft.com/vcblog/2012/10/05/ccx-part-3-of-n-under-construction/)<br /><br />[C++/CX parte 4 di \[n\]: Funzioni membro statiche](https://blogs.msdn.microsoft.com/vcblog/2012/10/19/ccx-part-4-of-n-static-member-functions/)|Una serie di Blog introduttiva su C++/CX.|
