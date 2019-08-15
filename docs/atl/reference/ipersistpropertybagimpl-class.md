---
title: Classe IPersistPropertyBagImpl
ms.date: 11/04/2016
f1_keywords:
- IPersistPropertyBagImpl
- ATLCOM/ATL::IPersistPropertyBagImpl
- ATLCOM/ATL::IPersistPropertyBagImpl::GetClassID
- ATLCOM/ATL::IPersistPropertyBagImpl::InitNew
- ATLCOM/ATL::IPersistPropertyBagImpl::Load
- ATLCOM/ATL::IPersistPropertyBagImpl::Save
helpviewer_keywords:
- IPersistPropertyBagImpl class
ms.assetid: 712af24d-99f8-40f2-9811-53b3ff6e5b19
ms.openlocfilehash: 15b9c9738d921c4c6f7837f9280c6dd6b09392d6
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69495768"
---
# <a name="ipersistpropertybagimpl-class"></a>Classe IPersistPropertyBagImpl

Questa classe implementa `IUnknown` e consente a un oggetto di salvare le proprietà in un contenitore di proprietà fornito dal client.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T>
class ATL_NO_VTABLE IPersistPropertyBagImpl : public IPersistPropertyBag
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IPersistPropertyBagImpl`.

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IPersistPropertyBagImpl::GetClassID](#getclassid)|Recupera il CLSID dell'oggetto.|
|[IPersistPropertyBagImpl::InitNew](#initnew)|Inizializza un oggetto appena creato. L'implementazione ATL restituisce S_OK.|
|[IPersistPropertyBagImpl::Load](#load)|Carica le proprietà dell'oggetto da un contenitore di proprietà fornito dal client.|
|[IPersistPropertyBagImpl::Save](#save)|Salva le proprietà dell'oggetto in un contenitore di proprietà fornito dal client.|

## <a name="remarks"></a>Note

L'interfaccia [IPersistPropertyBag](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768205\(v=vs.85\)) consente a un oggetto di salvare le proprietà in un contenitore di proprietà fornito dal client. La `IPersistPropertyBagImpl` classe fornisce un'implementazione predefinita di questa interfaccia e `IUnknown` implementa inviando informazioni al dispositivo di dump nelle compilazioni di debug.

`IPersistPropertyBag`funziona insieme a [IPropertyBag](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768196\(v=vs.85\)) e [IErrorLog](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768231\(v=vs.85\)). Queste ultime due interfacce devono essere implementate dal client. Tramite `IPropertyBag`il client Salva e carica le singole proprietà dell'oggetto. Tramite `IErrorLog`, sia l'oggetto che il client possono segnalare eventuali errori rilevati.

**Articoli correlati** [Esercitazione su ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IPersistPropertyBag`

`IPersistPropertyBagImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="getclassid"></a>  IPersistPropertyBagImpl::GetClassID

Recupera il CLSID dell'oggetto.

```
STDMETHOD(GetClassID)(CLSID* pClassID);
```

### <a name="remarks"></a>Note

Vedere [IPersist:: GetClassID](/windows/win32/api/objidl/nf-objidl-ipersist-getclassid) nella Windows SDK.

##  <a name="initnew"></a>  IPersistPropertyBagImpl::InitNew

Inizializza un oggetto appena creato.

```
STDMETHOD(InitNew)();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Note

Vedere [IPersistPropertyBag:: InitNew](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768204\(v=vs.85\)) nella Windows SDK.

##  <a name="load"></a>  IPersistPropertyBagImpl::Load

Carica le proprietà dell'oggetto da un contenitore di proprietà fornito dal client.

```
STDMETHOD(Load)(LPPROPERTYBAG pPropBag, LPERRORLOG pErrorLog);
```

### <a name="remarks"></a>Note

ATL utilizza la mappa delle proprietà dell'oggetto per recuperare queste informazioni.

Vedere [IPersistPropertyBag:: Load](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768206\(v=vs.85\)) nel Windows SDK.

##  <a name="save"></a>  IPersistPropertyBagImpl::Save

Salva le proprietà dell'oggetto in un contenitore di proprietà fornito dal client.

```
STDMETHOD(Save)(
    LPPROPERTYBAG pPropBag,
    BOOL fClearDirty,
    BOOL fSaveAllProperties);
```

### <a name="remarks"></a>Note

ATL utilizza la mappa delle proprietà dell'oggetto per archiviare queste informazioni. Per impostazione predefinita, questo metodo salva tutte le proprietà, indipendentemente dal valore di *fSaveAllProperties*.

Vedere [IPersistPropertyBag:: Save](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768207\(v=vs.85\)) nell'Windows SDK.

## <a name="see-also"></a>Vedere anche

[BEGIN_PROP_MAP](property-map-macros.md#begin_prop_map)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
