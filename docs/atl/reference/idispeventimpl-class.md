---
title: Classe IDispEventImpl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- IDispEventImpl
- ATLCOM/ATL::IDispEventImpl
- ATLCOM/ATL::IDispEventImpl::IDispEventImpl
- ATLCOM/ATL::IDispEventImpl::GetFuncInfoFromId
- ATLCOM/ATL::IDispEventImpl::GetIDsOfNames
- ATLCOM/ATL::IDispEventImpl::GetTypeInfo
- ATLCOM/ATL::IDispEventImpl::GetTypeInfoCount
- ATLCOM/ATL::IDispEventImpl::GetUserDefinedType
dev_langs:
- C++
helpviewer_keywords:
- IDispEventImpl class
ms.assetid: a64b5288-35cb-4638-aad6-2d15b1c7cf7b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7809a61fe39a4b4b913531de29e03c3eb440c418
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32365634"
---
# <a name="idispeventimpl-class"></a>IDispEventImpl (classe)
Questa classe fornisce le implementazioni del `IDispatch` metodi.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <UINT nID, class T,
    const IID* pdiid = &IID_NULL,
    const GUID* plibid = &GUID_NULL,
    WORD wMajor = 0,
    WORD wMinor = 0, 
    class tihclass = CcomTypeInfoHolder>  
class ATL_NO_VTABLE IDispEventImpl : public IDispEventSimpleImpl<nID, T, pdiid>
```  
  
#### <a name="parameters"></a>Parametri  
 `nID`  
 Identificatore univoco per l'oggetto di origine. Quando `IDispEventImpl` è la classe base per un controllo composito, utilizzare l'ID di risorsa del controllo contenuto desiderato per il parametro. In altri casi, utilizzare un numero intero positivo arbitrario.  
  
 `T`  
 La classe dell'utente, che è derivata da `IDispEventImpl`.  
  
 `pdiid`  
 Il puntatore per l'IID dell'interfaccia dispatch evento implementato da questa classe. Questa interfaccia deve essere definita nella libreria dei tipi identificata da `plibid`, `wMajor`, e `wMinor`.  
  
 `plibid`  
 Un puntatore alla libreria dei tipi che definisce l'interfaccia dispatch a cui puntava `pdiid`. Se **& GUID_NULL**, verrà caricata la libreria dei tipi dall'oggetto di origine eventi.  
  
 `wMajor`  
 Versione principale della libreria dei tipi. Il valore predefinito è 0.  
  
 `wMinor`  
 Versione secondaria della libreria dei tipi. Il valore predefinito è 0.  
  
 `tihclass`  
 La classe utilizzata per gestire le informazioni sul tipo per `T`. Il valore predefinito è una classe di tipo `CComTypeInfoHolder`; tuttavia, è possibile eseguire l'override di questo parametro di modello fornendo una classe di un tipo diverso da `CComTypeInfoHolder`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IDispEventImpl::_tihclass](../../atl/reference/idispeventimpl-class.md)|La classe utilizzata per gestire le informazioni sul tipo. Per impostazione predefinita, `CComTypeInfoHolder`.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IDispEventImpl::IDispEventImpl](#idispeventimpl)|Costruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IDispEventImpl::GetFuncInfoFromId](#getfuncinfofromid)|Individua l'indice di funzione per l'identificatore di distribuzione specificato.|  
|[IDispEventImpl::GetIDsOfNames](#getidsofnames)|Esegue il mapping di un singolo membro e un insieme facoltativo di nomi di argomento a un set corrispondente di tipo integer DISPID.|  
|[IDispEventImpl::GetTypeInfo](#gettypeinfo)|Recupera le informazioni sul tipo per un oggetto.|  
|[IDispEventImpl::GetTypeInfoCount](#gettypeinfocount)|Recupera il numero di interfacce di informazioni sul tipo.|  
|[IDispEventImpl::GetUserDefinedType](#getuserdefinedtype)|Recupera il tipo di base di un tipo definito dall'utente.|  
  
## <a name="remarks"></a>Note  
 `IDispEventImpl` fornisce un modo di implementazione di un'interfaccia dispatch di eventi senza dover fornire codice di implementazione per ogni evento o un metodo su tale interfaccia. `IDispEventImpl` fornisce le implementazioni del `IDispatch` metodi. È necessario solo fornire implementazioni per gli eventi che si sia interessati nella gestione.  
  
 `IDispEventImpl` funziona in combinazione con la mappa di sink di evento nella classe di eventi della route per la funzione del gestore appropriato. Utilizzare questa classe:  
  

 Aggiungere un [macro SINK_ENTRY](composite-control-macros.md#sink_entry) o [SINK_ENTRY_EX](composite-control-macros.md#sink_entry_ex) macro di mappa del sink di evento per ogni evento per ogni oggetto che si desidera gestire. Quando si utilizza `IDispEventImpl` come classe base di un controllo composito, è possibile chiamare [AtlAdviseSinkMap](connection-point-global-functions.md#atladvisesinkmap) per stabilire e interrompere la connessione con le origini degli eventi per tutte le voci di sink di eventi della mappa. In altri casi, o per un maggiore controllo, chiamare il metodo [DispEventAdvise](idispeventsimpleimpl-class.md#dispeventadvise) per stabilire la connessione tra l'oggetto di origine e la classe di base. Chiamare [DispEventUnadvise](idispeventsimpleimpl-class.md#dispeventunadvise) per interrompere la connessione.  

  
 È necessario derivare da `IDispEventImpl` (utilizzando un valore univoco per `nID`) per ogni oggetto per cui si desidera gestire gli eventi. È possibile riutilizzare la classe di base per l'annullamento della notifica con oggetto di origine di una notifica quindi rispetto a un oggetto di origine diversa, ma il numero massimo di oggetti di origine che possono essere gestiti da un singolo oggetto in una sola volta è limitato dal numero di `IDispEventImpl` classi di base.  
  
 `IDispEventImpl` fornisce la stessa funzionalità [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md), ad eccezione del fatto che ottiene informazioni sul tipo sull'interfaccia da una libreria dei tipi senza doverla fornito come un puntatore a un [le strutture ATL_FUNC_INFO](../../atl/reference/atl-func-info-structure.md) struttura. Utilizzare `IDispEventSimpleImpl` quando non si dispone di una libreria dei tipi che descrive l'interfaccia eventi o per evitare l'overhead associato all'utilizzo della libreria dei tipi.  
  
> [!NOTE]
> `IDispEventImpl` e `IDispEventSimpleImpl` fornire la propria implementazione di **IUnknown:: QueryInterface** abilitazione ognuno `IDispEventImpl` e `IDispEventSimpleImpl` di agire come identità COM separata consentendo l'accesso diretto ai membri della classe nella classe di base l'oggetto COM principale.  
  
 Implementazione di ATL CE di ActiveX evento sink solo supporta i valori restituiti di tipo HRESULT o void dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il relativo comportamento sarà indefinito.  
  
 Per ulteriori informazioni, vedere [supporto IDispEventImpl](../../atl/supporting-idispeventimpl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `_IDispEvent`  
  
 `_IDispEventLocator`  
  
 [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md)  
  
 `IDispEventImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="getfuncinfofromid"></a>  IDispEventImpl::GetFuncInfoFromId  
 Individua l'indice di funzione per l'identificatore di distribuzione specificato.  
  
```
HRESULT GetFuncInfoFromId(
    const IID& iid,
    DISPID dispidMember,
    LCID lcid,
    _ATL_FUNC_INFO& info);
```  
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Un riferimento all'ID della funzione.  
  
 *dispidMember*  
 [in] ID dispatch della funzione.  
  
 `lcid`  
 [in] Il contesto di impostazioni locali dell'ID della funzione.  
  
 `info`  
 [in] Struttura che indica come la funzione viene chiamata.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="getidsofnames"></a>  IDispEventImpl::GetIDsOfNames  
 Esegue il mapping di un singolo membro e un insieme facoltativo di nomi di argomento a un set corrispondente di integer DISPID, che può essere utilizzato nelle successive chiamate a [IDispatch:: Invoke](http://msdn.microsoft.com/en-us/964ade8e-9d8a-4d32-bd47-aa678912a54d).  
  
```
STDMETHOD(GetIDsOfNames)(
    REFIID riid,
    LPOLESTR* rgszNames,
    UINT cNames,
    LCID lcid,
    DISPID* rgdispid);
```  
  
### <a name="remarks"></a>Note  
 Vedere [GetIDsOfNames](http://msdn.microsoft.com/en-us/6f6cf233-3481-436e-8d6a-51f93bf91619) in Windows SDK.  
  
##  <a name="gettypeinfo"></a>  IDispEventImpl::GetTypeInfo  
 Recupera le informazioni sul tipo relative a un oggetto che può quindi essere usato per ottenere informazioni sul tipo relative a un'interfaccia.  
  
```
STDMETHOD(GetTypeInfo)(
    UINT itinfo,
    LCID lcid,
    ITypeInfo** pptinfo);
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="gettypeinfocount"></a>  IDispEventImpl::GetTypeInfoCount  
 Recupera il numero delle interfacce di informazioni sul tipo fornite da un oggetto (0 o 1).  
  
```
STDMETHOD(GetTypeInfoCount)(UINT* pctinfo);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IDispatch:: GetTypeInfoCount](http://msdn.microsoft.com/en-us/da876d53-cb8a-465c-a43e-c0eb272e2a12) in Windows SDK.  
  
##  <a name="getuserdefinedtype"></a>  IDispEventImpl::GetUserDefinedType  
 Recupera il tipo di base di un tipo definito dall'utente.  
  
```
VARTYPE GetUserDefinedType(
    ITypeInfo* pTI,
    HREFTYPE hrt);
```  
  
### <a name="parameters"></a>Parametri  
 `pTI`  
 [in] Un puntatore al [ITypeInfo](http://msdn.microsoft.com/en-us/f3356463-3373-4279-bae1-953378aa2680) interfaccia contenente il tipo definito dall'utente.  
  
 *hrt*  
 [in] Handle per la descrizione del tipo da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 Il tipo di variante.  
  
### <a name="remarks"></a>Note  
 Vedere [ITypeInfo:: GetRefTypeInfo](http://msdn.microsoft.com/en-us/61d3b31d-6591-4e55-9e82-5246a168be00).  
  
##  <a name="idispeventimpl"></a>  IDispEventImpl::IDispEventImpl  
 Costruttore. Archivia i valori dei parametri del modello di classe `plibid`, `pdiid`, `wMajor`, e `wMinor`.  
  
```
IDispEventImpl();
```  
  
##  <a name="tihclass"></a>  IDispEventImpl::tihclass  
 Questo typedef è un'istanza del parametro di modello di classe `tihclass`.  
  
```
typedef tihclass _tihclass;
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, la classe è `CComTypeInfoHolder`. `CComTypeInfoHolder` gestisce le informazioni sul tipo per la classe.  
  
## <a name="see-also"></a>Vedere anche  
 [Le strutture ATL_FUNC_INFO struttura](../../atl/reference/atl-func-info-structure.md)   
 [IDispatchImpl (classe)](../../atl/reference/idispatchimpl-class.md)   
 [IDispEventSimpleImpl (classe)](../../atl/reference/idispeventsimpleimpl-class.md)   
 [MACRO SINK_ENTRY](composite-control-macros.md#sink_entry)   
 [SINK_ENTRY_EX](composite-control-macros.md#sink_entry_ex)   
 [MACRO SINK_ENTRY_INFO](composite-control-macros.md#sink_entry_info)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)