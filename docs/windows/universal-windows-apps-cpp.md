---
title: App di Windows universale (C++) | Documenti Microsoft
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
ms.openlocfilehash: 9914e9ac83efcc43ef120259254b65ef4f1e0ee9
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33891123"
---
# <a name="universal-windows-apps-c"></a>App di Windows universale (C++)

App universali di Windows Platform (UWP) contengono un set di principi di progettazione che mettono l'accento interfacce utente semplici incentrate sul contenuto che si adatta automaticamente per diverse dimensioni dello schermo in dispositivi diversi. L'interfaccia utente viene creata con il markup XAML, mentre il code-behind in codice C++ nativo. È anche possibile creare componenti (DLL) che possono essere usati da app UWP scritte in altri linguaggi. La superficie dell'API per App UWP è Windows Runtime, ovvero una ben fornita libreria che offre un'ampia gamma di servizi del sistema operativo.

> [!TIP]  
> Per Windows 10, è possibile utilizzare il convertitore di app Desktop Bridge a un pacchetto dell'applicazione desktop esistente per la distribuzione tramite Microsoft Store. Per altre informazioni, vedere [mediante Runtime di Visual C++ nel progetto Centennial](https://blogs.msdn.microsoft.com/vcblog/2016/07/07/using-visual-c-runtime-in-centennial-project) e [Desktop Bridge](/windows/uwp/porting/desktop-to-uwp-root).

## <a name="uwp-apps-that-use-cwinrt"></a>App UWP che usano C + + WinRT

C + + WinRT è una nuova, di sola intestazione basate sulla libreria C++ language proiezione per Windows Runtime che usa completamente standard C++, diversamente da C + + / implementazione CX. C + + WinRT non usa la sintassi non standard o le estensioni del linguaggio Microsoft e sfrutta completa del compilatore C++ per creare l'output altamente ottimizzata. Per altre informazioni, vedere [C + + WinRT](/windows/uwp/cpp-and-winrt-apis). Per un'introduzione ai C + + WinRT e una Guida rapida di codice, vedere [Introduzione a C + + WinRT](/windows/uwp/cpp-and-winrt-apis/intro-to-using-cpp-with-winrt).

## <a name="uwp-apps-that-use-ccx"></a>App UWP che usano C + + CX

|||
|-|-|
|[Documentazione di riferimento del linguaggio Visual C++ (C++/CX)](../cppcx/visual-c-language-reference-c-cx.md)|Descrive il set di estensioni che semplificano l'utilizzo di C++ di Windows Runtime APIs e abilitare la gestione degli errori che si basa sulle eccezioni.|
|[Compilazione di applicazioni e librerie (C++/CX)](../cppcx/building-apps-and-libraries-c-cx.md)|Descrive come creare DLL e librerie statiche a cui è possibile accedere da un componente o un'app C++/CX.|
|[Esercitazione: Creare un UWP app "Hello, World" in C + + CX](/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp)|Una procedura dettagliata che presenta i concetti di base di sviluppo di app UWP in C + + CX. |
|[Creazione di componenti Windows Runtime in C + + CX](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)|Viene descritto come creare DLL a cui è possono utilizzare altri componenti e App UWP.|
|[Programmazione di gioco UWP](/windows/uwp/gaming/)|Viene descritto come usare DirectX e C + c++ /CX per creare giochi.|

## <a name="uwp-apps-that-use-the-windows-runtime-c-template-library-wrl"></a>App UWP che usano la libreria di modelli C++ di Windows Runtime (WRL)

La libreria di modelli di Windows Runtime C++ fornisce le interfacce COM di basso livello mediante il quale codice C++ ISO può accedere al Runtime di Windows in un ambiente privo di eccezioni. Nella maggior parte dei casi, è consigliabile usare C + + WinRT o C + + CX anziché la libreria di modelli di Windows Runtime C++ per lo sviluppo di app UWP. Per informazioni sulla libreria di modelli di Windows Runtime C++, vedere [libreria di modelli C++ (WRL) di Windows Runtime](../windows/windows-runtime-cpp-template-library-wrl.md).

## <a name="see-also"></a>Vedere anche

[Visual C++](../visual-cpp-in-visual-studio.md)<br/>
