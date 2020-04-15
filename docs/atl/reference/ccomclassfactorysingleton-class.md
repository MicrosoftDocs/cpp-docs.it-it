---
title: CComClassFactorySingleton (classe)
ms.date: 11/04/2016
f1_keywords:
- CComClassFactorySingleton
- ATLCOM/ATL::CComClassFactorySingleton
- ATLCOM/ATL::CComClassFactorySingleton::CreateInstance
- ATLCOM/ATL::CComClassFactorySingleton::m_spObj
helpviewer_keywords:
- CComClassFactorySingleton class
ms.assetid: debb983c-382b-487b-8d42-7ea26dc158b8
ms.openlocfilehash: ec860f7ef59b7d3289bf2e18fea0f0e064a7c8f9
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81320813"
---
# <a name="ccomclassfactorysingleton-class"></a>CComClassFactorySingleton (classe)

Questa classe deriva da [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) e utilizza [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) per costruire un singolo oggetto.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<class T>
class CComClassFactorySingleton : public CComClassFactory
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La tua classe.

`CComClassFactorySingleton`deriva da [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) e utilizza [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) per costruire un singolo oggetto. Ogni chiamata `CreateInstance` al metodo esegue semplicemente una query su questo oggetto per un puntatore a interfaccia.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComClassFactorySingleton::CreateInstance](#createinstance)|Esegue `m_spObj` una query per un puntatore a interfaccia.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComClassFactorySingleton::m_spObj](#m_spobj)|Oggetto [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) costruito `CComClassFactorySingleton`da .|

## <a name="remarks"></a>Osservazioni

Gli oggetti ATL acquisiscono in genere una class factory derivandola da [CComCoClass](../../atl/reference/ccomcoclass-class.md). Questa classe include [DECLARE_CLASSFACTORY](aggregation-and-class-factory-macros.md#declare_classfactory)la macro `CComClassFactory` DECLARE_CLASSFACTORY , che viene dichiarata come class factory predefinita. Per `CComClassFactorySingleton`utilizzare , specificare la macro [DECLARE_CLASSFACTORY_SINGLETON](aggregation-and-class-factory-macros.md#declare_classfactory_singleton) nella definizione della classe dell'oggetto. Ad esempio:

[!code-cpp[NVC_ATL_COM#10](../../atl/codesnippet/cpp/ccomclassfactorysingleton-class_1.h)]

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CComObjectRootBase`

[Ccomobjectrootex](../../atl/reference/ccomobjectrootex-class.md)

`IClassFactory`

[CComClassFactory (informazioni in base alla proprietà)](../../atl/reference/ccomclassfactory-class.md)

`CComClassFactorySingleton`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="ccomclassfactorysingletoncreateinstance"></a><a name="createinstance"></a>CComClassFactorySingleton::CreateInstance

Chiama `QueryInterface` [tramite m_spObj](#m_spobj) per recuperare un puntatore a interfaccia.

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

## <a name="ccomclassfactorysingletonm_spobj"></a><a name="m_spobj"></a>CComClassFactorySingleton::m_spObj

Oggetto [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) costruito `CComClassFactorySingleton`da .

```
CComPtr<IUnknown> m_spObj;
```

### <a name="remarks"></a>Osservazioni

Ogni chiamata al [metodo CreateInstance](#createinstance) esegue semplicemente una query su questo oggetto per un puntatore a interfaccia.

Si noti che `m_spObj` la forma corrente di `CComClassFactorySingleton` presenta una modifica sostanziale rispetto al modo in cui funzionava nelle versioni precedenti di ATL. Nelle versioni `CComClassFactorySingleton` precedenti l'oggetto è stato creato contemporaneamente alla class factory, durante l'inizializzazione del server. Nella prima richiesta, l'oggetto viene creato in modo non colossi, nella prima richiesta. Questa modifica potrebbe causare errori nei programmi che si basano sull'inizializzazione anticipata.

## <a name="see-also"></a>Vedere anche

[IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory)<br/>
[Classe CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md)<br/>
[CComClassFactoryAutoThread (classe)](../../atl/reference/ccomclassfactoryautothread-class.md)<br/>
[Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)<br/>
[CComGlobalsThreadModel (modello CComGlobalsThreadModel)](atl-typedefs.md#ccomglobalsthreadmodel)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
