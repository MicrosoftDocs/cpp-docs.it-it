---
title: "CComCachedTearOffObject Class | Microsoft Docs"
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
  - "ATL::CComCachedTearOffObject"
  - "ATL.CComCachedTearOffObject"
  - "ATL.CComCachedTearOffObject<contained>"
  - "CComCachedTearOffObject"
  - "ATL::CComCachedTearOffObject<contained>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cache, ATL cached tear-off objects"
  - "CComCachedTearOffObject class"
ms.assetid: ae19507d-a1de-4dbc-a988-da9f75a50c95
caps.latest.revision: 19
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComCachedTearOffObject Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) per un un'interfaccia tear\-off.  
  
## Sintassi  
  
```  
  
      template <  
   class contained  
>  
class CComCachedTearOffObject : public IUnknown,  
   public CComObjectRootEx< contained::_ThreadModel::ThreadModelNoCS >  
```  
  
#### Parametri  
 `contained`  
 Il sradichi la classe, derivata da `CComTearOffObjectBase` e le interfacce che si desidera che il sradicano l'oggetto di supporto.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCachedTearOffObject::CComCachedTearOffObject](../Topic/CComCachedTearOffObject::CComCachedTearOffObject.md)|Costruttore.|  
|[CComCachedTearOffObject::~CComCachedTearOffObject](../Topic/CComCachedTearOffObject::~CComCachedTearOffObject.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCachedTearOffObject::AddRef](../Topic/CComCachedTearOffObject::AddRef.md)|Incrementa il conteggio dei riferimenti per un oggetto `CComCachedTearOffObject`.|  
|[CComCachedTearOffObject::FinalConstruct](../Topic/CComCachedTearOffObject::FinalConstruct.md)|Chiama `m_contained::FinalConstruct` \(il metodo delle classi di sradicamento\).|  
|[CComCachedTearOffObject::FinalRelease](../Topic/CComCachedTearOffObject::FinalRelease.md)|Chiama `m_contained::FinalRelease` \(il metodo delle classi di sradicamento\).|  
|[CComCachedTearOffObject::QueryInterface](../Topic/CComCachedTearOffObject::QueryInterface.md)|Restituisce un puntatore a `IUnknown` dell'oggetto `CComCachedTearOffObject`, o a un'interfaccia richiesta sul sradichi la classe \(classe `contained`\).|  
|[CComCachedTearOffObject::Release](../Topic/CComCachedTearOffObject::Release.md)|Decrementa il conteggio dei riferimenti per un oggetto `CComCachedTearOffObject` e lo stato eliminato se il conteggio dei riferimenti è 0.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCachedTearOffObject::m\_contained](../Topic/CComCachedTearOffObject::m_contained.md)|Un oggetto `CComContainedObject` derivato dal sradica la classe \(classe `contained`\).|  
  
## Note  
 Implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) di`CComCachedTearOffObject` per un un'interfaccia tear\-off.  Questa classe differisce da `CComTearOffObject` in quanto `CComCachedTearOffObject` dispone di un proprio **IUnknown**, separati da **IUnknown** dell'oggetto proprietario \(il proprietario è l'oggetto per il quale lo sradicamento sta creando\).  `CComCachedTearOffObject` mantiene il relativo conteggio dei riferimenti al relativo **IUnknown** e si elimina una volta che il conteggio dei riferimenti è zero.  Tuttavia, se eseguire una query per i suoi un'interfaccia tear\-off, il conteggio dei riferimenti **IUnknown** dell'oggetto proprietario viene incrementato.  
  
 Se l'oggetto `CComCachedTearOffObject` che implementa lo sradicamento è già stata creata un'istanza e un'interfaccia tear\-off viene eseguita una query per inoltre, lo stesso oggetto `CComCachedTearOffObject` viene riutilizzato.  Al contrario, se un un'interfaccia tear\-off implementata da `CComTearOffObject` viene eseguita una query di nuovo per l'oggetto proprietario, un altro `CComTearOffObject` verrà creata un'istanza.  
  
 La classe proprietario deve implementare `FinalRelease` e chiamare **Release** su **IUnknown** memorizzato nella cache per `CComCachedTearOffObject`, che decrementare il conteggio dei riferimenti.  In questo modo `FinalRelease` di `CComCachedTearOffObject` venga chiamata e per eliminare lo sradicamento.  
  
## Gerarchia di ereditarietà  
 `CComObjectRootBase`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 `IUnknown`  
  
 `CComCachedTearOffObject`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [CComTearOffObject Class](../../atl/reference/ccomtearoffobject-class.md)   
 [CComObjectRootEx Class](../../atl/reference/ccomobjectrootex-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)