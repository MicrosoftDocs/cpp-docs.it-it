---
title: "CRTThreadTraits Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CRTThreadTraits"
  - "ATL.CRTThreadTraits"
  - "CRTThreadTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRTThreadTraits class"
  - "threading [ATL], creation functions"
  - "threading [ATL], CRT threads"
ms.assetid: eb6e20b0-c2aa-4170-8e34-aaeeacc86343
caps.latest.revision: 21
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRTThreadTraits Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce la funzione di creazione per un thread CRT.  Utilizzare questa classe se il thread utilizzerà le funzioni CRT.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CRTThreadTraits  
  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRTThreadTraits::CreateThread](../Topic/CRTThreadTraits::CreateThread.md)|\(Proprietà statica\) chiamare questa funzione per creare un thread che può utilizzare le funzioni CRT.|  
  
## Note  
 I tratti del thread sono classi che forniscono una funzione di creazione di un determinato tipo di thread.  La funzione di creazione della stessa firma e semantica della funzione di Windows [CreateThread](http://msdn.microsoft.com/library/windows/desktop/ms682453).  
  
 Tratti di thread utilizzati dalle classi seguenti:  
  
-   [CThreadPool](../../atl/reference/cthreadpool-class.md)  
  
-   [CWorkerThread](../../atl/reference/cworkerthread-class.md)  
  
 Se il thread non utilizzerà le funzioni CRT, utilizzare [Win32ThreadTraits](../../atl/reference/win32threadtraits-class.md) anziché.  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)