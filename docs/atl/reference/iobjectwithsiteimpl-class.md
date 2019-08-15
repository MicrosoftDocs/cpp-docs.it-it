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
ms.openlocfilehash: e857f739e3ff7235c473e99abbef6aab0d3f4205
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69495839"
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
Classe derivata da `IObjectWithSiteImpl`.

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IObjectWithSiteImpl::GetSite](#getsite)|Esegue una query sul sito per un puntatore a interfaccia.|
|[IObjectWithSiteImpl::SetChildSite](#setchildsite)|Fornisce l'oggetto con il `IUnknown` puntatore del sito.|
|[IObjectWithSiteImpl::SetSite](#setsite)|Fornisce l'oggetto con il `IUnknown` puntatore del sito.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[IObjectWithSiteImpl::m_spUnkSite](#m_spunksite)|Gestisce il `IUnknown` puntatore del sito.|

## <a name="remarks"></a>Note

L'interfaccia [IObjectWithSite](/windows/win32/api/ocidl/nn-ocidl-iobjectwithsite) consente a un oggetto di comunicare con il relativo sito. La `IObjectWithSiteImpl` classe fornisce un'implementazione predefinita di questa interfaccia e `IUnknown` implementa inviando informazioni al dispositivo di dump nelle compilazioni di debug.

`IObjectWithSiteImpl`specifica due metodi. Il client chiama `SetSite`prima, passando il `IUnknown` puntatore del sito. Questo puntatore viene archiviato all'interno dell'oggetto e può essere recuperato in un secondo momento tramite `GetSite`una chiamata a.

In genere, la classe viene derivata da `IObjectWithSiteImpl` quando si crea un oggetto che non è un controllo. Per i controlli, derivare la classe da [IOleObjectImpl](../../atl/reference/ioleobjectimpl-class.md), che fornisce anche un puntatore al sito. Non derivare la classe da `IObjectWithSiteImpl` e. `IOleObjectImpl`

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IObjectWithSite`

`IObjectWithSiteImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="getsite"></a>  IObjectWithSiteImpl::GetSite

Esegue una query sul sito per individuare un puntatore all'interfaccia `riid`identificata da.

```
STDMETHOD(GetSite)(
    REFIID riid,
    void** ppvSite);
```

### <a name="remarks"></a>Note

Se il sito supporta questa interfaccia, il puntatore viene restituito tramite `ppvSite`. In caso `ppvSite` contrario, viene impostato su null.

Vedere [IObjectWithSite:: GetSite](/windows/win32/api/ocidl/nf-ocidl-iobjectwithsite-getsite) nel Windows SDK.

##  <a name="m_spunksite"></a>  IObjectWithSiteImpl::m_spUnkSite

Gestisce il `IUnknown` puntatore del sito.

```
CComPtr<IUnknown> m_spUnkSite;
```

### <a name="remarks"></a>Note

`m_spUnkSite`riceve inizialmente questo puntatore tramite una chiamata a [SESITE](#setsite).

##  <a name="setchildsite"></a>  IObjectWithSiteImpl::SetChildSite

Fornisce l'oggetto con il `IUnknown` puntatore del sito.

```
HRESULT SetChildSite(IUnknown* pUnkSite);
```

### <a name="parameters"></a>Parametri

*pUnkSite*<br/>
in Puntatore al puntatore `IUnknown` a interfaccia del sito che gestisce questo oggetto. Se è null, l'oggetto deve `IUnknown::Release` chiamare su un sito esistente in cui l'oggetto non conosce più il proprio sito.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

##  <a name="setsite"></a>  IObjectWithSiteImpl::SetSite

Fornisce l'oggetto con il `IUnknown` puntatore del sito.

```
STDMETHOD(SetSite)(IUnknown* pUnkSite);
```

### <a name="remarks"></a>Note

Vedere [IObjectWithSite:: SESITE](/windows/win32/api/ocidl/nf-ocidl-iobjectwithsite-setsite) nel Windows SDK.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
