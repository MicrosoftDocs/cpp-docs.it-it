---
title: "App di Windows universale (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 357121cc-d390-4bae-b34a-39614861a9f4
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# App di Windows universale (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le app della piattaforma UWP \(Universal Windows Platform\) contengono un set di principi di progettazione che mettono l'accento su interfacce utente semplici incentrate sul contenuto e in grado di adattarsi automaticamente alle diverse dimensioni dello schermo di dispositivi di vario tipo. L'interfaccia utente viene creata con il markup XAML, mentre il code\-behind in codice C\+\+ nativo. È anche possibile creare componenti \(DLL\) che possono essere usati da app UWP scritte in altri linguaggi. La superficie dell'API per le app UWP è [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)], una ben fornita libreria che offre un'ampia gamma di servizi del sistema operativo.  
  
> [!NOTE]
>  Buona parte della documentazione per lo sviluppo di app UWP in C\+\+ è disponibile nel sito Web [Windows Dev Center](http://go.microsoft.com/fwlink/p/?LinkId=255563). Alcuni dei collegamenti in questo articolo rimandano a tale sito Web.  
  
## App UWP che usano C\+\+\/CX  
  
|||  
|-|-|  
|[Documentazione di riferimento del linguaggio Visual C\+\+ \(C\+\+\/CX\)](http://go.microsoft.com/fwlink/p/?LinkId=255561)|Descrive il set di estensioni che semplificano l'utilizzo in C\+\+ delle API di [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] e abilitano la gestione degli errori basata sulle eccezioni.|  
|[Compilazione di applicazioni e librerie \(C\+\+\/CX\)](http://go.microsoft.com/fwlink/p/?LinkId=264858)|Descrive come creare DLL e librerie statiche a cui è possibile accedere da un componente o un'app C\+\+\/CX.|  
|[Esercitazione: Creare la prima app di Windows Store con C\+\+](http://go.microsoft.com/fwlink/p/?LinkId=255556)|Procedura dettagliata che presenta i concetti di base dello sviluppo di app di [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] in C\+\+. Argomento non ancora aggiornato per lo sviluppo UWP in Windows 10.|  
|[Guida di orientamento per applicazioni Windows Store in C\+\+](http://go.microsoft.com/fwlink/p/?LinkId=255553)|Fornisce collegamenti ad articoli relativi allo sviluppo di giochi e app di [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] in C\+\+.|  
|[Creazione di componenti Windows Runtime in C\+\+](http://go.microsoft.com/fwlink/p/?LinkId=255559)|Descrive come creare DLL che possono essere usate da altri componenti e app di [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)].|  
|[Sviluppo di giochi](http://go.microsoft.com/fwlink/p/?LinkId=255554)|Descrive come usare DirectX e C\+\+ per creare giochi.|  
  
## Applicazioni [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] che usano [!INCLUDE[cppwrl](../windows/includes/cppwrl_md.md)] \([!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)]\)  
 [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] fornisce le interfacce COM di basso livello tramite cui il codice C\+\+ ISO può accedere a [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] in un ambiente privo di eccezioni. Nella maggior parte dei casi si consiglia di usare C\+\+\/CX invece di [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] per lo sviluppo di applicazioni [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)]. Per informazioni su [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)], vedere [Libreria di modelli di Windows Runtime C\+\+ \(WRL\)](../windows/windows-runtime-cpp-template-library-wrl.md).  
  
## Vedere anche  
 [Visual C\+\+](../top/visual-cpp-in-visual-studio-2015.md)