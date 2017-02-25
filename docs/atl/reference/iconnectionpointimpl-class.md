---
title: "IConnectionPointImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.IConnectionPointImpl"
  - "IConnectionPointImpl"
  - "ATL::IConnectionPointImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "punti di connessione [C++], implementazione"
  - "IConnectionPointImpl class"
ms.assetid: 27992115-3b86-45dd-bc9e-54f32876c557
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# IConnectionPointImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa un punto di connessione.  
  
## Sintassi  
  
```  
  
      template<  
   class T,  
   const IID* piid,  
   class CDV = CComDynamicUnkArray   
>  
class ATL_NO_VTABLE IConnectionPointImpl :  
   public _ICPLocator< piid >  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `IConnectionPointImpl`.  
  
 `piid`  
 Un puntatore all'IID dell'interfaccia rappresentata dall'oggetto del punto di connessione.  
  
 `CDV`  
 Classe che gestisce le connessioni.  Il valore predefinito è [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md), che consente le connessioni illimitate.  È inoltre possibile utilizzare [CComUnkArray](../../atl/reference/ccomunkarray-class.md), che specifica un numero fisso delle connessioni.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IConnectionPointImpl::Advise](../Topic/IConnectionPointImpl::Advise.md)|Stabilisce una connessione tra il punto di connessione e un sink.|  
|[IConnectionPointImpl::EnumConnections](../Topic/IConnectionPointImpl::EnumConnections.md)|Crea un enumeratore per scorrere le connessioni dal punto di connessione.|  
|[IConnectionPointImpl::GetConnectionInterface](../Topic/IConnectionPointImpl::GetConnectionInterface.md)|Recupera l'iid dell'interfaccia rappresentata dal punto di connessione.|  
|[IConnectionPointImpl::GetConnectionPointContainer](../Topic/IConnectionPointImpl::GetConnectionPointContainer.md)|Recupera un puntatore a interfaccia all'oggetto collegabile.|  
|[IConnectionPointImpl::Unadvise](../Topic/IConnectionPointImpl::Unadvise.md)|Termina una connessione stabilita in precedenza con `Advise`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IConnectionPointImpl::m\_vec](../Topic/IConnectionPointImpl::m_vec.md)|Gestisce le connessioni dal punto di connessione.|  
  
## Note  
 `IConnectionPointImpl` implementa un punto di connessione, che consente a un oggetto di esporre l'interfaccia in uscita al client.  Il client implementa questa interfaccia su un oggetto denominato sink.  
  
 ATL utilizza [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md) per l'implementazione dell'oggetto collegabile.  Ogni punto di connessione all'interno dell'oggetto collegabile rappresenta un'interfaccia in uscita, identificata da `piid`.  La classe *CDV* gestisce le connessioni tra il punto di connessione e un sink.  Ogni connessione in modo univoco è identificata da "cookie".  
  
 Per ulteriori informazioni sull'utilizzo dei punti di connessione con ATL, vedere l'articolo [Punti di connessione](../../atl/atl-connection-points.md).  
  
## Gerarchia di ereditarietà  
 `_ICPLocator`  
  
 `IConnectionPointImpl`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [IConnectionPoint](http://msdn.microsoft.com/library/windows/desktop/ms694318)   
 [Class Overview](../../atl/atl-class-overview.md)