---
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
ms.openlocfilehash: ce7c581d4378cb1f6e5556d488164a9b5fd9098a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50585302"
---
# <a name="iperpropertybrowsingimpl-class"></a>Classe IPerPropertyBrowsingImpl

Questa classe implementa `IUnknown` e consente a un client accedere alle informazioni nelle pagine delle proprietà di un oggetto.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```

template <class T>
class ATL_NO_VTABLE IPerPropertyBrowsingImpl :
    public IPerPropertyBrowsing
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, derivata da `IPerPropertyBrowsingImpl`.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IPerPropertyBrowsingImpl::GetDisplayString](#getdisplaystring)|Recupera una stringa che descrive una determinata proprietà.|
|[IPerPropertyBrowsingImpl::GetPredefinedStrings](#getpredefinedstrings)|Recupera una matrice di stringhe che corrispondono ai valori che può accettare una determinata proprietà.|
|[IPerPropertyBrowsingImpl::GetPredefinedValue](#getpredefinedvalue)|Recupera un valore VARIANT contenente il valore di una proprietà identificata da un DISPID specificato. DISPID è associato con il nome di stringa recuperato da `GetPredefinedStrings`. L'implementazione di ATL restituisce E_NOTIMPL.|
|[IPerPropertyBrowsingImpl::MapPropertyToPage](#mappropertytopage)|Recupera il CLSID della pagina delle proprietà associato a una determinata proprietà.|

## <a name="remarks"></a>Note

Il [IPerPropertyBrowsing](/windows/desktop/api/ocidl/nn-ocidl-iperpropertybrowsing) interfaccia consente a un client accedere alle informazioni nelle pagine delle proprietà di un oggetto. Classe `IPerPropertyBrowsingImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa `IUnknown` per l'invio di informazioni per il dump compila dispositivo in modalità debug.

> [!NOTE]
>  Se si usa Microsoft Access come l'applicazione del contenitore, è necessario derivare la classe da `IPerPropertyBrowsingImpl`. In caso contrario, l'accesso non verrà caricato il controllo.

**Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [la creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IPerPropertyBrowsing`

`IPerPropertyBrowsingImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlctl. h

##  <a name="getdisplaystring"></a>  IPerPropertyBrowsingImpl::GetDisplayString

Recupera una stringa che descrive una determinata proprietà.

```
STDMETHOD(GetDisplayString)(
    DISPID dispID,
    BSTR* pBstr);
```

### <a name="remarks"></a>Note

Visualizzare [IPerPropertyBrowsing::GetDisplayString](/windows/desktop/api/ocidl/nf-ocidl-iperpropertybrowsing-getdisplaystring) in Windows SDK.

##  <a name="getpredefinedstrings"></a>  IPerPropertyBrowsingImpl::GetPredefinedStrings

Inserito in ogni matrice con zero elementi.

```
STDMETHOD(GetPredefinedStrings)(
    DISPID dispID,
    CALPOLESTR* pCaStringsOut,
    CADWORD* pCaCookiesOut);
```

### <a name="return-value"></a>Valore restituito

L'implementazione del ATL [GetPredefinedValue](#getpredefinedvalue) restituisce E_NOTIMPL.

### <a name="remarks"></a>Note

Visualizzare [GetPredefinedStrings](/windows/desktop/api/ocidl/nf-ocidl-iperpropertybrowsing-getpredefinedstrings) in Windows SDK.

##  <a name="getpredefinedvalue"></a>  IPerPropertyBrowsingImpl::GetPredefinedValue

Recupera un valore VARIANT contenente il valore di una proprietà identificata da un DISPID specificato. DISPID è associato con il nome di stringa recuperato da `GetPredefinedStrings`.

```
STDMETHOD(GetPredefinedValue)(
    DISPID dispID,
    DWORD dwCookie,
    VARIANT* pVarOut);
```

### <a name="return-value"></a>Valore restituito

Restituisce E_NOTIMPL.

### <a name="remarks"></a>Note

L'implementazione del ATL [GetPredefinedStrings](#getpredefinedstrings) non recupera stringhe corrispondenti.

Visualizzare [IPerPropertyBrowsing::GetPredefinedValue](/windows/desktop/api/ocidl/nf-ocidl-iperpropertybrowsing-getpredefinedvalue) in Windows SDK.

##  <a name="mappropertytopage"></a>  IPerPropertyBrowsingImpl::MapPropertyToPage

Recupera il CLSID della pagina delle proprietà associato alla proprietà specificata.

```
STDMETHOD(MapPropertyToPage)(
    DISPID dispID,
    CLSID* pClsid);
```

### <a name="remarks"></a>Note

ATL Usa il mapping di proprietà dell'oggetto per ottenere queste informazioni.

Visualizzare [IPerPropertyBrowsing::MapPropertyToPage](/windows/desktop/api/ocidl/nf-ocidl-iperpropertybrowsing-mappropertytopage) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe IPropertyPageImpl](../../atl/reference/ipropertypageimpl-class.md)<br/>
[Classe ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
