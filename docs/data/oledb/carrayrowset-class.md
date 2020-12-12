---
description: 'Altre informazioni su: classe CArrayRowset'
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
ms.openlocfilehash: 929f8744671cecc54e7c192d4f3ddc17e27287cd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97213182"
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

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

| Nome | Description |
|--|--|
| [CArrayRowset](#carrayrowset) | Costruttore. |
| [Snapshot](#snapshot) | Legge l'intero set di righe in memoria. |

### <a name="operators"></a>Operatori

| Nome | Description |
|--|--|
| [Operatore&#91;&#93;](#operator) | Accede a un elemento del set di righe. |

### <a name="data-members"></a>Membri dei dati

| Nome | Description |
|--|--|
| [CArrayRowset::m_nRowsRead](#nrowsread) | Numero di righe già lette. |

## <a name="carrayrowsetcarrayrowset"></a><a name="carrayrowset"></a> CArrayRowset:: CArrayRowset

Crea un nuovo oggetto `CArrayRowset`.

### <a name="syntax"></a>Sintassi

```cpp
CArrayRowset(int nMax = 100000);
```

#### <a name="parameters"></a>Parametri

*nMax*<br/>
[in] Numero massimo di righe nel rowset.

## <a name="carrayrowsetsnapshot"></a><a name="snapshot"></a> CArrayRowset:: snapshot

Legge l'intero rowset in memoria, creandone un'immagine o uno snapshot.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT Snapshot() throw();
```

## <a name="carrayrowsetoperator"></a><a name="operator"></a> Operatore CArrayRowset::

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

### <a name="remarks"></a>Commenti

Se *nrow* supera il numero di righe nel set di righe, viene generata un'eccezione.

## <a name="carrayrowsetm_nrowsread"></a><a name="nrowsread"></a> CArrayRowset:: m_nRowsRead

Contiene il numero di righe nel set di righe già lette.

### <a name="syntax"></a>Sintassi

```cpp
ULONG m_nRowsRead;
```

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimento ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Classe CRowset](../../data/oledb/crowset-class.md)
