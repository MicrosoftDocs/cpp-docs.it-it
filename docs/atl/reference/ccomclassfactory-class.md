---
title: Classe CComClassFactory | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComClassFactory
- ATLCOM/ATL::CComClassFactory
- ATLCOM/ATL::CComClassFactory::CreateInstance
- ATLCOM/ATL::CComClassFactory::LockServer
dev_langs:
- C++
helpviewer_keywords:
- CComClassFactory class
ms.assetid: e56dacf7-d5c4-4c42-aef4-a86d91981a1b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ebf8112650cf1908225d0fc2c79d61d26dd606fe
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46051009"
---
# <a name="ccomclassfactory-class"></a>Classe CComClassFactory

Questa classe implementa il [IClassFactory](/windows/desktop/api/unknwnbase/nn-unknwnbase-iclassfactory) interfaccia.

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
|[CComClassFactory::CreateInstance](#createinstance)|Crea un oggetto di CLSID specificato.|
|[CComClassFactory::LockServer](#lockserver)|Blocca la class factory nella memoria.|

## <a name="remarks"></a>Note

`CComClassFactory` implementa il [IClassFactory](/windows/desktop/api/unknwnbase/nn-unknwnbase-iclassfactory) interfaccia, che contiene metodi per la creazione di un oggetto di un particolare CLSID, nonché la class factory in memoria per consentire di creare più rapidamente nuovi oggetti di blocco. `IClassFactory` deve essere implementato per ogni classe che si registra nel Registro di sistema e a cui si assegna un CLSID.

Gli oggetti ATL acquisire normalmente una class factory derivando da [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](aggregation-and-class-factory-macros.md#declare_classfactory), che dichiara `CComClassFactory` come la class factory predefinita. Per eseguire l'override di questa impostazione predefinita, specificare uno dei `DECLARE_CLASSFACTORY` *XXX* macro nella definizione della classe. Ad esempio, il [DECLARE_CLASSFACTORY_EX](aggregation-and-class-factory-macros.md#declare_classfactory_ex) macro Usa la classe specificata per la class factory:

[!code-cpp[NVC_ATL_COM#8](../../atl/codesnippet/cpp/ccomclassfactory-class_1.h)]

La definizione di classe precedente specifica che `CMyClassFactory` verrà usato come class factory predefinita dell'oggetto. `CMyClassFactory` deve derivare da `CComClassFactory` ed eseguire l'override `CreateInstance`.

ATL fornisce tre altre macro che dichiarano una class factory:

- [Macro DECLARE_CLASSFACTORY2](aggregation-and-class-factory-macros.md#declare_classfactory2) viene utilizzato [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md), che controlla la creazione tramite una licenza.

- [: DECLARE_CLASSFACTORY_AUTO_THREAD](aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) viene utilizzato [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md), che consente di creare oggetti in più apartment.

- [DECLARE_CLASSFACTORY_SINGLETON](aggregation-and-class-factory-macros.md#declare_classfactory_singleton) viene utilizzato [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md), che costruisce un singolo [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="createinstance"></a>  CComClassFactory::CreateInstance

Crea un oggetto di CLSID specificato e recupera un puntatore a interfaccia a questo oggetto.

```
STDMETHOD(CreateInstance)(LPUNKNOWN pUnkOuter, REFIID riid, void** ppvObj);
```

### <a name="parameters"></a>Parametri

*pUnkOuter*<br/>
[in] Se l'oggetto è stata creata come parte di un'aggregazione, quindi *pUnkOuter* deve essere unknown esterno. In caso contrario, *pUnkOuter* deve essere NULL.

*riid*<br/>
[in] IID dell'interfaccia richiesta. Se *pUnkOuter* è diverso da NULL, *riid* deve essere `IID_IUnknown`.

*ppvObj*<br/>
[out] Un puntatore al puntatore a interfaccia identificato dal *riid*. Se l'oggetto non supporta questa interfaccia, *ppvObj* è impostato su NULL.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

##  <a name="lockserver"></a>  CComClassFactory::LockServer

Incrementa e decrementa il modulo conteggio dei blocchi chiamando `_Module::Lock` e `_Module::Unlock`, rispettivamente.

```
STDMETHOD(LockServer)(BOOL fLock);
```

### <a name="parameters"></a>Parametri

*branco*<br/>
[in] Se TRUE, viene incrementato il conteggio dei blocchi; in caso contrario, il conteggio dei blocchi viene decrementato.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

`_Module` fa riferimento all'istanza di global [CComModule](../../atl/reference/ccommodule-class.md) o una classe derivata da esso.

La chiamata `LockServer` consente a un client di contenere una class factory in modo che più oggetti possono essere creati rapidamente.

## <a name="see-also"></a>Vedere anche

[Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)<br/>
[CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
