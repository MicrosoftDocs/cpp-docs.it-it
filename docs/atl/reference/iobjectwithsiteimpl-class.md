---
title: Classe IObjectWithSiteImpl
ms.date: 11/04/2016
f1_keywords:
- IObjectWithSiteImpl
- ATLCOM/ATL::IObjectWithSiteImpl
- ATLCOM/ATL::IObjectWithSiteImpl::GetSite
- ATLCOM/ATL::IObjectWithSiteImpl::SetChildSite
- ATLCOM/ATL::IObjectWithSiteImpl::SetSite
- ATLCOM/ATL::IObjectWithSiteImpl::m_spUnkSite
helpviewer_keywords:
- IObjectWithSiteImpl class
ms.assetid: 4e1f774f-bc3d-45ee-9a1c-c3533a511588
ms.openlocfilehash: 034e5dd42f6e10286520bb2a08effc40b0aca71a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329650"
---
# <a name="iobjectwithsiteimpl-class"></a>Classe IObjectWithSiteImpl

Questa classe fornisce metodi che consentono a un oggetto di comunicare con il relativo sito.

## <a name="syntax"></a>Sintassi

```
template <class T>
    class ATL_NO_VTABLE IObjectWithSiteImpl :
    public IObjectWithSite
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `IObjectWithSiteImpl`derivata da .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IObjectWithSiteImpl::Sito](#getsite)|Esegue una query sul sito per un puntatore a interfaccia.|
|[IObjectWithSiteImpl::SetChildSite](#setchildsite)|Fornisce all'oggetto il `IUnknown` puntatore del sito.|
|[IObjectWithSiteImpl::SetSite](#setsite)|Fornisce all'oggetto il `IUnknown` puntatore del sito.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IObjectWithSiteImpl::m_spUnkSite](#m_spunksite)|Gestisce il puntatore del `IUnknown` sito.|

## <a name="remarks"></a>Osservazioni

L'interfaccia [IObjectWithSite](/windows/win32/api/ocidl/nn-ocidl-iobjectwithsite) consente a un oggetto di comunicare con il relativo sito. Classe `IObjectWithSiteImpl` fornisce un'implementazione predefinita `IUnknown` di questa interfaccia e implementa inviando informazioni al dispositivo di dump nelle build di debug.

`IObjectWithSiteImpl`specifica due metodi. Il client `SetSite`chiama innanzitutto , `IUnknown` passando il puntatore del sito. Questo puntatore viene memorizzato all'interno dell'oggetto `GetSite`e può essere successivamente recuperato tramite una chiamata a .

In genere, derivare `IObjectWithSiteImpl` la classe da quando si crea un oggetto che non è un controllo. Per i controlli, derivare la classe da [IOleObjectImpl](../../atl/reference/ioleobjectimpl-class.md), che fornisce anche un puntatore al sito. Non derivare la `IObjectWithSiteImpl` classe `IOleObjectImpl`da entrambi e .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IObjectWithSite`

`IObjectWithSiteImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="iobjectwithsiteimplgetsite"></a><a name="getsite"></a>IObjectWithSiteImpl::Sito

Esegue una query sul sito per `riid`ottenere un puntatore all'interfaccia identificata da .

```
STDMETHOD(GetSite)(
    REFIID riid,
    void** ppvSite);
```

### <a name="remarks"></a>Osservazioni

Se il sito supporta questa interfaccia, il `ppvSite`puntatore viene restituito tramite . In `ppvSite` caso contrario, viene impostato su NULL.

Vedere [IObjectWithSite::GetSite](/windows/win32/api/ocidl/nf-ocidl-iobjectwithsite-getsite) in Windows SDK.

## <a name="iobjectwithsiteimplm_spunksite"></a><a name="m_spunksite"></a>IObjectWithSiteImpl::m_spUnkSite

Gestisce il puntatore del `IUnknown` sito.

```
CComPtr<IUnknown> m_spUnkSite;
```

### <a name="remarks"></a>Osservazioni

`m_spUnkSite`riceve inizialmente questo puntatore tramite una chiamata a [SetSite](#setsite).

## <a name="iobjectwithsiteimplsetchildsite"></a><a name="setchildsite"></a>IObjectWithSiteImpl::SetChildSite

Fornisce all'oggetto il `IUnknown` puntatore del sito.

```
HRESULT SetChildSite(IUnknown* pUnkSite);
```

### <a name="parameters"></a>Parametri

*sito pUnk*<br/>
[in] Puntatore `IUnknown` al puntatore a interfaccia del sito che gestisce questo oggetto. Se NULL, l'oggetto deve chiamare `IUnknown::Release` su qualsiasi sito esistente a quel punto l'oggetto non conosce più il sito.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

## <a name="iobjectwithsiteimplsetsite"></a><a name="setsite"></a>IObjectWithSiteImpl::SetSite

Fornisce all'oggetto il `IUnknown` puntatore del sito.

```
STDMETHOD(SetSite)(IUnknown* pUnkSite);
```

### <a name="remarks"></a>Osservazioni

Vedere [IObjectWithSite::SetSite](/windows/win32/api/ocidl/nf-ocidl-iobjectwithsite-setsite) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
