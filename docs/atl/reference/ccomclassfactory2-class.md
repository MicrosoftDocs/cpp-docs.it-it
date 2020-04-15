---
title: Classe CComClassFactory2
ms.date: 11/04/2016
f1_keywords:
- CComClassFactory2
- ATLCOM/ATL::CComClassFactory2
- ATLCOM/ATL::CComClassFactory2::CreateInstance
- ATLCOM/ATL::CComClassFactory2::CreateInstanceLic
- ATLCOM/ATL::CComClassFactory2::GetLicInfo
- ATLCOM/ATL::CComClassFactory2::LockServer
- ATLCOM/ATL::CComClassFactory2::RequestLicKey
helpviewer_keywords:
- CComClassFactory2 class
ms.assetid: 19b66fd6-b9ed-47a0-822c-8132184f5a3e
ms.openlocfilehash: 0cb2064cfaea6317c4522ff917f3963fca2219b8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321006"
---
# <a name="ccomclassfactory2-class"></a>Classe CComClassFactory2

Questa classe implementa l'interfaccia [IClassFactory2.](/windows/win32/api/ocidl/nn-ocidl-iclassfactory2)

## <a name="syntax"></a>Sintassi

```
template <class license>
class CComClassFactory2 : public IClassFactory2,
    public CComObjectRootEx<CComGlobalsThreadModel>,
    public license
```

#### <a name="parameters"></a>Parametri

*Licenza*<br/>
Una classe che implementa le funzioni statiche seguenti:A class that implements the following static functions:

- `static BOOL VerifyLicenseKey( BSTR bstr );`

- `static BOOL GetLicenseKey( DWORD dwReserved, BSTR * pBstr );`

- `static BOOL IsLicenseValid( );`

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComClassFactory2::CreateInstance](#createinstance)|Crea un oggetto del CLSID specificato.|
|[CComClassFactory2::CreateInstanceLic](#createinstancelic)|Dato un codice di licenza, crea un oggetto del CLSID specificato.|
|[CComClassFactory2::GetLicInfo](#getlicinfo)|Recupera informazioni che descrivono le funzionalità di gestione delle licenze della class factory.|
|[CComClassFactory2::LockServer](#lockserver)|Blocca la class factory in memoria.|
|[CComClassFactory2::RequestLicKey](#requestlickey)|Crea e restituisce un codice di licenza.|

## <a name="remarks"></a>Osservazioni

`CComClassFactory2`implementa l'interfaccia [IClassFactory2](/windows/win32/api/ocidl/nn-ocidl-iclassfactory2) , che è un'estensione di [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory). `IClassFactory2`controlla la creazione di oggetti tramite una licenza. Una class factory in esecuzione su un computer con licenza può fornire un codice di licenza di runtime. Questo codice di licenza consente a un'applicazione di creare un'istanza di oggetti quando non esiste una licenza completa del computer.

Gli oggetti ATL acquisiscono in genere una class factory derivandola da [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](aggregation-and-class-factory-macros.md#declare_classfactory), che dichiara [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come class factory predefinita. Per `CComClassFactory2`utilizzare , specificare la macro [DECLARE_CLASSFACTORY2](aggregation-and-class-factory-macros.md#declare_classfactory2) nella definizione della classe dell'oggetto. Ad esempio:

[!code-cpp[NVC_ATL_COM#2](../../atl/codesnippet/cpp/ccomclassfactory2-class_1.h)]

`CMyLicense`, il parametro di modello `CComClassFactory2`per , deve implementare le `VerifyLicenseKey`funzioni statiche , `GetLicenseKey`, e `IsLicenseValid`. Di seguito è riportato un esempio di classe di licenza semplice:The following is an example of a simple license class:

[!code-cpp[NVC_ATL_COM#3](../../atl/codesnippet/cpp/ccomclassfactory2-class_2.h)]

`CComClassFactory2`deriva sia `CComClassFactory2Base` dalla licenza che dalla *licenza*. `CComClassFactory2Base`, a sua volta, deriva da `IClassFactory2` e `CComObjectRootEx< CComGlobalsThreadModel >`.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CComObjectRootBase`

`license`

[Ccomobjectrootex](../../atl/reference/ccomobjectrootex-class.md)

`IClassFactory2`

`CComClassFactory2`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="ccomclassfactory2createinstance"></a><a name="createinstance"></a>CComClassFactory2::CreateInstance

Crea un oggetto del CLSID specificato e recupera un puntatore a interfaccia a questo oggetto.

```
STDMETHOD(CreateInstance)(LPUNKNOWN pUnkOuter, REFIID riid, void** ppvObj);
```

### <a name="parameters"></a>Parametri

*pUnkOuter*<br/>
[in] Se l'oggetto viene creato come parte di un'aggregazione, *pUnkOuter* deve essere l'esterno sconosciuto. In caso contrario, *pUnkOuter* deve essere NULL.

*Riid*<br/>
[in] IID dell'interfaccia richiesta. Se *pUnkOuter* è diverso da NULL, *riid* deve essere `IID_IUnknown`.

*ppvObj*<br/>
[fuori] Puntatore al puntatore a interfaccia identificato da *riid*. Se l'oggetto non supporta questa interfaccia, *ppvObj* viene impostato su NULL.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Richiede che la macchina sia completamente concessa in licenza. Se non esiste una licenza completa del computer, chiamare [CreateInstanceLic](#createinstancelic).

## <a name="ccomclassfactory2createinstancelic"></a><a name="createinstancelic"></a>CComClassFactory2::CreateInstanceLic

Simile a [CreateInstance](#createinstance) `CreateInstanceLic` , ad eccezione del fatto che richiede un codice di licenza.

```
STDMETHOD(CreateInstanceLic)(
    IUnknown* pUnkOuter,
    IUnknown* /* pUnkReserved
*/,
    REFIID riid,
    BSTR bstrKey,
    void** ppvObject);
```

### <a name="parameters"></a>Parametri

*pUnkOuter*<br/>
[in] Se l'oggetto viene creato come parte di un'aggregazione, *pUnkOuter* deve essere l'esterno sconosciuto. In caso contrario, *pUnkOuter* deve essere NULL.

*pUnkRiservato*<br/>
[in] Non utilizzato. Deve essere NULL.

*Riid*<br/>
[in] IID dell'interfaccia richiesta. Se *pUnkOuter* è diverso da NULL, *riid* deve essere `IID_IUnknown`.

*bstrKey (chiave di base)*<br/>
[in] Chiave di licenza di runtime ottenuta `RequestLicKey`in precedenza da una chiamata a . Questa chiave è necessaria per creare l'oggetto.

*Oggetto ppv*<br/>
[fuori] Puntatore al puntatore a interfaccia specificato da *riid*. Se l'oggetto non supporta questa interfaccia, *ppvObject* è impostato su NULL.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

È possibile ottenere un codice di licenza utilizzando [RequestLicKey](#requestlickey). Per creare un oggetto su un computer senza `CreateInstanceLic`licenza, è necessario chiamare .

## <a name="ccomclassfactory2getlicinfo"></a><a name="getlicinfo"></a>CComClassFactory2::GetLicInfo

Riempie una struttura [LICINFO](/windows/win32/api/ocidl/ns-ocidl-licinfo) con informazioni che descrivono le funzionalità di licenza della class factory.

```
STDMETHOD(GetLicInfo)(LICINFO* pLicInfo);
```

### <a name="parameters"></a>Parametri

*pLicInfo (informazioni in stato inquestoeper*<br/>
[fuori] Puntatore `LICINFO` a una struttura.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Il `fRuntimeKeyAvail` membro di questa struttura indica se, data una chiave di licenza, la class factory consente di creare oggetti in un computer senza licenza. Il membro *fLicVerified* indica se esiste una licenza completa del computer.

## <a name="ccomclassfactory2lockserver"></a><a name="lockserver"></a>CComClassFactory2::LockServer

Incrementa e decrementa il conteggio `_Module::Lock` `_Module::Unlock`dei blocchi del modulo chiamando rispettivamente e , .

```
STDMETHOD(LockServer)(BOOL fLock);
```

### <a name="parameters"></a>Parametri

*Gregge*<br/>
[in] Se TRUE, il conteggio dei blocchi viene incrementato; in caso contrario, il conteggio dei blocchi viene decrementato.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

`_Module`fa riferimento all'istanza globale di [CComModule](../../atl/reference/ccommodule-class.md) o a una classe derivata da esso.

La `LockServer` chiamata consente a un client di mantenere una class factory in modo che più oggetti possono essere creati rapidamente.

## <a name="ccomclassfactory2requestlickey"></a><a name="requestlickey"></a>CComClassFactory2::RequestLicKey

Crea e restituisce un codice `fRuntimeKeyAvail` di licenza, a condizione che il membro della struttura [LICINFO](/windows/win32/api/ocidl/ns-ocidl-licinfo) sia TRUE.

```
STDMETHOD(RequestLicKey)(DWORD dwReserved, BSTR* pbstrKey);
```

### <a name="parameters"></a>Parametri

*dwRiservato*<br/>
[in] Non utilizzato. Deve essere zero.

*pbstrKey (chiave di base)*<br/>
[fuori] Puntatore alla chiave di licenza.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Un codice di licenza è necessario per chiamare [CreateInstanceLic](#createinstancelic) per creare un oggetto in un computer senza licenza. Se `fRuntimeKeyAvail` è FALSE, gli oggetti possono essere creati solo in un computer con licenza completa.

Chiamare [GetLicInfo](#getlicinfo) per recuperare `fRuntimeKeyAvail`il valore di .

## <a name="see-also"></a>Vedere anche

[CComClassFactoryAutoThread (classe)](../../atl/reference/ccomclassfactoryautothread-class.md)<br/>
[CComClassFactorySingleton (classe)](../../atl/reference/ccomclassfactorysingleton-class.md)<br/>
[Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)<br/>
[CComGlobalsThreadModel (modello CComGlobalsThreadModel)](atl-typedefs.md#ccomglobalsthreadmodel)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
