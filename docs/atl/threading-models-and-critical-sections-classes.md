---
title: "Threading Models and Critical Sections Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.atl.threads.models"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, critical sections"
  - "ATL, multithreading"
  - "critical sections"
  - "threading [ATL], modelli"
ms.assetid: 759f05ef-6285-4be6-a2cc-78572dd75146
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Threading Models and Critical Sections Classes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le classi definiscono un modello di threading e una sezione critica:  
  
-   [CAtlAutoThreadModule](../atl/reference/catlautothreadmodule-class.md) implementa i thread raccolte, server COM apartment\- modello.  
  
-   [CAtlAutoThreadModuleT](../atl/reference/catlautothreadmodulet-class.md) fornisce metodi per l'implementazione di raccolte, server COM apartment\- modello.  
  
-   [CComMultiThreadModel](../atl/reference/ccommultithreadmodel-class.md) fornisce metodi thread\-safe per incrementare e decremento una variabile.  Fornisce una sezione critica.  
  
-   [CComMultiThreadModelNoCS](../atl/reference/ccommultithreadmodelnocs-class.md) fornisce metodi thread\-safe per incrementare e decremento una variabile.  Non è disponibile una sezione critica.  
  
-   [CComSingleThreadModel](../atl/reference/ccomsinglethreadmodel-class.md) fornisce metodi per incrementare e decremento una variabile.  Non è disponibile una sezione critica.  
  
-   [CComObjectThreadModel](../Topic/CComObjectThreadModel.md) determina la classe appropriata del modello di threading per una singola classe di oggetto.  
  
-   [CComGlobalsThreadModel](../Topic/CComGlobalsThreadModel.md) determina la classe appropriata del modello di threading per un oggetto che è disponibile a livello globale.  
  
-   [CComAutoCriticalSection](../atl/reference/ccomautocriticalsection-class.md) contiene metodi per ottenere e la pubblicazione della sezione critica.  La sezione critica automaticamente inizializzata.  
  
-   [CComCriticalSection](../atl/reference/ccomcriticalsection-class.md) contiene metodi per ottenere e la pubblicazione della sezione critica.  La sezione critica deve essere esplicitamente inizializzata.  
  
-   [CComFakeCriticalSection](../atl/reference/ccomfakecriticalsection-class.md) riflettono i metodi in `CComCriticalSection` senza fornire una sezione critica.  I metodi in `CComFakeCriticalSection` non eseguono alcuna operazione.  
  
-   [CRTThreadTraits](../atl/reference/crtthreadtraits-class.md) la funzione fornita la creazione di un thread CRT.  Utilizzare questa classe se il thread utilizzerà le funzioni CRT.  
  
-   [Win32ThreadTraits](../atl/reference/win32threadtraits-class.md) la funzione fornita la creazione di un thread di Windows.  Utilizzare questa classe se il thread non verranno utilizzate le funzioni CRT.  
  
## Vedere anche  
 [Class Overview](../atl/atl-class-overview.md)