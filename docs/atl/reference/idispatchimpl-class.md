---
title: "IDispatchImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IDispatchImpl"
  - "ATL.IDispatchImpl"
  - "ATL::IDispatchImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "interfacce duali, classi"
  - "IDispatch (supporto della classe in ATL)"
  - "IDispatchImpl (classe)"
ms.assetid: 8108eb36-1228-4127-a203-3ab5ba488892
caps.latest.revision: 27
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 30
---
# IDispatchImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce un'implementazione predefinita della parte `IDispatch` di un'interfaccia duale.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
template<  
   class T,  
   const IID* piid= &__uuidof(T),  
   const GUID* plibid = &CAtlModule::m_libid,  
   WORD wMajor = 1,  
   WORD wMinor = 0,  
   class tihclass = CComTypeInfoHolder   
>   
class ATL_NO_VTABLE IDispatchImpl :  
   public T  
```  
  
#### Parametri  
 \[in\] `T`  
 Un'interfaccia duale.  
  
 \[in\] `piid`  
 Un puntatore all'IID `T`.  
  
 \[in\] `plibid`  
 Un puntatore al LIBID della libreria dei tipi contenente le informazioni sull'interfaccia.  Per impostazione predefinita, la libreria dei tipi a livello di server viene passata.  
  
 \[in\] `wMajor`  
 La versione principale della libreria dei tipi.  Per impostazione predefinita, il valore è 1.  
  
 \[in\] `wMinor`  
 La versione secondaria della libreria dei tipi.  Per impostazione predefinita, il valore è 0.  
  
 \[in\] `tihclass`  
 La classe utilizzata per gestire le informazioni sul tipo per `T`.  Per impostazione predefinita, il valore è `CComTypeInfoHolder`.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IDispatchImpl::IDispatchImpl](../Topic/IDispatchImpl::IDispatchImpl.md)|Costruttore.  Chiama `AddRef` nella variabile membro protetto che gestisce le informazioni sul tipo per l'interfaccia duale.  Il distruttore chiama `Release`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IDispatchImpl::GetIDsOfNames](../Topic/IDispatchImpl::GetIDsOfNames.md)|Esegue il mapping di un set di nomi a un set corrispondente di ID dispatch.|  
|[IDispatchImpl::GetTypeInfo](../Topic/IDispatchImpl::GetTypeInfo.md)|Recupera le informazioni sul tipo per l'interfaccia duale.|  
|[IDispatchImpl::GetTypeInfoCount](../Topic/IDispatchImpl::GetTypeInfoCount.md)|Determina se sono presenti informazioni sui tipi disponibili per l'interfaccia duale.|  
|[IDispatchImpl::Invoke](../Topic/IDispatchImpl::Invoke.md)|Fornisce l'accesso ai metodi e le proprietà esposti dall'interfaccia duale.|  
  
## Note  
 `IDispatchImpl` fornisce un'implementazione predefinita della parte `IDispatch` di un'interfaccia duale in un oggetto.  Le interfacce duali derivano da `IDispatch` e utilizza solo tipi compatibili automazione.  Come un'interfaccia dispatch, un'interfaccia duale supporta l'associazione anticipata e l'associazione tardiva; tuttavia, un'interfaccia duale supporta anche l'associazione vtable.  
  
 Nell'esempio riportato di seguito viene illustrata una comune implementazione dell'oggetto `IDispatchImpl`.  
  
 [!code-cpp[NVC_ATL_COM#47](../../atl/codesnippet/CPP/idispatchimpl-class_1.h)]  
  
 Per impostazione predefinita, la classe `IDispatchImpl` reperire le informazioni sul tipo per `T` nel Registro di sistema.  Per implementare un'interfaccia non registrata, è possibile utilizzare la classe `IDispatchImpl` senza accedere al Registro di sistema utilizzando un numero di versione predefinito.  Se si crea un oggetto `IDispatchImpl` con 0xFFFF come valore per `wMajor` e 0xFFFF come valore per `wMinor`, la classe `IDispatchImpl` recupera la libreria dei tipi dal file DLL anziché del Registro di sistema.  
  
 `IDispatchImpl` contiene un membro statico di tipo `CComTypeInfoHolder` che gestisce le informazioni sul tipo per l'interfaccia duale.  Se si dispone di più oggetti che implementano la stessa interfaccia duale, solo un'istanza `CComTypeInfoHolder` viene utilizzata.  
  
## Gerarchia di ereditarietà  
 `T`  
  
 `IDispatchImpl`  
  
## Requisiti  
 **intestazione:** atlcom.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)