---
title: "Win32ThreadTraits Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "Win32ThreadTraits"
  - "ATL::Win32ThreadTraits"
  - "ATL.Win32ThreadTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "threading [ATL], creation functions"
  - "threading [ATL], Windows threads"
  - "Win32ThreadTraits class"
ms.assetid: 50279c38-eae1-4301-9ea6-97ccea580f3e
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# Win32ThreadTraits Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce la funzione di creazione di un thread di Windows.  Utilizzare questa classe se il thread non verranno utilizzate le funzioni CRT.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class Win32ThreadTraits  
  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Win32ThreadTraits::CreateThread](../Topic/Win32ThreadTraits::CreateThread.md)|\(Proprietà statica\) chiamare questa funzione per creare un thread non deve utilizzare le funzioni CRT.|  
  
## Note  
 I tratti del thread sono classi che forniscono una funzione di creazione di un determinato tipo di thread.  La funzione di creazione della stessa firma e semantica della funzione di Windows [CreateThread](http://msdn.microsoft.com/library/windows/desktop/ms682453).  
  
 Tratti di thread utilizzati dalle classi seguenti:  
  
-   [CThreadPool](../../atl/reference/cthreadpool-class.md)  
  
-   [CWorkerThread](../../atl/reference/cworkerthread-class.md)  
  
 Se il thread utilizzerà le funzioni CRT, utilizzare [CRTThreadTraits](../../atl/reference/crtthreadtraits-class.md) anziché.  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)