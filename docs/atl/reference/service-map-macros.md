---
title: Macro della mappa del servizio | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
ms.assetid: ca02a125-454a-4cf6-aac2-1c5585025ed4
caps.latest.revision: 16
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: eea45a3315237c77eff0231d485111cefb8557cc
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="service-map-macros"></a>Macro della mappa del servizio
Queste macro definiscono le mappe dei servizi e le voci.  
  
|||  
|-|-|  
|[BEGIN_SERVICE_MAP](#begin_service_map)|Contrassegna l'inizio di una mappa del servizio ATL.|  
|[END_SERVICE_MAP](#end_service_map)|Contrassegna la fine di una mappa del servizio ATL.|  
|[SERVICE_ENTRY](#service_entry)|Indica che l'oggetto supporta un ID di servizio specifico.|  
|[SERVICE_ENTRY_CHAIN](#service_entry_chain)|Indica [IServiceProviderImpl::QueryService](#queryservice) a catena per l'oggetto specificato.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
   
##  <a name="begin_service_map"></a>BEGIN_SERVICE_MAP  
 Contrassegna l'inizio della mappa del servizio.  
  
```
BEGIN_SERVICE_MAP(theClass)
```  
  
### <a name="parameters"></a>Parametri  
 `theClass`  
 [in] Specifica la classe che contiene la mappa del servizio.  
  
### <a name="remarks"></a>Note  
 Utilizzare la mappa del servizio per implementare funzionalità di provider del servizio per l'oggetto COM. In primo luogo, è necessario derivare la classe da [IServiceProviderImpl](../../atl/reference/iserviceproviderimpl-class.md). Esistono due tipi di voci:  
  
- [SERVICE_ENTRY](#service_entry) indica il supporto per l'ID (SID) del servizio specificato.  
  
- [SERVICE_ENTRY_CHAIN](#service_entry_chain) indica [IServiceProviderImpl::QueryService](#queryservice) a catena a un altro oggetto specificato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM&#57;](../../atl/codesnippet/cpp/service-map-macros_1.h)]  
  
##  <a name="end_service_map"></a>END_SERVICE_MAP  
 Contrassegna la fine della mappa del servizio.  
  
```
END_SERVICE_MAP()
```  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [BEGIN_SERVICE_MAP](#begin_service_map).  
  
##  <a name="service_entry"></a>SERVICE_ENTRY  
 Indica che l'oggetto supporta l'id del servizio specificato da *SID*.  
  
```
SERVICE_ENTRY( SID )
```  
  
### <a name="parameters"></a>Parametri  
 *SID*  
 L'ID del servizio.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [BEGIN_SERVICE_MAP](#begin_service_map).  
  
##  <a name="service_entry_chain"></a>SERVICE_ENTRY_CHAIN  
 Indica [IServiceProviderImpl::QueryService](#queryservice) a catena per l'oggetto specificato da `punk`.  
  
```
SERVICE_ENTRY_CHAIN( punk )
```  
  
### <a name="parameters"></a>Parametri  
 `punk`  
 Un puntatore per il **IUnknown** interfaccia alla quale a catena.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [BEGIN_SERVICE_MAP](#begin_service_map).  
  
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
 [Macro](../../atl/reference/atl-macros.md)

