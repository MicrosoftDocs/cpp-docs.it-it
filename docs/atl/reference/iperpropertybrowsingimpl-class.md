---
title: IPerPropertyBrowsingImpl (classe)
ms.date: 11/04/2016
f1_keywords:
- IPerPropertyBrowsingImpl
- ATLCTL/ATL::IPerPropertyBrowsingImpl
- ATLCTL/ATL::IPerPropertyBrowsingImpl::GetDisplayString
- ATLCTL/ATL::IPerPropertyBrowsingImpl::GetPredefinedStrings
- ATLCTL/ATL::IPerPropertyBrowsingImpl::GetPredefinedValue
- ATLCTL/ATL::IPerPropertyBrowsingImpl::MapPropertyToPage
helpviewer_keywords:
- IPerPropertyBrowsingImpl class
- property pages, accessing information
- IPerPropertyBrowsing, ATL implementation
ms.assetid: 0b1a9be3-d242-4767-be69-663a21e4b728
ms.openlocfilehash: f8fb80cc38e775b9b26afa033647faac694e968a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326506"
---
# <a name="iperpropertybrowsingimpl-class"></a>IPerPropertyBrowsingImpl (classe)

Questa classe `IUnknown` implementa e consente a un client di accedere alle informazioni nelle pagine delle proprietà di un oggetto.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```

template <class T>
class ATL_NO_VTABLE IPerPropertyBrowsingImpl :
    public IPerPropertyBrowsing
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `IPerPropertyBrowsingImpl`derivata da .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IPerPropertyBrowsingImpl::GetDisplayString](#getdisplaystring)|Recupera una stringa che descrive una proprietà specificata.|
|[IPerPropertyBrowsingImpl::GetPredefinedStrings](#getpredefinedstrings)|Recupera una matrice di stringhe corrispondenti ai valori che una determinata proprietà può accettare.|
|[IPerPropertyBrowsingImpl::GetPredefinedValue](#getpredefinedvalue)|Recupera un oggetto VARIANT contenente il valore di una proprietà identificata da un DISPID specificato. Il DISPID è associato al `GetPredefinedStrings`nome della stringa recuperato da . L'implementazione ATL restituisce E_NOTIMPL.|
|[IPerPropertyBrowsingImpl::MapPropertyToPage](#mappropertytopage)|Recupera il CLSID della pagina delle proprietà associata a una determinata proprietà.|

## <a name="remarks"></a>Osservazioni

Il [IPerPropertyBrowsing](/windows/win32/api/ocidl/nn-ocidl-iperpropertybrowsing) interfaccia consente a un client di accedere alle informazioni nelle pagine delle proprietà di un oggetto. Classe `IPerPropertyBrowsingImpl` fornisce un'implementazione predefinita `IUnknown` di questa interfaccia e implementa inviando informazioni al dispositivo di dump nelle build di debug.

> [!NOTE]
> Se si utilizza Microsoft Access come applicazione contenitore, `IPerPropertyBrowsingImpl`è necessario derivare la classe da . In caso contrario, Access non caricherà il controllo.

**Articoli correlati** [ATL Esercitazione](../../atl/active-template-library-atl-tutorial.md), [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IPerPropertyBrowsing`

`IPerPropertyBrowsingImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl.h

## <a name="iperpropertybrowsingimplgetdisplaystring"></a><a name="getdisplaystring"></a>IPerPropertyBrowsingImpl::GetDisplayString

Recupera una stringa che descrive una proprietà specificata.

```
STDMETHOD(GetDisplayString)(
    DISPID dispID,
    BSTR* pBstr);
```

### <a name="remarks"></a>Osservazioni

Vedere [IPerPropertyBrowsing::GetDisplayString](/windows/win32/api/ocidl/nf-ocidl-iperpropertybrowsing-getdisplaystring) in Windows SDK.

## <a name="iperpropertybrowsingimplgetpredefinedstrings"></a><a name="getpredefinedstrings"></a>IPerPropertyBrowsingImpl::GetPredefinedStrings

Riempie ogni matrice con zero elementi.

```
STDMETHOD(GetPredefinedStrings)(
    DISPID dispID,
    CALPOLESTR* pCaStringsOut,
    CADWORD* pCaCookiesOut);
```

### <a name="return-value"></a>Valore restituito

L'implementazione di ATL di [GetPredefinedValue](#getpredefinedvalue) restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

Vedere [IPerPropertyBrowsing::GetPredefinedStrings](/windows/win32/api/ocidl/nf-ocidl-iperpropertybrowsing-getpredefinedstrings) in Windows SDK.

## <a name="iperpropertybrowsingimplgetpredefinedvalue"></a><a name="getpredefinedvalue"></a>IPerPropertyBrowsingImpl::GetPredefinedValue

Recupera un oggetto VARIANT contenente il valore di una proprietà identificata da un DISPID specificato. Il DISPID è associato al `GetPredefinedStrings`nome della stringa recuperato da .

```
STDMETHOD(GetPredefinedValue)(
    DISPID dispID,
    DWORD dwCookie,
    VARIANT* pVarOut);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Osservazioni

L'implementazione di ATL di [GetPredefinedStrings](#getpredefinedstrings) non recupera stringhe corrispondenti.

Vedere [IPerPropertyBrowsing::GetPredefinedValue](/windows/win32/api/ocidl/nf-ocidl-iperpropertybrowsing-getpredefinedvalue) in Windows SDK.

## <a name="iperpropertybrowsingimplmappropertytopage"></a><a name="mappropertytopage"></a>IPerPropertyBrowsingImpl::MapPropertyToPage

Recupera il CLSID della pagina delle proprietà associata alla proprietà specificata.

```
STDMETHOD(MapPropertyToPage)(
    DISPID dispID,
    CLSID* pClsid);
```

### <a name="remarks"></a>Osservazioni

ATL utilizza la mappa delle proprietà dell'oggetto per ottenere queste informazioni.

Vedere [IPerPropertyBrowsing::MapPropertyToPage](/windows/win32/api/ocidl/nf-ocidl-iperpropertybrowsing-mappropertytopage) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[IPropertyPageImpl (classe)](../../atl/reference/ipropertypageimpl-class.md)<br/>
[Classe ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
