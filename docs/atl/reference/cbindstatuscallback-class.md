---
title: "CBindStatusCallback Class | Microsoft Docs"
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
  - "CBindStatusCallback"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "asynchronous data transfer [C++]"
  - "CBindStatusCallback class"
  - "data transfer [C++]"
  - "data transfer [C++], asincrono"
ms.assetid: 0f5da276-6031-4418-b2a9-a4750ef29e77
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CBindStatusCallback Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa l'interfaccia `IBindStatusCallback`.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template <class   
      T  
      , int   
      nBindFlags  
      = BINDF_ASYNCHRONOUS |   
BINDF_ASYNCSTORAGE | BINDF_GETNEWESTVERSION | BINDF_NOWRITECACHE>  
class ATL_NO_VTABLE CBindStatusCallback : public CComObjectRootEx  
<T::_ThreadModel::ThreadModelNoCS>, public IBindStatusCallbackImpl<T>   
```  
  
#### Parametri  
 `T`  
 La classe che contiene la funzione che verrà chiamata come i dati vengono ricevuti.  
  
 *nBindFlags*  
 Specifica i flag di associazione restituiti da [GetBindInfo](../Topic/CBindStatusCallback::GetBindInfo.md).  L'implementazione predefinita viene impostata l'associazione per essere asincrona, recuperare la versione più recente di dati\/oggetto e non memorizza i dati recuperati nella cache su disco.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBindStatusCallback::CBindStatusCallback](../Topic/CBindStatusCallback::CBindStatusCallback.md)|Costruttore.|  
|[CBindStatusCallback::~CBindStatusCallback](../Topic/CBindStatusCallback::~CBindStatusCallback.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBindStatusCallback::Download](../Topic/CBindStatusCallback::Download.md)|Metodo statico che avvia il processo di download, crea un oggetto `CBindStatusCallback` e chiama `StartAsyncDownload`.|  
|[CBindStatusCallback::GetBindInfo](../Topic/CBindStatusCallback::GetBindInfo.md)|Chiamato dal moniker asincrono per richiedere informazioni sul tipo di associazione a essere creato.|  
|[CBindStatusCallback::GetPriority](../Topic/CBindStatusCallback::GetPriority.md)|Chiamato dal moniker asincrono per ottenere la priorità dell'operazione di associazione.  L'implementazione ATL restituisce `E_NOTIMPL`.|  
|[CBindStatusCallback::OnDataAvailable](../Topic/CBindStatusCallback::OnDataAvailable.md)|Chiamato per fornire dati all'applicazione come diventa disponibile.  Legge i dati, quindi chiama la funzione passata per utilizzare i dati.|  
|[CBindStatusCallback::OnLowResource](../Topic/CBindStatusCallback::OnLowResource.md)|Chiamato quando le risorse sono insufficienti.  L'implementazione ATL restituisce `S_OK`.|  
|[CBindStatusCallback::OnObjectAvailable](../Topic/CBindStatusCallback::OnObjectAvailable.md)|Chiamato dal moniker asincrono per passare un puntatore all'oggetto all'applicazione.  L'implementazione ATL restituisce `S_OK`.|  
|[CBindStatusCallback::OnProgress](../Topic/CBindStatusCallback::OnProgress.md)|Chiamato per indicare lo stato di avanzamento del processo di download di dati.  L'implementazione ATL restituisce `S_OK`.|  
|[CBindStatusCallback::OnStartBinding](../Topic/CBindStatusCallback::OnStartBinding.md)|Chiamato quando si esegue l'associazione viene avviato.|  
|[CBindStatusCallback::OnStopBinding](../Topic/CBindStatusCallback::OnStopBinding.md)|Chiamato quando il trasferimento dei dati asincroni viene arrestato.|  
|[CBindStatusCallback::StartAsyncDownload](../Topic/CBindStatusCallback::StartAsyncDownload.md)|Inizializza i byte disponibili e i byte letti su zero, viene creato un oggetto flusso di spinta\- tipo da un URL e chiama `OnDataAvailable` ogni volta che i dati siano disponibili.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBindStatusCallback::m\_dwAvailableToRead](../Topic/CBindStatusCallback::m_dwAvailableToRead.md)|Numero di byte disponibili da leggere.|  
|[CBindStatusCallback::m\_dwTotalRead](../Topic/CBindStatusCallback::m_dwTotalRead.md)|Numero totale di byte letti.|  
|[CBindStatusCallback::m\_pFunc](../Topic/CBindStatusCallback::m_pFunc.md)|Puntatore alla funzione viene chiamata quando i dati sono disponibili.|  
|[CBindStatusCallback::m\_pT](../Topic/CBindStatusCallback::m_pT.md)|Puntatore all'oggetto che richiede il trasferimento dei dati asincroni.|  
|[CBindStatusCallback::m\_spBindCtx](../Topic/CBindStatusCallback::m_spBindCtx.md)|Puntatore a un'interfaccia [IBindCtx](http://msdn.microsoft.com/library/windows/desktop/ms693755) per operazioni di associazione corrente.|  
|[CBindStatusCallback::m\_spBinding](../Topic/CBindStatusCallback::m_spBinding.md)|Puntatore a un'interfaccia `IBinding` per operazioni di associazione corrente.|  
|[CBindStatusCallback::m\_spMoniker](../Topic/CBindStatusCallback::m_spMoniker.md)|Puntatore a un'interfaccia [IMoniker](http://msdn.microsoft.com/library/windows/desktop/ms679705) per l'url da utilizzare.|  
|[CBindStatusCallback::m\_spStream](../Topic/CBindStatusCallback::m_spStream.md)|Puntatore a un'interfaccia [IStream](http://msdn.microsoft.com/library/windows/desktop/aa380034) per trasferire i dati.|  
  
## Note  
 La classe `CBindStatusCallback` implementa l'interfaccia `IBindStatusCallback`.  `IBindStatusCallback` deve essere implementato dall'applicazione in modo che possa ricevere notifiche da un trasferimento dei dati asincroni.  Il moniker asincrono fornito dal sistema utilizza i metodi `IBindStatusCallback` per inviare e ricevere informazioni sul trasferimento dei dati asincroni e dall'oggetto.  
  
 In genere, l'oggetto `CBindStatusCallback` associato a un'operazione di associazione specifica.  Ad esempio, nell'esempio [In ASYNC](../../top/visual-cpp-samples.md), quando si imposta la proprietà URL, creare un oggetto `CBindStatusCallback` nella chiamata a `Download`:  
  
 [!code-cpp[NVC_ATL_Windowing#86](../../atl/codesnippet/CPP/cbindstatuscallback-class_1.h)]  
  
 Il moniker asincrono utilizza la funzione di callback `OnData` per chiamare l'applicazione quando ha dati.  Il moniker asincrono viene fornito dal sistema.  
  
## Gerarchia di ereditarietà  
 `CComObjectRootBase`  
  
 `IBindStatusCallback`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 `CBindStatusCallback`  
  
## Requisiti  
 **Header:** atlctl.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)