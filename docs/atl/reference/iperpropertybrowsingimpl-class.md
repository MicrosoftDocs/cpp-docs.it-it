---
description: 'Altre informazioni su: classe IPerPropertyBrowsingImpl'
title: Classe IPerPropertyBrowsingImpl
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
ms.openlocfilehash: eba17c0011343f50f586b13086dc76229f08ba3c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97139347"
---
# <a name="iperpropertybrowsingimpl-class"></a>Classe IPerPropertyBrowsingImpl

Questa classe implementa `IUnknown` e consente a un client di accedere alle informazioni nelle pagine delle proprietà di un oggetto.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```

template <class T>
class ATL_NO_VTABLE IPerPropertyBrowsingImpl :
    public IPerPropertyBrowsing
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IPerPropertyBrowsingImpl` .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IPerPropertyBrowsingImpl:: GetDisplayString](#getdisplaystring)|Recupera una stringa che descrive una determinata proprietà.|
|[IPerPropertyBrowsingImpl:: GetPredefinedStrings](#getpredefinedstrings)|Recupera una matrice di stringhe corrispondenti ai valori che una determinata proprietà può accettare.|
|[IPerPropertyBrowsingImpl:: GetPredefinedValue](#getpredefinedvalue)|Recupera un oggetto VARIANT contenente il valore di una proprietà identificata da un DISPID specificato. Il DISPID è associato al nome della stringa recuperato da `GetPredefinedStrings` . L'implementazione ATL restituisce E_NOTIMPL.|
|[IPerPropertyBrowsingImpl:: MapPropertyToPage](#mappropertytopage)|Recupera il CLSID della pagina delle proprietà associata a una determinata proprietà.|

## <a name="remarks"></a>Commenti

L'interfaccia [IPerPropertyBrowsing](/windows/win32/api/ocidl/nn-ocidl-iperpropertybrowsing) consente a un client di accedere alle informazioni contenute nelle pagine delle proprietà di un oggetto. La classe `IPerPropertyBrowsingImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa inviando `IUnknown` informazioni al dispositivo di dump nelle compilazioni di debug.

> [!NOTE]
> Se si usa Microsoft Access come applicazione contenitore, è necessario derivare la classe da `IPerPropertyBrowsingImpl` . In caso contrario, l'accesso non caricherà il controllo.

[Esercitazione su ATL](../../atl/active-template-library-atl-tutorial.md) **articoli correlati** , [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IPerPropertyBrowsing`

`IPerPropertyBrowsingImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

## <a name="iperpropertybrowsingimplgetdisplaystring"></a><a name="getdisplaystring"></a> IPerPropertyBrowsingImpl:: GetDisplayString

Recupera una stringa che descrive una determinata proprietà.

```
STDMETHOD(GetDisplayString)(
    DISPID dispID,
    BSTR* pBstr);
```

### <a name="remarks"></a>Commenti

Vedere [IPerPropertyBrowsing:: GetDisplayString](/windows/win32/api/ocidl/nf-ocidl-iperpropertybrowsing-getdisplaystring) nella Windows SDK.

## <a name="iperpropertybrowsingimplgetpredefinedstrings"></a><a name="getpredefinedstrings"></a> IPerPropertyBrowsingImpl:: GetPredefinedStrings

Riempie ogni matrice con zero elementi.

```
STDMETHOD(GetPredefinedStrings)(
    DISPID dispID,
    CALPOLESTR* pCaStringsOut,
    CADWORD* pCaCookiesOut);
```

### <a name="return-value"></a>Valore restituito

L'implementazione di [GetPredefinedValue](#getpredefinedvalue) di ATL restituisce E_NOTIMPL.

### <a name="remarks"></a>Commenti

Vedere [IPerPropertyBrowsing:: GetPredefinedStrings](/windows/win32/api/ocidl/nf-ocidl-iperpropertybrowsing-getpredefinedstrings) nella Windows SDK.

## <a name="iperpropertybrowsingimplgetpredefinedvalue"></a><a name="getpredefinedvalue"></a> IPerPropertyBrowsingImpl:: GetPredefinedValue

Recupera un oggetto VARIANT contenente il valore di una proprietà identificata da un DISPID specificato. Il DISPID è associato al nome della stringa recuperato da `GetPredefinedStrings` .

```
STDMETHOD(GetPredefinedValue)(
    DISPID dispID,
    DWORD dwCookie,
    VARIANT* pVarOut);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Commenti

L'implementazione di [GetPredefinedStrings](#getpredefinedstrings) di ATL non consente di recuperare stringhe corrispondenti.

Vedere [IPerPropertyBrowsing:: GetPredefinedValue](/windows/win32/api/ocidl/nf-ocidl-iperpropertybrowsing-getpredefinedvalue) nella Windows SDK.

## <a name="iperpropertybrowsingimplmappropertytopage"></a><a name="mappropertytopage"></a> IPerPropertyBrowsingImpl:: MapPropertyToPage

Recupera il CLSID della pagina delle proprietà associata alla proprietà specificata.

```
STDMETHOD(MapPropertyToPage)(
    DISPID dispID,
    CLSID* pClsid);
```

### <a name="remarks"></a>Commenti

Per ottenere queste informazioni, ATL utilizza la mappa delle proprietà dell'oggetto.

Vedere [IPerPropertyBrowsing:: MapPropertyToPage](/windows/win32/api/ocidl/nf-ocidl-iperpropertybrowsing-mappropertytopage) nella Windows SDK.

## <a name="see-also"></a>Vedi anche

[Classe IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md)<br/>
[Classe ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
