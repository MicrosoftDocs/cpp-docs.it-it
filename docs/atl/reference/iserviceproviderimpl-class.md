---
title: Classe IServiceProviderImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IServiceProviderImpl
- ATLCOM/ATL::IServiceProviderImpl
- ATLCOM/ATL::IServiceProviderImpl::QueryService
dev_langs:
- C++
helpviewer_keywords:
- IServiceProviderImpl class
- IServiceProvider interface, ATL implementation
ms.assetid: 251254d3-c4ce-40d7-aee0-3d676d1d72f2
caps.latest.revision: 22
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: 69a59fe23b3ca787dee86b1bbdc6775a44903f91
ms.lasthandoff: 02/24/2017

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
 La classe derivata da `IServiceProviderImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IServiceProviderImpl::QueryService](#queryservice)|Crea o accede al servizio specificato e restituisce un puntatore a interfaccia per l'interfaccia specificata per il servizio.|  
  
## <a name="remarks"></a>Note  
 Il `IServiceProvider` interfaccia individua un servizio specificato dal GUID e restituisce il puntatore a interfaccia per l'interfaccia richiesta nel servizio. Classe `IServiceProviderImpl` fornisce un'implementazione predefinita di questa interfaccia.  
  
 **IServiceProviderImpl** specifica un metodo: [QueryService](#queryservice), che crea o si accede al servizio specificato e restituisce un puntatore a interfaccia per l'interfaccia specificata per il servizio.  
  
 `IServiceProviderImpl`utilizza una mappa del servizio, a partire da [BEGIN_SERVICE_MAP](http://msdn.microsoft.com/library/3c6ae156-8776-4588-8227-2d234daec236) e terminando con [END_SERVICE_MAP](http://msdn.microsoft.com/library/9a35d02a-014c-413a-bb0b-bcca11ab45a6).  
  
 La mappa del servizio contiene due voci: [SERVICE_ENTRY](http://msdn.microsoft.com/library/e65ff9cc-15e8-41cf-b686-f99eb6686ca9), che indica un id di servizio specificato (SID) supportato dall'oggetto, e [SERVICE_ENTRY_CHAIN](http://msdn.microsoft.com/library/09be4ce4-3ccd-4ff2-a95e-a9d5275354c1), che chiama `QueryService` a catena a un altro oggetto.  
  
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
 Puntatore a un ID di servizio (SID).  
  
 [IN]`riid`  
 Identificatore dell'interfaccia a cui il chiamante è per ottenere l'accesso.  
  
 [OUT]`ppvObj`  
 Puntatore indiretto all'interfaccia richiesta.  
  
### <a name="return-value"></a>Valore restituito  
 L'oggetto restituito `HRESULT` è uno dei seguenti:  
  
|Valore restituito|Significato|  
|------------------|-------------|  
|S_OK|Il servizio è stata correttamente creato o recuperato.|  
|E_INVALIDARG|Uno o più argomenti non sono validi.|  
|E_OUTOFMEMORY|Memoria è insufficiente per creare il servizio.|  
|E_UNEXPECTED|Si è verificato un errore sconosciuto.|  
|E_NOINTERFACE|L'interfaccia richiesta non fa parte di questo servizio o il servizio è sconosciuto.|  
  
### <a name="remarks"></a>Note  
 `QueryService`Restituisce un puntatore indiretto all'interfaccia richiesta nel servizio specificato. Il chiamante è responsabile del rilascio di questo puntatore quando non è più necessaria.  
  
 Quando si chiama `QueryService`, si passa sia un identificatore del servizio ( `guidService`) e un identificatore di interfaccia ( `riid`). Il `guidService` specifica il servizio a cui si desidera accedere, e `riid` identifica un'interfaccia che fa parte del servizio. In cambio, viene visualizzato un puntatore all'interfaccia indiretto.  
  
 L'oggetto che implementa l'interfaccia potrebbe inoltre implementare interfacce che fanno parte di altri servizi. Si consideri quanto segue.  
  
-   Alcune di queste interfacce potrebbero essere facoltativo. Non tutte le interfacce definite nella descrizione del servizio sono necessariamente presenti in ogni implementazione del servizio o in ogni oggetto restituito.  
  
-   A differenza delle chiamate a `QueryInterface`, passando un identificatore di servizio diverso non significa necessariamente che viene restituito un oggetto modello COM (Component Object) diverso.  
  
-   L'oggetto restituito potrebbe essere interfacce aggiuntive che non fanno parte della definizione del servizio.  
  
 Due servizi diversi, ad esempio SID_SMyService e SID_SYourService, sia possibile l'utilizzo dell'interfaccia stessa, anche se l'implementazione dell'interfaccia possano non avere nulla in comune tra i due servizi. Questo procedimento funziona, perché una chiamata a `QueryService` (SID_SMyService, IID_IDispatch) può restituire un oggetto diverso da quello `QueryService` (SID_SYourService, IID_IDispatch). Identità dell'oggetto non viene considerato come quando si specifica un identificatore di servizio diverso.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

