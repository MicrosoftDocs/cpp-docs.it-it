---
title: "CComTearOffObject Class | Microsoft Docs"
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
  - "ATL::CComTearOffObject<Base>"
  - "ATL::CComTearOffObject"
  - "ATL.CComTearOffObject"
  - "ATL.CComTearOffObject<Base>"
  - "CComTearOffObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComTearOffObject class"
  - "tear-off interfaces"
  - "tear-off interfaces, ATL"
ms.assetid: d974b598-c6b2-42b1-8360-9190d9d0fbf3
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComTearOffObject Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa un un'interfaccia tear\-off.  
  
## Sintassi  
  
```  
  
      template<  
   class Base   
>  
class CComTearOffObject :  
   public Base  
```  
  
#### Parametri  
 `Base`  
 Il sradichi la classe, derivata da `CComTearOffObjectBase` e le interfacce che si desidera che il sradicano l'oggetto di supporto.  
  
 ATL implementa i relativi un'interfaccia tear\-off in due fasi — i metodi `CComTearOffObjectBase` gestiscono il conteggio dei riferimenti e `QueryInterface`, mentre `CComTearOffObject` implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509).  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComTearOffObject::CComTearOffObject](../Topic/CComTearOffObject::CComTearOffObject.md)|Costruttore.|  
|[CComTearOffObject::~CComTearOffObject](../Topic/CComTearOffObject::~CComTearOffObject.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComTearOffObject::AddRef](../Topic/CComTearOffObject::AddRef.md)|Incrementa il conteggio dei riferimenti per un oggetto `CComTearOffObject`.|  
|[CComTearOffObject::QueryInterface](../Topic/CComTearOffObject::QueryInterface.md)|Restituisce un puntatore a un'interfaccia richiesta su uno il sradicano la classe o la classe proprietario.|  
|[CComTearOffObject::Release](../Topic/CComTearOffObject::Release.md)|Decrementa il conteggio dei riferimenti per un oggetto `CComTearOffObject` e lo stato eliminato.|  
  
### Metodi di CComTearOffObjectBase  
  
|||  
|-|-|  
|[CComTearOffObjectBase](../Topic/CComTearOffObject::CComTearOffObjectBase.md)|Costruttore.|  
  
### Membri dati di CComTearOffObjectBase  
  
|||  
|-|-|  
|[m\_pOwner](../Topic/CComTearOffObject::m_pOwner.md)|Un puntatore a `CComObject` derivato dalla classe proprietario.|  
  
## Note  
 Un`CComTearOffObject` implementa un'interfaccia tear\-off come oggetto separato che viene creata un'istanza solo quando tale interfaccia viene eseguita una query per.  Lo sradicamento eliminato quando il conteggio dei riferimenti diventa zero.  In genere, gli sviluppatori di un'interfaccia tear\-off per un'interfaccia utilizzata raramente, poiché tramite uno sradicamento salva un puntatore vtable in tutte le istanze del principale.  
  
 È necessario derivare la classe che implementi lo sradicamento da `CComTearOffObjectBase` e dalle interfacce che il sradichi l'oggetto di supporto.  `CComTearOffObjectBase` templatized la classe proprietario e il modello di threading.  La classe proprietario è la classe dell'oggetto di cui uno sradicamento sta implementando.  Se non si specifica un modello di threading, il modello di threading predefinito.  
  
 È necessario creare un COM si esegue il mapping del sradicate la classe.  Quando ATL creare un'istanza dello sradicamento, viene creata **CComTearOffObject\<CYourTearOffClass\>** o **CComCachedTearOffObject\<CYourTearOffClass\>**.  
  
 Ad esempio, nell'esempio BEEPER, la classe `CBeeper2` è la classe di sradicamento e la classe `CBeeper` è la classe proprietario:  
  
 [!code-cpp[NVC_ATL_COM#43](../../atl/codesnippet/CPP/ccomtearoffobject-class_1.h)]  
  
## Gerarchia di ereditarietà  
 `Base`  
  
 `CComTearOffObject`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [CComCachedTearOffObject Class](../../atl/reference/ccomcachedtearoffobject-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)