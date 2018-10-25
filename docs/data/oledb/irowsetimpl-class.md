---
title: Classe IRowsetImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IRowsetImpl
- IRowsetImpl::AddRefRows
- AddRefRows
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
- IRowsetImpl
- ATL::IRowsetImpl::RefRows
- ATL.IRowsetImpl.RefRows
- IRowsetImpl.RefRows
- RefRows
- IRowsetImpl::RefRows
- ATL.IRowsetImpl.ReleaseRows
- ReleaseRows
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 7f3a31b2df0e781cb707d8d2a20c725b28be5404
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50077153"
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
La classe, derivata da `IRowsetImpl`.

*RowsetInterface*<br/>
Una classe derivata da `IRowsetImpl`.

*RowClass*<br/>
Unità di archiviazione per il `HROW`.

*MapClass*<br/>
Unità di archiviazione per tutti gli handle di riga utilizzato dal provider.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[AddRefRows](#addrefrows)|Aggiunge un conteggio dei riferimenti a un handle di riga esistente.|
|[CreateRow](#createrow)|Chiamata eseguita dal [GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md) allocare un nuovo `HROW`. Non chiamato direttamente dall'utente.|
|[GetData](#getdata)|Recupera i dati dalla copia del set di righe della riga.|
|[GetDBStatus](#getdbstatus)|Restituisce lo stato per il campo specificato.|
|[GetNextRows](#getnextrows)|Recupera le righe in sequenza, memorizzando la posizione precedente.|
|[IRowsetImpl](#irowsetimpl)|Costruttore. Non chiamato direttamente dall'utente.|
|[RefRows](#refrows)|Chiamata eseguita dal [AddRefRows](../../data/oledb/irowsetimpl-addrefrows.md) e [ReleaseRows](../../data/oledb/irowsetimpl-releaserows.md). Non chiamato direttamente dall'utente.|
|[ReleaseRows](#releaserows)|Rilascia le righe.|
|[Esecuzione di RestartPosition](#restartposition)|Riposiziona la posizione del recupero successivo sulla propria posizione iniziale; vale a dire la posizione quando il set di righe è stato inizialmente creato.|
|[SetDBStatus](#setdbstatus)|Imposta i flag di stato per il campo specificato.|

### <a name="data-members"></a>Membri di dati

|||
|-|-|
|[m_bCanFetchBack](#bcanfetchback)|Indica se un provider supporta il recupero all'indietro.|
|[m_bCanScrollBack](#bcanscrollback)|Indica se un provider può avere scorrimento relativo del cursore con le versioni precedenti.|
|[m_bReset](#breset)|Indica se un provider ha reimpostato la posizione del cursore. Ciò ha un significato speciale quando lo scorrimento all'indietro o il recupero all'indietro nella [GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md).|
|[m_iRowset](#irowset)|Un indice al set di righe, che rappresenta il cursore.|
|[m_rgRowHandles](#rgrowhandles)|Elenco di handle di riga.|

## <a name="remarks"></a>Note

[IRowset](/previous-versions/windows/desktop/ms720986) è l'interfaccia di base del set di righe.

## <a name="addrefrows"></a> IRowsetImpl:: Addrefrows

Aggiunge un conteggio dei riferimenti a un handle di riga esistente.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(AddRefRows )(DBCOUNTITEM cRows,
   const HROW rghRows[],
   DBREFCOUNT rgRefCounts[],
   DBROWSTATUS rgRowStatus[]);
```

#### <a name="parameters"></a>Parametri

Visualizzare [IRowset:: Addrefrows](/previous-versions/windows/desktop/ms719619) nel *riferimento per programmatori OLE DB*.

## <a name="createrow"></a> IRowsetImpl:: CreateRow

Chiamato da un metodo di supporto [GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md) allocare un nuovo `HROW`.

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
Passato un riferimento all'utente che indica il numero di righe creati.

*rgRows*<br/>
Matrice di `HROW`s restituito al chiamante con l'handle di riga appena creata.

### <a name="remarks"></a>Note

Se la riga non esiste, questo metodo chiama [AddRefRows](../../data/oledb/irowsetimpl-addrefrows.md) e restituisce. In caso contrario, alloca una nuova istanza della variabile RowClass modello e lo aggiunge al [m_rgRowHandles](../../data/oledb/irowsetimpl-m-rgrowhandles.md).

## <a name="getdata"></a> IRowsetImpl:: GetData

Recupera i dati dalla copia del set di righe della riga.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(GetData )(HROW hRow,
   HACCESSOR hAccessor,
   void* pDstData);
```

#### <a name="parameters"></a>Parametri

Visualizzare [IRowset:: GetData](/previous-versions/windows/desktop/ms716988) nel *riferimento per programmatori OLE DB*.

Alcuni parametri corrispondono ai *riferimento per programmatori OLE DB* i parametri dei nomi diversi, descritte nelle `IRowset::GetData`:

|Parametri di modelli OLE DB|*Riferimento per programmatori OLE DB* parametri|
|--------------------------------|------------------------------------------------|
|*pDstData*|*pData*|

### <a name="remarks"></a>Note

Gestisce anche la conversione dei dati mediante la conversione di dati OLE DB DLL.

## <a name="getdbstatus"></a> IRowsetImpl:: GetDBStatus

Restituisce i flag di stato DBSTATUS per il campo specificato.

### <a name="syntax"></a>Sintassi

```cpp
virtual DBSTATUS GetDBStatus(RowClass* currentRow,
   ATLCOLUMNINFO* columnNames);
```

#### <a name="parameters"></a>Parametri

*TableRow*<br/>
[in] La riga corrente.

*nomi di colonna*<br/>
[in] La colonna per cui viene richiesto lo stato.

### <a name="return-value"></a>Valore restituito

Il [DBSTATUS](/previous-versions/windows/desktop/ms722617) flag per la colonna.

## <a name="getnextrows"></a> IRowsetImpl:: GetNextRows

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

Visualizzare [IRowset:: GetNextRows](/previous-versions/windows/desktop/ms709827) nel *riferimento per programmatori OLE DB*.

## <a name="irowsetimpl"></a> IRowsetImpl:: IRowsetImpl

Costruttore.

### <a name="syntax"></a>Sintassi

```cpp
IRowsetImpl();
```

### <a name="remarks"></a>Note

In genere non occorre chiamare direttamente questo metodo.

## <a name="refrows"></a> IRowsetImpl:: Refrows

Chiamata eseguita dal [AddRefRows](../../data/oledb/irowsetimpl-addrefrows.md) e [ReleaseRows](../../data/oledb/irowsetimpl-releaserows.md) per incrementare o rilasciare un conteggio dei riferimenti a un handle di riga esistente.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT RefRows(DBCOUNTITEM cRows,
   const HROWrghRows[],
   DBREFCOUNT rgRefCounts[],
   DBROWSTATUS rgRowStatus[],
   BOOL bAdd);
```

#### <a name="parameters"></a>Parametri

Visualizzare [IRowset:: Addrefrows](/previous-versions/windows/desktop/ms719619) nel *riferimento per programmatori OLE DB*.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

## <a name="releaserows"></a> IRowsetImpl:: ReleaseRows

Rilascia le righe.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(ReleaseRows )(DBCOUNTITEM cRows,
   const HROW rghRows[],
   DBROWOPTIONS rgRowOptions[],
   DBREFCOUNT rgRefCounts[],
   DBROWSTATUS rgRowStatus[]);
```

#### <a name="parameters"></a>Parametri

Visualizzare [:: ReleaseRows](/previous-versions/windows/desktop/ms719771) nel *riferimento per programmatori OLE DB*.

## <a name="restartposition"></a> IRowsetImpl:: RestartPosition

Riposiziona la posizione del recupero successivo sulla propria posizione iniziale; vale a dire la posizione quando il set di righe è stato inizialmente creato.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(RestartPosition )(HCHAPTER /* hReserved */);
```

#### <a name="parameters"></a>Parametri

Visualizzare [IRowset:: RestartPosition](/previous-versions/windows/desktop/ms712877) nel *riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Note

La posizione del set di righe è indefinita finché `GetNextRow` viene chiamato. È possibile spostare le versioni precedenti un rowet chiamando `RestartPosition` e il recupero o lo scorrimento all'indietro.

## <a name="setdbstatus"></a> IRowsetImpl:: SetDBStatus

Imposta i flag di stato DBSTATUS per il campo specificato.

### <a name="syntax"></a>Sintassi

```cpp
virtual HRESULT SetDBStatus(DBSTATUS* statusFlags,
   RowClass* currentRow,
   ATLCOLUMNINFO* columnInfo);
```

#### <a name="parameters"></a>Parametri

*statusFlags*<br/>
Il [DBSTATUS](/previous-versions/windows/desktop/ms722617) flag da impostare per la colonna.

*TableRow*<br/>
La riga corrente.

*columnInfo*<br/>
La colonna per cui viene impostato sullo stato.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Il provider esegue l'override di questa funzione per fornire un'elaborazione speciale per DBSTATUS_S_ISNULL e DBSTATUS_S_DEFAULT.

## <a name="bcanfetchback"></a> IRowsetImpl:: M_bcanfetchback

Indica se un provider supporta il recupero all'indietro.

### <a name="syntax"></a>Sintassi

```cpp
unsigned m_bCanFetchBack:1;
```

### <a name="remarks"></a>Note

Collegato per il `DBPROP_CANFETCHBACKWARDS` proprietà nel `DBPROPSET_ROWSET` gruppo. Il provider deve supportare `DBPROP_CANFETCHBACKWARDS` per `m_bCanFetchBackwards` essere **true**.

## <a name="bcanscrollback"></a> IRowsetImpl:: M_bcanscrollback

Indica se un provider può avere scorrimento relativo del cursore con le versioni precedenti.

### <a name="syntax"></a>Sintassi

```cpp
unsigned  m_bCanScrollBack:1;
```

### <a name="remarks"></a>Note

Collegato per il `DBPROP_CANSCROLLBACKWARDS` proprietà nel `DBPROPSET_ROWSET` gruppo. Il provider deve supportare `DBPROP_CANSCROLLBACKWARDS` per `m_bCanFetchBackwards` essere **true**.

## <a name="breset"></a> IRowsetImpl:: M_breset

Un flag di bit utilizzato per determinare se la posizione del cursore è definita nel set di righe.

### <a name="syntax"></a>Sintassi

```cpp
unsigned m_bReset:1;
```

### <a name="remarks"></a>Note

Se il consumer chiama [GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md) con un valore negativo `lOffset` oppure *cRows* e `m_bReset` è impostato su true, `GetNextRows` sposta alla fine del set di righe. Se `m_bReset` è false, il consumer riceve un codice di errore, in conformità con la specifica OLE DB. Il `m_bReset` flag viene impostato su **true** quando viene creato il set di righe e quando il consumer chiama [IRowsetImpl:: RestartPosition](../../data/oledb/irowsetimpl-restartposition.md). Viene impostato **false** quando si chiama `GetNextRows`.

## <a name="irowset"></a> IRowsetImpl:: M_irowset

Un indice al set di righe, che rappresenta il cursore.

### <a name="syntax"></a>Sintassi

```cpp
DBROWOFFSET m_iRowset;
```

## <a name="rgrowhandles"></a> IRowsetImpl:: M_rgrowhandles

Una mappa degli handle di riga attualmente contenuti dal provider in risposta a `GetNextRows`.

### <a name="syntax"></a>Sintassi

```cpp
MapClass m_rgRowHandles;
```

### <a name="remarks"></a>Note

Gli handle di riga vengono rimosse mediante la chiamata `ReleaseRows`. Vedere le [IRowsetImpl overview](../../data/oledb/irowsetimpl-class.md) per la definizione dei *MapClass*.

## <a name="see-also"></a>Vedere anche

[Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
[Classe CSimpleRow](../../data/oledb/csimplerow-class.md)