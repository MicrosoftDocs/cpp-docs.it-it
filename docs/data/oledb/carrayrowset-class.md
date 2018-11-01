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
- CArrayRowset
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
ms.openlocfilehash: 39e1a6add012097fad72e05a57cc76df72e83cc8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50644847"
---
# <a name="carrayrowset-class"></a>Classe CArrayRowset

Elementi gli accessi di un set di righe utilizzando la sintassi della matrice.

## <a name="syntax"></a>Sintassi

```cpp
template < class TAccessor >
class CArrayRowset :
   public CVirtualBuffer <TAccessor>, 
   protected CBulkRowset <TAccessor>
```

### <a name="parameters"></a>Parametri

*TAccessor*<br/>
Il tipo di classe della funzione di accesso che si desidera che il set di righe da utilizzare.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[CArrayRowset](#carrayrowset)|Costruttore.|
|[Snapshot](#snapshot)|Legge l'intero set di righe in memoria.|

### <a name="operators"></a>Operatori

|||
|-|-|
|[operatore&#91;&#93;](#operator)|Accede a un elemento del set di righe.|

### <a name="data-members"></a>Membri di dati

|||
|-|-|
|[CArrayRowset::m_nRowsRead](#nrowsread)|Il numero di righe già lette.|

## <a name="carrayrowset"></a> CArrayRowset:: CArrayRowset

Crea un nuovo oggetto `CArrayRowset`.

### <a name="syntax"></a>Sintassi

```cpp
CArrayRowset(int nMax = 100000);
```

#### <a name="parameters"></a>Parametri

*nMax*<br/>
[in] Numero massimo di righe nel rowset.

## <a name="snapshot"></a> CArrayRowset:: snapshot

Legge l'intero rowset in memoria, creandone un'immagine o uno snapshot.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT Snapshot() throw();
```

## <a name="operator"></a> CArrayRowset:: operator

Fornisce una sintassi simile a matrice per l'accesso a una riga nel set di righe.

### <a name="syntax"></a>Sintassi

```cpp
TAccessor & operator[](int nrow);
```

#### <a name="parameters"></a>Parametri

*TAccessor*<br/>
Un parametro basato su modelli che specifica il tipo di funzione di accesso archiviati nel set di righe.

*nRow*<br/>
[in] Numero di riga (elemento della matrice) si desidera accedere.

### <a name="return-value"></a>Valore restituito

Il contenuto della riga richiesta.

### <a name="remarks"></a>Note

Se *nRow* supera il numero di righe nel set di righe, viene generata un'eccezione.

## <a name="nrowsread"></a> CArrayRowset:: M_nrowsread

Contiene il numero di righe nel set di righe che sono già stati letti.

### <a name="syntax"></a>Sintassi

```cpp
ULONG m_nRowsRead;
```

## <a name="see-also"></a>Vedere anche

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Classe CRowset](../../data/oledb/crowset-class.md)