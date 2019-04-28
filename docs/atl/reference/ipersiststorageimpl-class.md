---
title: Classe IPersistStorageImpl
ms.date: 11/04/2016
f1_keywords:
- IPersistStorageImpl
- ATLCOM/ATL::IPersistStorageImpl
- ATLCOM/ATL::IPersistStorageImpl::GetClassID
- ATLCOM/ATL::IPersistStorageImpl::HandsOffStorage
- ATLCOM/ATL::IPersistStorageImpl::InitNew
- ATLCOM/ATL::IPersistStorageImpl::IsDirty
- ATLCOM/ATL::IPersistStorageImpl::Load
- ATLCOM/ATL::IPersistStorageImpl::Save
- ATLCOM/ATL::IPersistStorageImpl::SaveCompleted
helpviewer_keywords:
- storage, ATL
- IPersistStorageImpl class
ms.assetid: d652f02c-239c-47c7-9a50-3e9fc3014fff
ms.openlocfilehash: 3239ed22e37ff694c9f399b05e765d63e97e99ee
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62276146"
---
# <a name="ipersiststorageimpl-class"></a>Classe IPersistStorageImpl

Questa classe implementa il [IPersistStorage](/windows/desktop/api/objidl/nn-objidl-ipersiststorage) interfaccia.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template <class T>
class ATL_NO_VTABLE IPersistStorageImpl : public IPersistStorage
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, derivata da `IPersistStorageImpl`.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IPersistStorageImpl::GetClassID](#getclassid)|Recupera il CLSID dell'oggetto.|
|[IPersistStorageImpl::HandsOffStorage](#handsoffstorage)|Indica all'oggetto per rilasciare tutti gli oggetti di archiviazione e passare alla modalità HandsOff. L'implementazione di ATL restituisce S_OK.|
|[IPersistStorageImpl::InitNew](#initnew)|Inizializza una nuova risorsa di archiviazione.|
|[IPersistStorageImpl::IsDirty](#isdirty)|Controlla se i dati dell'oggetto sono stato modificato dall'ultimo salvataggio.|
|[IPersistStorageImpl::Load](#load)|Carica le proprietà dell'oggetto dalla risorsa di archiviazione specificato.|
|[IPersistStorageImpl::Save](#save)|Salva le proprietà dell'oggetto nella risorsa di archiviazione specificato.|
|[IPersistStorageImpl::SaveCompleted](#savecompleted)|Notifica a un oggetto che può restituire in modalità normale in cui scrivere il relativo oggetto di archiviazione. L'implementazione di ATL restituisce S_OK.|

## <a name="remarks"></a>Note

`IPersistStorageImpl` implementa il [IPersistStorage](/windows/desktop/api/objidl/nn-objidl-ipersiststorage) interfaccia, che consente a un client di richiedere che il carico di oggetto e salvare i dati persistenti mediante una risorsa di archiviazione.

L'implementazione di questa classe è necessaria la classe `T` per rendere un'implementazione del `IPersistStreamInit` disponibile tramite interfaccia `QueryInterface`. In genere ciò significa che tale classe `T` deve derivare da [IPersistStreamInitImpl](../../atl/reference/ipersiststreaminitimpl-class.md), immettere un valore per `IPersistStreamInit` nel [mappa COM](com-map-macros.md)e usare un [mappa proprietà](property-map-macros.md) per descrivere i dati persistenti della classe.

**Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [la creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IPersistStorage`

`IPersistStorageImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="getclassid"></a>  IPersistStorageImpl::GetClassID

Recupera il CLSID dell'oggetto.

```
STDMETHOD(GetClassID)(CLSID* pClassID);
```

### <a name="remarks"></a>Note

Visualizzare [IPersist:: GetClassID](/windows/desktop/api/objidl/nf-objidl-ipersist-getclassid) in Windows SDK.

##  <a name="handsoffstorage"></a>  IPersistStorageImpl::HandsOffStorage

Indica all'oggetto per rilasciare tutti gli oggetti di archiviazione e passare alla modalità HandsOff.

```
STDMETHOD(HandsOffStorage)(void);
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Note

Visualizzare [IPersistStorage::HandsOffStorage](/windows/desktop/api/objidl/nf-objidl-ipersiststorage-handsoffstorage) in Windows SDK.

##  <a name="initnew"></a>  IPersistStorageImpl::InitNew

Inizializza una nuova risorsa di archiviazione.

```
STDMETHOD(InitNew)(IStorage*);
```

### <a name="remarks"></a>Note

L'implementazione di ATL viene delegata per i [IPersistStreamInit](/windows/desktop/api/ocidl/nn-ocidl-ipersiststreaminit) interfaccia.

Visualizzare [IPersistStorage:InitNew](/windows/desktop/api/objidl/nf-objidl-ipersiststorage-initnew) in Windows SDK.

##  <a name="isdirty"></a>  IPersistStorageImpl::IsDirty

Controlla se i dati dell'oggetto sono stato modificato dall'ultimo salvataggio.

```
STDMETHOD(IsDirty)(void);
```

### <a name="remarks"></a>Note

L'implementazione di ATL viene delegata per i [IPersistStreamInit](/windows/desktop/api/ocidl/nn-ocidl-ipersiststreaminit) interfaccia.

Visualizzare [IPersistStorage:IsDirty](/windows/desktop/api/objidl/nf-objidl-ipersiststorage-isdirty) in Windows SDK.

##  <a name="load"></a>  IPersistStorageImpl::Load

Carica le proprietà dell'oggetto dalla risorsa di archiviazione specificato.

```
STDMETHOD(Load)(IStorage* pStorage);
```

### <a name="remarks"></a>Note

L'implementazione di ATL viene delegata per i [IPersistStreamInit](/windows/desktop/api/ocidl/nn-ocidl-ipersiststreaminit) interfaccia. `Load` Usa un flusso denominato "Contenuto" per recuperare i dati dell'oggetto. Il [salvare](#save) metodo originariamente crea questo flusso.

Visualizzare [IPersistStorage:Load](/windows/desktop/api/objidl/nf-objidl-ipersiststorage-load) in Windows SDK.

##  <a name="save"></a>  IPersistStorageImpl::Save

Salva le proprietà dell'oggetto nella risorsa di archiviazione specificato.

```
STDMETHOD(Save)(IStorage* pStorage, BOOL fSameAsLoad);
```

### <a name="remarks"></a>Note

L'implementazione di ATL viene delegata per i [IPersistStreamInit](/windows/desktop/api/ocidl/nn-ocidl-ipersiststreaminit) interfaccia. Quando si `Save` è la prima chiamata, viene creato un flusso denominato "Contenuto" nella risorsa di archiviazione specificato. Questo flusso viene quindi usato nelle chiamate successive a `Save` e alle chiamate al [carico](#load).

Visualizzare [IPersistStorage:Save](/windows/desktop/api/objidl/nf-objidl-ipersiststorage-save) in Windows SDK.

##  <a name="savecompleted"></a>  IPersistStorageImpl::SaveCompleted

Notifica a un oggetto che può restituire in modalità normale in cui scrivere il relativo oggetto di archiviazione.

```
STDMETHOD(SaveCompleted)(IStorage*);
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Note

Visualizzare [IPersistStorage:SaveCompleted](/windows/desktop/api/objidl/nf-objidl-ipersiststorage-savecompleted) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Flussi e archivi](/windows/desktop/Stg/storages-and-streams)<br/>
[Classe IPersistStreamInitImpl](../../atl/reference/ipersiststreaminitimpl-class.md)<br/>
[Classe IPersistPropertyBagImpl](../../atl/reference/ipersistpropertybagimpl-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
