---
title: "Una DLL MFC pu&#242; creare pi&#249; thread? | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DLL [C++], multithreading"
  - "DLL MFC [C++], multithreading"
  - "multithreading [C++], DLL"
  - "threading [MFC], DLL"
ms.assetid: 41d5b5e6-a7d3-42bf-b641-f1245abd1c59
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Una DLL MFC pu&#242; creare pi&#249; thread?
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Fatta eccezione per la fase di inizializzazione, una DLL MFC può creare più thread in modo sicuro, a condizione che utilizzi le funzioni di memoria locale di thread \(TLS, Thread Local Storage\) di Win32 come **TlsAlloc** per assegnare lo spazio di memoria locale del thread.  Tuttavia, se una DLL MFC utilizza **\_\_declspec\(thread\)** per assegnare lo spazio di memoria locale del thread, l'applicazione client dovrà essere collegata alla DLL in modo implicito.  Se l'applicazione client è collegata alla DLL in modo esplicito, la chiamata a **LoadLibrary** non caricherà correttamente la DLL.  Per ulteriori informazioni sulla creazione di più thread nelle DLL MFC, vedere l'articolo della Knowledge Base "PRB: Calling LoadLibrary\(\) to Load a DLL That Has Static TLS" \(Q118816\) \(informazioni in lingua inglese\).  
  
 Una DLL MFC che crea un nuovo thread MFC all'avvio smette di rispondere quando viene caricata da un'applicazione.  Questa condizione si verifica ogni volta in cui un thread viene creato chiamando `AfxBeginThread` o `CWinThread::CreateThread` all'interno di:  
  
-   `InitInstance` di un oggetto derivato da `CWinApp` in una DLL regolare;  
  
-   una funzione `DllMain` o **RawDllMain** fornita in una DLL regolare;  
  
-   una funzione `DllMain` o **RawDllMain** fornita in una DLL di estensione.  
  
 Per ulteriori informazioni sulla creazione di thread durante l'inizializzazione, vedere l'articolo della Knowledge Base "PRB: Cannot Create an MFC Thread During DLL Startup" \(Q142243\) \(informazioni in lingua inglese\).  
  
## Vedere anche  
 [Domande frequenti relative alle DLL](../build/dll-frequently-asked-questions.md)