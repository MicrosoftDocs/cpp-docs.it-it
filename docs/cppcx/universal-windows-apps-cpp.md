---
title: App di Windows universale (C++)
ms.date: 03/30/2018
ms.assetid: 357121cc-d390-4bae-b34a-39614861a9f4
ms.openlocfilehash: fbd5366ee52dfe32baef9458a82c16914666699e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62392063"
---
# <a name="universal-windows-apps-c"></a>App di Windows universale (C++)

Universal Windows Platform (UWP) è l'interfaccia di programmazione moderno per Windows. Con UWP è scrivere una sola volta un'applicazione o componente e distribuirlo in qualsiasi dispositivo Windows 10. È possibile scrivere un componente in C++ e le applicazioni scritte in qualsiasi altro linguaggio compatibile con UWP possono usarla.

La maggior parte della documentazione di UWP è nell'albero del contenuto di Windows al [documentazione di Universal Windows Platform](/windows/uwp/). Qui troverai esercitazioni inizio anche come fare riferimento alla documentazione. 

Per la nuova App della piattaforma UWP e componenti, è consigliabile usare [ C++/WinRT](/windows/uwp/cpp-and-winrt-apis/), una nuova proiezione standard del C + + 17 language for Windows Runtime APIs. C++/ È disponibile in Windows 10 SDK versione 1803 poi WinRT. C++/ WinRT viene implementata interamente nel file di intestazione e viene progettato per fornire un accesso all'API Windows moderna. A differenza di C++implementazione /CX. C++/ WinRT non usa le estensioni del linguaggio Microsoft o sintassi non standard, e sfrutta appieno la C++ compilatore di creare un output estremamente ottimizzate. Per altre informazioni, vedere [Introduzione a C++/WinRT](/windows/uwp/cpp-and-winrt-apis/intro-to-using-cpp-with-winrt).

È possibile usare il convertitore di tipi di app Desktop Bridge per creare il pacchetto dell'applicazione desktop esistente per la distribuzione tramite il Microsoft Store. Per altre informazioni, vedere [tramite Runtime di Visual C++ nel progetto Centennial](https://blogs.msdn.microsoft.com/vcblog/2016/07/07/using-visual-c-runtime-in-centennial-project) e [Desktop Bridge](/windows/uwp/porting/desktop-to-uwp-root).

## <a name="uwp-apps-that-use-ccx"></a>Le app UWP che usano c++ /CX

|||
|-|-|
|[Documentazione di riferimento del linguaggio Visual C++ (C++/CX)](visual-c-language-reference-c-cx.md)|Descrive il set di estensioni che semplificano l'uso di C++ di Windows Runtime APIs e abilitare la gestione degli errori che si basa sulle eccezioni.|
|[Compilazione di applicazioni e librerie (C++/CX)](building-apps-and-libraries-c-cx.md)|Descrive come creare DLL e librerie statiche a cui è possibile accedere da un componente o un'app C++/CX.|
|[Esercitazione: Creare una piattaforma UWP "Hello, World" app in C++/CX](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp)|Una procedura dettagliata che illustra i concetti di base dello sviluppo di app UWP in C++/CX. |
|[Creazione di componenti Windows Runtime in C++/CX](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)|Viene descritto come creare DLL che possono usare altri componenti e le app UWP.|
|[Programmazione di gioco UWP](/windows/uwp/gaming/)|Viene descritto come usare DirectX e C++/CX per creare giochi.|

## <a name="uwp-apps-that-use-the-windows-runtime-c-template-library-wrl"></a>App UWP che usano la libreria modelli C++ per Windows Runtime (WRL)

La libreria di modelli di Windows Runtime C++ fornisce le interfacce COM di basso livello mediante il quale codice C++ ISO può accedere al Runtime di Windows in un ambiente privo di eccezioni. Nella maggior parte dei casi, è consigliabile usare C++/WinRT o C++/CX anziché il Runtime di Windows C++ libreria di modelli per lo sviluppo di app UWP. Per informazioni sulla libreria di modelli di Windows Runtime C++, vedere [libreria modelli C++ (WRL) di Windows Runtime](wrl/windows-runtime-cpp-template-library-wrl.md).

## <a name="see-also"></a>Vedere anche

[C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md)<br/>
[Panoramica della programmazione Windows in C++](../windows/overview-of-windows-programming-in-cpp.md)<br/>