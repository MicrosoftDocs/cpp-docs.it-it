---
description: 'Altre informazioni su: classe IPersistPropertyBagImpl'
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
ms.openlocfilehash: 1e244c4349bd04a83d257280da3315f2c797003a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97158166"
---
# <a name="ipersistpropertybagimpl-class"></a>Classe IPersistPropertyBagImpl

Questa classe implementa `IUnknown` e consente a un oggetto di salvare le proprietà in un contenitore di proprietà fornito dal client.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T>
class ATL_NO_VTABLE IPersistPropertyBagImpl : public IPersistPropertyBag
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IPersistPropertyBagImpl` .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IPersistPropertyBagImpl:: GetClassID](#getclassid)|Recupera il CLSID dell'oggetto.|
|[IPersistPropertyBagImpl:: InitNew](#initnew)|Inizializza un oggetto appena creato. L'implementazione ATL restituisce S_OK.|
|[IPersistPropertyBagImpl:: Load](#load)|Carica le proprietà dell'oggetto da un contenitore di proprietà fornito dal client.|
|[IPersistPropertyBagImpl:: Save](#save)|Salva le proprietà dell'oggetto in un contenitore di proprietà fornito dal client.|

## <a name="remarks"></a>Commenti

L'interfaccia [IPersistPropertyBag](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768205\(v=vs.85\)) consente a un oggetto di salvare le proprietà in un contenitore di proprietà fornito dal client. La classe `IPersistPropertyBagImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa inviando `IUnknown` informazioni al dispositivo di dump nelle compilazioni di debug.

`IPersistPropertyBag` funziona insieme a [IPropertyBag](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768196\(v=vs.85\)) e [IErrorLog](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768231\(v=vs.85\)). Queste ultime due interfacce devono essere implementate dal client. Tramite `IPropertyBag` il client Salva e carica le singole proprietà dell'oggetto. Tramite `IErrorLog` , sia l'oggetto che il client possono segnalare eventuali errori rilevati.

[Esercitazione su ATL](../../atl/active-template-library-atl-tutorial.md) **articoli correlati** , [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IPersistPropertyBag`

`IPersistPropertyBagImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="ipersistpropertybagimplgetclassid"></a><a name="getclassid"></a> IPersistPropertyBagImpl:: GetClassID

Recupera il CLSID dell'oggetto.

```
STDMETHOD(GetClassID)(CLSID* pClassID);
```

### <a name="remarks"></a>Commenti

Vedere [IPersist:: GetClassID](/windows/win32/api/objidl/nf-objidl-ipersist-getclassid) nella Windows SDK.

## <a name="ipersistpropertybagimplinitnew"></a><a name="initnew"></a> IPersistPropertyBagImpl:: InitNew

Inizializza un oggetto appena creato.

```
STDMETHOD(InitNew)();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Commenti

Vedere [IPersistPropertyBag:: InitNew](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768204\(v=vs.85\)) nella Windows SDK.

## <a name="ipersistpropertybagimplload"></a><a name="load"></a> IPersistPropertyBagImpl:: Load

Carica le proprietà dell'oggetto da un contenitore di proprietà fornito dal client.

```
STDMETHOD(Load)(LPPROPERTYBAG pPropBag, LPERRORLOG pErrorLog);
```

### <a name="remarks"></a>Commenti

ATL utilizza la mappa delle proprietà dell'oggetto per recuperare queste informazioni.

Vedere [IPersistPropertyBag:: Load](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768206\(v=vs.85\)) nel Windows SDK.

## <a name="ipersistpropertybagimplsave"></a><a name="save"></a> IPersistPropertyBagImpl:: Save

Salva le proprietà dell'oggetto in un contenitore di proprietà fornito dal client.

```
STDMETHOD(Save)(
    LPPROPERTYBAG pPropBag,
    BOOL fClearDirty,
    BOOL fSaveAllProperties);
```

### <a name="remarks"></a>Commenti

ATL utilizza la mappa delle proprietà dell'oggetto per archiviare queste informazioni. Per impostazione predefinita, questo metodo salva tutte le proprietà, indipendentemente dal valore di *fSaveAllProperties*.

Vedere [IPersistPropertyBag:: Save](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa768207\(v=vs.85\)) nell'Windows SDK.

## <a name="see-also"></a>Vedi anche

[BEGIN_PROP_MAP](property-map-macros.md#begin_prop_map)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
