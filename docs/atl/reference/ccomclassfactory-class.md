---
title: CComClassFactory (classe)
ms.date: 11/04/2016
f1_keywords:
- CComClassFactory
- ATLCOM/ATL::CComClassFactory
- ATLCOM/ATL::CComClassFactory::CreateInstance
- ATLCOM/ATL::CComClassFactory::LockServer
helpviewer_keywords:
- CComClassFactory class
ms.assetid: e56dacf7-d5c4-4c42-aef4-a86d91981a1b
ms.openlocfilehash: 041575339906b83488697f1db5a7f8b08b53070e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321028"
---
# <a name="ccomclassfactory-class"></a>CComClassFactory (classe)

Questa classe implementa l'interfaccia [IClassFactory.](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory)

## <a name="syntax"></a>Sintassi

```
class CComClassFactory
    : public IClassFactory,
      public CComObjectRootEx<CComGlobalsThreadModel>
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComClassFactory::CreateInstance](#createinstance)|Crea un oggetto del CLSID specificato.|
|[CComClassFactory::LockServer](#lockserver)|Blocca la class factory in memoria.|

## <a name="remarks"></a>Osservazioni

`CComClassFactory`implementa l'interfaccia [IClassFactory,](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory) che contiene metodi per la creazione di un oggetto di un particolare CLSID, nonché il blocco della class factory in memoria per consentire la creazione più rapida di nuovi oggetti. `IClassFactory`deve essere implementato per ogni classe che si registra nel Registro di sistema e a cui si assegna un CLSID.

Gli oggetti ATL acquisiscono in genere una class factory derivandola da [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include [DECLARE_CLASSFACTORY](aggregation-and-class-factory-macros.md#declare_classfactory)la macro `CComClassFactory` DECLARE_CLASSFACTORY , che viene dichiarata come class factory predefinita. Per ignorare questa impostazione `DECLARE_CLASSFACTORY`predefinita, specificare una delle macro *XXX* nella definizione della classe. Ad esempio, la macro [DECLARE_CLASSFACTORY_EX](aggregation-and-class-factory-macros.md#declare_classfactory_ex) utilizza la classe specificata per la class factory:

[!code-cpp[NVC_ATL_COM#8](../../atl/codesnippet/cpp/ccomclassfactory-class_1.h)]

La definizione di `CMyClassFactory` classe precedente specifica che verrà utilizzato come class factory predefinita dell'oggetto. `CMyClassFactory`deve derivare `CreateInstance`da ed eseguire l'override di `CComClassFactory` .

ATL fornisce altre tre macro che dichiarano una class factory:

- [DECLARE_CLASSFACTORY2](aggregation-and-class-factory-macros.md#declare_classfactory2) Utilizza [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md), che controlla la creazione tramite una licenza.

- [DECLARE_CLASSFACTORY_AUTO_THREAD](aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) Utilizza [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md), che crea oggetti in più apartment.

- [DECLARE_CLASSFACTORY_SINGLETON](aggregation-and-class-factory-macros.md#declare_classfactory_singleton) Utilizza [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md), che costruisce un singolo oggetto [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) .

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="ccomclassfactorycreateinstance"></a><a name="createinstance"></a>CComClassFactory::CreateInstance

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

## <a name="ccomclassfactorylockserver"></a><a name="lockserver"></a>CComClassFactory::LockServer

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

## <a name="see-also"></a>Vedere anche

[Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)<br/>
[CComGlobalsThreadModel (modello CComGlobalsThreadModel)](atl-typedefs.md#ccomglobalsthreadmodel)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
