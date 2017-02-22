---
title: "CAtlServiceModuleT::Start Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CServiceModule.Start"
  - "CServiceModule::Start"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Start (metodo)"
ms.assetid: b5193a23-41bc-42d2-8d55-3eb43dc62238
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# CAtlServiceModuleT::Start Function
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando il servizio viene diretto, **\_tWinMain** chiama **CAtlServiceModuleT::WinMain**, che a sua volta chiama `CAtlServiceModuleT::Start`.  
  
 `CAtlServiceModuleT::Start` installa una matrice di strutture **SERVICE\_TABLE\_ENTRY** che eseguono il mapping di ogni servizio alla funzione di avvio.  Questa matrice viene quindi passata alla funzione API Win32, [StartServiceCtrlDispatcher](http://msdn.microsoft.com/library/windows/desktop/ms686324).  In teoria, un ESEGUIBILE può gestire i servizi e maggiore della matrice di strutture più **SERVICE\_TABLE\_ENTRY**.  Attualmente, tuttavia, supporta di servizio ATL\- generati solo un servizio per il file EXE.  Pertanto, la matrice contiene una sola voce che contiene il nome del servizio e **\_ServiceMain** come funzione di avvio.  **\_ServiceMain** è una funzione membro static `CAtlServiceModuleT` che chiama la funzione membro non static, `ServiceMain`.  
  
> [!NOTE]
>  L'omissione **StartServiceCtrlDispatcher** di connettersi all'amministratore \(SCM\) del controllo del servizio che significa che il programma non viene eseguito come servizio.  In questo caso, il programma chiama direttamente `CAtlServiceModuleT::Run` in modo da poter eseguire il programma come server locale.  Per ulteriori informazioni su come eseguire il programma come server locale, vedere [suggerimenti di debug](../atl/debugging-tips.md).  
  
## Vedere anche  
 [Servizi](../atl/atl-services.md)   
 [CAtlServiceModuleT::Start](../Topic/CAtlServiceModuleT::Start.md)