---
title: Classe IRowsetImpl
ms.date: 11/04/2016
f1_keywords:
- IRowsetImpl
- IRowsetImpl::AddRefRows
- IRowsetImpl.AddRefRows
- ATL::IRowsetImpl::AddRefRows
- ATL.IRowsetImpl.AddRefRows
- IRowsetImpl.CreateRow
- ATL.IRowsetImpl.CreateRow
- ATL::IRowsetImpl::CreateRow
- CreateRow
- IRowsetImpl::CreateRow
- ATL.IRowsetImpl.GetData
- ATL::IRowsetImpl::GetData
- IRowsetImpl::GetData
- IRowsetImpl.GetData
- GetDBStatus
- IRowsetImpl.GetDBStatus
- IRowsetImpl::GetDBStatus
- GetNextRows
- ATL.IRowsetImpl.GetNextRows
- ATL::IRowsetImpl::GetNextRows
- IRowsetImpl::GetNextRows
- IRowsetImpl.GetNextRows
- IRowsetImpl.IRowsetImpl
- ATL::IRowsetImpl::IRowsetImpl
- ATL.IRowsetImpl.IRowsetImpl
- IRowsetImpl::IRowsetImpl
- ATL::IRowsetImpl::RefRows
- ATL.IRowsetImpl.RefRows
- IRowsetImpl.RefRows
- RefRows
- IRowsetImpl::RefRows
- ATL.IRowsetImpl.ReleaseRows
- IRowsetImpl::ReleaseRows
- ATL::IRowsetImpl::ReleaseRows
- IRowsetImpl.ReleaseRows
- ATL.IRowsetImpl.RestartPosition
- IRowsetImpl::RestartPosition
- RestartPosition
- ATL::IRowsetImpl::RestartPosition
- IRowsetImpl.RestartPosition
- IRowsetImpl.SetDBStatus
- IRowsetImpl::SetDBStatus
- SetDBStatus
- ATL.IRowsetImpl.m_bCanFetchBack
- ATL::IRowsetImpl::m_bCanFetchBack
- IRowsetImpl.m_bCanFetchBack
- IRowsetImpl::m_bCanFetchBack
- m_bCanFetchBack
- IRowsetImpl::m_bCanScrollBack
- ATL::IRowsetImpl::m_bCanScrollBack
- IRowsetImpl.m_bCanScrollBack
- ATL.IRowsetImpl.m_bCanScrollBack
- m_bCanScrollBack
- ATL.IRowsetImpl.m_bReset
- IRowsetImpl.m_bReset
- m_bReset
- IRowsetImpl::m_bReset
- ATL::IRowsetImpl::m_bReset
- IRowsetImpl::m_iRowset
- IRowsetImpl.m_iRowset
- ATL::IRowsetImpl::m_iRowset
- ATL.IRowsetImpl.m_iRowset
- m_iRowset
- IRowsetImpl::m_rgRowHandles
- IRowsetImpl.m_rgRowHandles
- m_rgRowHandles
- ATL::IRowsetImpl::m_rgRowHandles
- ATL.IRowsetImpl.m_rgRowHandles
helpviewer_keywords:
- IRowsetImpl class
- AddRefRows method
- CreateRow method
- GetData method [OLE DB]
- GetDBStatus method
- GetNextRows method
- IRowsetImpl constructor
- RefRows method
- ReleaseRows method
- RestartPosition method
- SetDBStatus method
- m_bCanFetchBack
- m_bCanScrollBack
- m_bReset
- m_iRowset
- m_rgRowHandles
ms.assetid: 6a9189af-7556-45b1-adcb-9d62bb36704c
ms.openlocfilehash: 27a07d10256147d3c3ed383744ba1ee5fdfd06a1
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91504082"
---
# <a name="irowsetimpl-class"></a>Classe IRowsetImpl

Fornisce un'implementazione dell'interfaccia `IRowset`.

## <a name="syntax"></a>Sintassi

```cpp
template <
   class T,
   class RowsetInterface,
   class RowClass = CSimpleRow,
   class MapClass = CAtlMap <
      RowClass::KeyType,
      RowClass*>>
class ATL_NO_VTABLE IRowsetImpl : public RowsetInterface
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IRowsetImpl` .

*RowsetInterface*<br/>
Classe derivata da `IRowsetImpl` .

*RowClass*<br/>
Unità di archiviazione per il `HROW` .

*MapClass*<br/>
Unità di archiviazione per tutti gli handle di riga utilizzati dal provider.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

| Nome | Descrizione |
|-|-|
|[AddRefRows](#addrefrows)|Aggiunge un conteggio dei riferimenti a un handle di riga esistente.|
|[CreateRow](#createrow)|Chiamato da [GetNextRows](#getnextrows) per allocare un nuovo oggetto `HROW` . Non viene chiamato direttamente dall'utente.|
|[GetData](#getdata)|Recupera dati dalla copia della riga del set di righe.|
|[GetDBStatus](#getdbstatus)|Restituisce lo stato per il campo specificato.|
|[GetNextRows](#getnextrows)|Recupera le righe in sequenza, memorizzando la posizione precedente.|
|[IRowsetImpl](#irowsetimpl)|Costruttore. Non viene chiamato direttamente dall'utente.|
|[RefRows](#refrows)|Chiamato da [AddRefRows](#addrefrows) e [ReleaseRows](#releaserows). Non viene chiamato direttamente dall'utente.|
|[ReleaseRows](#releaserows)|Rilascia righe.|
|[RestartPosition](#restartposition)|Riposiziona la posizione di recupero successiva nella posizione iniziale. ovvero la posizione in cui è stato creato per la prima volta il set di righe.|
|[SetDBStatus](#setdbstatus)|Imposta i flag di stato per il campo specificato.|

### <a name="data-members"></a>Membri dei dati

| Nome | Descrizione |
|-|-|
|[m_bCanFetchBack](#bcanfetchback)|Indica se un provider supporta il recupero all'indietro.|
|[m_bCanScrollBack](#bcanscrollback)|Indica se a un provider è possibile far scorrere il cursore all'indietro.|
|[m_bReset](#breset)|Indica se un provider ha reimpostato la posizione del cursore. Questo ha un significato speciale quando lo scorrimento indietro o il recupero viene eseguito all'indietro in [GetNextRows](#getnextrows).|
|[m_iRowset](#irowset)|Indice del set di righe che rappresenta il cursore.|
|[m_rgRowHandles](#rgrowhandles)|Elenco di handle di riga.|

## <a name="remarks"></a>Osservazioni

[IRowset](/previous-versions/windows/desktop/ms720986(v=vs.85)) è l'interfaccia del set di righe di base.

## <a name="irowsetimpladdrefrows"></a><a name="addrefrows"></a> IRowsetImpl:: AddRefRows

Aggiunge un conteggio dei riferimenti a un handle di riga esistente.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(AddRefRows )(DBCOUNTITEM cRows,
   const HROW rghRows[],
   DBREFCOUNT rgRefCounts[],
   DBROWSTATUS rgRowStatus[]);
```

#### <a name="parameters"></a>Parametri

Vedere [IRowset:: AddRefRows](/previous-versions/windows/desktop/ms719619(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="irowsetimplcreaterow"></a><a name="createrow"></a> IRowsetImpl:: CreateRow

Metodo Helper chiamato da [GetNextRows](#getnextrows) per allocare un nuovo oggetto `HROW` .

### <a name="syntax"></a>Sintassi

```cpp
HRESULT CreateRow(DBROWOFFSET lRowsOffset,
   DBCOUNTITEM& cRowsObtained,
   HROW* rgRows);
```

#### <a name="parameters"></a>Parametri

*lRowsOffset*<br/>
Posizione del cursore della riga da creare.

*cRowsObtained*<br/>
Un riferimento passato all'utente che indica il numero di righe create.

*rgRows*<br/>
Matrice di oggetti `HROW` restituiti al chiamante con gli handle di riga appena creati.

### <a name="remarks"></a>Osservazioni

Se la riga esiste, questo metodo chiama [AddRefRows](#addrefrows) e restituisce. In caso contrario, alloca una nuova istanza della variabile di modello RowClass e la aggiunge a [m_rgRowHandles](#rgrowhandles).

## <a name="irowsetimplgetdata"></a><a name="getdata"></a> IRowsetImpl:: GetData

Recupera dati dalla copia della riga del set di righe.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(GetData )(HROW hRow,
   HACCESSOR hAccessor,
   void* pDstData);
```

#### <a name="parameters"></a>Parametri

Vedere [IRowset:: GetData](/previous-versions/windows/desktop/ms716988(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

Alcuni parametri corrispondono ai parametri di *riferimento di OLE DB Programmer* con nomi diversi, descritti in `IRowset::GetData` :

|Parametri del modello di OLE DB|Parametri *di riferimento di OLE DB Programmer*|
|--------------------------------|------------------------------------------------|
|*pDstData*|*pData*|

### <a name="remarks"></a>Osservazioni

Consente inoltre di gestire la conversione dei dati utilizzando la DLL di conversione dei dati OLE DB.

## <a name="irowsetimplgetdbstatus"></a><a name="getdbstatus"></a> IRowsetImpl:: GetDBStatus

Restituisce i flag di stato DBSTATUS per il campo specificato.

### <a name="syntax"></a>Sintassi

```cpp
virtual DBSTATUS GetDBStatus(RowClass* currentRow,
   ATLCOLUMNINFO* columnNames);
```

#### <a name="parameters"></a>Parametri

*currentRow*<br/>
in Riga corrente.

*columnNames*<br/>
in Colonna per cui viene richiesto lo stato.

### <a name="return-value"></a>Valore restituito

Flag [DBSTATUS](/previous-versions/windows/desktop/ms722617(v=vs.85)) per la colonna.

## <a name="irowsetimplgetnextrows"></a><a name="getnextrows"></a> IRowsetImpl:: GetNextRows

Recupera le righe in sequenza, memorizzando la posizione precedente.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(GetNextRows )(HCHAPTER hReserved,
   DBROWOFFSET lRowsOffset,
   DBROWCOUNT cRows,
   DBCOUNTITEM* pcRowsObtained,
   HROW** prghRows);
```

#### <a name="parameters"></a>Parametri

Vedere [IRowset:: GetNextRows](/previous-versions/windows/desktop/ms709827(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="irowsetimplirowsetimpl"></a><a name="irowsetimpl"></a> IRowsetImpl:: IRowsetImpl

Costruttore.

### <a name="syntax"></a>Sintassi

```cpp
IRowsetImpl();
```

### <a name="remarks"></a>Osservazioni

In genere non è necessario chiamare direttamente questo metodo.

## <a name="irowsetimplrefrows"></a><a name="refrows"></a> IRowsetImpl:: RefRows

Chiamato da [AddRefRows](#addrefrows) e [ReleaseRows](#releaserows) per incrementare o rilasciare un conteggio dei riferimenti a un handle di riga esistente.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT RefRows(DBCOUNTITEM cRows,
   const HROWrghRows[],
   DBREFCOUNT rgRefCounts[],
   DBROWSTATUS rgRowStatus[],
   BOOL bAdd);
```

#### <a name="parameters"></a>Parametri

Vedere [IRowset:: AddRefRows](/previous-versions/windows/desktop/ms719619(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="irowsetimplreleaserows"></a><a name="releaserows"></a> IRowsetImpl:: ReleaseRows

Rilascia righe.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(ReleaseRows )(DBCOUNTITEM cRows,
   const HROW rghRows[],
   DBROWOPTIONS rgRowOptions[],
   DBREFCOUNT rgRefCounts[],
   DBROWSTATUS rgRowStatus[]);
```

#### <a name="parameters"></a>Parametri

Vedere [IRowset:: ReleaseRows](/previous-versions/windows/desktop/ms719771(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="irowsetimplrestartposition"></a><a name="restartposition"></a> IRowsetImpl:: RestartPosition

Riposiziona la posizione di recupero successiva nella posizione iniziale. ovvero la posizione in cui è stato creato per la prima volta il set di righe.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(RestartPosition )(HCHAPTER /* hReserved */);
```

#### <a name="parameters"></a>Parametri

Vedere [IRowset:: RestartPosition](/previous-versions/windows/desktop/ms712877(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Osservazioni

La posizione del set di righe non è definita finché non `GetNextRow` viene chiamato il metodo. È possibile spostarsi all'indietro in un rowet chiamando `RestartPosition` e quindi recuperando o scorrendo all'indietro.

## <a name="irowsetimplsetdbstatus"></a><a name="setdbstatus"></a> IRowsetImpl:: SetDBStatus

Imposta i flag di stato DBSTATUS per il campo specificato.

### <a name="syntax"></a>Sintassi

```cpp
virtual HRESULT SetDBStatus(DBSTATUS* statusFlags,
   RowClass* currentRow,
   ATLCOLUMNINFO* columnInfo);
```

#### <a name="parameters"></a>Parametri

*statusFlags*<br/>
Flag [DBSTATUS](/previous-versions/windows/desktop/ms722617(v=vs.85)) da impostare per la colonna.

*currentRow*<br/>
La riga corrente.

*columnInfo*<br/>
Colonna per cui viene impostato lo stato.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

Il provider esegue l'override di questa funzione per fornire un'elaborazione speciale per DBSTATUS_S_ISNULL e DBSTATUS_S_DEFAULT.

## <a name="irowsetimplm_bcanfetchback"></a><a name="bcanfetchback"></a> IRowsetImpl:: m_bCanFetchBack

Indica se un provider supporta il recupero all'indietro.

### <a name="syntax"></a>Sintassi

```cpp
unsigned m_bCanFetchBack:1;
```

### <a name="remarks"></a>Osservazioni

Collegato alla `DBPROP_CANFETCHBACKWARDS` proprietà nel `DBPROPSET_ROWSET` gruppo. Il provider deve supportare `DBPROP_CANFETCHBACKWARDS` affinché `m_bCanFetchBackwards` sia **`true`** .

## <a name="irowsetimplm_bcanscrollback"></a><a name="bcanscrollback"></a> IRowsetImpl:: m_bCanScrollBack

Indica se a un provider è possibile far scorrere il cursore all'indietro.

### <a name="syntax"></a>Sintassi

```cpp
unsigned  m_bCanScrollBack:1;
```

### <a name="remarks"></a>Osservazioni

Collegato alla `DBPROP_CANSCROLLBACKWARDS` proprietà nel `DBPROPSET_ROWSET` gruppo. Il provider deve supportare `DBPROP_CANSCROLLBACKWARDS` affinché `m_bCanFetchBackwards` sia **`true`** .

## <a name="irowsetimplm_breset"></a><a name="breset"></a> IRowsetImpl:: m_bReset

Flag di bit utilizzato per determinare se la posizione del cursore è definita nel set di righe.

### <a name="syntax"></a>Sintassi

```cpp
unsigned m_bReset:1;
```

### <a name="remarks"></a>Osservazioni

Se il consumer chiama [GetNextRows](#getnextrows) con un valore negativo `lOffset` o un *corvo* e `m_bReset` è true, viene `GetNextRows` spostato alla fine del set di righe. Se `m_bReset` è false, il consumer riceve un codice di errore, in conformità con la specifica OLE DB. Il `m_bReset` flag viene impostato su **`true`** quando il set di righe viene creato per la prima volta e quando il consumer chiama [IRowsetImpl:: RestartPosition](#restartposition). Viene impostato su **`false`** quando si chiama `GetNextRows` .

## <a name="irowsetimplm_irowset"></a><a name="irowset"></a> IRowsetImpl:: m_iRowset

Indice del set di righe che rappresenta il cursore.

### <a name="syntax"></a>Sintassi

```cpp
DBROWOFFSET m_iRowset;
```

## <a name="irowsetimplm_rgrowhandles"></a><a name="rgrowhandles"></a> IRowsetImpl:: m_rgRowHandles

Mappa di handle di riga attualmente contenuti dal provider in risposta a `GetNextRows` .

### <a name="syntax"></a>Sintassi

```cpp
MapClass m_rgRowHandles;
```

### <a name="remarks"></a>Osservazioni

Gli handle di riga vengono rimossi chiamando `ReleaseRows` . Vedere [Panoramica di IRowsetImpl](../../data/oledb/irowsetimpl-class.md) per la definizione di *MapClass*.

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
[Classe CSimpleRow](../../data/oledb/csimplerow-class.md)
