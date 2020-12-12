---
description: 'Altre informazioni su: Classe CComClassFactory2'
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
ms.openlocfilehash: 7aebf09616c7fc4e85f6c44aee4db84886033f8b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97146887"
---
# <a name="ccomclassfactory2-class"></a>Classe CComClassFactory2

Questa classe implementa l'interfaccia [IClassFactory2](/windows/win32/api/ocidl/nn-ocidl-iclassfactory2) .

## <a name="syntax"></a>Sintassi

```
template <class license>
class CComClassFactory2 : public IClassFactory2,
    public CComObjectRootEx<CComGlobalsThreadModel>,
    public license
```

#### <a name="parameters"></a>Parametri

*licenza*<br/>
Classe che implementa le funzioni statiche seguenti:

- `static BOOL VerifyLicenseKey( BSTR bstr );`

- `static BOOL GetLicenseKey( DWORD dwReserved, BSTR * pBstr );`

- `static BOOL IsLicenseValid( );`

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CComClassFactory2:: CreateInstance](#createinstance)|Crea un oggetto del CLSID specificato.|
|[CComClassFactory2:: CreateInstanceLic](#createinstancelic)|Dato un codice di licenza, crea un oggetto del CLSID specificato.|
|[CComClassFactory2:: GetLicInfo](#getlicinfo)|Recupera informazioni che descrivono le funzionalità di gestione licenze del class factory.|
|[CComClassFactory2:: LockServer](#lockserver)|Blocca la class factory in memoria.|
|[CComClassFactory2:: RequestLicKey](#requestlickey)|Crea e restituisce un codice di licenza.|

## <a name="remarks"></a>Commenti

`CComClassFactory2` implementa l'interfaccia [IClassFactory2](/windows/win32/api/ocidl/nn-ocidl-iclassfactory2) , che è un'estensione di [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory). `IClassFactory2` Controlla la creazione di oggetti tramite una licenza. Una class factory eseguita in un computer con licenza può fornire un codice di licenza in fase di esecuzione. Questo codice di licenza consente a un'applicazione di creare un'istanza degli oggetti quando non esiste una licenza completa del computer.

Gli oggetti ATL in genere acquisiscono un class factory mediante derivazione da [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](aggregation-and-class-factory-macros.md#declare_classfactory), che dichiara [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come class factory predefinito. Per usare `CComClassFactory2` , specificare la macro [DECLARE_CLASSFACTORY2](aggregation-and-class-factory-macros.md#declare_classfactory2) nella definizione della classe dell'oggetto. Ad esempio:

[!code-cpp[NVC_ATL_COM#2](../../atl/codesnippet/cpp/ccomclassfactory2-class_1.h)]

`CMyLicense`, il parametro di modello per `CComClassFactory2` , deve implementare le funzioni statiche `VerifyLicenseKey` , `GetLicenseKey` e `IsLicenseValid` . Di seguito è riportato un esempio di una classe di licenze semplice:

[!code-cpp[NVC_ATL_COM#3](../../atl/codesnippet/cpp/ccomclassfactory2-class_2.h)]

`CComClassFactory2` deriva da `CComClassFactory2Base` e *License*. `CComClassFactory2Base`, a sua volta, deriva da `IClassFactory2` e `CComObjectRootEx< CComGlobalsThreadModel >` .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CComObjectRootBase`

`license`

[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

`IClassFactory2`

`CComClassFactory2`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="ccomclassfactory2createinstance"></a><a name="createinstance"></a> CComClassFactory2:: CreateInstance

Crea un oggetto del CLSID specificato e recupera un puntatore a interfaccia a questo oggetto.

```
STDMETHOD(CreateInstance)(LPUNKNOWN pUnkOuter, REFIID riid, void** ppvObj);
```

### <a name="parameters"></a>Parametri

*pUnkOuter*<br/>
in Se l'oggetto viene creato come parte di un'aggregazione, *pUnkOuter* deve essere il valore sconosciuto esterno. In caso contrario, *pUnkOuter* deve essere null.

*riid*<br/>
in IID dell'interfaccia richiesta. Se *pUnkOuter* è diverso da null, *riid* deve essere `IID_IUnknown` .

*ppvObj*<br/>
out Puntatore al puntatore a interfaccia identificato da *riid*. Se l'oggetto non supporta questa interfaccia, *ppvObj* è impostato su null.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Richiede che il computer disponga di una licenza completa. Se non esiste una licenza per computer completo, chiamare [CreateInstanceLic](#createinstancelic).

## <a name="ccomclassfactory2createinstancelic"></a><a name="createinstancelic"></a> CComClassFactory2:: CreateInstanceLic

Simile a [CreateInstance](#createinstance), con la differenza che `CreateInstanceLic` richiede un codice di licenza.

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
in Se l'oggetto viene creato come parte di un'aggregazione, *pUnkOuter* deve essere il valore sconosciuto esterno. In caso contrario, *pUnkOuter* deve essere null.

*pUnkReserved*<br/>
[in] Non utilizzato. Deve essere NULL.

*riid*<br/>
in IID dell'interfaccia richiesta. Se *pUnkOuter* è diverso da null, *riid* deve essere `IID_IUnknown` .

*bstrKey*<br/>
in Chiave di licenza di run-time ottenuta in precedenza da una chiamata a `RequestLicKey` . Questa chiave è necessaria per creare l'oggetto.

*ppvObject*<br/>
out Puntatore al puntatore a interfaccia specificato da *riid*. Se l'oggetto non supporta questa interfaccia, *ppvObject* è impostato su null.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

È possibile ottenere un codice di licenza usando [RequestLicKey](#requestlickey). Per creare un oggetto in un computer senza licenza, è necessario chiamare `CreateInstanceLic` .

## <a name="ccomclassfactory2getlicinfo"></a><a name="getlicinfo"></a> CComClassFactory2:: GetLicInfo

Compila una struttura [LICINFO](/windows/win32/api/ocidl/ns-ocidl-licinfo) con informazioni che descrivono le funzionalità di gestione delle licenze del class factory.

```
STDMETHOD(GetLicInfo)(LICINFO* pLicInfo);
```

### <a name="parameters"></a>Parametri

*pLicInfo*<br/>
out Puntatore a una `LICINFO` struttura.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Il `fRuntimeKeyAvail` membro di questa struttura indica se, in base a un codice di licenza, il class factory consente la creazione di oggetti in un computer senza licenza. Il membro *fLicVerified* indica se esiste una licenza per computer completo.

## <a name="ccomclassfactory2lockserver"></a><a name="lockserver"></a> CComClassFactory2:: LockServer

Incrementa e decrementa il conteggio dei blocchi del modulo chiamando `_Module::Lock` `_Module::Unlock` rispettivamente e.

```
STDMETHOD(LockServer)(BOOL fLock);
```

### <a name="parameters"></a>Parametri

*Gregge*<br/>
in Se TRUE, il conteggio dei blocchi viene incrementato; in caso contrario, il conteggio dei blocchi viene decrementato.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

`_Module` fa riferimento all'istanza globale di [CComModule](../../atl/reference/ccommodule-class.md) o a una classe derivata.

La chiamata a `LockServer` consente a un client di contenere un class factory in modo che sia possibile creare rapidamente più oggetti.

## <a name="ccomclassfactory2requestlickey"></a><a name="requestlickey"></a> CComClassFactory2:: RequestLicKey

Crea e restituisce un codice di licenza, purché il `fRuntimeKeyAvail` membro della struttura [LICINFO](/windows/win32/api/ocidl/ns-ocidl-licinfo) sia true.

```
STDMETHOD(RequestLicKey)(DWORD dwReserved, BSTR* pbstrKey);
```

### <a name="parameters"></a>Parametri

*dwReserved*<br/>
[in] Non utilizzato. Deve essere zero.

*pbstrKey*<br/>
out Puntatore al codice di licenza.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

È necessario un codice di licenza per chiamare [CreateInstanceLic](#createinstancelic) per creare un oggetto in un computer senza licenza. Se `fRuntimeKeyAvail` è false, gli oggetti possono essere creati solo in un computer con licenza completa.

Chiamare [GetLicInfo](#getlicinfo) per recuperare il valore di `fRuntimeKeyAvail` .

## <a name="see-also"></a>Vedi anche

[Classe CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md)<br/>
[Classe CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md)<br/>
[Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)<br/>
[CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
