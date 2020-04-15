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
ms.openlocfilehash: b235b190f237293932705e4d290ac963088722f3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326475"
---
# <a name="ipersiststorageimpl-class"></a>Classe IPersistStorageImpl

Questa classe implementa il [IPersistStorage](/windows/win32/api/objidl/nn-objidl-ipersiststorage) interfaccia.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T>
class ATL_NO_VTABLE IPersistStorageImpl : public IPersistStorage
```

#### <a name="parameters"></a>Parametri

*T*<br/>
La classe, `IPersistStorageImpl`derivata da .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IPersistStorageImpl::GetClassID](#getclassid)|Recupera il CLSID dell'oggetto.|
|[IPersistStorageImpl::HandsOffStorage](#handsoffstorage)|Indica all'oggetto di rilasciare tutti gli oggetti di archiviazione e di attivare la modalità HandsOff. L'implementazione ATL restituisce S_OK.|
|[IPersistStorageImpl::InitNew](#initnew)|Inizializza una nuova risorsa di archiviazione.|
|[IPersistStorageImpl::IsDirty](#isdirty)|Controlla se i dati dell'oggetto sono stati modificati dall'ultimo salvataggio.|
|[IPersistStorageImpl::Caricamento](#load)|Carica le proprietà dell'oggetto dall'archivio specificato.|
|[IPersistStorageImpl::Salva](#save)|Salva le proprietà dell'oggetto nell'archivio specificato.|
|[IPersistStorageImpl::SaveCompleted](#savecompleted)|Notifica a un oggetto che può tornare alla modalità normale per scrivere nel relativo oggetto di archiviazione. L'implementazione ATL restituisce S_OK.|

## <a name="remarks"></a>Osservazioni

`IPersistStorageImpl`implementa l'interfaccia [IPersistStorage,](/windows/win32/api/objidl/nn-objidl-ipersiststorage) che consente a un client di richiedere che l'oggetto carichi e salvi i dati persistenti utilizzando un archivio.

L'implementazione di `T` questa classe richiede `IPersistStreamInit` che la `QueryInterface`classe renda disponibile un'implementazione dell'interfaccia tramite . In genere ciò significa che la classe `T` deve derivare da [IPersistStreamInitImpl](../../atl/reference/ipersiststreaminitimpl-class.md), fornire una voce per `IPersistStreamInit` nella mappa [COM](com-map-macros.md)e utilizzare una mappa delle [proprietà](property-map-macros.md) per descrivere i dati persistenti della classe.

**Articoli correlati** [ATL Esercitazione](../../atl/active-template-library-atl-tutorial.md), [Creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IPersistStorage`

`IPersistStorageImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="ipersiststorageimplgetclassid"></a><a name="getclassid"></a>IPersistStorageImpl::GetClassID

Recupera il CLSID dell'oggetto.

```
STDMETHOD(GetClassID)(CLSID* pClassID);
```

### <a name="remarks"></a>Osservazioni

Vedere [IPersist::GetClassID](/windows/win32/api/objidl/nf-objidl-ipersist-getclassid) in Windows SDK.

## <a name="ipersiststorageimplhandsoffstorage"></a><a name="handsoffstorage"></a>IPersistStorageImpl::HandsOffStorage

Indica all'oggetto di rilasciare tutti gli oggetti di archiviazione e di attivare la modalità HandsOff.

```
STDMETHOD(HandsOffStorage)(void);
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Vedere [IPersistStorage::HandsOffStorage](/windows/win32/api/objidl/nf-objidl-ipersiststorage-handsoffstorage) in Windows SDK.

## <a name="ipersiststorageimplinitnew"></a><a name="initnew"></a>IPersistStorageImpl::InitNew

Inizializza una nuova risorsa di archiviazione.

```
STDMETHOD(InitNew)(IStorage*);
```

### <a name="remarks"></a>Osservazioni

L'implementazione ATL delega all'interfaccia [IPersistStreamInit.](/windows/win32/api/ocidl/nn-ocidl-ipersiststreaminit)

Vedere [IPersistStorage:InitNew](/windows/win32/api/objidl/nf-objidl-ipersiststorage-initnew) in Windows SDK.

## <a name="ipersiststorageimplisdirty"></a><a name="isdirty"></a>IPersistStorageImpl::IsDirty

Controlla se i dati dell'oggetto sono stati modificati dall'ultimo salvataggio.

```
STDMETHOD(IsDirty)(void);
```

### <a name="remarks"></a>Osservazioni

L'implementazione ATL delega all'interfaccia [IPersistStreamInit.](/windows/win32/api/ocidl/nn-ocidl-ipersiststreaminit)

Vedere [IPersistStorage:IsDirty](/windows/win32/api/objidl/nf-objidl-ipersiststorage-isdirty) in Windows SDK.

## <a name="ipersiststorageimplload"></a><a name="load"></a>IPersistStorageImpl::Caricamento

Carica le proprietà dell'oggetto dall'archivio specificato.

```
STDMETHOD(Load)(IStorage* pStorage);
```

### <a name="remarks"></a>Osservazioni

L'implementazione ATL delega all'interfaccia [IPersistStreamInit.](/windows/win32/api/ocidl/nn-ocidl-ipersiststreaminit) `Load`utilizza un flusso denominato "Contents" per recuperare i dati dell'oggetto. Il [Save](#save) metodo crea originariamente questo flusso.

Vedere [IPersistStorage:Load](/windows/win32/api/objidl/nf-objidl-ipersiststorage-load) in Windows SDK.

## <a name="ipersiststorageimplsave"></a><a name="save"></a>IPersistStorageImpl::Salva

Salva le proprietà dell'oggetto nell'archivio specificato.

```
STDMETHOD(Save)(IStorage* pStorage, BOOL fSameAsLoad);
```

### <a name="remarks"></a>Osservazioni

L'implementazione ATL delega all'interfaccia [IPersistStreamInit.](/windows/win32/api/ocidl/nn-ocidl-ipersiststreaminit) Quando `Save` viene chiamato per la prima volta, crea un flusso denominato "Contents" nell'archivio specificato. Questo flusso viene quindi utilizzato `Save` nelle chiamate successive a e nelle chiamate a [Load](#load).

Vedere [IPersistStorage:Save](/windows/win32/api/objidl/nf-objidl-ipersiststorage-save) in Windows SDK.

## <a name="ipersiststorageimplsavecompleted"></a><a name="savecompleted"></a>IPersistStorageImpl::SaveCompleted

Notifica a un oggetto che può tornare alla modalità normale per scrivere nel relativo oggetto di archiviazione.

```
STDMETHOD(SaveCompleted)(IStorage*);
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Vedere [IPersistStorage:SaveCompleted](/windows/win32/api/objidl/nf-objidl-ipersiststorage-savecompleted) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Archivi e flussi](/windows/win32/Stg/storages-and-streams)<br/>
[Classe IPersistStreamInitImpl](../../atl/reference/ipersiststreaminitimpl-class.md)<br/>
[IPersistPropertyBagImpl (classe)](../../atl/reference/ipersistpropertybagimpl-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
