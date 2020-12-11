---
description: 'Altre informazioni su: classe IObjectWithSiteImpl'
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
ms.openlocfilehash: 100a4d16bea63d573fe4fb00bc37e656a7c2c483
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97158296"
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
Classe derivata da `IObjectWithSiteImpl` .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IObjectWithSiteImpl:: GetSite](#getsite)|Esegue una query sul sito per un puntatore a interfaccia.|
|[IObjectWithSiteImpl:: SetChildSite](#setchildsite)|Fornisce l'oggetto con il puntatore del sito `IUnknown` .|
|[IObjectWithSiteImpl:: SESITE](#setsite)|Fornisce l'oggetto con il puntatore del sito `IUnknown` .|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[IObjectWithSiteImpl:: m_spUnkSite](#m_spunksite)|Gestisce il puntatore del sito `IUnknown` .|

## <a name="remarks"></a>Commenti

L'interfaccia [IObjectWithSite](/windows/win32/api/ocidl/nn-ocidl-iobjectwithsite) consente a un oggetto di comunicare con il relativo sito. La classe `IObjectWithSiteImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa inviando `IUnknown` informazioni al dispositivo di dump nelle compilazioni di debug.

`IObjectWithSiteImpl` specifica due metodi. Il client chiama prima `SetSite` , passando il puntatore del sito `IUnknown` . Questo puntatore viene archiviato all'interno dell'oggetto e può essere recuperato in un secondo momento tramite una chiamata a `GetSite` .

In genere, la classe viene derivata da `IObjectWithSiteImpl` quando si crea un oggetto che non è un controllo. Per i controlli, derivare la classe da [IOleObjectImpl](../../atl/reference/ioleobjectimpl-class.md), che fornisce anche un puntatore al sito. Non derivare la classe da `IObjectWithSiteImpl` e `IOleObjectImpl` .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IObjectWithSite`

`IObjectWithSiteImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="iobjectwithsiteimplgetsite"></a><a name="getsite"></a> IObjectWithSiteImpl:: GetSite

Esegue una query sul sito per individuare un puntatore all'interfaccia identificata da `riid` .

```
STDMETHOD(GetSite)(
    REFIID riid,
    void** ppvSite);
```

### <a name="remarks"></a>Commenti

Se il sito supporta questa interfaccia, il puntatore viene restituito tramite `ppvSite` . In caso contrario, `ppvSite` viene impostato su null.

Vedere [IObjectWithSite:: GetSite](/windows/win32/api/ocidl/nf-ocidl-iobjectwithsite-getsite) nel Windows SDK.

## <a name="iobjectwithsiteimplm_spunksite"></a><a name="m_spunksite"></a> IObjectWithSiteImpl:: m_spUnkSite

Gestisce il puntatore del sito `IUnknown` .

```
CComPtr<IUnknown> m_spUnkSite;
```

### <a name="remarks"></a>Commenti

`m_spUnkSite` riceve inizialmente questo puntatore tramite una chiamata a [SESITE](#setsite).

## <a name="iobjectwithsiteimplsetchildsite"></a><a name="setchildsite"></a> IObjectWithSiteImpl:: SetChildSite

Fornisce l'oggetto con il puntatore del sito `IUnknown` .

```
HRESULT SetChildSite(IUnknown* pUnkSite);
```

### <a name="parameters"></a>Parametri

*pUnkSite*<br/>
in Puntatore al `IUnknown` puntatore a interfaccia del sito che gestisce questo oggetto. Se è NULL, l'oggetto deve chiamare `IUnknown::Release` su un sito esistente in cui l'oggetto non conosce più il proprio sito.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

## <a name="iobjectwithsiteimplsetsite"></a><a name="setsite"></a> IObjectWithSiteImpl:: SESITE

Fornisce l'oggetto con il puntatore del sito `IUnknown` .

```
STDMETHOD(SetSite)(IUnknown* pUnkSite);
```

### <a name="remarks"></a>Commenti

Vedere [IObjectWithSite:: SESITE](/windows/win32/api/ocidl/nf-ocidl-iobjectwithsite-setsite) nel Windows SDK.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
