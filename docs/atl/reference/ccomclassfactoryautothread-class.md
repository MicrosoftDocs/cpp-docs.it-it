---
title: CComClassFactoryAutoThread (classe)
ms.date: 11/04/2016
f1_keywords:
- CComClassFactoryAutoThread
- ATLCOM/ATL::CComClassFactoryAutoThread
- ATLCOM/ATL::CComClassFactoryAutoThread::CreateInstance
- ATLCOM/ATL::CComClassFactoryAutoThread::LockServer
helpviewer_keywords:
- CComClassFactoryAutoThread class
ms.assetid: 22008042-533f-4dd9-bf7e-191ee571f9a1
ms.openlocfilehash: e997d92adfa9df46c82dacbd297db495b037c6e6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81320912"
---
# <a name="ccomclassfactoryautothread-class"></a>CComClassFactoryAutoThread (classe)

Questa classe implementa il [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory) interfaccia e consente di creare oggetti in più apartment.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CComClassFactoryAutoThread
    : public IClassFactory,
      public CComObjectRootEx<CComGlobalsThreadModel>
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComClassFactoryAutoThread::CreateInstance](#createinstance)|Crea un oggetto del CLSID specificato.|
|[CComClassFactoryAutoThread::LockServer](#lockserver)|Blocca la class factory in memoria.|

## <a name="remarks"></a>Osservazioni

`CComClassFactoryAutoThread`è simile a [CComClassFactory](../../atl/reference/ccomclassfactory-class.md), ma consente di creare oggetti in più apartment. Per sfruttare questo supporto, derivare il modulo EXE da [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).

Gli oggetti ATL acquisiscono in genere una class factory derivandola da [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](aggregation-and-class-factory-macros.md#declare_classfactory), che dichiara [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) come class factory predefinita. Per `CComClassFactoryAutoThread`utilizzare , specificare la [DECLARE_CLASSFACTORY_AUTO_THREAD](aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) macro nella definizione di classe dell'oggetto. Ad esempio:

[!code-cpp[NVC_ATL_COM#9](../../atl/codesnippet/cpp/ccomclassfactoryautothread-class_1.h)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CComObjectRootBase`

[Ccomobjectrootex](../../atl/reference/ccomobjectrootex-class.md)

`IClassFactory`

`CComClassFactoryAutoThread`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="ccomclassfactoryautothreadcreateinstance"></a><a name="createinstance"></a>CComClassFactoryAutoThread::CreateInstance

Crea un oggetto del CLSID specificato e recupera un puntatore a interfaccia a questo oggetto.

```
STDMETHODIMP CreateInstance(
    LPUNKNOWN pUnkOuter,
    REFIID riid,
    void** ppvObj);
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

Se il modulo deriva da [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md), `CreateInstance` seleziona innanzitutto un thread per creare l'oggetto nell'apartment associato.

## <a name="ccomclassfactoryautothreadlockserver"></a><a name="lockserver"></a>CComClassFactoryAutoThread::LockServer

Incrementa e decrementa il conteggio `_Module::Lock` `_Module::Unlock`dei blocchi del modulo chiamando rispettivamente e , .

```
STDMETHODIMP LockServer(BOOL fLock);
```

### <a name="parameters"></a>Parametri

*Gregge*<br/>
[in] Se TRUE, il conteggio dei blocchi viene incrementato; in caso contrario, il conteggio dei blocchi viene decrementato.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Quando `CComClassFactoryAutoThread`si `_Module` utilizza , in genere fa riferimento all'istanza globale di [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).

La `LockServer` chiamata consente a un client di mantenere una class factory in modo che più oggetti possono essere creati rapidamente.

## <a name="see-also"></a>Vedere anche

[IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory)<br/>
[Classe CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md)<br/>
[CComClassFactorySingleton (classe)](../../atl/reference/ccomclassfactorysingleton-class.md)<br/>
[Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)<br/>
[CComGlobalsThreadModel (modello CComGlobalsThreadModel)](atl-typedefs.md#ccomglobalsthreadmodel)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
