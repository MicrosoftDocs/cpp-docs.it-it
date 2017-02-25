---
title: "IConnectionPointContainerImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::IConnectionPointContainerImpl"
  - "ATL.IConnectionPointContainerImpl"
  - "ATL.IConnectionPointContainerImpl<T>"
  - "IConnectionPointContainerImpl"
  - "ATL::IConnectionPointContainerImpl<T>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "connectable objects"
  - "punti di connessione [C++], container"
  - "IConnectionPointContainerImpl class"
ms.assetid: 10db5a8d-8be9-4d9d-8a82-8ab9ffe3e9d6
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# IConnectionPointContainerImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa un contenitore del punto di connessione per gestire una raccolta di oggetti [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md).  
  
## Sintassi  
  
```  
  
      template<  
   class T   
>  
class ATL_NO_VTABLE IConnectionPointContainerImpl :   
   public IConnectionPointContainer  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `IConnectionPointContainerImpl`.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IConnectionPointContainerImpl::EnumConnectionPoints](../Topic/IConnectionPointContainerImpl::EnumConnectionPoints.md)|Crea un enumeratore per scorrere i punti di connessione supportato nell'oggetto collegabile.|  
|[IConnectionPointContainerImpl::FindConnectionPoint](../Topic/IConnectionPointContainerImpl::FindConnectionPoint.md)|Recupera un puntatore a interfaccia al punto di connessione che supporta l'iid specificato.|  
  
## Note  
 `IConnectionPointContainerImpl` implementa un contenitore del punto di connessione per gestire una raccolta di oggetti [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md).  `IConnectionPointContainerImpl` fornisce due metodi che un client può chiamare per recuperare ulteriori informazioni su un oggetto collegabile:  
  
-   `EnumConnectionPoints` consente al client determinare le interfacce in uscita l'oggetto supporta.  
  
-   `FindConnectionPoint` consente al client di determinare se l'oggetto supporta un'interfaccia in uscita specifica.  
  
 Per informazioni sull'utilizzo dei punti di connessione con ATL, vedere l'articolo [Punti di connessione](../../atl/atl-connection-points.md).  
  
## Gerarchia di ereditarietà  
 `IConnectionPointContainer`  
  
 `IConnectionPointContainerImpl`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [IConnectionPointContainer](http://msdn.microsoft.com/library/windows/desktop/ms683857)   
 [Class Overview](../../atl/atl-class-overview.md)