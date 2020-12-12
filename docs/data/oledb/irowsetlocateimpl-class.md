---
description: 'Altre informazioni su: classe IRowsetLocateImpl'
title: Classe IRowsetLocateImpl
ms.date: 11/04/2016
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
ms.openlocfilehash: 5d723fbc1ff85ce2c5b50bb5eff53ba3771751fc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97287060"
---
# <a name="irowsetlocateimpl-class"></a>Classe IRowsetLocateImpl

Implementa l'interfaccia OLE DB [IRowsetLocate](/previous-versions/windows/desktop/ms721190(v=vs.85)) , che recupera le righe arbitrarie da un set di righe.

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
Classe derivata da `IRowsetLocateImpl` .

*RowsetInterface*<br/>
Classe derivata da `IRowsetImpl` .

*RowClass*<br/>
Unità di archiviazione per `HROW` .

*MapClass*<br/>
Unità di archiviazione per tutti gli handle di riga utilizzati dal provider.

*BookmarkKeyType*<br/>
Tipo di segnalibro, ad esempio LONG o String. I segnalibri ordinari devono avere una lunghezza di almeno due byte. La lunghezza a byte singolo è riservata ai [segnalibri OLE DB standard](/previous-versions/windows/desktop/ms712954(v=vs.85)) `DBBMK_FIRST` , `DBBMK_LAST` e `DBBMK_INVALID` .

*BookmarkType*<br/>
Meccanismo di mapping per la gestione delle relazioni da segnalibro a dati.

*BookmarkMapClass*<br/>
Unità di archiviazione per tutti gli handle di riga contenuti nel segnalibro.

## <a name="requirements"></a>Requisiti

**Intestazione**: Atldb. h

## <a name="members"></a>Membri

### <a name="interface-methods"></a>Metodi di interfaccia

| Nome | Description |
|-|-|
|[Confronta](#compare)|Confronta due segnalibri.|
|[GetRowsAt](#getrowsat)|Recupera le righe che iniziano con la riga specificata da un offset da un segnalibro.|
|[GetRowsByBookmark](#getrowsbybookmark)|Recupera le righe che corrispondono ai segnalibri specificati.|
|[Hash](#hash)|Restituisce i valori hash per i segnalibri specificati.|

### <a name="data-members"></a>Membri dei dati

| Nome | Description |
|-|-|
|[m_rgBookmarks](#rgbookmarks)|Matrice di segnalibri.|

## <a name="remarks"></a>Commenti

`IRowsetLocateImpl` è l'implementazione dei modelli di OLE DB dell'interfaccia [IRowsetLocate](/previous-versions/windows/desktop/ms721190(v=vs.85)) . `IRowsetLocate` viene utilizzato per recuperare righe arbitrarie da un set di righe. Un set di righe che non implementa questa interfaccia è un `sequential` set di righe. Quando `IRowsetLocate` è presente in un set di righe, la colonna 0 è il segnalibro per le righe. la lettura di questa colonna otterrà un valore di segnalibro che può essere utilizzato per riposizionare la stessa riga.

`IRowsetLocateImpl` viene usato per implementare il supporto di segnalibri nei provider. I segnalibri sono segnaposto (indici su un set di righe) che consentono al consumer di tornare rapidamente a una riga, consentendo un accesso ad alta velocità ai dati. Il provider determina quali segnalibri possono identificare una riga in modo univoco. Usando `IRowsetLocateImpl` i metodi, è possibile confrontare i segnalibri, recuperare le righe in base all'offset, recuperare le righe in base al segnalibro e restituire i valori hash per i segnalibri.

Per supportare OLE DB segnalibri in un set di righe, fare in modo che il set di righe erediti da questa classe.

Per informazioni sull'implementazione del supporto per i segnalibri, vedere [supporto del provider per i segnalibri](../../data/oledb/provider-support-for-bookmarks.md) nella *guida del programmatore Visual C++* e [segnalibri](/previous-versions/windows/desktop/ms709728(v=vs.85)) nella guida di *riferimento per programmatori OLE DB* in Platform SDK.

## <a name="irowsetlocateimplcompare"></a><a name="compare"></a> IRowsetLocateImpl:: compare

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

Vedere [IRowsetLocate:: compare](/previous-versions/windows/desktop/ms709539(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Commenti

Uno dei segnalibri può essere un [segnalibro standard](/previous-versions/windows/desktop/ms712954(v=vs.85)) definito da OLE DB standard ( `DBBMK_FIRST` , `DBBMK_LAST` o `DBBMK_INVALID` ). Il valore restituito in `pComparison` indica la relazione tra i due segnalibri:

- DBCOMPARE_LT ( `cbBookmark1` è precedente a `cbBookmark2` .)

- DBCOMPARE_EQ ( `cbBookmark1` è uguale a `cbBookmark2` .)

- DBCOMPARE_GT ( `cbBookmark1` è successiva a `cbBookmark2` .)

- DBCOMPARE_NE (i segnalibri sono uguali e non ordinati).

- DBCOMPARE_NOTCOMPARABLE (i segnalibri non possono essere confrontati).

## <a name="irowsetlocateimplgetrowsat"></a><a name="getrowsat"></a> IRowsetLocateImpl:: GetRowsAt

Recupera le righe che iniziano con la riga specificata da un offset da un segnalibro.

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

Vedere [IRowsetLocate:: GetRowsAt](/previous-versions/windows/desktop/ms723031(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Commenti

Per recuperare dalla posizione del cursore, utilizzare invece [IRowset:: GetRowsAt](/previous-versions/windows/desktop/ms723031(v=vs.85)).

`IRowsetLocateImpl::GetRowsAt` non modifica la posizione del cursore.

## <a name="irowsetlocateimplgetrowsbybookmark"></a><a name="getrowsbybookmark"></a> IRowsetLocateImpl:: GetRowsByBookmark

Recupera una o più righe che corrispondono ai segnalibri specificati.

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
in Corrisponde al parametro *hChapter* a [IRowsetLocate:: GetRowsByBookmark](/previous-versions/windows/desktop/ms725420(v=vs.85)).

Per altri parametri, vedere [IRowsetLocate:: GetRowsByBookmark](/previous-versions/windows/desktop/ms725420(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Commenti

Il segnalibro può essere un valore definito dall'utente o un OLE DB [segnalibri standard](/previous-versions/windows/desktop/ms712954(v=vs.85)) ( `DBBMK_FIRST` o `DBBMK_LAST` ). Non modifica la posizione del cursore.

## <a name="irowsetlocateimplhash"></a><a name="hash"></a> IRowsetLocateImpl:: hash

Restituisce i valori hash per i segnalibri specificati.

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
in Corrisponde al parametro *hChapter* a [IRowsetLocate:: hash](/previous-versions/windows/desktop/ms709697(v=vs.85)).

Per altri parametri, vedere [IRowsetLocate:: hash](/previous-versions/windows/desktop/ms709697(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="irowsetlocateimplm_rgbookmarks"></a><a name="rgbookmarks"></a> IRowsetLocateImpl:: m_rgBookmarks

Matrice di segnalibri.

### <a name="syntax"></a>Sintassi

```cpp
CAtlArray<DBROWCOUNT> m_rgBookmarks;
```

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
[IRowsetLocate: IRowset](/previous-versions/windows/desktop/ms721190(v=vs.85)) 
 [Supporto del provider per i segnalibri](../../data/oledb/provider-support-for-bookmarks.md)<br/>
[Bookmarks](/previous-versions/windows/desktop/ms709728(v=vs.85))
