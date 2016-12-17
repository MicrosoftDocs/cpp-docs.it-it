---
title: "IDispEventImpl Class | Microsoft Docs"
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
  - "IDispEventImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IDispEventImpl class"
ms.assetid: a64b5288-35cb-4638-aad6-2d15b1c7cf7b
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IDispEventImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce le implementazioni dei metodi `IDispatch`.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
      template <  
UINT nID,  
class T,  
const IID* pdiid= &IID_NULL,  
const GUID* plibid= &GUID_NULL,  
WORD wMajor= 0,  
WORD wMinor= 0,  
class tihclass= CcomTypeInfoHolder  
>  
class ATL_NO_VTABLE IDispEventImpl :  
public IDispEventSimpleImpl<nID, T, pdiid>  
```  
  
#### Parametri  
 `nID`  
 Un identificatore univoco per l'oggetto di origine.  Quando `IDispEventImpl` è la classe base per un controllo composito, utilizzare ID di risorsa del controllo contenuto desiderato per il parametro.  In altri casi, utilizzare un numero intero positivo arbitrario.  
  
 `T`  
 La classe dell'utente, derivata da `IDispEventImpl`.  
  
 `pdiid`  
 Il puntatore all'IID dell'interfaccia dispatch di evento implementata da questa classe.  Questa interfaccia deve essere definita nella libreria dei tipi indicati da `plibid`, da `wMajor`e da `wMinor`.  
  
 `plibid`  
 Un puntatore alla libreria dei tipi che definisce l'interfaccia dispatch indicato da `pdiid`.  Se **&GUID\_NULL**, la libreria dei tipi verrà caricato dall'oggetto da cui hanno origine gli eventi.  
  
 `wMajor`  
 La versione principale della libreria dei tipi.  Il valore predefinito è 0.  
  
 `wMinor`  
 La versione secondaria della libreria dei tipi.  Il valore predefinito è 0.  
  
 `tihclass`  
 La classe utilizzata per gestire le informazioni sul tipo per `T`.  Il valore predefinito è una classe di tipo `CComTypeInfoHolder`; tuttavia, è possibile ignorare questo parametro di modello fornendo una classe di tipo diverso da `CComTypeInfoHolder`.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IDispEventImpl::\_tihclass](../../atl/reference/idispeventimpl-class.md)|La classe utilizzata per gestire le informazioni sul tipo.  Per impostazione predefinita, `CComTypeInfoHolder`.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IDispEventImpl::IDispEventImpl](../Topic/IDispEventImpl::IDispEventImpl.md)|Costruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IDispEventImpl::GetFuncInfoFromId](../Topic/IDispEventImpl::GetFuncInfoFromId.md)|Posiziona l'indice di funzione per l'identificatore specificato di invio.|  
|[IDispEventImpl::GetIDsOfNames](../Topic/IDispEventImpl::GetIDsOfNames.md)|Esegue il mapping di un singolo membro e un insieme facoltativo di nomi dell'argomento a un set corrispondente dei dispid Integer.|  
|[IDispEventImpl::GetTypeInfo](../Topic/IDispEventImpl::GetTypeInfo.md)|Recupera le informazioni sul tipo per un oggetto.|  
|[IDispEventImpl::GetTypeInfoCount](../Topic/IDispEventImpl::GetTypeInfoCount.md)|Recupera il numero di interfacce di informazioni sui tipi.|  
|[IDispEventImpl::GetUserDefinedType](../Topic/IDispEventImpl::GetUserDefinedType.md)|Recupera il tipo di base del tipo.|  
  
## Note  
 `IDispEventImpl` consente di implementare un'interfaccia dispatch di evento senza necessità di fornire il codice di implementazione per ogni metodo e un evento su tale interfaccia.  `IDispEventImpl` fornisce le implementazioni dei metodi `IDispatch`.  È sufficiente fornire le implementazioni per gli eventi desiderato gestione.  
  
 Funzionamento di`IDispEventImpl` insieme a [mappa del sink di eventi](../Topic/BEGIN_SINK_MAP.md) nella classe per rispondere a eventi alla funzione di gestione appropriata.  Per utilizzare questa classe:  
  
 Aggiungere una macro [SINK\_ENTRY\_EX](../Topic/SINK_ENTRY_EX.md) o [SINK\_ENTRY](../Topic/SINK_ENTRY.md) alla mappa del sink di eventi per ogni evento per ogni oggetto che si desidera gestire.  Quando si utilizza `IDispEventImpl` come classe base di controllo composito, è possibile chiamare [AtlAdviseSinkMap](../Topic/AtlAdviseSinkMap.md) per stabilire e interrompere la connessione alle origini eventi per qualsiasi mapping del sink delle voci nel caso.  In altri argomenti, o per maggiori controllo, chiamare [DispEventAdvise](../Topic/IDispEventSimpleImpl::DispEventAdvise.md) per stabilire la connessione tra l'oggetto di origine e la classe di base.  Chiamata [DispEventUnadvise](../Topic/IDispEventSimpleImpl::DispEventUnadvise.md) per interrompere la connessione.  
  
 È necessario derivarvi da `IDispEventImpl` \(utilizzando un valore univoco per `nID`\) per ogni oggetto di cui è necessario gestire eventi.  È possibile utilizzare la classe base unadvising rispetto a un oggetto di origine che quindi consigliabile rispetto a un oggetto di origine diversa, ma il numero massimo di oggetti di origine che possono essere gestiti da un singolo oggetto contemporaneamente dipende dal numero delle classi base `IDispEventImpl`.  
  
 `IDispEventImpl` fornisce la stessa funzionalità [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md), a meno che ottengono informazioni sui tipi per l'interfaccia da una libreria dei tipi anziché avendola fornito come puntatore a una struttura [\_ATL\_FUNC\_INFORMATION](../../atl/reference/atl-func-info-structure.md).  Utilizzare `IDispEventSimpleImpl` quando non si dispone di una libreria dei tipi che descrive l'interfaccia eventi o non si desidera evitare l'overhead associato alla libreria dei tipi.  
  
> [!NOTE]
>  `IDispEventImpl` e `IDispEventSimpleImpl` forniscono la propria implementazione **IUnknown::QueryInterface** a ogni classe di base `IDispEventSimpleImpl` e `IDispEventImpl` da utilizzare come identità separata COM pur consentono l'accesso diretto ai membri della classe nell'oggetto COM principale.  
  
 L'implementazione di CE ATL i sink di evento ActiveX supportati solo i valori restituiti di HRESULT o la sospensione del tipo dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il relativo comportamento è definito.  
  
 Per ulteriori informazioni, vedere [IDispEventImpl di supporto](../../atl/supporting-idispeventimpl.md).  
  
## Gerarchia di ereditarietà  
 `_IDispEvent`  
  
 `_IDispEventLocator`  
  
 [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md)  
  
 `IDispEventImpl`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [\_ATL\_FUNC\_INFO Structure](../../atl/reference/atl-func-info-structure.md)   
 [IDispatchImpl Class](../../atl/reference/idispatchimpl-class.md)   
 [IDispEventSimpleImpl Class](../../atl/reference/idispeventsimpleimpl-class.md)   
 [SINK\_ENTRY](../Topic/SINK_ENTRY.md)   
 [SINK\_ENTRY\_EX](../Topic/SINK_ENTRY_EX.md)   
 [SINK\_ENTRY\_INFO](../Topic/SINK_ENTRY_INFO.md)   
 [Class Overview](../../atl/atl-class-overview.md)