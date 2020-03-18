---
title: Classe CSimpleRow
ms.date: 11/04/2016
f1_keywords:
- CSimpleRow
- ATL::CSimpleRow
- ATL.CSimpleRow
- CSimpleRow::AddRefRow
- AddRefRow
- ATL.CSimpleRow.AddRefRow
- ATL::CSimpleRow::AddRefRow
- CSimpleRow.AddRefRow
- CSimpleRow.Compare
- CSimpleRow::Compare
- ATL::CSimpleRow::CSimpleRow
- CSimpleRow.CSimpleRow
- ATL.CSimpleRow.CSimpleRow
- CSimpleRow::CSimpleRow
- ATL::CSimpleRow::ReleaseRow
- CSimpleRow::ReleaseRow
- ReleaseRow
- CSimpleRow.ReleaseRow
- ATL.CSimpleRow.ReleaseRow
- CSimpleRow.m_dwRef
- CSimpleRow::m_dwRef
- CSimpleRow::m_iRowset
- CSimpleRow.m_iRowset
helpviewer_keywords:
- CSimpleRow class
- AddRefRow method
- Compare method
- CSimpleRow class, constructor
- ReleaseRow method
- m_dwRef
- m_iRowset
ms.assetid: 06d9621d-60cc-4508-8b0c-528d1b1a809b
ms.openlocfilehash: 00d8164425ada573020971f66312b2282cc72c45
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79441141"
---
# <a name="csimplerow-class"></a>Classe CSimpleRow

Fornisce un'implementazione predefinita per l'handle di riga, che viene usato nella classe [IRowsetImpl](../../data/oledb/irowsetimpl-class.md) .

## <a name="syntax"></a>Sintassi

```cpp
class CSimpleRow
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[AddRefRow](#addrefrow)|Aggiunge un conteggio dei riferimenti a un handle di riga esistente.|
|[Confronta](#compare)|Confronta due righe per verificare se fanno riferimento alla stessa istanza di riga.|
|[CSimpleRow](#csimplerow)|Costruttore.|
|[ReleaseRow](#releaserow)|Rilascia righe.|

### <a name="data-members"></a>Membri dei dati

|||
|-|-|
|[m_dwRef](#dwref)|Conteggio riferimenti a un handle di riga esistente.|
|[m_iRowset](#irowset)|Indice del set di righe che rappresenta il cursore.|

## <a name="remarks"></a>Osservazioni

Un handle di riga è logicamente un tag univoco per una riga di risultati. `IRowsetImpl` crea una nuova `CSimpleRow` per ogni riga richiesta in [IRowsetImpl:: GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md). `CSimpleRow` possono anche essere sostituiti con la propria implementazione dell'handle di riga, perché si tratta di un argomento di modello predefinito da `IRowsetImpl`. L'unico requisito per la sostituzione di questa classe consiste nel fare in modo che la classe di sostituzione fornisca un costruttore che accetta un solo parametro di tipo **Long**.

## <a name="addrefrow"></a>CSimpleRow:: AddRefRow

Aggiunge un conteggio di riferimenti a un handle di riga esistente in modo thread-safe.

### <a name="syntax"></a>Sintassi

```cpp
DWORD AddRefRow();
```

## <a name="compare"></a>CSimpleRow:: compare

Confronta due righe per verificare se fanno riferimento alla stessa istanza di riga.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT Compare(CSimpleRow* pRow);
```

#### <a name="parameters"></a>Parametri

*Prua*<br/>
Puntatore a un oggetto `CSimpleRow`.

### <a name="return-value"></a>Valore restituito

Valore HRESULT, in genere S_OK, che indica che le due righe sono la stessa istanza di riga o S_FALSE, che indica che le due righe sono diverse. Per altri possibili valori restituiti, vedere [IRowsetIdentity:: IsSameRow](/previous-versions/windows/desktop/ms719629(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB* .

## <a name="csimplerow"></a>CSimpleRow:: CSimpleRow

Costruttore.

### <a name="syntax"></a>Sintassi

```cpp
CSimpleRow(DBCOUNTITEM iRowsetCur);
```

#### <a name="parameters"></a>Parametri

*iRowsetCur*<br/>
in Indice per il set di righe corrente.

### <a name="remarks"></a>Osservazioni

Imposta [m_iRowset](../../data/oledb/csimplerow-m-irowset.md) su *iRowsetCur*.

## <a name="releaserow"></a>CSimpleRow:: ReleaseRow

Rilascia le righe in modo thread-safe.

### <a name="syntax"></a>Sintassi

```cpp
DWORD ReleaseRow();
```

## <a name="dwref"></a>CSimpleRow:: m_dwRef

Conteggio riferimenti a un handle di riga esistente.

### <a name="syntax"></a>Sintassi

```cpp
DWORD m_dwRef;
```

## <a name="irowset"></a>CSimpleRow:: m_iRowset

Indice del set di righe che rappresenta il cursore.

### <a name="syntax"></a>Sintassi

```cpp
KeyType m_iRowset;
```

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
[Classe IRowsetImpl](../../data/oledb/irowsetimpl-class.md)