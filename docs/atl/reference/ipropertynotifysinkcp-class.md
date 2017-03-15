---
title: "IPropertyNotifySinkCP Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IPropertyNotifySinkCP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "punti di connessione [C++], gestione"
  - "IPropertyNotifySinkCP class"
  - "sinks, notifying of changes"
ms.assetid: 1b41445e-bc88-4fa6-bb62-d68aacec2bd5
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# IPropertyNotifySinkCP Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe espone l'interfaccia [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) come interfaccia in uscita in un oggetto collegabile.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
      template< class   
      T  
      , class  
      CDV   
      = CComDynamicUnkArray >  
class IPropertyNotifySinkCP :   
public IConnectionPointImpl< T, &IID_IPropertyNotifySink, CDV>  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `IPropertyNotifySinkCP`.  
  
 `CDV`  
 Classe che gestisce le connessioni tra un punto di connessione e i sink.  Il valore predefinito è [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md), che consente le connessioni illimitate.  È inoltre possibile utilizzare [CComUnkArray](../../atl/reference/ccomunkarray-class.md), che specifica un numero fisso delle connessioni.  
  
## Note  
 `IPropertyNotifySinkCP` eredita tutti i metodi nella classe di base, [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md).  
  
 L'interfaccia consente [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) un oggetto sink di ricevere notifiche relative alle modifiche della proprietà.  La classe espone `IPropertyNotifySinkCP` questa interfaccia come interfaccia in uscita in un oggetto collegabile.  Il client deve implementare i metodi `IPropertyNotifySink` il sink.  
  
 Derivare la classe da `IPropertyNotifySinkCP` quando si desidera creare un punto di connessione che rappresenta l'interfaccia `IPropertyNotifySink`.  
  
 Per ulteriori informazioni sull'utilizzo dei punti di connessione con ATL, vedere l'articolo [Punti di connessione](../../atl/atl-connection-points.md).  
  
## Requisiti  
 **Header:** atlctl.h  
  
## Vedere anche  
 [IConnectionPointImpl Class](../../atl/reference/iconnectionpointimpl-class.md)   
 [IConnectionPointContainerImpl Class](../../atl/reference/iconnectionpointcontainerimpl-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)