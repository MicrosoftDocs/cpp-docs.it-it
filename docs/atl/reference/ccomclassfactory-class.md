---
description: 'Altre informazioni su: classe CComClassFactory'
title: Classe CComClassFactory
ms.date: 11/04/2016
f1_keywords:
- CComClassFactory
- ATLCOM/ATL::CComClassFactory
- ATLCOM/ATL::CComClassFactory::CreateInstance
- ATLCOM/ATL::CComClassFactory::LockServer
helpviewer_keywords:
- CComClassFactory class
ms.assetid: e56dacf7-d5c4-4c42-aef4-a86d91981a1b
ms.openlocfilehash: 36233abf13c6ff6963d02bc5431286ca6c783235
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97152295"
---
# <a name="ccomclassfactory-class"></a>Classe CComClassFactory

Questa classe implementa l'interfaccia [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory) .

## <a name="syntax"></a>Sintassi

```
class CComClassFactory
    : public IClassFactory,
      public CComObjectRootEx<CComGlobalsThreadModel>
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CComClassFactory:: CreateInstance](#createinstance)|Crea un oggetto del CLSID specificato.|
|[CComClassFactory:: LockServer](#lockserver)|Blocca la class factory in memoria.|

## <a name="remarks"></a>Commenti

`CComClassFactory` implementa l'interfaccia [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory) , che contiene i metodi per la creazione di un oggetto di un determinato CLSID, nonché il blocco del class factory in memoria per consentire la creazione di nuovi oggetti più rapidamente. `IClassFactory` deve essere implementato per ogni classe registrata nel registro di sistema e a cui viene assegnato un CLSID.

Gli oggetti ATL in genere acquisiscono un class factory mediante derivazione da [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](aggregation-and-class-factory-macros.md#declare_classfactory), che dichiara `CComClassFactory` come class factory predefinita. Per eseguire l'override di questa impostazione predefinita, specificare una delle `DECLARE_CLASSFACTORY` macro *xxx* nella definizione della classe. Ad esempio, la macro [DECLARE_CLASSFACTORY_EX](aggregation-and-class-factory-macros.md#declare_classfactory_ex) usa la classe specificata per l'class factory:

[!code-cpp[NVC_ATL_COM#8](../../atl/codesnippet/cpp/ccomclassfactory-class_1.h)]

La definizione di classe precedente specifica che `CMyClassFactory` verrà utilizzato come class factory predefinito dell'oggetto. `CMyClassFactory` deve derivare da `CComClassFactory` ed eseguire l'override di `CreateInstance` .

ATL fornisce altre tre macro che dichiarano un class factory:

- [DECLARE_CLASSFACTORY2](aggregation-and-class-factory-macros.md#declare_classfactory2) USA [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md), che controlla la creazione tramite una licenza.

- [DECLARE_CLASSFACTORY_AUTO_THREAD](aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) USA [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md), che consente di creare oggetti in più Apartment.

- [DECLARE_CLASSFACTORY_SINGLETON](aggregation-and-class-factory-macros.md#declare_classfactory_singleton) USA [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md), che costruisce un singolo oggetto [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) .

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="ccomclassfactorycreateinstance"></a><a name="createinstance"></a> CComClassFactory:: CreateInstance

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

## <a name="ccomclassfactorylockserver"></a><a name="lockserver"></a> CComClassFactory:: LockServer

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

## <a name="see-also"></a>Vedi anche

[Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)<br/>
[CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
