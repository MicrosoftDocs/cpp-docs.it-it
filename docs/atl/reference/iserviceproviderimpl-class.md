---
title: Classe IServiceProviderImpl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IServiceProviderImpl
- ATLCOM/ATL::IServiceProviderImpl
- ATLCOM/ATL::IServiceProviderImpl::QueryService
dev_langs: C++
helpviewer_keywords:
- IServiceProviderImpl class
- IServiceProvider interface, ATL implementation
ms.assetid: 251254d3-c4ce-40d7-aee0-3d676d1d72f2
caps.latest.revision: "22"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 39dbab33f631ab9e0dc2b605169e92b6d12d78a9
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="iserviceproviderimpl-class"></a>Classe IServiceProviderImpl
Questa classe fornisce un'implementazione predefinita del `IServiceProvider` interfaccia.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
class ATL_NO_VTABLE IServiceProviderImpl : public IServiceProvider
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe, derivata da `IServiceProviderImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IServiceProviderImpl::QueryService](#queryservice)|Crea o accede al servizio specificato e restituisce un puntatore a interfaccia per l'interfaccia specificata per il servizio.|  
  
## <a name="remarks"></a>Note  
 Il `IServiceProvider` interfaccia individua un servizio specificato con il relativo GUID e restituisce un puntatore a interfaccia per l'interfaccia richiesta nel servizio. Classe `IServiceProviderImpl` fornisce un'implementazione predefinita di questa interfaccia.  
  
 **IServiceProviderImpl** specifica un metodo: [QueryService](#queryservice), che crea o si accede al servizio specificato e restituisce un puntatore a interfaccia per l'interfaccia specificata per il servizio.  
  
 `IServiceProviderImpl`utilizza una mappa del servizio, a partire da [BEGIN_SERVICE_MAP](service-map-macros.md#begin_service_map) e terminando con [END_SERVICE_MAP](service-map-macros.md#end_service_map).  
  
 La mappa del servizio contiene due voci: [SERVICE_ENTRY](service-map-macros.md#service_entry), che indica un id di servizio specificato (SID) supportato dall'oggetto, e [SERVICE_ENTRY_CHAIN](service-map-macros.md#service_entry_chain), che chiama `QueryService` a catena a un altro oggetto.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IServiceProvider`  
  
 `IServiceProviderImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="queryservice"></a>IServiceProviderImpl::QueryService  
 Crea o accede al servizio specificato e restituisce un puntatore a interfaccia per l'interfaccia specificata per il servizio.  
  
```
STDMETHOD(QueryService)(
    REFGUID guidService,
    REFIID riid,
    void** ppvObject);
```  
  
### <a name="parameters"></a>Parametri  
 [IN]`guidService`  
 Puntatore a un identificatore di servizio (SID).  
  
 [IN]`riid`  
 Identificatore dell'interfaccia a cui il chiamante è per ottenere l'accesso.  
  
 [OUT]`ppvObj`  
 Puntatore indiretto all'interfaccia richiesta.  
  
### <a name="return-value"></a>Valore restituito  
 L'oggetto restituito `HRESULT` valore è uno dei seguenti:  
  
|Valore restituito|Significato|  
|------------------|-------------|  
|S_OK|Il servizio è stato creato o recuperato.|  
|E_INVALIDARG|Uno o più argomenti non sono validi.|  
|E_OUTOFMEMORY|Memoria è insufficiente per creare il servizio.|  
|E_UNEXPECTED|Si è verificato un errore sconosciuto.|  
|E_NOINTERFACE|L'interfaccia richiesta non fa parte di questo servizio, oppure il servizio è sconosciuto.|  
  
### <a name="remarks"></a>Note  
 `QueryService`Restituisce un puntatore indiretto all'interfaccia richiesta nel servizio specificato. Il chiamante è responsabile del rilascio di questo puntatore quando non è più necessario.  
  
 Quando si chiama `QueryService`, si passa un identificatore di servizio ( `guidService`) e un identificatore di interfaccia ( `riid`). Il `guidService` specifica il servizio a cui si desidera accedere, e `riid` identifica un'interfaccia che fa parte del servizio. In cambio, si riceve un puntatore all'interfaccia indiretto.  
  
 L'oggetto che implementa l'interfaccia può anche implementare le interfacce che fanno parte di altri servizi. Si consideri quanto segue.  
  
-   Alcune di queste interfacce potrebbero essere facoltativo. Non tutte le interfacce definite nella descrizione del servizio sono necessariamente presente in ogni implementazione del servizio o in ogni oggetto restituito.  
  
-   A differenza delle chiamate a `QueryInterface`, passando un identificatore di servizio diverso non significa necessariamente che viene restituito un oggetto modello COM (Component Object) diverso.  
  
-   L'oggetto restituito potrebbe essere interfacce aggiuntive che non fanno parte della definizione del servizio.  
  
 Due servizi diversi, ad esempio SID_SMyService e SID_SYourService, sia possibile l'utilizzo dell'interfaccia stessa, anche se potrebbe essere l'implementazione dell'interfaccia nulla in comune tra i due servizi. Questo procedimento funziona perché una chiamata a `QueryService` (SID_SMyService, IID_IDispatch) può restituire un oggetto diverso da quello `QueryService` (SID_SYourService, IID_IDispatch). Identità dell'oggetto non viene considerato come quando si specifica un identificatore di servizio diverso.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
