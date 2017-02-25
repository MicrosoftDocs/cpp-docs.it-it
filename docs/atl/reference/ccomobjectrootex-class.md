---
title: "CComObjectRootEx Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CComObjectRootEx"
  - "ATL::CComObjectRootEx<ThreadModel>"
  - "CComObjectRootEx"
  - "ATL::CComObjectRootEx"
  - "ATL.CComObjectRootEx<ThreadModel>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "reference counting"
ms.assetid: 894a3d7c-2daf-4fd0-8fa4-e6a05bcfb631
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# CComObjectRootEx Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per la gestione di conteggio di riferimento a un handle per non sia aggregato di oggetti aggregati.  
  
## Sintassi  
  
```  
  
      template<  
   class ThreadModel   
>  
class CComObjectRootEx : public CComObjectRootBase  
```  
  
#### Parametri  
 `ThreadModel`  
 La classe dei metodi implementano il modello di threading desiderato.  È possibile scegliere in modo esplicito il modello di threading impostando `ThreadModel` a [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md), a [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md), o a [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md).  È possibile accettare il modello di threading predefinito del server impostando `ThreadModel` a [CComObjectThreadModel](../Topic/CComObjectThreadModel.md) o a [CComGlobalsThreadModel](../Topic/CComGlobalsThreadModel.md).  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[CComObjectRootEx](../Topic/CComObjectRootEx::CComObjectRootEx.md)|Costruttore.|  
|[InternalAddRef](../Topic/CComObjectRootEx::InternalAddRef.md)|Incrementa il conteggio dei riferimenti per un oggetto non aggregato.|  
|[InternalRelease](../Topic/CComObjectRootEx::InternalRelease.md)|Decrementa il conteggio dei riferimenti per un oggetto non aggregato.|  
|[Blocca](../Topic/CComObjectRootEx::Lock.md)|Se il modello di threading è multithreading, ottenere la proprietà di un oggetto sezione critica.|  
|[Sblocca](../Topic/CComObjectRootEx::Unlock.md)|Se il modello di threading è multithreading, rilascia la proprietà di un oggetto sezione critica.|  
  
### Metodi di CComObjectRootBase  
  
|||  
|-|-|  
|[FinalConstruct](../Topic/CComObjectRootEx::FinalConstruct.md)|Override della classe per eseguire eventuali inizializzazioni richieste dall'oggetto.|  
|[FinalRelease](../Topic/CComObjectRootEx::FinalRelease.md)|Override della classe per eseguire la pulitura richieste dall'oggetto.|  
|[OuterAddRef](../Topic/CComObjectRootEx::OuterAddRef.md)|Incrementa il conteggio dei riferimenti per un oggetto aggregato.|  
|[OuterQueryInterface](../Topic/CComObjectRootEx::OuterQueryInterface.md)|Delegati a **IUnknown** esterno di un oggetto aggregato.|  
|[OuterRelease](../Topic/CComObjectRootEx::OuterRelease.md)|Decrementa il conteggio dei riferimenti per un oggetto aggregato.|  
  
### Funzioni statiche  
  
|||  
|-|-|  
|[InternalQueryInterface](../Topic/CComObjectRootEx::InternalQueryInterface.md)|Delegati a **IUnknown** di un oggetto non aggregato.|  
|[ObjectMain](../Topic/CComObjectRootEx::ObjectMain.md)|Chiamata durante l'inizializzazione e la chiusura del form per le classi derivate è elencato nella mappa oggetto.|  
  
### Membri di dati  
  
|||  
|-|-|  
|[m\_dwRef](../Topic/CComObjectRootEx::m_dwRef.md)|Con `m_pOuterUnknown`, parte di un'unione.  Utilizzato quando l'oggetto non verranno aggregati per utilizzare il conteggio dei riferimenti `AddRef` e **Release**.|  
|[m\_pOuterUnknown](../Topic/CComObjectRootEx::m_pOuterUnknown.md)|Con `m_dwRef`, parte di un'unione.  Utilizzato quando l'oggetto è aggregato per utilizzare un puntatore a sconosciuto esterno.|  
  
## Note  
 Gestione di conteggio di riferimento oggetto handle di`CComObjectRootEx` sia per non aggregato di oggetti aggregati.  Utilizza il conteggio di riferimento oggetto se l'oggetto non sta eseguendo l'aggregazione e utilizza il puntatore a sconosciuto esterno se l'oggetto sta eseguendo l'aggregazione.  Per gli oggetti aggregati, i metodi `CComObjectRootEx` possono essere utilizzati per gestire l'errore dell'oggetto interno al costrutto e la protezione dell'oggetto esterno da utilizzare quando le interfacce interne vengono eliminate o l'oggetto interno viene eliminato.  
  
 Una classe che implementa un server COM deve ereditare da `CComObjectRootEx` o da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md).  
  
 Se la definizione della classe specifica la macro [DECLARE\_POLY\_AGGREGATABLE](../Topic/DECLARE_POLY_AGGREGATABLE.md), ATL crea un'istanza **CComPolyObject\<CYourClass\>** quando **IClassFactory::CreateInstance** viene chiamato.  Durante la creazione, il valore di sconosciuto esterno sia selezionata.  Se è **NULL**, **IUnknown** viene implementato per un oggetto non aggregato.  Se sconosciuto esterno non è **NULL**, **IUnknown** viene implementato per un oggetto aggregato.  
  
 Se la classe non specifica la macro `DECLARE_POLY_AGGREGATABLE`, ATL crea un'istanza **CAggComObject\<CYourClass\>** per gli oggetti aggregati o un'istanza **CComObject\<CYourClass\>** per gli oggetti non aggregati.  
  
 Il vantaggio di l `CComPolyObject` è di evitare di avere sia `CComAggObject` che `CComObject` nel modulo per gestire i casi aggregati e non aggregati.  Singole un oggetto `CComPolyObject` entrambi i casi.  Di conseguenza, solo una copia del puntatore vtable e una copia delle funzioni esistenti nel form.  Se il riferimento è elevata, questo può ridurre notevolmente la dimensione del modulo.  Tuttavia, se il riferimento è ridotto, utilizzando `CComPolyObject` possono comportare una dimensione leggermente più grande del modulo perché non è ottimizzata per un oggetto aggregato o non aggregato, come vengono `CComAggObject` e `CComObject`.  
  
 Se l'oggetto è aggregato, [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) implementato da `CComAggObject` o da `CComPolyObject`.  Queste classi delegato `QueryInterface`, `AddRef`e le chiamate **Release**`OuterQueryInterface`, `OuterAddRef`e `OuterRelease` di `CComObjectRootEx` per inoltrare a sconosciuto esterno.  In genere, eseguire l'override `CComObjectRootEx::FinalConstruct` della classe per creare tutti gli oggetti aggregati e si esegue l'override `CComObjectRootEx::FinalRelease` per liberare eventuali oggetti aggregati.  
  
 Se l'oggetto non verranno aggregati, **IUnknown** implementato da `CComObject` o da `CComPolyObject`.  In questo caso, le chiamate a `QueryInterface`, `AddRef`e **Release** sono delegati `InternalQueryInterface`, `InternalAddRef`e `InternalRelease` di `CComObjectRootEx` eseguire le operazioni effettive.  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [CComAggObject Class](../../atl/reference/ccomaggobject-class.md)   
 [CComObject Class](../../atl/reference/ccomobject-class.md)   
 [CComPolyObject Class](../../atl/reference/ccompolyobject-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)