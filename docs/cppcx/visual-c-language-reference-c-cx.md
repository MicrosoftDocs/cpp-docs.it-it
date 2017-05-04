---
title: "Riferimenti al linguaggio Visual C++ (C++-CX) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 3f6abf92-4e5e-4ed8-8e11-f9252380d30a
caps.latest.revision: 27
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 27
---
# Riferimenti al linguaggio Visual C++ (C++-CX)
[!INCLUDE[cppwrt](../cppcx/includes/cppwrt-md.md)] \([!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)]\) è un set di estensioni del linguaggio C\+\+ che consentono di creare app di Windows e componenti di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] in un linguaggio più vicino possibile al linguaggio C\+\+ moderno. Puoi usare [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] per scrivere app di Windows e componenti in codice nativo che interagiscano facilmente con Visual C\#, Visual Basic, JavaScript e altri linguaggi che supportano [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]. Nei rari casi in cui è richiesto l'accesso diretto alle interfacce COM non elaborate o a codice non eccezionale, puoi usare la [Libreria di modelli di Windows Runtime C\+\+ \(WRL\)](~/windows/windows-runtime-cpp-template-library-wrl.md).  
  
 Il nuovo modello rappresenta la prossima generazione di programmazione in C\+\+ nativo su Windows. Con questo nuovo modello puoi creare i seguenti tipi di app:  
  
-   App di Windows in C\+\+ che usano il linguaggio XAML per definire l'interfaccia utente e usano lo stack nativo. Per altre informazioni, vedi [Creare un'app "hello world" in C\+\+ \(Windows 10\)](http://msdn.microsoft.com/library/windows/apps/dn996906.aspx).  
  
-   Componenti di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] in C\+\+ che possono essere usati da app di Windows basate su JavaScript. Per altre informazioni, vedi [Creazione di componenti Windows Runtime in C\+\+](http://msdn.microsoft.com/library/hh441569.aspx)[Creazione di componenti Windows Runtime in C\+\+](http://msdn.microsoft.com/library/5b7251e6-4271-4f13-af80-c1cf5b1489bf).  
  
-   App ad elevato contenuto grafico e giochi DirectX per Windows. Per altre informazioni, vedi [Creare un semplice gioco UWP \(Universal Windows Platform\) con DirectX](http://msdn.microsoft.com/library/windows/apps/xaml/mt210793.aspx).  
  
## Articoli correlati  
  
|||  
|-|-|  
|[Riferimento rapido](../cppcx/quick-reference-c-cx.md)|Tabella delle parole chiave e degli operatori per [!INCLUDE[cppwrt](../cppcx/includes/cppwrt-md.md)] \([!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)]\).|  
|[Sistema di tipi](../cppcx/type-system-c-cx.md)|Vengono descritti i tipi di base di [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] e costrutti di programmazione e come utilizzare [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] per creare e utilizzare i tipi di [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)].|  
|[Compilazione di applicazioni e librerie](../cppcx/building-apps-and-libraries-c-cx.md)|Viene illustrato come utilizzare l'IDE per compilare app e come collegarsi alle DLL e alle librerie statiche.|  
|[Interoperabilità con altri linguaggi](../cppcx/interoperating-with-other-languages-c-cx.md)|Viene illustrato come utilizzare i componenti scritti in [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] con i componenti scritti in JavaScript, in qualsiasi linguaggio gestito o in [!INCLUDE[cppwrl](../cppcx/includes/cppwrl-md.md)].|  
|[Threading e marshalling](../cppcx/threading-and-marshaling-c-cx.md)|Viene illustrato come specificare il comportamento di threading e di marshalling dei componenti creati.|  
|[Riferimenti a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)|Documentazione di riferimento per gli spazi dei nomi predefinito, Platform, Platform::Collections e correlati.|  
|[Funzioni CRT non supportate nelle app della piattaforma UWP \(Universal Windows Platform\)](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md)|Elenca le funzioni CRT non disponibili per l'uso nelle app di Windows Runtime.|  
|[Guide alle procedure per le app Windows 10](http://msdn.microsoft.com/library/windows/apps/xaml/mt244352.aspx)|Offre indicazioni di alto livello sulle app di Windows 10 e collegamenti ad altre informazioni.|  
  
1.  [C\+\+\/CX \- Parte 0 di \[n\]: Introduzione](http://blogs.msdn.com/b/vcblog/archive/2012/08/29/cxxcxpart00anintroduction.aspx)  
  
2.  [C\+\+\/CX \- Parte 0 di \[n\]: Introduzione](http://blogs.msdn.com/b/vcblog/archive/2012/08/29/cxxcxpart00anintroduction.aspx)  
  
3.  [C\+\+\/CX \- Parte 2 di \[n\]: Tipi con accenti circonflessi](http://blogs.msdn.com/b/vcblog/archive/2012/09/17/cxxcxpart02typesthatwearhats.aspx)  
  
4.  [C\+\+\/CX \- Parte 3 di \[n\]: In costruzione](http://blogs.msdn.com/b/vcblog/archive/2012/10/05/cxxcxpart03underconstruction.aspx)  
  
5.  [C\+\+\/CX \- Parte 4 di \[n\]: Funzioni membro statiche](http://blogs.msdn.com/b/vcblog/archive/2012/10/19/cxxcxpart04staticmemberfunctions.aspx)