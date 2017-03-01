---
title: Classe IDispEventImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IDispEventImpl
dev_langs:
- C++
helpviewer_keywords:
- IDispEventImpl class
ms.assetid: a64b5288-35cb-4638-aad6-2d15b1c7cf7b
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
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 235955f8573ae7e430be3de2a96efdd7496d15de
ms.lasthandoff: 02/24/2017

---
# <a name="idispeventimpl-class"></a>IDispEventImpl (classe)
Questa classe fornisce le implementazioni di `IDispatch` metodi.  
  
> [!IMPORTANT]
>  Non è possibile utilizzare questa classe e i relativi membri in applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
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
 Identificatore univoco per l'oggetto di origine. Quando `IDispEventImpl` è la classe base per un controllo composto, utilizzare l'ID di risorsa del controllo contenuto desiderato per questo parametro. In altri casi, utilizzare un numero intero positivo arbitrario.  
  
 `T`  
 Classe dell'utente, che deriva da `IDispEventImpl`.  
  
 `pdiid`  
 Il puntatore per l'IID di interfaccia dispatch l'evento implementato da questa classe. Questa interfaccia deve essere definita nella libreria dei tipi identificata da `plibid`, `wMajor`, e `wMinor`.  
  
 `plibid`  
 Un puntatore alla libreria dei tipi che definisce l'interfaccia di invio a cui puntava `pdiid`. Se **/ GUID_NULL**, verrà caricata la libreria dei tipi dall'oggetto di origine eventi.  
  
 `wMajor`  
 La versione principale della libreria dei tipi. Il valore predefinito è 0.  
  
 `wMinor`  
 La versione secondaria della libreria dei tipi. Il valore predefinito è 0.  
  
 `tihclass`  
 La classe utilizzata per gestire le informazioni sul tipo per `T`. Il valore predefinito è una classe di tipo `CComTypeInfoHolder`; tuttavia, è possibile eseguire l'override di questo parametro di modello, fornendo una classe di un tipo diverso da `CComTypeInfoHolder`.  
  
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
|[IDispEventImpl::GetFuncInfoFromId](#getfuncinfofromid)|Individua l'indice di funzione per ID dispatch specificato.|  
|[IDispEventImpl::GetIDsOfNames](#getidsofnames)|Esegue il mapping di un singolo membro e un insieme facoltativo di nomi degli argomenti a un set corrispondente di DISPID intero.|  
|[IDispEventImpl::GetTypeInfo](#gettypeinfo)|Recupera le informazioni sul tipo per un oggetto.|  
|[IDispEventImpl::GetTypeInfoCount](#gettypeinfocount)|Recupera il numero di interfacce di informazioni sul tipo.|  
|[IDispEventImpl::GetUserDefinedType](#getuserdefinedtype)|Recupera il tipo di base di un tipo definito dall'utente.|  
  
## <a name="remarks"></a>Note  
 `IDispEventImpl`fornisce un modo di implementare un'interfaccia dispatch eventi senza la necessità di fornire codice di implementazione per ogni evento o un metodo su tale interfaccia. `IDispEventImpl`fornisce le implementazioni di `IDispatch` metodi. È necessario solo fornire implementazioni per gli eventi che si sia interessati nella gestione.  
  
 `IDispEventImpl`funziona in combinazione con il [mappa del sink di evento](http://msdn.microsoft.com/library/32542b3d-ac43-4139-8ac4-41c48481744f) nella classe di eventi della route alla funzione del gestore appropriato. Utilizzare questa classe:  
  

 Aggiungere un [macro SINK_ENTRY](http://msdn.microsoft.com/library/33a5fff6-5248-47c0-8cf4-8bdf760e86e5) o [SINK_ENTRY_EX](http://msdn.microsoft.com/library/e1d14342-838f-4791-ac2f-5dae2801c1ac) macro di mappa del sink di evento per ogni evento per ogni oggetto che si desidera gestire. Quando si utilizza `IDispEventImpl` in una classe base di un controllo composto, è possibile chiamare [AtlAdviseSinkMap](http://msdn.microsoft.com/library/0757a6af-3de3-4179-8b4f-ccd137d919b4) per stabilire e interrompere la connessione con le origini eventi per tutte le voci della mappa del sink di evento. In altri casi o per un maggiore controllo, chiamare il metodo [DispEventAdvise](idispeventsimpleimpl-class.md#dispeventadvise) per stabilire la connessione tra l'oggetto di origine e la classe di base. Chiamare [DispEventUnadvise](idispeventsimpleimpl-class.md#dispeventunadvise) per interrompere la connessione.  

  
 È necessario derivare da `IDispEventImpl` (utilizzando un valore univoco per `nID`) per ogni oggetto per cui è necessario gestire gli eventi. È possibile riutilizzare la classe di base per l'annullamento della notifica per oggetto una sola origine quindi segnalare rispetto a un oggetto di origine diversa, ma il numero massimo di oggetti di origine che possono essere gestiti da un singolo oggetto in una sola volta è limitato dal numero di `IDispEventImpl` classi di base.  
  
 `IDispEventImpl`fornisce la stessa funzionalità [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md), ad eccezione del fatto che ottiene informazioni sul tipo sull'interfaccia da una libreria dei tipi anziché fornito come un puntatore a un [le strutture ATL_FUNC_INFO](../../atl/reference/atl-func-info-structure.md) struttura. Utilizzare `IDispEventSimpleImpl` quando non si dispone di una libreria dei tipi che descrive l'interfaccia di eventi o per evitare l'overhead associato all'utilizzo della libreria dei tipi.  
  
> [!NOTE]
> `IDispEventImpl`e `IDispEventSimpleImpl` fornire la propria implementazione di **IUnknown:: QueryInterface** attivazione ogni `IDispEventImpl` e `IDispEventSimpleImpl` per agire come un'identità distinta COM consentendo l'accesso diretto ai membri della classe dell'oggetto COM principale classe base.  
  
 Implementazione ATL CE ActiveX evento sink soli supporta restituiti o dei valori di HRESULT di tipo void dai metodi del gestore eventi; qualsiasi altro valore restituito non è supportato e il relativo comportamento sarà indefinito.  
  
 Per ulteriori informazioni, vedere [supporto IDispEventImpl](../../atl/supporting-idispeventimpl.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `_IDispEvent`  
  
 `_IDispEventLocator`  
  
 [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md)  
  
 `IDispEventImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="a-namegetfuncinfofromida--idispeventimplgetfuncinfofromid"></a><a name="getfuncinfofromid"></a>IDispEventImpl::GetFuncInfoFromId  
 Individua l'indice di funzione per ID dispatch specificato.  
  
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
 [in] Il contesto locale dell'ID della funzione.  
  
 `info`  
 [in] Struttura che indica come la funzione viene chiamata.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="a-namegetidsofnamesa--idispeventimplgetidsofnames"></a><a name="getidsofnames"></a>IDispEventImpl::GetIDsOfNames  
 Esegue il mapping di un singolo membro e un insieme facoltativo di nomi degli argomenti a un set corrispondente di DISPID, che può essere utilizzato in chiamate successive all'intero [IDispatch:: Invoke](http://msdn.microsoft.com/en-us/964ade8e-9d8a-4d32-bd47-aa678912a54d).  
  
```
STDMETHOD(GetIDsOfNames)(
    REFIID riid,
    LPOLESTR* rgszNames,
    UINT cNames,
    LCID lcid,
    DISPID* rgdispid);
```  
  
### <a name="remarks"></a>Note  
 Vedere [GetIDsOfNames](http://msdn.microsoft.com/en-us/6f6cf233-3481-436e-8d6a-51f93bf91619) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegettypeinfoa--idispeventimplgettypeinfo"></a><a name="gettypeinfo"></a>IDispEventImpl::GetTypeInfo  
 Recupera le informazioni sul tipo relative a un oggetto che può quindi essere usato per ottenere informazioni sul tipo relative a un'interfaccia.  
  
```
STDMETHOD(GetTypeInfo)(
    UINT itinfo,
    LCID lcid,
    ITypeInfo** pptinfo);
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegettypeinfocounta--idispeventimplgettypeinfocount"></a><a name="gettypeinfocount"></a>IDispEventImpl::GetTypeInfoCount  
 Recupera il numero delle interfacce di informazioni sul tipo fornite da un oggetto (0 o 1).  
  
```
STDMETHOD(GetTypeInfoCount)(UINT* pctinfo);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IDispatch:: GetTypeInfoCount](http://msdn.microsoft.com/en-us/da876d53-cb8a-465c-a43e-c0eb272e2a12) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetuserdefinedtypea--idispeventimplgetuserdefinedtype"></a><a name="getuserdefinedtype"></a>IDispEventImpl::GetUserDefinedType  
 Recupera il tipo di base di un tipo definito dall'utente.  
  
```
VARTYPE GetUserDefinedType(
    ITypeInfo* pTI,
    HREFTYPE hrt);
```  
  
### <a name="parameters"></a>Parametri  
 `pTI`  
 [in] Un puntatore per il [ITypeInfo](http://msdn.microsoft.com/en-us/f3356463-3373-4279-bae1-953378aa2680) interfaccia contenente il tipo definito dall'utente.  
  
 *hrt*  
 [in] Handle per la descrizione del tipo da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 Il tipo di variante.  
  
### <a name="remarks"></a>Note  
 Vedere [ITypeInfo:: GetRefTypeInfo](http://msdn.microsoft.com/en-us/61d3b31d-6591-4e55-9e82-5246a168be00).  
  
##  <a name="a-nameidispeventimpla--idispeventimplidispeventimpl"></a><a name="idispeventimpl"></a>IDispEventImpl::IDispEventImpl  
 Costruttore. Archivia i valori dei parametri del modello di classe `plibid`, `pdiid`, `wMajor`, e `wMinor`.  
  
```
IDispEventImpl();
```  
  
##  <a name="a-nametihclassa--idispeventimpltihclass"></a><a name="tihclass"></a>IDispEventImpl::tihclass  
 Questo typedef è un'istanza del parametro di modello di classe `tihclass`.  
  
```
typedef tihclass _tihclass;
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, la classe è `CComTypeInfoHolder`. `CComTypeInfoHolder`gestisce le informazioni sul tipo per la classe.  
  
## <a name="see-also"></a>Vedere anche  
 [Le strutture ATL_FUNC_INFO struttura](../../atl/reference/atl-func-info-structure.md)   
 [IDispatchImpl (classe)](../../atl/reference/idispatchimpl-class.md)   
 [IDispEventSimpleImpl (classe)](../../atl/reference/idispeventsimpleimpl-class.md)   
 [MACRO SINK_ENTRY](http://msdn.microsoft.com/library/33a5fff6-5248-47c0-8cf4-8bdf760e86e5)   
 [SINK_ENTRY_EX](http://msdn.microsoft.com/library/e1d14342-838f-4791-ac2f-5dae2801c1ac)   
 [MACRO SINK_ENTRY_INFO](http://msdn.microsoft.com/library/1a0ae260-2c82-4926-a537-db01e5f206a7)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
