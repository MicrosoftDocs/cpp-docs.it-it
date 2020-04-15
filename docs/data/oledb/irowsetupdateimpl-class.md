---
title: Classe IRowsetUpdateImpl
ms.date: 11/04/2016
f1_keywords:
- IRowsetUpdateImpl
- ATL.IRowsetUpdateImpl
- ATL::IRowsetUpdateImpl
- IRowsetUpdateImpl::SetData
- IRowsetUpdateImpl.SetData
- ATL::IRowsetUpdateImpl::SetData
- ATL.IRowsetUpdateImpl.SetData
- ATL.IRowsetUpdateImpl.GetOriginalData
- IRowsetUpdateImpl.GetOriginalData
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
ms.openlocfilehash: 6347a42b9065239f768c6b50c430946393358df1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370742"
---
# <a name="irowsetupdateimpl-class"></a>Classe IRowsetUpdateImpl

Implementazione dei modelli OLE DB dell'interfaccia [IRowsetUpdate.](/previous-versions/windows/desktop/ms714401(v=vs.85))

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
Classe derivata `IRowsetUpdateImpl`da .

*Storage*<br/>
Record utente.

*UpdateArray (matrice di aggiornamento)*<br/>
Matrice contenente i dati memorizzati nella cache per l'aggiornamento del set di righe.

*Classe Row*<br/>
L'unità di `HROW`stoccaggio per il file .

*Classe MapClass*<br/>
Unità di archiviazione per tutti gli handle di riga mantenuti dal provider.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="interface-methods-used-with-irowsetchange"></a>Metodi di interfaccia (utilizzati con IRowsetChange)Interface Methods (Used with IRowsetChange)

|||
|-|-|
|[Setdata](#setdata)|Imposta i valori dei dati in una o più colonne.|

### <a name="interface-methods-used-with-irowsetupdate"></a>Metodi di interfaccia (utilizzati con IRowsetUpdate)Interface Methods (Used with IRowsetUpdate)

|||
|-|-|
|[GetOriginalData](#getoriginaldata)|Ottiene i dati trasmessi o ottenuti più di recente dall'origine dati, ignorando le modifiche in sospeso.|
|[GetPendingRows](#getpendingrows)|Restituisce un elenco di righe con modifiche in sospeso.|
|[Proprietà GetRowStatus](#getrowstatus)|Restituisce lo stato delle righe specificate.|
|[Annulla](#undo)|Annulla le modifiche apportate alla riga dall'ultimo recupero o aggiornamento.|
|[Aggiornamento](#update)|Trasmette tutte le modifiche apportate alla riga dall'ultimo recupero o aggiornamento.|

### <a name="implementation-methods-callback"></a>Metodi di implementazione (callback)Implementation Methods (Callback)

|||
|-|-|
|[IsUpdateAllowed](#isupdateallowed)|Utilizzato per verificare la sicurezza, l'integrità e così via prima di consentire gli aggiornamenti.|

### <a name="data-members"></a>Membri dei dati

|||
|-|-|
|[m_mapCachedData](#mapcacheddata)|Contiene i dati originali per l'operazione posticipata.|

## <a name="remarks"></a>Osservazioni

È innanzitutto necessario leggere e comprendere la documentazione relativa a [IRowsetChange](/previous-versions/windows/desktop/ms715790(v=vs.85)), poiché tutto ciò che è stato descritto si applica anche in questo caso. Si dovrebbe anche leggere il capitolo 6 di *OLE DB Programmer's Reference* sull'impostazione dei dati.

`IRowsetUpdateImpl`implementa l'interfaccia `IRowsetUpdate` OLE DB, che consente ai `IRowsetChange` consumer di ritardare la trasmissione delle modifiche apportate all'origine dati e di annullare le modifiche prima della trasmissione.

> [!IMPORTANT]
> Si consiglia di leggere la seguente documentazione PRIMA di tentare di implementare il provider:

- [Creazione di un provider aggiornabileCreating an Updatable Provider](../../data/oledb/creating-an-updatable-provider.md)

- Capitolo 6 di *OLE DB Programmer's Reference (informazioni* in inglese)

- Vedere anche `RUpdateRowset` come la classe viene utilizzata nell'esempio [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV)

## <a name="irowsetupdateimplsetdata"></a><a name="setdata"></a>IRowsetUpdateImpl::SetDataIRowsetUpdateImpl::SetData

Imposta i valori dei dati in una o più colonne.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (SetData )(HROW hRow,
   HACCESSOR hAccessor,
   void* pSrcData);
```

#### <a name="parameters"></a>Parametri

Vedere [IRowsetChange::SetData](/previous-versions/windows/desktop/ms721232(v=vs.85)) in *OLE DB Programmer's Reference*.

### <a name="remarks"></a>Osservazioni

Questo metodo esegue l'override di [IRowsetChangeImpl::SetData](../../data/oledb/irowsetchangeimpl-setdata.md) metodo ma include la memorizzazione nella cache dei dati originali per consentire l'elaborazione immediata o posticipata dell'operazione.

## <a name="irowsetupdateimplgetoriginaldata"></a><a name="getoriginaldata"></a>IRowsetUpdateImpl::GetOriginalDataIRowsetUpdateImpl::GetOriginalData

Ottiene i dati trasmessi o ottenuti più di recente dall'origine dati, ignorando le modifiche in sospeso.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (GetOriginalData )(HROW hRow,
   HACCESSOR hAccessor,
   void* pData);
```

#### <a name="parameters"></a>Parametri

Vedere [IRowsetUpdate::GetOriginalData](/previous-versions/windows/desktop/ms709947(v=vs.85)) in *OLE DB Programmer's Reference*.

## <a name="irowsetupdateimplgetpendingrows"></a><a name="getpendingrows"></a>IRowsetUpdateImpl::GetPendingRowsIRowsetUpdateImpl::GetPendingRows

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

*hRiservato*<br/>
[in] Corrisponde al parametro *hChapter* in [IRowsetUpdate::GetPendingRows](/previous-versions/windows/desktop/ms719626(v=vs.85)).

Per altri parametri, vedere [IRowsetUpdate::GetPendingRows](/previous-versions/windows/desktop/ms719626(v=vs.85)) in *OLE DB Programmer's Reference*.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [IRowsetUpdate::GetPendingRows](/previous-versions/windows/desktop/ms719626(v=vs.85)) in *OLE DB Programmer's Reference*.

## <a name="irowsetupdateimplgetrowstatus"></a><a name="getrowstatus"></a>IRowsetUpdateImpl::GetRowStatus

Restituisce lo stato delle righe specificate.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (GetRowStatus )(HCHAPTER /* hReserved */,
   DBCOUNTITEM cRows,
   const HROW rghRows[],
   DBPENDINGSTATUS rgPendingStatus[]);
```

#### <a name="parameters"></a>Parametri

*hRiservato*<br/>
[in] Corrisponde al parametro *hChapter* in [IRowsetUpdate::GetRowStatus](/previous-versions/windows/desktop/ms724377(v=vs.85)).

Per altri parametri, vedere [IRowsetUpdate::GetRowStatus](/previous-versions/windows/desktop/ms724377(v=vs.85)) in *OLE DB Programmer's Reference*.

## <a name="irowsetupdateimplundo"></a><a name="undo"></a>IRowsetUpdateImpl::Annulla

Annulla le modifiche apportate alla riga dall'ultimo recupero o aggiornamento.

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

*hRiservato*<br/>
[in] Corrisponde al parametro *hChapter* in [IRowsetUpdate::Undo](/previous-versions/windows/desktop/ms719655(v=vs.85)).

*pcRowsUndone (informazioni in base al nome in cui il nome*<br/>
[fuori] Corrisponde al parametro *pcRows* in [IRowsetUpdate::Undo](/previous-versions/windows/desktop/ms719655(v=vs.85)).

*prgRowsUndone (prgRowsUndone)*<br/>
[in] Corrisponde al parametro *prgRows* in [IRowsetUpdate::Undo](/previous-versions/windows/desktop/ms719655(v=vs.85)).

Per altri parametri, vedere [IRowsetUpdate::Undo](/previous-versions/windows/desktop/ms719655(v=vs.85)) in *OLE DB Programmer's Reference*.

## <a name="irowsetupdateimplupdate"></a><a name="update"></a>IRowsetUpdateImpl::Aggiornamento

Trasmette tutte le modifiche apportate alla riga dall'ultimo recupero o aggiornamento.

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

*hRiservato*<br/>
[in] Corrisponde al parametro *hChapter* in [IRowsetUpdate::Update](/previous-versions/windows/desktop/ms719709(v=vs.85)).

Per altri parametri, vedere [IRowsetUpdate::Update](/previous-versions/windows/desktop/ms719709(v=vs.85)) in *OLE DB Programmer's Reference*.

### <a name="remarks"></a>Osservazioni

Le modifiche vengono trasmesse chiamando [IRowsetChangeImpl::FlushData](../../data/oledb/irowsetchangeimpl-flushdata.md). Il consumer deve chiamare [CRowset::Update](../../data/oledb/crowset-update.md) per rendere effettive le modifiche. Impostare *prgRowstatus su* un valore appropriato come descritto in [Stati riga](/previous-versions/windows/desktop/ms722752(v=vs.85)) in *OLE DB Programmer's Reference*.

## <a name="irowsetupdateimplisupdateallowed"></a><a name="isupdateallowed"></a>IRowsetUpdateImpl::IsUpdateAllowedIRowsetUpdateImpl::IsUpdateAllowed

Eseguire l'override di questo metodo per verificare la sicurezza, l'integrità e così via prima degli aggiornamenti.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT IsUpdateAllowed(DBPENDINGSTATUS /* [in] */ /* status */,
   HROW /* [in] */ /* hRowUpdate */,
   DBROWSTATUS* /* [out] */ /* pRowStatus */);
```

#### <a name="parameters"></a>Parametri

*status*<br/>
[in] Stato delle operazioni in sospeso nelle righe.

*HRowUpdate (aggiornamento)*<br/>
[in] Gestire le righe che l'utente desidera aggiornare.

*pRowStatus (Statodip*<br/>
[fuori] Stato restituito all'utente.

### <a name="remarks"></a>Osservazioni

Se si determina che un aggiornamento deve essere consentito, restituisce S_OK; in caso contrario restituisce E_FAIL. Se si consente un aggiornamento, è `DBROWSTATUS` inoltre necessario impostare in [IRowsetUpdateImpl::Update](../../data/oledb/irowsetupdateimpl-update.md) su [uno stato](/previous-versions/windows/desktop/ms722752(v=vs.85))di riga appropriato.

## <a name="irowsetupdateimplm_mapcacheddata"></a><a name="mapcacheddata"></a>IRowsetUpdateImpl::m_mapCachedData

Mappa contenente i dati originali per l'operazione posticipata.

### <a name="syntax"></a>Sintassi

```cpp
CAtlMap<
   HROW hRow,
   Storage* pData
>
m_mapCachedData;
```

#### <a name="parameters"></a>Parametri

*hRiga*<br/>
Gestire le righe per i dati.

*pDati*<br/>
Puntatore ai dati da memorizzare nella cache. I dati sono di tipo *Storage* (la classe di record utente). Vedere l'argomento del modello *Storage* nella [classe IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md).

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
[Creazione di un provider aggiornabileCreating an Updatable Provider](../../data/oledb/creating-an-updatable-provider.md)
