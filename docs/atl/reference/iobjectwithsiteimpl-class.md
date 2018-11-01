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
ms.openlocfilehash: 776f6f67c0490afb9d3ca975fcee7596d415ac12
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50608891"
---
# <a name="iobjectwithsiteimpl-class"></a>Classe IObjectWithSiteImpl

Questa classe fornisce metodi di consentire a un oggetto comunicare con il relativo sito.

## <a name="syntax"></a>Sintassi

```
template <class T>
    class ATL_NO_VTABLE IObjectWithSiteImpl :
    public IObjectWithSite
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, derivata da `IObjectWithSiteImpl`.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IObjectWithSiteImpl::GetSite](#getsite)|Esegue una query il sito per un puntatore a interfaccia.|
|[IObjectWithSiteImpl::SetChildSite](#setchildsite)|Fornisce l'oggetto con il sito `IUnknown` puntatore.|
|[IObjectWithSiteImpl::SetSite](#setsite)|Fornisce l'oggetto con il sito `IUnknown` puntatore.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IObjectWithSiteImpl::m_spUnkSite](#m_spunksite)|Gestisce il sito `IUnknown` puntatore.|

## <a name="remarks"></a>Note

Il [IObjectWithSite](/windows/desktop/api/ocidl/nn-ocidl-iobjectwithsite) interfaccia consente a un oggetto comunicare con il relativo sito. Classe `IObjectWithSiteImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa `IUnknown` per l'invio di informazioni per il dump compila dispositivo in modalità debug.

`IObjectWithSiteImpl` specifica due metodi. Il client chiama prima `SetSite`, passando il sito `IUnknown` puntatore. Puntatore ' this ' viene archiviato all'interno dell'oggetto e versioni successive possono essere recuperate tramite una chiamata a `GetSite`.

In genere, derivare la classe da `IObjectWithSiteImpl` quando si crea un oggetto che non è un controllo. Per i controlli, derivare la classe da [IOleObjectImpl](../../atl/reference/ioleobjectimpl-class.md), che offre anche un puntatore di sito. Non derivano la classe da entrambe `IObjectWithSiteImpl` e `IOleObjectImpl`.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IObjectWithSite`

`IObjectWithSiteImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="getsite"></a>  IObjectWithSiteImpl::GetSite

Il sito per un puntatore a interfaccia identificato da una query `riid`.

```
STDMETHOD(GetSite)(
    REFIID riid,
    void** ppvSite);
```

### <a name="remarks"></a>Note

Se il sito supporta questa interfaccia, il puntatore viene restituito tramite `ppvSite`. In caso contrario, `ppvSite` è impostato su NULL.

Visualizzare [IObjectWithSite::GetSite](/windows/desktop/api/ocidl/nf-ocidl-iobjectwithsite-getsite) in Windows SDK.

##  <a name="m_spunksite"></a>  IObjectWithSiteImpl::m_spUnkSite

Gestisce il sito `IUnknown` puntatore.

```
CComPtr<IUnknown> m_spUnkSite;
```

### <a name="remarks"></a>Note

`m_spUnkSite` riceverà inizialmente questo puntatore tramite una chiamata a [SetSite](#setsite).

##  <a name="setchildsite"></a>  IObjectWithSiteImpl::SetChildSite

Fornisce l'oggetto con il sito `IUnknown` puntatore.

```
HRESULT SetChildSite(IUnknown* pUnkSite);
```

### <a name="parameters"></a>Parametri

*pUnkSite*<br/>
[in] Puntatore al `IUnknown` puntatore all'interfaccia del sito di gestione di questo oggetto. Se NULL, l'oggetto deve chiamare `IUnknown::Release` in tutti i siti esistenti a questo punto l'oggetto non è più è in grado relativo sito.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

##  <a name="setsite"></a>  IObjectWithSiteImpl::SetSite

Fornisce l'oggetto con il sito `IUnknown` puntatore.

```
STDMETHOD(SetSite)(IUnknown* pUnkSite);
```

### <a name="remarks"></a>Note

Visualizzare [IObjectWithSite::SetSite](/windows/desktop/api/ocidl/nf-ocidl-iobjectwithsite-setsite) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
