---
title: App di Windows universale (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 357121cc-d390-4bae-b34a-39614861a9f4
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a293f833de7bc575209089362bcaf146d074684b
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="universal-windows-apps-c"></a>App di Windows universale (C++)
App universali di Windows Platform (UWP) contengono un set di principi di progettazione che mettono l'accento interfacce utente semplici incentrate sul contenuto che si adatta automaticamente per diverse dimensioni dello schermo in dispositivi diversi. L'interfaccia utente viene creata con il markup XAML, mentre il code-behind in codice C++ nativo. È anche possibile creare componenti (DLL) che possono essere usati da app UWP scritte in altri linguaggi. La superficie dell'API per App UWP è Windows Runtime, ovvero una ben fornita libreria che offre un'ampia gamma di servizi del sistema operativo.  

> [!TIP]  
> Per Windows 10, è possibile utilizzare il convertitore di App Desktop per creare un pacchetto di applicazione desktop esistente per la distribuzione tramite Microsoft Store. Per altre informazioni, vedere i post relativi all'[uso del runtime di Visual C++ nel progetto Centennial](https://blogs.msdn.microsoft.com/vcblog/2016/07/07/using-visual-c-runtime-in-centennial-project) e al [trasferimento dell'app desktop sulla piattaforma UWP con Desktop Bridge](https://msdn.microsoft.com/en-us/windows/uwp/porting/desktop-to-uwp-root).
  
  
## <a name="uwp-apps-that-use-ccx"></a>App UWP che usano C++/CX  
  
|||  
|-|-|  
|[Documentazione di riferimento del linguaggio Visual C++ (C++/CX)](../cppcx/visual-c-language-reference-c-cx.md)|Descrive il set di estensioni che semplificano l'utilizzo di C++ di Windows Runtime APIs e abilitare la gestione degli errori che si basa sulle eccezioni.|  
|[Compilazione di applicazioni e librerie (C++/CX)](../cppcx/building-apps-and-libraries-c-cx.md)|Descrive come creare DLL e librerie statiche a cui è possibile accedere da un componente o un'app C++/CX.|  
|[Esercitazione: Creare la prima app UWP con C++](https://docs.microsoft.com/en-us/windows/uwp/get-started/create-a-basic-windows-10-app-in-cpp)|Procedura dettagliata che introduce i concetti di base di sviluppo di app UWP in C++. Argomento non ancora aggiornato per lo sviluppo UWP in Windows 10.|  
|[Creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)|Viene descritto come creare DLL a cui è possono utilizzare altri componenti e App UWP.|  
|[Sviluppo di giochi](https://docs.microsoft.com/en-us/windows/uwp/gaming/)|Descrive come usare DirectX e C++ per creare giochi.|  
  
## <a name="uwp-apps-that-use-the-windows-runtime-c-template-library-wrl"></a>App UWP che usano la libreria di modelli C++ di Windows Runtime (WRL) 
 La libreria di modelli di Windows Runtime C++ fornisce le interfacce COM di basso livello mediante il quale codice C++ ISO può accedere al Runtime di Windows in un ambiente privo di eccezioni. Nella maggior parte dei casi, è consigliabile utilizzare C + + CX anziché il modello libreria di Windows Runtime C++ per lo sviluppo di app UWP. Per informazioni sulla libreria di modelli di Windows Runtime C++, vedere [libreria di modelli C++ (WRL) di Windows Runtime](../windows/windows-runtime-cpp-template-library-wrl.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Visual C++](../visual-cpp-in-visual-studio.md)

