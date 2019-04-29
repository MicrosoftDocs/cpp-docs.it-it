---
title: Classe IRowsetUpdateImpl
ms.date: 11/04/2016
f1_keywords:
- IRowsetUpdateImpl
- ATL.IRowsetUpdateImpl
- ATL::IRowsetUpdateImpl
- SetData
- IRowsetUpdateImpl::SetData
- IRowsetUpdateImpl.SetData
- ATL::IRowsetUpdateImpl::SetData
- ATL.IRowsetUpdateImpl.SetData
- ATL.IRowsetUpdateImpl.GetOriginalData
- IRowsetUpdateImpl.GetOriginalData
- GetOriginalData
- ATL::IRowsetUpdateImpl::GetOriginalData
- IRowsetUpdateImpl::GetOriginalData
- IRowsetUpdateImpl::GetPendingRows
- GetPendingRows
- IRowsetUpdateImpl.GetPendingRows
- ATL::IRowsetUpdateImpl::GetPendingRows
- ATL.IRowsetUpdateImpl.GetPendingRows
- ATL.IRowsetUpdateImpl.GetRowStatus
- IRowsetUpdateImpl::GetRowStatus
- IRowsetUpdateImpl.GetRowStatus
- ATL::IRowsetUpdateImpl::GetRowStatus
- GetRowStatus
- ATL.IRowsetUpdateImpl.Undo
- ATL::IRowsetUpdateImpl::Undo
- IRowsetUpdateImpl::Undo
- IRowsetUpdateImpl.Undo
- ATL::IRowsetUpdateImpl::Update
- IRowsetUpdateImpl::Update
- IRowsetUpdateImpl.Update
- ATL.IRowsetUpdateImpl.Update
- IRowsetUpdateImpl::IsUpdateAllowed
- IRowsetUpdateImpl.IsUpdateAllowed
- IsUpdateAllowed
- IRowsetUpdateImpl.m_mapCachedData
- IRowsetUpdateImpl::m_mapCachedData
- m_mapCachedData
helpviewer_keywords:
- providers, updatable
- IRowsetUpdateImpl class
- updatable providers, deferred update
- SetData method
- GetOriginalData method
- GetPendingRows method
- GetRowStatus method
- Undo method
- Update method
- IsUpdateAllowed method
- m_mapCachedData
ms.assetid: f85af76b-ab6f-4f8b-8f4a-337c9679d68f
ms.openlocfilehash: 6c20698e2219cf7c3e1d840e23b5f8113947ae9f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62390710"
---
# <a name="irowsetupdateimpl-class"></a>Classe IRowsetUpdateImpl

L'implementazione di modelli OLE DB del [IRowsetUpdate](/previous-versions/windows/desktop/ms714401(v=vs.85)) interfaccia.

## <a name="syntax"></a>Sintassi

```cpp
template <
   class T,
   class Storage,
   class UpdateArray = CAtlArray<Storage>,
   class RowClass = CSimpleRow,
   class MapClass = CAtlMap <RowClass::KeyType, RowClass*>
>

class IRowsetUpdateImpl : public IRowsetChangeImpl<
   T,
   Storage,
   IRowsetUpdate,
   RowClass,
   MapClass>
```

### <a name="parameters"></a>Parametri

*T*<br/>
Una classe derivata da `IRowsetUpdateImpl`.

*Archiviazione*<br/>
Il record dell'utente.

*UpdateArray*<br/>
Matrice che contiene dati memorizzati nella cache per l'aggiornamento del set di righe.

*RowClass*<br/>
L'unità di archiviazione per il `HROW`.

*MapClass*<br/>
L'unità di archiviazione per tutti gli handle di riga utilizzato dal provider.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="interface-methods-used-with-irowsetchange"></a>Metodi di interfaccia (utilizzati con IRowsetChange)

|||
|-|-|
|[SetData](#setdata)|Imposta i valori dei dati in una o più colonne.|

### <a name="interface-methods-used-with-irowsetupdate"></a>Metodi di interfaccia (utilizzati con IRowsetUpdate)

|||
|-|-|
|[GetOriginalData](#getoriginaldata)|Ottiene i dati trasmessi a più di recente o ottenuti dall'origine dati, ignorando le modifiche in sospeso.|
|[GetPendingRows](#getpendingrows)|Restituisce un elenco di righe con modifiche in sospeso.|
|[GetRowStatus](#getrowstatus)|Restituisce lo stato di righe specificate.|
|[Operazione di annullamento](#undo)|Annulla tutte le modifiche alla riga dopo l'ultimo recupero o l'aggiornamento.|
|[Aggiornamento](#update)|Trasmette tutte le modifiche apportate alla riga dopo l'ultimo recupero o l'aggiornamento.|

### <a name="implementation-methods-callback"></a>Metodi di implementazione (Callback)

|||
|-|-|
|[IsUpdateAllowed](#isupdateallowed)|Utilizzate per verificare la sicurezza, l'integrità, e così via prima di consentire gli aggiornamenti.|

### <a name="data-members"></a>Membri di dati

|||
|-|-|
|[m_mapCachedData](#mapcacheddata)|Contiene i dati originali per l'operazione posticipata.|

## <a name="remarks"></a>Note

Prima di tutto necessario leggere e comprendere la documentazione per [IRowsetChange](/previous-versions/windows/desktop/ms715790(v=vs.85)), in quanto tutto ciò che è descritti vi si applica anche qui. È consigliabile leggere anche il capitolo 6 del *riferimento per programmatori OLE DB* sull'impostazione dei dati.

`IRowsetUpdateImpl` implementa OLE DB `IRowsetUpdate` interfaccia, che consente agli utenti di ritardare la trasmissione delle modifiche apportate con `IRowsetChange` per l'origine dati e annullare le modifiche prima della trasmissione.

> [!IMPORTANT]
>  È consigliabile leggere la documentazione seguente prima di tentare di implementare un provider:

- [Creazione di un provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md)

- Capitolo 6 del *riferimento per programmatori OLE DB*

- Vedere anche il `RUpdateRowset` classe viene utilizzata nel [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV) esempio

## <a name="setdata"></a> IRowsetUpdateImpl::SetData

Imposta i valori dei dati in una o più colonne.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (SetData )(HROW hRow,
   HACCESSOR hAccessor,
   void* pSrcData);
```

#### <a name="parameters"></a>Parametri

Visualizzare [IRowsetChange:: SetData](/previous-versions/windows/desktop/ms721232(v=vs.85)) nel *riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Note

Questo metodo esegue l'override di [IRowsetChangeImpl:: SetData](../../data/oledb/irowsetchangeimpl-setdata.md) metodo ma include la memorizzazione nella cache dei dati originali per consentire l'elaborazione immediata o posticipata dell'operazione.

## <a name="getoriginaldata"></a> IRowsetUpdateImpl::GetOriginalData

Ottiene i dati trasmessi a più di recente o ottenuti dall'origine dati, ignorando le modifiche in sospeso.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (GetOriginalData )(HROW hRow,
   HACCESSOR hAccessor,
   void* pData);
```

#### <a name="parameters"></a>Parametri

Visualizzare [IRowsetUpdate::GetOriginalData](/previous-versions/windows/desktop/ms709947(v=vs.85)) nel *riferimento per programmatori OLE DB*.

## <a name="getpendingrows"></a> IRowsetUpdateImpl::GetPendingRows

Restituisce un elenco di righe con modifiche in sospeso.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (GetPendingRows )(HCHAPTER /* hReserved */,
   DBPENDINGSTATUS dwRowStatus,
   DBCOUNTITEM* pcPendingRows,
   HROW** prgPendingRows,
   DBPENDINGSTATUS** prgPendingStatus);
```

#### <a name="parameters"></a>Parametri

*hReserved*<br/>
[in] Corrisponde alla *hChapter* nel parametro [IRowsetUpdate::GetPendingRows](/previous-versions/windows/desktop/ms719626(v=vs.85)).

Per altri parametri, vedere [IRowsetUpdate::GetPendingRows](/previous-versions/windows/desktop/ms719626(v=vs.85)) nel *riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Note

Per altre informazioni, vedere [IRowsetUpdate::GetPendingRows](/previous-versions/windows/desktop/ms719626(v=vs.85)) nel *riferimento per programmatori OLE DB*.

## <a name="getrowstatus"></a> IRowsetUpdateImpl::GetRowStatus

Restituisce lo stato di righe specificate.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (GetRowStatus )(HCHAPTER /* hReserved */,
   DBCOUNTITEM cRows,
   const HROW rghRows[],
   DBPENDINGSTATUS rgPendingStatus[]);
```

#### <a name="parameters"></a>Parametri

*hReserved*<br/>
[in] Corrisponde alla *hChapter* nel parametro [IRowsetUpdate::GetRowStatus](/previous-versions/windows/desktop/ms724377(v=vs.85)).

Per altri parametri, vedere [IRowsetUpdate::GetRowStatus](/previous-versions/windows/desktop/ms724377(v=vs.85)) nel *riferimento per programmatori OLE DB*.

## <a name="undo"></a> IRowsetUpdateImpl::Undo

Annulla tutte le modifiche alla riga dopo l'ultimo recupero o l'aggiornamento.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (Undo )(HCHAPTER /* hReserved */,
   DBCOUNTITEM cRows,
   const HROW rghRows[ ],
   DBCOUNTITEM* pcRowsUndone,
   HROW** prgRowsUndone,
   DBROWSTATUS** prgRowStatus);
```

#### <a name="parameters"></a>Parametri

*hReserved*<br/>
[in] Corrisponde alla *hChapter* nel parametro [IRowsetUpdate::Undo](/previous-versions/windows/desktop/ms719655(v=vs.85)).

*pcRowsUndone*<br/>
[out] Corrisponde alla *pcRows* nel parametro [IRowsetUpdate::Undo](/previous-versions/windows/desktop/ms719655(v=vs.85)).

*prgRowsUndone*<br/>
[in] Corrisponde alla *prgRows* nel parametro [IRowsetUpdate::Undo](/previous-versions/windows/desktop/ms719655(v=vs.85)).

Per altri parametri, vedere [IRowsetUpdate::Undo](/previous-versions/windows/desktop/ms719655(v=vs.85)) nel *riferimento per programmatori OLE DB*.

## <a name="update"></a> IRowsetUpdateImpl::Update

Trasmette tutte le modifiche apportate alla riga dopo l'ultimo recupero o l'aggiornamento.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (Update )(HCHAPTER /* hReserved */,
   DBCOUNTITEM cRows,
   const HROW rghRows[],
   DBCOUNTITEM* pcRows,
   HROW** prgRows,
   DBROWSTATUS** prgRowStatus);
```

#### <a name="parameters"></a>Parametri

*hReserved*<br/>
[in] Corrisponde alla *hChapter* nel parametro [IRowsetUpdate:: Update](/previous-versions/windows/desktop/ms719709(v=vs.85)).

Per altri parametri, vedere [IRowsetUpdate:: Update](/previous-versions/windows/desktop/ms719709(v=vs.85)) nel *riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Note

Le modifiche vengono trasmesse tramite la chiamata [IRowsetChangeImpl:: FlushData](../../data/oledb/irowsetchangeimpl-flushdata.md). Il consumer deve chiamare [CRowset:: Update](../../data/oledb/crowset-update.md) rendere effettive le modifiche. Impostare *prgRowstatus* su un valore appropriato come descritto in [stati](/previous-versions/windows/desktop/ms722752(v=vs.85)) nel *riferimento per programmatori OLE DB*.

## <a name="isupdateallowed"></a> IRowsetUpdateImpl::IsUpdateAllowed

Eseguire l'override di questo metodo per verificare la presenza di sicurezza, l'integrità, e così via prima degli aggiornamenti.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT IsUpdateAllowed(DBPENDINGSTATUS /* [in] */ /* status */,
   HROW /* [in] */ /* hRowUpdate */,
   DBROWSTATUS* /* [out] */ /* pRowStatus */);
```

#### <a name="parameters"></a>Parametri

*status*<br/>
[in] Lo stato di operazioni sulle righe in sospeso.

*hRowUpdate*<br/>
[in] Handle per le righe che l'utente desidera aggiornare.

*pRowStatus*<br/>
[out] Lo stato restituito all'utente.

### <a name="remarks"></a>Note

Se si determina che un aggiornamento deve essere consentito, restituisce S_OK; in caso contrario restituisce E_FAIL. Se si consente a un aggiornamento, è anche necessario impostare il `DBROWSTATUS` nelle [IRowsetUpdateImpl:: Update](../../data/oledb/irowsetupdateimpl-update.md) al relativo [lo stato della riga](/previous-versions/windows/desktop/ms722752(v=vs.85)).

## <a name="mapcacheddata"></a> IRowsetUpdateImpl::m_mapCachedData

Una mappa che contiene i dati originali per l'operazione posticipata.

### <a name="syntax"></a>Sintassi

```cpp
CAtlMap<
   HROW hRow, 
   Storage* pData
>
m_mapCachedData;
```

#### <a name="parameters"></a>Parametri

*hRow*<br/>
Handle per le righe per i dati.

*pData*<br/>
Puntatore ai dati da memorizzare nella cache. I dati sono di tipo *archiviazione* (la classe di record utente). Vedere le *memorizzazione* argomento di modello in [classe IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md).

## <a name="see-also"></a>Vedere anche

[Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
[Creazione di un provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md)