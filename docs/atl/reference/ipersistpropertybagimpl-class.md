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
ms.openlocfilehash: 800c38c15e4ec8028fba9188d75e49be7ca51146
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62274893"
---
# <a name="ipersistpropertybagimpl-class"></a>Classe IPersistPropertyBagImpl

Questa classe implementa `IUnknown` e consente a un oggetto salvare le proprietà in un contenitore di proprietà specificato dal client.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template <class T>
class ATL_NO_VTABLE IPersistPropertyBagImpl : public IPersistPropertyBag
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, derivata da `IPersistPropertyBagImpl`.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IPersistPropertyBagImpl::GetClassID](#getclassid)|Recupera il CLSID dell'oggetto.|
|[IPersistPropertyBagImpl::InitNew](#initnew)|Inizializza un oggetto appena creato. L'implementazione di ATL restituisce S_OK.|
|[IPersistPropertyBagImpl::Load](#load)|Carica le proprietà dell'oggetto da un contenitore di proprietà specificato dal client.|
|[IPersistPropertyBagImpl::Save](#save)|Salva le proprietà dell'oggetto in un contenitore di proprietà specificato dal client.|

## <a name="remarks"></a>Note

Il [IPersistPropertyBag](https://msdn.microsoft.com/library/aa768205.aspx) interfaccia consente a un oggetto salvare le proprietà in un contenitore di proprietà specificato dal client. Classe `IPersistPropertyBagImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa `IUnknown` per l'invio di informazioni per il dump compila dispositivo in modalità debug.

`IPersistPropertyBag` funziona in combinazione con [IPropertyBag](https://msdn.microsoft.com/library/aa768196.aspx) e [IErrorLog](https://msdn.microsoft.com/library/aa768231.aspx). Queste due interfacce di quest'ultime devono essere implementate dal client. Tramite `IPropertyBag`, il client Salva e carica le proprietà dell'oggetto singoli. Tramite `IErrorLog`, l'oggetto e il client può segnalare gli eventuali errori rilevati.

**Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [la creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

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

Visualizzare [IPersist:: GetClassID](/windows/desktop/api/objidl/nf-objidl-ipersist-getclassid) in Windows SDK.

##  <a name="initnew"></a>  IPersistPropertyBagImpl::InitNew

Inizializza un oggetto appena creato.

```
STDMETHOD(InitNew)();
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Note

Visualizzare [IPersistPropertyBag::InitNew](https://msdn.microsoft.com/library/aa768204.aspx) in Windows SDK.

##  <a name="load"></a>  IPersistPropertyBagImpl::Load

Carica le proprietà dell'oggetto da un contenitore di proprietà specificato dal client.

```
STDMETHOD(Load)(LPPROPERTYBAG pPropBag, LPERRORLOG pErrorLog);
```

### <a name="remarks"></a>Note

ATL Usa il mapping di proprietà dell'oggetto per recuperare queste informazioni.

Visualizzare [IPersistPropertyBag:: Load](https://msdn.microsoft.com/library/aa768206.aspx) in Windows SDK.

##  <a name="save"></a>  IPersistPropertyBagImpl::Save

Salva le proprietà dell'oggetto in un contenitore di proprietà specificato dal client.

```
STDMETHOD(Save)(
    LPPROPERTYBAG pPropBag,
    BOOL fClearDirty,
    BOOL fSaveAllProperties);
```

### <a name="remarks"></a>Note

ATL Usa il mapping di proprietà dell'oggetto per archiviare queste informazioni. Per impostazione predefinita, questo metodo consente di salvare tutte le proprietà, indipendentemente dal valore della *fSaveAllProperties*.

Visualizzare [IPersistPropertyBag::Save](https://msdn.microsoft.com/library/aa768207.aspx) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[BEGIN_PROP_MAP](property-map-macros.md#begin_prop_map)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
