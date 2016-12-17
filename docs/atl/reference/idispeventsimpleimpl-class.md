---
title: "IDispEventSimpleImpl Class | Microsoft Docs"
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
  - "IDispEventSimpleImpl"
  - "ATL::IDispEventSimpleImpl"
  - "ATL.IDispEventSimpleImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IDispEventSimpleImpl class"
ms.assetid: 971d82b7-a921-47fa-a4d8-909bed377ab0
caps.latest.revision: 27
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IDispEventSimpleImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce le implementazioni dei metodi `IDispatch`, senza ottenere informazioni sul tipo di una libreria dei tipi.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
      template <  
UINT nID,  
class T,  
const IID* pdiid  
>  
class ATL_NO_VTABLE IDispEventSimpleImpl :  
public _IDispEventLocator<nID, pdiid>  
```  
  
#### Parametri  
 `nID`  
 Un identificatore univoco per l'oggetto di origine.  Quando `IDispEventSimpleImpl` è la classe base per un controllo composito, utilizzare ID di risorsa del controllo contenuto desiderato per il parametro.  In altri casi, utilizzare un numero intero positivo arbitrario.  
  
 `T`  
 La classe dell'utente, derivata da `IDispEventSimpleImpl`.  
  
 `pdiid`  
 Il puntatore all'IID dell'interfaccia dispatch di evento implementata da questa classe.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IDispEventSimpleImpl::Advise](../Topic/IDispEventSimpleImpl::Advise.md)|Stabilisce una connessione con l'origine evento predefinita.|  
|[IDispEventSimpleImpl::DispEventAdvise](../Topic/IDispEventSimpleImpl::DispEventAdvise.md)|Stabilisce una connessione con l'origine evento.|  
|[IDispEventSimpleImpl::DispEventUnadvise](../Topic/IDispEventSimpleImpl::DispEventUnadvise.md)|Interrompe la connessione con l'origine evento.|  
|[IDispEventSimpleImpl::GetIDsOfNames](../Topic/IDispEventSimpleImpl::GetIDsOfNames.md)|Restituisce **E\_NOTIMPL**.|  
|[IDispEventSimpleImpl::GetTypeInfo](../Topic/IDispEventSimpleImpl::GetTypeInfo.md)|Restituisce **E\_NOTIMPL**.|  
|[IDispEventSimpleImpl::GetTypeInfoCount](../Topic/IDispEventSimpleImpl::GetTypeInfoCount.md)|Restituisce **E\_NOTIMPL**.|  
|[IDispEventSimpleImpl::Invoke](../Topic/IDispEventSimpleImpl::Invoke.md)|Chiama nel mapping del sink elencato gestori eventi.|  
|[IDispEventSimpleImpl::Unadvise](../Topic/IDispEventSimpleImpl::Unadvise.md)|Interrompe la connessione con l'origine evento predefinita.|  
  
## Note  
 `IDispEventSimpleImpl` consente di implementare un'interfaccia dispatch di evento senza necessità di fornire il codice di implementazione per ogni metodo e un evento su tale interfaccia.  `IDispEventSimpleImpl` fornisce le implementazioni dei metodi `IDispatch`.  È sufficiente fornire le implementazioni per gli eventi desiderato gestione.  
  
 Funzionamento di`IDispEventSimpleImpl` insieme a [mappa del sink di eventi](../Topic/BEGIN_SINK_MAP.md) nella classe per rispondere a eventi alla funzione di gestione appropriata.  Per utilizzare questa classe:  
  
-   Aggiungere una macro [SINK\_ENTRY\_INFORMATION](../Topic/SINK_ENTRY_INFO.md) alla mappa del sink di eventi per ogni evento per ogni oggetto che si desidera gestire.  
  
-   Informazioni sul tipo per assistere per ogni evento passando un puntatore a una struttura [\_ATL\_FUNC\_INFORMATION](../../atl/reference/atl-func-info-structure.md) come parametro a ogni voce.  Nella piattaforma x86, il valore `_ATL_FUNC_INFO.cc` deve essere CC\_CDECL con il metodo di chiamata di funzione di callback di l ".  
  
-   Chiamare [DispEventAdvise](../Topic/IDispEventSimpleImpl::DispEventAdvise.md) per stabilire la connessione tra l'oggetto di origine e la classe di base.  
  
-   Chiamata [DispEventUnadvise](../Topic/IDispEventSimpleImpl::DispEventUnadvise.md) per interrompere la connessione.  
  
 È necessario derivarvi da `IDispEventSimpleImpl` \(utilizzando un valore univoco per `nID`\) per ogni oggetto di cui è necessario gestire eventi.  È possibile utilizzare la classe base unadvising rispetto a un oggetto di origine che quindi consigliabile rispetto a un oggetto di origine diversa, ma il numero massimo di oggetti di origine che possono essere gestiti da un singolo oggetto contemporaneamente dipende dal numero delle classi base `IDispEventSimpleImpl`.  
  
 **IDispEventSimplImpl** fornisce la stessa funzionalità [IDispEventImpl](../../atl/reference/idispeventimpl-class.md), a meno che non ottenere informazioni sui tipi per l'interfaccia da una libreria dei tipi.  Le procedure guidate generano codice basato solo su `IDispEventImpl`, ma è possibile utilizzare `IDispEventSimpleImpl` aggiungendo codice a mano.  Utilizzare `IDispEventSimpleImpl` quando non si dispone di una libreria dei tipi che descrive l'interfaccia eventi o non si desidera evitare l'overhead associato alla libreria dei tipi.  
  
> [!NOTE]
>  `IDispEventImpl` e `IDispEventSimpleImpl` forniscono la propria implementazione **IUnknown::QueryInterface** a ogni classe di base `IDispEventSimpleImpl` o `IDispEventImpl` da utilizzare come identità separata COM pur consentono l'accesso diretto ai membri della classe nell'oggetto COM principale.  
  
 L'implementazione di CE ATL i sink di evento ActiveX supportati solo i valori restituiti di HRESULT o la sospensione del tipo dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il relativo comportamento è definito.  
  
 Per ulteriori informazioni, vedere [IDispEventImpl di supporto](../../atl/supporting-idispeventimpl.md).  
  
## Gerarchia di ereditarietà  
 `_IDispEvent`  
  
 `_IDispEventLocator`  
  
 `IDispEventSimpleImpl`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [\_ATL\_FUNC\_INFO Structure](../../atl/reference/atl-func-info-structure.md)   
 [IDispatchImpl Class](../../atl/reference/idispatchimpl-class.md)   
 [IDispEventImpl Class](../../atl/reference/idispeventimpl-class.md)   
 [SINK\_ENTRY\_INFO](../Topic/SINK_ENTRY_INFO.md)   
 [Class Overview](../../atl/atl-class-overview.md)