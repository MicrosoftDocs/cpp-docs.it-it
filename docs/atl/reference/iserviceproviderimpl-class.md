---
title: "IServiceProviderImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::IServiceProviderImpl<T>"
  - "ATL.IServiceProviderImpl<T>"
  - "ATL.IServiceProviderImpl"
  - "ATL::IServiceProviderImpl"
  - "IServiceProviderImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IServiceProvider (interfaccia), implementazione ATL"
  - "IServiceProviderImpl class"
ms.assetid: 251254d3-c4ce-40d7-aee0-3d676d1d72f2
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# IServiceProviderImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce un'implementazione predefinita dell'interfaccia `IServiceProvider`.  
  
## Sintassi  
  
```  
  
      template <  
   class T  
>   
class ATL_NO_VTABLE IServiceProviderImpl :  
   public IServiceProvider  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `IServiceProviderImpl`.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IServiceProviderImpl::QueryService](../Topic/IServiceProviderImpl::QueryService.md)|Crea o si accede al servizio specificato e restituisce un puntatore a interfaccia all'interfaccia specificata per il servizio.|  
  
## Note  
 L'interfaccia `IServiceProvider` individua un servizio specificato dal GUID e restituisce un puntatore a interfaccia per l'interfaccia richiesta dal servizio.  La classe `IServiceProviderImpl` fornisce un'implementazione predefinita dell'interfaccia.  
  
 **IServiceProviderImpl** specifica un metodo: [QueryService](../Topic/IServiceProviderImpl::QueryService.md), che crea o si accede al servizio specificato e restituisce un puntatore a interfaccia all'interfaccia specificata per il servizio.  
  
 `IServiceProviderImpl` utilizza un mapping di servizio, a partire da [BEGIN\_SERVICE\_MAP](../Topic/BEGIN_SERVICE_MAP.md) e fino a [END\_SERVICE\_MAP](../Topic/END_SERVICE_MAP.md).  
  
 Il mapping di servizio contiene due voci: [SERVICE\_ENTRY](../Topic/SERVICE_ENTRY.md), che indica un ID servizio specificato \(SID\) supportato dall'oggetto e [SERVICE\_ENTRY\_CHAIN](../Topic/SERVICE_ENTRY_CHAIN.md), che chiama `QueryService` per concatenare a un altro oggetto.  
  
## Gerarchia di ereditarietà  
 `IServiceProvider`  
  
 `IServiceProviderImpl`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)