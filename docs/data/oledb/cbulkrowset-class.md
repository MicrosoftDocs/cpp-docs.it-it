---
title: Classe CBulkRowset
ms.date: 11/04/2016
f1_keywords:
- ATL::CBulkRowset
- ATL.CBulkRowset
- ATL::CBulkRowset<TAccessor>
- CBulkRowset
- ATL.CBulkRowset<TAccessor>
- CBulkRowset::AddRefRows
- CBulkRowset.AddRefRows
- ATL.CBulkRowset<TAccessor>.AddRefRows
- ATL::CBulkRowset::AddRefRows
- CBulkRowset<TAccessor>::AddRefRows
- ATL.CBulkRowset.AddRefRows
- ATL::CBulkRowset<TAccessor>::AddRefRows
- ATL.CBulkRowset<TAccessor>.CBulkRowset
- ATL::CBulkRowset::CBulkRowset
- CBulkRowset.CBulkRowset
- CBulkRowset::CBulkRowset
- ATL.CBulkRowset.CBulkRowset
- ATL::CBulkRowset<TAccessor>::CBulkRowset
- CBulkRowset<TAccessor>::CBulkRowset
- ATL.CBulkRowset.MoveFirst
- CBulkRowset<TAccessor>.MoveFirst
- ATL.CBulkRowset<TAccessor>.MoveFirst
- ATL::CBulkRowset::MoveFirst
- ATL::CBulkRowset<TAccessor>::MoveFirst
- CBulkRowset::MoveFirst
- CBulkRowset<TAccessor>::MoveFirst
- CBulkRowset.MoveFirst
- CBulkRowset.MoveLast
- ATL.CBulkRowset.MoveLast
- ATL::CBulkRowset<TAccessor>::MoveLast
- CBulkRowset::MoveLast
- CBulkRowset<TAccessor>.MoveLast
- ATL::CBulkRowset::MoveLast
- ATL.CBulkRowset<TAccessor>.MoveLast
- CBulkRowset<TAccessor>::MoveLast
- ATL.CBulkRowset<TAccessor>.MoveNext
- ATL::CBulkRowset::MoveNext
- CBulkRowset::MoveNext
- ATL.CBulkRowset.MoveNext
- CBulkRowset.MoveNext
- ATL::CBulkRowset<TAccessor>::MoveNext
- CBulkRowset<TAccessor>.MoveNext
- CBulkRowset<TAccessor>::MoveNext
- CBulkRowset::MovePrev
- CBulkRowset<TAccessor>::MovePrev
- ATL::CBulkRowset<TAccessor>::MovePrev
- CBulkRowset<TAccessor>.MovePrev
- ATL::CBulkRowset::MovePrev
- CBulkRowset.MovePrev
- ATL.CBulkRowset.MovePrev
- ATL.CBulkRowset<TAccessor>.MovePrev
- CBulkRowset<TAccessor>::MoveToBookmark
- CBulkRowset.MoveToBookmark
- ATL.CBulkRowset.MoveToBookmark
- CBulkRowset::MoveToBookmark
- ATL::CBulkRowset<TAccessor>::MoveToBookmark
- ATL::CBulkRowset::MoveToBookmark
- CBulkRowset.MoveToRatio
- ATL::CBulkRowset::MoveToRatio
- CBulkRowset::MoveToRatio
- ATL.CBulkRowset<TAccessor>.MoveToRatio
- ATL::CBulkRowset<TAccessor>::MoveToRatio
- ATL.CBulkRowset.MoveToRatio
- CBulkRowset<TAccessor>::MoveToRatio
- ATL.CBulkRowset<TAccessor>.ReleaseRows
- ATL::CBulkRowset<TAccessor>::ReleaseRows
- ATL.CBulkRowset.ReleaseRows
- CBulkRowset<TAccessor>::ReleaseRows
- ATL::CBulkRowset::ReleaseRows
- CBulkRowset::ReleaseRows
- CBulkRowset.ReleaseRows
- ATL.CBulkRowset.SetRows
- CBulkRowset::SetRows
- CBulkRowset<TAccessor>.SetRows
- ATL.CBulkRowset<TAccessor>.SetRows
- CBulkRowset<TAccessor>::SetRows
- ATL::CBulkRowset<TAccessor>::SetRows
- ATL::CBulkRowset::SetRows
- CBulkRowset.SetRows
- SetRows
helpviewer_keywords:
- CBulkRowset class
- AddRefRows method
- CBulkRowset class, constructor
- MoveFirst method
- MoveLast method
- MoveNext method
- MovePrev method
- MoveToBookmark method
- MoveToRatio method
- ReleaseRows method
- SetRows method
ms.assetid: c6bde426-c543-4022-a98a-9519d9e2ae59
ms.openlocfilehash: e66a183c7bbafa16b3aefea8da1472255b507468
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80212123"
---
# <a name="cbulkrowset-class"></a>Classe CBulkRowset

Recupera e modifica le righe in modo che funzionino sui dati in blocco recuperando più handle di riga con una singola chiamata.

## <a name="syntax"></a>Sintassi

```cpp
template <class TAccessor>
class CBulkRowset : public CRowset<TAccessor>
```

### <a name="parameters"></a>Parametri

*TAccessor*<br/>
Classe della funzione di accesso.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[AddRefRows](#addrefrows)|Incrementa il conteggio dei riferimenti.|
|[CBulkRowset](#cbulkrowset)|Costruttore.|
|[MoveFirst](#movefirst)|Recupera la prima riga di dati, se necessario, eseguendo un nuovo recupero bulk.|
|[MoveLast](#movelast)|Passa all'ultima riga.|
|[MoveNext](#movenext)|Recupera la riga di dati successiva.|
|[MovePrev](#moveprev)|Passa alla riga precedente.|
|[MoveToBookmark](#movetobookmark)|Recupera la riga contrassegnata da un segnalibro o dalla riga in corrispondenza di un offset specificato da tale segnalibro.|
|[MoveToRatio](#movetoratio)|Recupera le righe a partire da una posizione frazionaria nel set di righe.|
|[ReleaseRows](#releaserows)|Imposta la riga corrente (`m_nCurrentRow`) su zero e rilascia tutte le righe.|
|[SetRows](#setrows)|Imposta il numero di handle di riga che devono essere recuperati da una sola chiamata.|

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato l'utilizzo della classe `CBulkRowset`.

[!code-cpp[NVC_OLEDB_Consumer#1](../../data/oledb/codesnippet/cpp/cbulkrowset-class_1.cpp)]

## <a name="cbulkrowsetaddrefrows"></a><a name="addrefrows"></a>CBulkRowset:: AddRefRows

Chiama [IRowset:: AddRefRows](/previous-versions/windows/desktop/ms719619(v=vs.85)) per incrementare il conteggio dei riferimenti per tutte le righe attualmente recuperate dal set di righe BULK.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT AddRefRows() throw();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="cbulkrowsetcbulkrowset"></a><a name="cbulkrowset"></a>CBulkRowset:: CBulkRowset

Crea un nuovo oggetto `CBulkRowset` e imposta il numero di righe predefinito su 10.

### <a name="syntax"></a>Sintassi

```cpp
CBulkRowset();
```

## <a name="cbulkrowsetmovefirst"></a><a name="movefirst"></a>CBulkRowset:: MoveFirst

Recupera la prima riga di dati.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT MoveFirst() throw();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="cbulkrowsetmovelast"></a><a name="movelast"></a>CBulkRowset:: MoveLast

Passa all'ultima riga.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT MoveLast() throw();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="cbulkrowsetmovenext"></a><a name="movenext"></a>CBulkRowset:: MoveNext

Recupera la riga di dati successiva.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT MoveNext() throw();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard. Quando è stata raggiunta la fine del set di righe, restituisce DB_S_ENDOFROWSET.

## <a name="cbulkrowsetmoveprev"></a><a name="moveprev"></a>CBulkRowset:: MovePrev

Passa alla riga precedente.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT MovePrev() throw();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="cbulkrowsetmovetobookmark"></a><a name="movetobookmark"></a>CBulkRowset:: MoveToBookmark

Recupera la riga contrassegnata da un segnalibro o dalla riga in corrispondenza di un offset specificato (*lSkip*) dal segnalibro.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT MoveToBookmark(const CBookmarkBase& bookmark,
   DBCOUNTITEM lSkip = 0) throw();
```

#### <a name="parameters"></a>Parametri

*Segnalibro*<br/>
in Segnalibro che contrassegna la posizione da cui si desidera recuperare i dati.

*lSkip*<br/>
in Numero totale di righe dal segnalibro alla riga di destinazione. Se *lSkip* è zero, la prima riga recuperata è la riga con segnalibro. Se *lSkip* è 1, la prima riga recuperata è la riga successiva alla riga con segnalibro. Se *lSkip* è-1, la prima riga recuperata è la riga prima della riga con segnalibro.

### <a name="return-value"></a>Valore restituito

Vedere [IRowset:: GetData](/previous-versions/windows/desktop/ms716988(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="cbulkrowsetmovetoratio"></a><a name="movetoratio"></a>CBulkRowset:: MoveToRatio

Recupera le righe a partire da una posizione frazionaria nel set di righe.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT MoveToRatio(DBCOUNTITEM nNumerator,
   DBCOUNTITEM nDenominator)throw();
```

#### <a name="parameters"></a>Parametri

*nNumerator*<br/>
in Numeratore utilizzato per determinare la posizione frazionaria da cui recuperare i dati.

*nDenominator*<br/>
in Denominatore utilizzato per determinare la posizione frazionaria da cui recuperare i dati.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

`MoveToRatio` recupera approssimativamente le righe in base alla formula seguente:

`(nNumerator *  RowsetSize ) / nDenominator`

Dove `RowsetSize` è la dimensione del set di righe, misurata in righe. L'accuratezza di questa formula dipende dal provider specifico. Per informazioni dettagliate, vedere [IRowsetScroll:: GetRowsAtRatio](/previous-versions/windows/desktop/ms709602(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="cbulkrowsetreleaserows"></a><a name="releaserows"></a>CBulkRowset:: ReleaseRows

Chiama [IRowset:: ReleaseRows](/previous-versions/windows/desktop/ms719771(v=vs.85)) per decrementare il conteggio dei riferimenti per tutte le righe attualmente recuperate dal set di righe BULK.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT ReleaseRows() throw();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="cbulkrowsetsetrows"></a><a name="setrows"></a>CBulkRowset:: GetRows

Imposta il numero di handle di riga recuperati da ogni chiamata.

### <a name="syntax"></a>Sintassi

```cpp
void SetRows(DBROWCOUNT nRows) throw();
```

#### <a name="parameters"></a>Parametri

*nRows*<br/>
in Nuova dimensione del set di righe (numero di righe).

### <a name="remarks"></a>Osservazioni

Se si chiama questa funzione, è necessario che sia prima dell'apertura del set di righe.

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
