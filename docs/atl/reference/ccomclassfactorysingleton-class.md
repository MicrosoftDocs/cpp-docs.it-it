---
description: 'Altre informazioni su: classe CComClassFactorySingleton'
title: Classe CComClassFactorySingleton
ms.date: 11/04/2016
f1_keywords:
- CComClassFactorySingleton
- ATLCOM/ATL::CComClassFactorySingleton
- ATLCOM/ATL::CComClassFactorySingleton::CreateInstance
- ATLCOM/ATL::CComClassFactorySingleton::m_spObj
helpviewer_keywords:
- CComClassFactorySingleton class
ms.assetid: debb983c-382b-487b-8d42-7ea26dc158b8
ms.openlocfilehash: eaf09f823a6d8d62f102e6e36116b56270248f9e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97146861"
---
# <a name="ccomclassfactorysingleton-class"></a>Classe CComClassFactorySingleton

Questa classe deriva da [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) e USA [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) per costruire un singolo oggetto.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class CComClassFactorySingleton : public CComClassFactory
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe.

`CComClassFactorySingleton` deriva da [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) e USA [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) per costruire un singolo oggetto. Ogni chiamata al `CreateInstance` metodo esegue semplicemente una query su questo oggetto per un puntatore a interfaccia.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CComClassFactorySingleton:: CreateInstance](#createinstance)|Esegue una query `m_spObj` per un puntatore a interfaccia.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CComClassFactorySingleton:: m_spObj](#m_spobj)|Oggetto [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) costruito da `CComClassFactorySingleton` .|

## <a name="remarks"></a>Commenti

Gli oggetti ATL in genere acquisiscono un class factory mediante derivazione da [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include la macro [DECLARE_CLASSFACTORY](aggregation-and-class-factory-macros.md#declare_classfactory), che dichiara `CComClassFactory` come class factory predefinita. Per usare `CComClassFactorySingleton` , specificare la macro [DECLARE_CLASSFACTORY_SINGLETON](aggregation-and-class-factory-macros.md#declare_classfactory_singleton) nella definizione della classe dell'oggetto. Ad esempio:

[!code-cpp[NVC_ATL_COM#10](../../atl/codesnippet/cpp/ccomclassfactorysingleton-class_1.h)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CComObjectRootBase`

[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

`IClassFactory`

[CComClassFactory](../../atl/reference/ccomclassfactory-class.md)

`CComClassFactorySingleton`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="ccomclassfactorysingletoncreateinstance"></a><a name="createinstance"></a> CComClassFactorySingleton:: CreateInstance

Chiama `QueryInterface` tramite [m_spObj](#m_spobj) per recuperare un puntatore a interfaccia.

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

## <a name="ccomclassfactorysingletonm_spobj"></a><a name="m_spobj"></a> CComClassFactorySingleton:: m_spObj

Oggetto [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) costruito da `CComClassFactorySingleton` .

```
CComPtr<IUnknown> m_spObj;
```

### <a name="remarks"></a>Commenti

Ogni chiamata al metodo [CreateInstance](#createinstance) esegue semplicemente una query su questo oggetto per un puntatore di interfaccia.

Si noti che la forma corrente di `m_spObj` presenta una modifica sostanziale dal modo `CComClassFactorySingleton` in cui funzionava nelle versioni precedenti di ATL. Nelle versioni precedenti l' `CComClassFactorySingleton` oggetto è stato creato allo stesso tempo del class factory, durante l'inizializzazione del server. In Visual C++ .NET 2003 e versioni successive, l'oggetto viene creato in modo differito alla prima richiesta. Questa modifica può causare errori nei programmi che si basano sull'inizializzazione iniziale.

## <a name="see-also"></a>Vedi anche

[IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory)<br/>
[Classe CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md)<br/>
[Classe CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md)<br/>
[Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)<br/>
[CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
