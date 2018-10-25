---
title: Classe IRowsetLocateImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IRowsetLocateImpl
- ATL.IRowsetLocateImpl.Compare
- IRowsetLocateImpl::Compare
- IRowsetLocateImpl.Compare
- ATL::IRowsetLocateImpl::Compare
- GetRowsAt
- IRowsetLocateImpl.GetRowsAt
- ATL::IRowsetLocateImpl::GetRowsAt
- IRowsetLocateImpl::GetRowsAt
- ATL.IRowsetLocateImpl.GetRowsAt
- IRowsetLocateImpl::GetRowsByBookmark
- IRowsetLocateImpl.GetRowsByBookmark
- GetRowsByBookmark
- IRowsetLocateImpl::Hash
- IRowsetLocateImpl.Hash
- m_rgBookmarks
- IRowsetLocateImpl::m_rgBookmarks
- ATL.IRowsetLocateImpl.m_rgBookmarks
- ATL::IRowsetLocateImpl::m_rgBookmarks
- IRowsetLocateImpl.m_rgBookmarks
dev_langs:
- C++
helpviewer_keywords:
- providers, bookmarks
- IRowsetLocateImpl class
- bookmarks, OLE DB
- Compare method
- GetRowsAt method
- GetRowsByBookmark method
- Hash method
- m_rgbookmarks
ms.assetid: a8aa3149-7ce8-4976-a680-2da193fd3234
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 35ebe1a4534fa1c3a738d84e3e6dd7037254fd49
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50059402"
---
# <a name="irowsetlocateimpl-class"></a>Classe IRowsetLocateImpl

Implementa OLE DB [IRowsetLocate](/previous-versions/windows/desktop/ms721190) interfaccia, che recupera righe arbitrarie da un set di righe.

## <a name="syntax"></a>Sintassi

```cpp
template <
   class T,
   class RowsetInterface,
   class RowClass = CSimpleRow,
   class MapClass = CAtlMap < RowClass::KeyType, RowClass* >,
   class BookmarkKeyType = LONG,
   class BookmarkType = LONG,
   class BookmarkMapClass = CAtlMap < RowClass::KeyType, RowClass* >>
class ATL_NO_VTABLE IRowsetLocateImpl : public IRowsetImpl<
       T,
       RowsetInterface,
       RowClass,
       MapClass>
```

### <a name="parameters"></a>Parametri

*T*<br/>
Una classe derivata da `IRowsetLocateImpl`.

*RowsetInterface*<br/>
Una classe derivata da `IRowsetImpl`.

*RowClass*<br/>
L'unità di archiviazione per il `HROW`.

*MapClass*<br/>
L'unità di archiviazione per tutti gli handle di riga utilizzato dal provider.

*BookmarkKeyType*<br/>
Il tipo del segnalibro, ad esempio un valore LONG o una stringa. I segnalibri ordinari devono avere una lunghezza di almeno due byte. (A byte singolo è riservato per OLE DB [segnalibri standard](/previous-versions/windows/desktop/ms712954)`DBBMK_FIRST`, `DBBMK_LAST`, e `DBBMK_INVALID`.)

*BookmarkType*<br/>
Il meccanismo di mapping per la gestione delle relazioni nei dati segnalibro.

*BookmarkMapClass*<br/>
L'unità di archiviazione per tutti gli handle di riga mantenuto dal segnalibro.

## <a name="requirements"></a>Requisiti

**Intestazione**: Atldb. h

## <a name="members"></a>Membri

### <a name="interface-methods"></a>Metodi di interfaccia

|||
|-|-|
|[Compare](#compare)|Confronta due segnalibri.|
|[GetRowsAt](#getrowsat)|Recupera le righe che iniziano con la riga specificata da un offset dal segnalibro.|
|[GetRowsByBookmark](#getrowsbybookmark)|Recupera le righe che soddisfano i segnalibri specificati.|
|[hash](#hash)|Restituisce l'hashing i valori per i segnalibri specificati.|

### <a name="data-members"></a>Membri di dati

|||
|-|-|
|[m_rgBookmarks](#rgbookmarks)|Matrice dei segnalibri.|

## <a name="remarks"></a>Note

`IRowsetLocateImpl` è l'implementazione di modelli OLE DB del [IRowsetLocate](/previous-versions/windows/desktop/ms721190) interfaccia. `IRowsetLocate` viene usato per recuperare righe arbitrarie da un set di righe. Un set di righe che non implementa questa interfaccia è un `sequential` set di righe. Quando si `IRowsetLocate` è presente in un set di righe, colonna 0 è il segnalibro per le righe, leggendo questo articolo si otterrà un valore di segnalibro che può essere utilizzato per modificare la posizione alla stessa riga.

`IRowsetLocateImpl` viene utilizzato per implementare il supporto di segnalibro nel provider. I segnalibri sono segnaposti (indici in un set di righe) che consentono al consumer di tornare rapidamente su una riga, che consente l'accesso ad alta velocità per i dati. Il provider determina ciò che i segnalibri possono in modo univoco una riga. Usando `IRowsetLocateImpl` metodi, è possibile confrontare i segnalibri, fetch righe di offset, fetch righe tramite segnalibro e restituiscono valori hash per i segnalibri.

Per supportare i segnalibri di OLE DB in un set di righe, verificare il set di righe ereditano da questa classe.

Per informazioni sull'implementazione di supporto per segnalibro, vedere [Provider di supporto per i segnalibri](../../data/oledb/provider-support-for-bookmarks.md) nel *Guida per programmatori Visual C++* e [segnalibri](/previous-versions/windows/desktop/ms709728) nel *Riferimento per programmatori OLE DB* in Platform SDK.

## <a name="compare"></a> IRowsetLocateImpl:: compare

Confronta due segnalibri.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (Compare )(HCHAPTER /* hReserved */,
   DBBKMARK cbBookmark1,
   const BYTE* pBookmark1,
   DBBKMARK cbBookmark2,
   const BYTE* pBookmark2,
   DBCOMPARE* pComparison);
```

#### <a name="parameters"></a>Parametri

Visualizzare [IRowsetLocate::Compare](/previous-versions/windows/desktop/ms709539) nel *riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Note

Uno dei segnalibri possono essere uno standard definite da OLE DB [standard segnalibro](/previous-versions/windows/desktop/ms712954) (`DBBMK_FIRST`, `DBBMK_LAST`, o `DBBMK_INVALID`). Il valore restituito in `pComparison` indica la relazione tra i due segnalibri:

- DBCOMPARE_LT (`cbBookmark1` viene prima `cbBookmark2`.)

- DBCOMPARE_EQ (`cbBookmark1` è uguale a `cbBookmark2`.)

- DBCOMPARE_GT (`cbBookmark1` dopo `cbBookmark2`.)

- DBCOMPARE_NE (i segnalibri sono uguali e non sono ordinati).

- DBCOMPARE_NOTCOMPARABLE (i segnalibri non possono essere confrontati).

## <a name="getrowsat"></a> IRowsetLocateImpl:: GetRowsAt

Recupera le righe che iniziano con la riga specificata da un offset dal segnalibro.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (GetRowsAt )(HWATCHREGION /* hReserved1 */,
   HCHAPTER hReserved2,
   DBBKMARK cbBookmark,
   const BYTE* pBookmark,
   DBROWOFFSET lRowsOffset,
   DBROWCOUNT cRows,
   DBCOUNTITEM* pcRowsObtained,
   HROW** prghRows);
```

#### <a name="parameters"></a>Parametri

Visualizzare [IRowsetLocate:: GetRowsAt](/previous-versions/windows/desktop/ms723031) nel *riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Note

Per recuperare dalla posizione del cursore in alternativa, usare [IRowset::GetRowsAt](/previous-versions/windows/desktop/ms723031).

`IRowsetLocateImpl::GetRowsAt` non modifica la posizione del cursore.

## <a name="getrowsbybookmark"></a> IRowsetLocateImpl:: Getrowsbybookmark

Recupera uno o più righe che soddisfano i segnalibri specificati.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (GetRowsByBookmark )(HCHAPTER /* hReserved */,
   DBCOUNTITEM cRows,
   const DBBKMARK rgcbBookmarks[],
   const BYTE* rgpBookmarks,
   HROW rghRows[],
   DBROWSTATUS* rgRowStatus[]);
```

#### <a name="parameters"></a>Parametri

*hReserved*<br/>
[in] Corrisponde a *hChapter* parametro per [IRowsetLocate:: Getrowsbybookmark](/previous-versions/windows/desktop/ms725420).

Per altri parametri, vedere [IRowsetLocate:: Getrowsbybookmark](/previous-versions/windows/desktop/ms725420) nel *riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Note

Il segnalibro può essere un valore definire o OLE DB [segnalibri standard](/previous-versions/windows/desktop/ms712954) (`DBBMK_FIRST` o `DBBMK_LAST`). non modifica la posizione del cursore.

## <a name="hash"></a> IRowsetLocateImpl:: hash

Restituisce l'hashing i valori per i segnalibri specificati.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD (Hash )(HCHAPTER /* hReserved */,
   DBBKMARK cbBookmarks,
   const DBBKMARK* rgcbBookmarks[],
   const BYTE* rgpBookmarks[],
   DBHASHVALUE rgHashValues[],
   DBROWSTATUS rgBookmarkStatus[]);
```

#### <a name="parameters"></a>Parametri

*hReserved*<br/>
[in] Corrisponde a *hChapter* parametro per [IRowsetLocate::Hash](/previous-versions/windows/desktop/ms709697).

Per altri parametri, vedere [IRowsetLocate::Hash](/previous-versions/windows/desktop/ms709697) nel *riferimento per programmatori OLE DB*.

## <a name="rgbookmarks"></a> IRowsetLocateImpl:: M_rgbookmarks

Matrice dei segnalibri.

### <a name="syntax"></a>Sintassi

```cpp
CAtlArray<DBROWCOUNT> m_rgBookmarks;
```

## <a name="see-also"></a>Vedere anche

[Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
[IRowsetLocate:IRowset](/previous-versions/windows/desktop/ms721190)
[supporto dei bookmark nel Provider](../../data/oledb/provider-support-for-bookmarks.md)<br/>
[Segnalibri](/previous-versions/windows/desktop/ms709728)