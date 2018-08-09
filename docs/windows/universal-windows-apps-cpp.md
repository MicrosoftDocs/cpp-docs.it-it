---
title: Le app di Windows universale (C++) | Microsoft Docs
ms.custom: ''
ms.date: 03/30/2018
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 357121cc-d390-4bae-b34a-39614861a9f4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 56b6642bb24107da4c09856dbd8daaf70fb7dfd5
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40015007"
---
# <a name="universal-windows-apps-c"></a>App di Windows universale (C++)

App universali di Windows Platform (UWP) contengono un set di principi di progettazione che mettono in evidenza semplici interfacce utente incentrate sul contenuto che viene automaticamente regolata per diverse dimensioni dello schermo in dispositivi diversi. L'interfaccia utente viene creata con il markup XAML, mentre il code-behind in codice C++ nativo. È anche possibile creare componenti (DLL) che possono essere usati da app UWP scritte in altri linguaggi. La superficie dell'API per le app UWP è il Runtime di Windows, vale a dire una libr che offre un'ampia gamma di servizi del sistema operativo.

> [!TIP]  
> Per Windows 10, è possibile usare il convertitore di tipi di app Desktop Bridge per creare il pacchetto dell'applicazione desktop esistente per la distribuzione tramite il Microsoft Store. Per altre informazioni, vedere [tramite Runtime di Visual C++ nel progetto Centennial](https://blogs.msdn.microsoft.com/vcblog/2016/07/07/using-visual-c-runtime-in-centennial-project) e [Desktop Bridge](/windows/uwp/porting/desktop-to-uwp-root).

## <a name="uwp-apps-that-use-cwinrt"></a>Le app UWP che usano C + + / WinRT

C + + / WinRT è una nuova, di sola intestazione basato sulla libreria proiezione del linguaggio C++ per il Runtime di Windows che usa completamente standard C++, diversamente da C + + / implementazione CX. C + + / WinRT non usa le estensioni del linguaggio Microsoft o sintassi non standard, e sfrutta appieno il compilatore C++ per creare l'output altamente ottimizzata. Per altre informazioni, vedere [C + + / WinRT](/windows/uwp/cpp-and-winrt-apis). Per un'introduzione a C + + / WinRT e una Guida introduttiva di codice, vedere [Introduzione a C + + / WinRT](/windows/uwp/cpp-and-winrt-apis/intro-to-using-cpp-with-winrt).

## <a name="uwp-apps-that-use-ccx"></a>Le app UWP che usano c++ /CX

|||
|-|-|
|[Documentazione di riferimento del linguaggio Visual C++ (C++/CX)](../cppcx/visual-c-language-reference-c-cx.md)|Descrive il set di estensioni che semplificano l'uso di C++ di Windows Runtime APIs e abilitare la gestione degli errori che si basa sulle eccezioni.|
|[Compilazione di applicazioni e librerie (C++/CX)](../cppcx/building-apps-and-libraries-c-cx.md)|Descrive come creare DLL e librerie statiche a cui è possibile accedere da un componente o un'app C++/CX.|
|[Esercitazione: Creare una piattaforma UWP "Hello, World" in C + + app c++ /CX.](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp)|Una procedura dettagliata che illustra i concetti di base dello sviluppo di app UWP in C + + / CX. |
|[Creazione di componenti Windows Runtime in C + + c++ /CX](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)|Viene descritto come creare DLL che possono usare altri componenti e le app UWP.|
|[Programmazione di gioco UWP](/windows/uwp/gaming/)|Viene descritto come usare DirectX e C + + c++ /CX per creare giochi.|

## <a name="uwp-apps-that-use-the-windows-runtime-c-template-library-wrl"></a>App UWP che usano la libreria modelli C++ per Windows Runtime (WRL)

La libreria di modelli di Windows Runtime C++ fornisce le interfacce COM di basso livello mediante il quale codice C++ ISO può accedere al Runtime di Windows in un ambiente privo di eccezioni. Nella maggior parte dei casi, è consigliabile usare C + + c++ /CLI WinRT o C + + c++ /CX anziché la libreria di modelli Windows Runtime C++ per lo sviluppo di app UWP. Per informazioni sulla libreria di modelli di Windows Runtime C++, vedere [libreria modelli C++ (WRL) di Windows Runtime](../windows/windows-runtime-cpp-template-library-wrl.md).

## <a name="see-also"></a>Vedere anche
 [Visual C++](../visual-cpp-in-visual-studio.md)<br/>