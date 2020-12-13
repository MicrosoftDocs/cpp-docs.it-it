---
description: 'Altre informazioni su: classe IPersistStorageImpl'
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
ms.openlocfilehash: 1d3d996886b587c25988139eed62e409650b5d4e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97139334"
---
# <a name="ipersiststorageimpl-class"></a>Classe IPersistStorageImpl

Questa classe implementa l'interfaccia [IPersistStorage](/windows/win32/api/objidl/nn-objidl-ipersiststorage) .

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class T>
class ATL_NO_VTABLE IPersistStorageImpl : public IPersistStorage
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IPersistStorageImpl` .

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IPersistStorageImpl:: GetClassID](#getclassid)|Recupera il CLSID dell'oggetto.|
|[IPersistStorageImpl:: HandsOffStorage](#handsoffstorage)|Indica all'oggetto di rilasciare tutti gli oggetti di archiviazione e di immettere la modalità HandsOff. L'implementazione ATL restituisce S_OK.|
|[IPersistStorageImpl:: InitNew](#initnew)|Inizializza una nuova risorsa di archiviazione.|
|[IPersistStorageImpl:: IsDirty](#isdirty)|Verifica se i dati dell'oggetto sono stati modificati dopo l'ultimo salvataggio.|
|[IPersistStorageImpl:: Load](#load)|Carica le proprietà dell'oggetto dalla risorsa di archiviazione specificata.|
|[IPersistStorageImpl:: Save](#save)|Salva le proprietà dell'oggetto nella risorsa di archiviazione specificata.|
|[IPersistStorageImpl:: SaveCompleted](#savecompleted)|Notifica a un oggetto che può tornare alla modalità normale per scrivere nel relativo oggetto di archiviazione. L'implementazione ATL restituisce S_OK.|

## <a name="remarks"></a>Commenti

`IPersistStorageImpl` implementa l'interfaccia [IPersistStorage](/windows/win32/api/objidl/nn-objidl-ipersiststorage) , che consente a un client di richiedere che l'oggetto venga caricato e salvato i dati persistenti utilizzando una risorsa di archiviazione.

Per l'implementazione di questa classe è richiesta la classe `T` per rendere disponibile un'implementazione dell' `IPersistStreamInit` interfaccia tramite `QueryInterface` . In genere ciò significa che la classe `T` deve derivare da [IPersistStreamInitImpl](../../atl/reference/ipersiststreaminitimpl-class.md), fornire una voce per `IPersistStreamInit` nella [mappa com](com-map-macros.md)e usare una [mappa delle proprietà](property-map-macros.md) per descrivere i dati persistenti della classe.

[Esercitazione su ATL](../../atl/active-template-library-atl-tutorial.md) **articoli correlati** , [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IPersistStorage`

`IPersistStorageImpl`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="ipersiststorageimplgetclassid"></a><a name="getclassid"></a> IPersistStorageImpl:: GetClassID

Recupera il CLSID dell'oggetto.

```
STDMETHOD(GetClassID)(CLSID* pClassID);
```

### <a name="remarks"></a>Commenti

Vedere [IPersist:: GetClassID](/windows/win32/api/objidl/nf-objidl-ipersist-getclassid) nella Windows SDK.

## <a name="ipersiststorageimplhandsoffstorage"></a><a name="handsoffstorage"></a> IPersistStorageImpl:: HandsOffStorage

Indica all'oggetto di rilasciare tutti gli oggetti di archiviazione e di immettere la modalità HandsOff.

```
STDMETHOD(HandsOffStorage)(void);
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Commenti

Vedere [IPersistStorage:: HandsOffStorage](/windows/win32/api/objidl/nf-objidl-ipersiststorage-handsoffstorage) nella Windows SDK.

## <a name="ipersiststorageimplinitnew"></a><a name="initnew"></a> IPersistStorageImpl:: InitNew

Inizializza una nuova risorsa di archiviazione.

```
STDMETHOD(InitNew)(IStorage*);
```

### <a name="remarks"></a>Commenti

L'implementazione ATL delega l'interfaccia [IPersistStreamInit](/windows/win32/api/ocidl/nn-ocidl-ipersiststreaminit) .

Vedere [IPersistStorage: InitNew](/windows/win32/api/objidl/nf-objidl-ipersiststorage-initnew) nella Windows SDK.

## <a name="ipersiststorageimplisdirty"></a><a name="isdirty"></a> IPersistStorageImpl:: IsDirty

Verifica se i dati dell'oggetto sono stati modificati dopo l'ultimo salvataggio.

```
STDMETHOD(IsDirty)(void);
```

### <a name="remarks"></a>Commenti

L'implementazione ATL delega l'interfaccia [IPersistStreamInit](/windows/win32/api/ocidl/nn-ocidl-ipersiststreaminit) .

Vedere [IPersistStorage: IsDirty](/windows/win32/api/objidl/nf-objidl-ipersiststorage-isdirty) nel Windows SDK.

## <a name="ipersiststorageimplload"></a><a name="load"></a> IPersistStorageImpl:: Load

Carica le proprietà dell'oggetto dalla risorsa di archiviazione specificata.

```
STDMETHOD(Load)(IStorage* pStorage);
```

### <a name="remarks"></a>Commenti

L'implementazione ATL delega l'interfaccia [IPersistStreamInit](/windows/win32/api/ocidl/nn-ocidl-ipersiststreaminit) . `Load` Usa un flusso denominato "Contents" per recuperare i dati dell'oggetto. Il metodo [Save](#save) crea originariamente questo flusso.

Vedere [IPersistStorage: Load](/windows/win32/api/objidl/nf-objidl-ipersiststorage-load) nel Windows SDK.

## <a name="ipersiststorageimplsave"></a><a name="save"></a> IPersistStorageImpl:: Save

Salva le proprietà dell'oggetto nella risorsa di archiviazione specificata.

```
STDMETHOD(Save)(IStorage* pStorage, BOOL fSameAsLoad);
```

### <a name="remarks"></a>Commenti

L'implementazione ATL delega l'interfaccia [IPersistStreamInit](/windows/win32/api/ocidl/nn-ocidl-ipersiststreaminit) . Quando `Save` viene chiamato per la prima volta, viene creato un flusso denominato "Contents" nello spazio di archiviazione specificato. Questo flusso viene quindi usato nelle chiamate successive a `Save` e nelle chiamate da [caricare](#load).

Vedere [IPersistStorage: Salva](/windows/win32/api/objidl/nf-objidl-ipersiststorage-save) nel Windows SDK.

## <a name="ipersiststorageimplsavecompleted"></a><a name="savecompleted"></a> IPersistStorageImpl:: SaveCompleted

Notifica a un oggetto che può tornare alla modalità normale per scrivere nel relativo oggetto di archiviazione.

```
STDMETHOD(SaveCompleted)(IStorage*);
```

### <a name="return-value"></a>Valore restituito

Restituisce S_OK.

### <a name="remarks"></a>Commenti

Vedere [IPersistStorage: SaveCompleted](/windows/win32/api/objidl/nf-objidl-ipersiststorage-savecompleted) nella Windows SDK.

## <a name="see-also"></a>Vedi anche

[Archiviazione e flussi](/windows/win32/Stg/storages-and-streams)<br/>
[Classe IPersistStreamInitImpl](../../atl/reference/ipersiststreaminitimpl-class.md)<br/>
[Classe IPersistPropertyBagImpl](../../atl/reference/ipersistpropertybagimpl-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
