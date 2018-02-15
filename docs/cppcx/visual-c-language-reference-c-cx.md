---
title: Riferimenti al linguaggio di Visual C++ (C + + CX) | Documenti Microsoft
ms.custom: 
ms.date: 09/15/2017
ms.technology: cpp-windows
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: language-reference
ms.assetid: 3f6abf92-4e5e-4ed8-8e11-f9252380d30a
caps.latest.revision: 
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0867cb30f1337ffaf1cb726a0c52977899f02d0a
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="visual-c-language-reference-ccx"></a>Riferimenti al linguaggio Visual C++ (C++/CX)

C + + CX è un set di estensioni del linguaggio C++ che consentono la creazione di App di Windows e componenti Windows Runtime in un linguaggio più vicino possibile al moderno linguaggio C++. Utilizzare C + + CX per scrivere app di Windows e componenti in codice nativo che interagiscano facilmente con Visual c#, Visual Basic e JavaScript e altri linguaggi che supportano Windows Runtime. In rari casi che richiedono accesso diretto alle interfacce COM non elaborate, o a codice non eccezionale, è possibile utilizzare il [libreria di modelli C++ (WRL) di Windows Runtime](../windows/windows-runtime-cpp-template-library-wrl.md).

Il nuovo modello rappresenta la prossima generazione di programmazione in C++ nativo su Windows. Con questo nuovo modello puoi creare i seguenti tipi di app:

- App C++ Universal Windows Platform (UWP) che usano il linguaggio XAML per l'utente di definire l'interfaccia e utilizzano lo stack nativo. Per ulteriori informazioni, vedere [creare un'app "hello world" in C++ (UWP)](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp).

- Componenti C++ di Windows Runtime che possono essere utilizzati da app di Windows basate su JavaScript. Per ulteriori informazioni, vedere [la creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp).

- App ad elevato contenuto grafico e giochi DirectX per Windows. Per ulteriori informazioni, vedere [creare un semplice gioco UWP con DirectX](/windows/uwp/gaming/tutorial--create-your-first-metro-style-directx-game).

## <a name="related-articles"></a>Articoli correlati

|||
|-|-|
|[Riferimento rapido](../cppcx/quick-reference-c-cx.md)|Tabella delle parole chiave e gli operatori per C + + CX.|
|[Sistema di tipi](../cppcx/type-system-c-cx.md)|Viene descritto base C + + CX tipi e i costrutti di programmazione e come utilizzare C + + CX per creare tipi di Windows Runtime e utilizzare.|
|[Compilazione di applicazioni e librerie](../cppcx/building-apps-and-libraries-c-cx.md)|Viene illustrato come utilizzare l'IDE per compilare app e come collegarsi alle DLL e alle librerie statiche.|
|[Interoperabilità con altri linguaggi](../cppcx/interoperating-with-other-languages-c-cx.md)|Viene illustrato come i componenti scritti in C + + CX può essere utilizzato con i componenti scritti in JavaScript, in qualsiasi linguaggio gestito o [!INCLUDE[cppwrl](../cppcx/includes/cppwrl-md.md)].|
|[Threading e marshalling](../cppcx/threading-and-marshaling-c-cx.md)|Viene illustrato come specificare il comportamento di threading e di marshalling dei componenti creati.|
|[Riferimento a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)|Documentazione di riferimento per gli spazi dei nomi predefinito, Platform, Platform::Collections e correlati.|
|[Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md)|Elenca le funzioni CRT non disponibili per l'uso nelle app di Windows Runtime.|
|[Guide alle procedure per le app Windows 10](http://msdn.microsoft.com/library/windows/apps/xaml/mt244352.aspx)|Offre indicazioni di alto livello sulle app di Windows 10 e collegamenti ad altre informazioni.|
|[C + + CX parte 0 di \[ n \]: introduzione](https://blogs.msdn.microsoft.com/vcblog/2012/08/29/ccx-part-0-of-n-an-introduction/)<br /><br />[C + + CX parte 1 di \[ n \]: una classe semplice di](https://blogs.msdn.microsoft.com/vcblog/2012/09/05/ccx-part-1-of-n-a-simple-class/)<br /><br />[C + + CX parte 2 di \[ n \]: tipi Hat](https://blogs.msdn.microsoft.com/vcblog/2012/09/17/ccx-part-2-of-n-types-that-wear-hats/)<br /><br />[C + + CX parte 3 di \[ n \]: in fase di costruzione](https://blogs.msdn.microsoft.com/vcblog/2012/10/05/ccx-part-3-of-n-under-construction/)<br /><br />[C + + CX parte 4 di \[ n \]: funzioni membro statiche](https://blogs.msdn.microsoft.com/vcblog/2012/10/19/ccx-part-4-of-n-static-member-functions/)|Una serie di blog introduttiva di Visual C++ in C + + CX.|
