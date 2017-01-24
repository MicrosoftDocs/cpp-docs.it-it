---
title: "IPersistStorageImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::IPersistStorageImpl"
  - "ATL::IPersistStorageImpl<T>"
  - "ATL.IPersistStorageImpl<T>"
  - "IPersistStorageImpl"
  - "ATL.IPersistStorageImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IPersistStorageImpl class"
  - "archiviazione, ATL"
ms.assetid: d652f02c-239c-47c7-9a50-3e9fc3014fff
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IPersistStorageImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa l'interfaccia [IPersistStorage](http://msdn.microsoft.com/library/windows/desktop/ms679731).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
      template <  
class T  
>  
class ATL_NO_VTABLE IPersistStorageImpl :  
public IPersistStorage  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `IPersistStorageImpl`.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPersistStorageImpl::GetClassID](../Topic/IPersistStorageImpl::GetClassID.md)|Recupera il CLSID dell'oggetto.|  
|[IPersistStorageImpl::HandsOffStorage](../Topic/IPersistStorageImpl::HandsOffStorage.md)|Indica all'oggetto per rilasciare tutti gli oggetti di archiviazione e di attivare la modalità di HandsOff.  L'implementazione ATL restituisce `S_OK`.|  
|[IPersistStorageImpl::InitNew](../Topic/IPersistStorageImpl::InitNew.md)|Inizializza una nuova archiviazione.|  
|[IPersistStorageImpl::IsDirty](../Topic/IPersistStorageImpl::IsDirty.md)|Controlla se i dati dell'oggetto siano stati modificati da quando sono stati salvati per ultima.|  
|[IPersistStorageImpl::Load](../Topic/IPersistStorageImpl::Load.md)|Carica le proprietà dell'oggetto dall'archiviazione specificata.|  
|[IPersistStorageImpl::Save](../Topic/IPersistStorageImpl::Save.md)|Carica le proprietà dell'oggetto all'archiviazione specificata.|  
|[IPersistStorageImpl::SaveCompleted](../Topic/IPersistStorageImpl::SaveCompleted.md)|Notifica un oggetto che può restituire la modalità normale per scrivere nel relativo oggetto di archiviazione.  L'implementazione ATL restituisce `S_OK`.|  
  
## Note  
 `IPersistStorageImpl` implementa l'interfaccia [IPersistStorage](http://msdn.microsoft.com/library/windows/desktop/ms679731), che consente a un client richiedono che il caricamento dell'oggetto e che salva i dati salvati utilizzando un'archiviazione.  
  
 L'implementazione di questa classe richiede la classe `T` di eseguire un'implementazione dell'interfaccia `IPersistStreamInit` disponibile mediante `QueryInterface`.  In genere questo significa che la classe `T` deve derivare da [IPersistStreamInitImpl](../../atl/reference/ipersiststreaminitimpl-class.md), fornire una voce per `IPersistStreamInit` in [COM esegue il mapping](../Topic/BEGIN_COM_MAP.md)e utilizzare [mapping di proprietà](../Topic/BEGIN_PROP_MAP.md) per descrivere i dati persistenti della classe.  
  
 **Articoli correlati** [L'esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [Creare un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## Gerarchia di ereditarietà  
 `IPersistStorage`  
  
 `IPersistStorageImpl`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [Storages and Streams](http://msdn.microsoft.com/library/windows/desktop/aa380352)   
 [IPersistStreamInitImpl Class](../../atl/reference/ipersiststreaminitimpl-class.md)   
 [IPersistPropertyBagImpl Class](../../atl/reference/ipersistpropertybagimpl-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)