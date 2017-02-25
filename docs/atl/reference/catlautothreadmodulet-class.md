---
title: "CAtlAutoThreadModuleT Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CAtlAutoThreadModuleT"
  - "ATL::CAtlAutoThreadModuleT"
  - "CAtlAutoThreadModuleT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlAutoThreadModuleT class"
ms.assetid: ae1667c6-3fb8-47bc-b35d-9ea5e9896d7f
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# CAtlAutoThreadModuleT Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce i metodi per l'implementazione di raccolte, server COM apartment\- modello.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template <  
class T,  
class ThreadAllocator= CComSimpleThreadAllocator,  
DWORD dwWait= INFINITE   
>  
class ATL_NO_VTABLE CAtlAutoThreadModuleT :  
public IAtlAutoThreadModule  
```  
  
#### Parametri  
 `T`  
 La classe che implementerà il server COM.  
  
 `ThreadAllocator`  
 La classe che gestisce selezione del thread.  Il valore predefinito è [CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md).  
  
 `dwWait`  
 Specifica l'intervallo di timeout, in millisecondi.  L'impostazione predefinita è INFINITA, pertanto l'intervallo di timeout del metodo non trascorre mai.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlAutoThreadModuleT::GetDefaultThreads](../Topic/CAtlAutoThreadModuleT::GetDefaultThreads.md)|Questa funzione statica calcola dinamicamente e restituisce il numero massimo di thread per il modulo EXE, in base al numero di processori.|  
  
## Note  
 La classe [CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md) deriva da `CAtlAutoThreadModuleT` per l'implementazione di raccolte, server COM apartment\- modello.  Sostituisce la classe precedente [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).  
  
> [!NOTE]
>  Questa classe non deve essere utilizzata in una DLL, poiché il valore predefinito `dwWait` di INFINITY causare un deadlock quando la DLL viene scaricato.  
  
## Gerarchia di ereditarietà  
 `IAtlAutoThreadModule`  
  
 `CAtlAutoThreadModuleT`  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [IAtlAutoThreadModule Class](../../atl/reference/iatlautothreadmodule-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [IAtlAutoThreadModule Class](../../atl/reference/iatlautothreadmodule-class.md)   
 [Classi di modulo](../../atl/atl-module-classes.md)