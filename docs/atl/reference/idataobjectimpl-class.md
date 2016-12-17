---
title: "IDataObjectImpl Class | Microsoft Docs"
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
  - "IDataObjectImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "data transfer [C++]"
  - "data transfer [C++], Uniform Data Transfer"
  - "IDataObject, implementazione ATL"
  - "IDataObjectImpl class"
ms.assetid: b680f0f7-7795-40a1-a0f6-f48768201c89
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IDataObjectImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce i metodi per il supporto di trasferimento dei dati uniforme e gestire le connessioni.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
      template< class   
      T  
      >  
class IDataObjectImpl  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `IDataObjectImpl`.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IDataObjectImpl::DAdvise](../Topic/IDataObjectImpl::DAdvise.md)|Stabilisce una connessione tra l'oggetto dati e un sink di notifica.  In questo modo il sink di notifica per ricevere notifiche delle modifiche nell'oggetto.|  
|[IDataObjectImpl::DUnadvise](../Topic/IDataObjectImpl::DUnadvise.md)|Termina una connessione stabilita in precedenza con `DAdvise`.|  
|[IDataObjectImpl::EnumDAdvise](../Topic/IDataObjectImpl::EnumDAdvise.md)|Crea un enumeratore per scorrere le connessioni consultive correnti.|  
|[IDataObjectImpl::EnumFormatEtc](../Topic/IDataObjectImpl::EnumFormatEtc.md)|Crea un enumeratore per scorrere le strutture **FORMATETC** supportato dall'oggetto dati.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
|[IDataObjectImpl::FireDataChange](../Topic/IDataObjectImpl::FireDataChange.md)|Invia una notifica di modifica a ogni sink di notifica.|  
|[IDataObjectImpl::GetCanonicalFormatEtc](../Topic/IDataObjectImpl::GetCanonicalFormatEtc.md)|Recupera una struttura logicamente equivalente **FORMATETC** a una maggiore complessità.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
|[IDataObjectImpl::GetData](../Topic/IDataObjectImpl::GetData.md)|Trasferisce i dati dall'oggetto dati al client.  I dati vengono descritti in una struttura **FORMATETC** e vengono trasferiti mediante una struttura **STGMEDIUM**.|  
|[IDataObjectImpl::GetDataHere](../Topic/IDataObjectImpl::GetDataHere.md)|Simile a `GetData`, a meno che il client deve allocare la struttura **STGMEDIUM**.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
|[IDataObjectImpl::QueryGetData](../Topic/IDataObjectImpl::QueryGetData.md)|Determina se l'oggetto dati supporta una struttura specifica **FORMATETC** per trasferire dati.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
|[IDataObjectImpl::SetData](../Topic/IDataObjectImpl::SetData.md)|Trasferisce i dati dal client all'oggetto dati.  L'implementazione ATL restituisce **E\_NOTIMPL**.|  
  
## Note  
 L'interfaccia [IDataObject](http://msdn.microsoft.com/library/windows/desktop/ms688421) fornisce metodi al trasferimento dei dati uniforme di supporto.  `IDataObject` utilizza le strutture [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) e [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) di formato standard per recuperare e archiviare dati.  
  
 `IDataObject` gestisce inoltre le connessioni ai sink di notifica le notifiche di modifica di dati degli handle.  In modo che il client per ricevere notifiche di modifica di dati dall'oggetto dati, il client deve implementare l'interfaccia [IAdviseSink](http://msdn.microsoft.com/library/windows/desktop/ms692513) su un oggetto denominato sink di notifica.  Quando il client chiama quindi **IDataObject::DAdvise**, una connessione viene stabilita tra l'oggetto dati e il sink di notifica.  
  
 La classe `IDataObjectImpl` fornisce un'implementazione predefinita `IDataObject` e implementa **IUnknown** inviando le informazioni del dispositivo di dump nelle build di debug.  
  
 **Articoli correlati** [L'esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [Creare un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## Gerarchia di ereditarietà  
 `IDataObject`  
  
 `IDataObjectImpl`  
  
## Requisiti  
 **Header:** atlctl.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)