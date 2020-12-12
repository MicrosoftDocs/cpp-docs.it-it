---
description: 'Altre informazioni su: classe CComClassFactoryAutoThread'
title: Classe CComClassFactoryAutoThread
ms.date: 11/04/2016
f1_keywords:
- CComClassFactoryAutoThread
- ATLCOM/ATL::CComClassFactoryAutoThread
- ATLCOM/ATL::CComClassFactoryAutoThread::CreateInstance
- ATLCOM/ATL::CComClassFactoryAutoThread::LockServer
helpviewer_keywords:
- CComClassFactoryAutoThread class
ms.assetid: 22008042-533f-4dd9-bf7e-191ee571f9a1
ms.openlocfilehash: 9d25303d4d40f695c68fdf09aae7d56e6f1e5fb1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97152282"
---
# <a name="ccomclassfactoryautothread-class"></a>Classe CComClassFactoryAutoThread

Questa classe implementa l'interfaccia [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory) e consente la creazione di oggetti in più Apartment.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CComClassFactoryAutoThread
    : public IClassFactory,
      public CComObjectRootEx<CComGlobalsThreadModel>
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CComClassFactoryAutoThread:: CreateInstance](#createinstance)|Crea un oggetto del CLSID specificato.|
|[CComClassFactoryAutoThread:: LockServer](#lockserver)|Blocca la class factory in memoria.|

## <a name="remarks"></a>Commenti

`CComClassFactoryAutoThread` è simile a [CComClassFactory](../../atl/reference/ccomclassfactory-class.md), ma consente la creazione di oggetti in più Apartment. Per sfruttare i vantaggi di questo supporto, derivare il modulo EXE da [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).

Gli oggetti ATL in genere acquisiscono un class factory mediante derivazione da [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](aggregation-and-class-factory-macros.md#declare_classfactory), che dichiara [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come class factory predefinito. Per usare `CComClassFactoryAutoThread` , specificare la macro [DECLARE_CLASSFACTORY_AUTO_THREAD](aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) nella definizione della classe dell'oggetto. Ad esempio:

[!code-cpp[NVC_ATL_COM#9](../../atl/codesnippet/cpp/ccomclassfactoryautothread-class_1.h)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CComObjectRootBase`

[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

`IClassFactory`

`CComClassFactoryAutoThread`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="ccomclassfactoryautothreadcreateinstance"></a><a name="createinstance"></a> CComClassFactoryAutoThread:: CreateInstance

Crea un oggetto del CLSID specificato e recupera un puntatore a interfaccia a questo oggetto.

```
STDMETHODIMP CreateInstance(
    LPUNKNOWN pUnkOuter,
    REFIID riid,
    void** ppvObj);
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

Se il modulo deriva da [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md), `CreateInstance` prima di tutto seleziona un thread per creare l'oggetto nell'Apartment associato.

## <a name="ccomclassfactoryautothreadlockserver"></a><a name="lockserver"></a> CComClassFactoryAutoThread:: LockServer

Incrementa e decrementa il conteggio dei blocchi del modulo chiamando `_Module::Lock` `_Module::Unlock` rispettivamente e.

```
STDMETHODIMP LockServer(BOOL fLock);
```

### <a name="parameters"></a>Parametri

*Gregge*<br/>
in Se TRUE, il conteggio dei blocchi viene incrementato; in caso contrario, il conteggio dei blocchi viene decrementato.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Quando `CComClassFactoryAutoThread` si usa, `_Module` in genere fa riferimento all'istanza globale di [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).

La chiamata a `LockServer` consente a un client di contenere un class factory in modo che sia possibile creare rapidamente più oggetti.

## <a name="see-also"></a>Vedi anche

[IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory)<br/>
[Classe CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md)<br/>
[Classe CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md)<br/>
[Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)<br/>
[CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
