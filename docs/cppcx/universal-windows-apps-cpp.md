---
description: 'Altre informazioni su: app di Windows universale (C++)'
title: App di Windows universale (C++)
ms.date: 03/30/2018
ms.assetid: 357121cc-d390-4bae-b34a-39614861a9f4
ms.topic: overview
ms.openlocfilehash: ef107311ce2e8ec1b7c33bad42edfd3fbee358eb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97288145"
---
# <a name="universal-windows-apps-c"></a>App di Windows universale (C++)

Il piattaforma UWP (Universal Windows Platform) (UWP) è l'interfaccia di programmazione moderna di Windows. Con UWP è possibile scrivere un'applicazione o un componente una volta e distribuirlo in qualsiasi dispositivo Windows 10. È possibile scrivere un componente in C++ e le applicazioni scritte in qualsiasi altro linguaggio compatibile con UWP possono usarlo.

La maggior parte della documentazione di UWP è disponibile nell'albero del contenuto di Windows in [piattaforma UWP (Universal Windows Platform) documentazione](/windows/uwp/). In questa pagina sono disponibili le esercitazioni iniziali e la documentazione di riferimento.

Per le nuove app e i componenti di UWP, è consigliabile usare [c++/WinRT](/windows/uwp/cpp-and-winrt-apis/), una nuova proiezione del linguaggio c++ 17 standard per le API Windows Runtime. C++/WinRT è disponibile in Windows 10 SDK dalla versione 1803 in poi. C++/WinRT viene implementato interamente nei file di intestazione ed è progettato per fornire l'accesso di prima classe all'API Windows moderna. A differenza dell'implementazione C++/CX, C++/WinRT non usa la sintassi non standard o le estensioni del linguaggio Microsoft e sfrutta appieno il compilatore C++ per creare un output altamente ottimizzato. Per ulteriori informazioni, vedere [Introduzione a C++/WinRT](/windows/uwp/cpp-and-winrt-apis/intro-to-using-cpp-with-winrt).

È possibile usare desktop Bridge app Converter per creare un pacchetto dell'applicazione desktop esistente per la distribuzione tramite il Microsoft Store. Per altre informazioni, vedere [uso di Visual C++ Runtime in Centennial Project](https://devblogs.microsoft.com/cppblog/using-visual-c-runtime-in-centennial-project/) e [Desktop Bridge](/windows/uwp/porting/desktop-to-uwp-root).

## <a name="uwp-apps-that-use-ccx"></a>App UWP che usano C++/CX

[Riferimenti per il linguaggio C++/CX](visual-c-language-reference-c-cx.md)\
Descrive il set di estensioni che semplificano l'utilizzo in C++ delle API Windows Runtime e abilitano la gestione degli errori basata sulle eccezioni.

[Compilazione di app e librerie (C++/CX)](building-apps-and-libraries-c-cx.md)\
Descrive come creare DLL e librerie statiche a cui è possibile accedere da un componente o un'app C++/CX.

[Esercitazione: creare un'app UWP "Hello, World" in C++/CX](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp)\
Procedura dettagliata che introduce i concetti di base dello sviluppo di app UWP in C++/CX.

[Creazione di componenti Windows Runtime in C++/CX](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)\
Viene descritto come creare DLL che possono essere utilizzate da altri componenti e app UWP.

[Programmazione del gioco UWP](/windows/uwp/gaming/)\
Viene descritto come usare DirectX e C++/CX per creare giochi.

## <a name="uwp-apps-that-use-the-windows-runtime-c-template-library-wrl"></a>App UWP che usano la libreria di modelli C++ Windows Runtime (WRL)

La libreria di modelli Windows Runtime C++ fornisce le interfacce COM di basso livello tramite cui il codice C++ ISO può accedere al Windows Runtime in un ambiente privo di eccezioni. Nella maggior parte dei casi, è consigliabile usare C++/WinRT o C++/CX anziché la libreria di modelli C++ Windows Runtime per lo sviluppo di app UWP. Per informazioni sulla libreria di modelli Windows Runtime C++, vedere la pagina relativa alla [libreria di modelli c++ Windows Runtime (WRL)](wrl/windows-runtime-cpp-template-library-wrl.md).

## <a name="see-also"></a>Vedi anche

[C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md)<br/>
[Panoramica della programmazione Windows in C++](../windows/overview-of-windows-programming-in-cpp.md)<br/>
