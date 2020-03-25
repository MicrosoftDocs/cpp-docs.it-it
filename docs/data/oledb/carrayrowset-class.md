---
title: Classe CArrayRowset
ms.date: 11/04/2016
f1_keywords:
- ATL.CArrayRowset<TAccessor>
- ATL.CArrayRowset
- CArrayRowset
- ATL::CArrayRowset
- ATL::CArrayRowset<TAccessor>
- ATL::CArrayRowset::CArrayRowset
- CArrayRowset.CArrayRowset
- ATL.CArrayRowset.CArrayRowset
- ATL.CArrayRowset<TAccessor>.CArrayRowset
- CArrayRowset::CArrayRowset
- CArrayRowset<TAccessor>::CArrayRowset
- ATL::CArrayRowset<TAccessor>::CArrayRowset
- CArrayRowset<TAccessor>.Snapshot
- ATL::CArrayRowset::Snapshot
- Snapshot
- CArrayRowset<TAccessor>::Snapshot
- ATL.CArrayRowset.Snapshot
- ATL.CArrayRowset<TAccessor>.Snapshot
- ATL::CArrayRowset<TAccessor>::Snapshot
- CArrayRowset::Snapshot
- CArrayRowset.Snapshot
- CArrayRowset::operator[]
- CArrayRowset.operator[]
- ATL::CArrayRowset::m_nRowsRead
- ATL::CArrayRowset<TAccessor>::m_nRowsRead
- CArrayRowset<TAccessor>::m_nRowsRead
- ATL.CArrayRowset<TAccessor>.m_nRowsRead
- CArrayRowset.m_nRowsRead
- m_nRowsRead
- ATL.CArrayRowset.m_nRowsRead
- CArrayRowset::m_nRowsRead
helpviewer_keywords:
- CArrayRowset class
- CArrayRowset class, constructor
- Snapshot method
- operator [], arrays
- '[] operator'
- operator[], arrays
- m_nRowsRead
ms.assetid: 511427e1-73ca-4fd8-9ba1-ae9463557cb6
ms.openlocfilehash: 0c5159ac5b834c7c31d980a412f28f8129e15b45
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80212264"
---
# <a name="carrayrowset-class"></a>Classe CArrayRowset

Accede agli elementi di un set di righe utilizzando la sintassi di matrice.

## <a name="syntax"></a>Sintassi

```cpp
template < class TAccessor >
class CArrayRowset :
   public CVirtualBuffer <TAccessor>,
   protected CBulkRowset <TAccessor>
```

### <a name="parameters"></a>Parametri

*TAccessor*<br/>
Tipo di classe della funzione di accesso che si desidera venga utilizzata dal set di righe.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[CArrayRowset](#carrayrowset)|Costruttore.|
|[Snapshot](#snapshot)|Legge l'intero set di righe in memoria.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[Operatore&#91;&#93;](#operator)|Accede a un elemento del set di righe.|

### <a name="data-members"></a>Membri dei dati

|||
|-|-|
|[CArrayRowset::m_nRowsRead](#nrowsread)|Numero di righe già lette.|

## <a name="carrayrowsetcarrayrowset"></a><a name="carrayrowset"></a>CArrayRowset:: CArrayRowset

Crea un nuovo oggetto `CArrayRowset`.

### <a name="syntax"></a>Sintassi

```cpp
CArrayRowset(int nMax = 100000);
```

#### <a name="parameters"></a>Parametri

*nMax*<br/>
[in] Numero massimo di righe nel rowset.

## <a name="carrayrowsetsnapshot"></a><a name="snapshot"></a>CArrayRowset:: snapshot

Legge l'intero rowset in memoria, creandone un'immagine o uno snapshot.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT Snapshot() throw();
```

## <a name="carrayrowsetoperator"></a><a name="operator"></a>Operatore CArrayRowset::

Fornisce la sintassi di tipo matrice per l'accesso a una riga nel set di righe.

### <a name="syntax"></a>Sintassi

```cpp
TAccessor & operator[](int nrow);
```

#### <a name="parameters"></a>Parametri

*TAccessor*<br/>
Parametro basato su modelli che specifica il tipo di funzione di accesso archiviato nel set di righe.

*nRow*<br/>
in Numero della riga (elemento della matrice) a cui si vuole accedere.

### <a name="return-value"></a>Valore restituito

Contenuto della riga richiesta.

### <a name="remarks"></a>Osservazioni

Se *nrow* supera il numero di righe nel set di righe, viene generata un'eccezione.

## <a name="carrayrowsetm_nrowsread"></a><a name="nrowsread"></a>CArrayRowset:: m_nRowsRead

Contiene il numero di righe nel set di righe già lette.

### <a name="syntax"></a>Sintassi

```cpp
ULONG m_nRowsRead;
```

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Classe CRowset](../../data/oledb/crowset-class.md)
