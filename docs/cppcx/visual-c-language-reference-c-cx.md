---
title: Riferimenti per il linguaggio C++/CX
ms.date: 09/15/2017
ms.assetid: 3f6abf92-4e5e-4ed8-8e11-f9252380d30a
ms.openlocfilehash: 4f3816280630a6a061eb037a33367ef4e9d90375
ms.sourcegitcommit: 6b3d793f0ef3bbb7eefaf9f372ba570fdfe61199
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/15/2020
ms.locfileid: "86403855"
---
# <a name="ccx-language-reference"></a>Riferimenti per il linguaggio C++/CX

C++/CX è un set di estensioni al linguaggio C++ che consentono di creare app di Windows e componenti Windows Runtime in un idioma il più vicino possibile al linguaggio C++ moderno. USA C++/CX per scrivere app e componenti di Windows in codice nativo che interagiscono facilmente con Visual C#, Visual Basic e JavaScript e altri linguaggi che supportano l'Windows Runtime. Nei rari casi in cui è richiesto l'accesso diretto alle interfacce COM non elaborate o a codice non eccezionale, è possibile utilizzare la [Windows Runtime libreria di modelli C++ (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md).

> [!NOTE]
> **/WinRT è l'alternativa consigliata C++a/CX. [ C++](/windows/uwp/cpp-and-winrt-apis/index)** Si tratta di una nuova proiezione del linguaggio C++ 17 standard per Windows Runtime API, disponibile nella versione più recente di Windows 10 SDK dalla versione 1803 in poi. C++/WinRT viene implementato interamente nei file di intestazione e progettato per offrire all'utente l'accesso di prima classe alla moderna API Windows.
>
> Con C++/WinRT, è possibile utilizzare e creare Windows Runtime API utilizzando qualsiasi compilatore C++ 17 conforme agli standard. C++/WinRT in genere garantisce prestazioni migliori e produce binari più piccoli rispetto a qualsiasi altra opzione del linguaggio per il Windows Runtime. Microsoft continuerà a supportare C++/CX e WRL, ma è consigliabile usare C++/WinRT per le nuove applicazioni. Per ulteriori informazioni, vedere [C++/WinRT](/windows/uwp/cpp-and-winrt-apis/index).

Con C++/CX è possibile creare:

- Le app C++ piattaforma UWP (Universal Windows Platform) (UWP) che usano XAML per definire l'interfaccia utente e usano lo stack nativo. Per ulteriori informazioni, vedere la pagina relativa alla [creazione di un'app "Hello World" in C++ (UWP)](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp).

- Componenti di Windows Runtime C++ che possono essere utilizzati da app di Windows basate su JavaScript. Per altre informazioni, vedi [Creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp).

- App ad elevato contenuto grafico e giochi DirectX per Windows. Per altre informazioni, vedere [creare un semplice gioco UWP con DirectX](/windows/uwp/gaming/tutorial--create-your-first-uwp-directx-game).

## <a name="related-articles"></a>Articoli correlati

| Collegamento | Descrizione |
|--|--|
| [Riferimento rapido](../cppcx/quick-reference-c-cx.md) | Tabella di parole chiave e operatori per C++/CX. |
| [Sistema di tipi](../cppcx/type-system-c-cx.md) | Descrive i tipi di base e i costrutti di programmazione C++/CX e come utilizzare C++/CX per utilizzare e creare Windows Runtime tipi. |
| [Compilazione di app e librerie](../cppcx/building-apps-and-libraries-c-cx.md) | Viene illustrato come utilizzare l'IDE per compilare app e come collegarsi a librerie statiche e dll. |
| [Interoperabilità con altri linguaggi](../cppcx/interoperating-with-other-languages-c-cx.md) | Viene descritto come i componenti scritti mediante C++/CX possono essere utilizzati con componenti scritti in JavaScript, in qualsiasi linguaggio gestito o nella libreria di modelli di Windows Runtime C++. |
| [Threading e marshalling](../cppcx/threading-and-marshaling-c-cx.md) | Viene illustrato come specificare il comportamento di threading e di marshalling dei componenti creati. |
| [Riferimenti agli spazi dei nomi](../cppcx/namespaces-reference-c-cx.md) | Documentazione di riferimento per gli spazi dei nomi predefinito, Platform, Platform::Collections e correlati. |
| [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md) | Elenca le funzioni CRT non disponibili per l'uso nelle app di Windows Runtime. |
| [Introduzione alle app di Windows 10](/windows/uwp/get-started/) | Offre indicazioni di alto livello sulle app di Windows 10 e collegamenti ad altre informazioni. |
| [C++/CX parte 0 di \[ n \] : introduzione](https://devblogs.microsoft.com/cppblog/ccx-part-0-of-n-an-introduction/)<br /><br />[C++/CX parte 1 di \[ n \] : classe semplice](https://devblogs.microsoft.com/cppblog/ccx-part-1-of-n-a-simple-class/)<br /><br />[C++/CX-parte 2 di \[ n \] : tipi che indossano cappelli](https://devblogs.microsoft.com/cppblog/ccx-part-2-of-n-types-that-wear-hats/)<br /><br />[C++/CX-parte 3 di \[ n \] : in fase di costruzione](https://devblogs.microsoft.com/cppblog/ccx-part-3-of-n-under-construction/)<br /><br />[C++/CX parte 4 di \[ n \] : funzioni membro statiche](https://devblogs.microsoft.com/cppblog/ccx-part-4-of-n-static-member-functions/)| Una serie di Blog introduttiva su C++/CX. |
