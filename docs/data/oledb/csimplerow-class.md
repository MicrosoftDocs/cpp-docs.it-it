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
ms.openlocfilehash: c0d7ea0966b9a582e4a6969573458bca2e8a0fea
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91507223"
---
# <a name="csimplerow-class"></a>Classe CSimpleRow

Fornisce un'implementazione predefinita per l'handle di riga, che viene usato nella classe [IRowsetImpl](../../data/oledb/irowsetimpl-class.md) .

## <a name="syntax"></a>Sintassi

```cpp
class CSimpleRow
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

| Nome | Descrizione |
|-|-|
|[AddRefRow](#addrefrow)|Aggiunge un conteggio dei riferimenti a un handle di riga esistente.|
|[Confronta](#compare)|Confronta due righe per verificare se fanno riferimento alla stessa istanza di riga.|
|[CSimpleRow](#csimplerow)|Costruttore.|
|[ReleaseRow](#releaserow)|Rilascia righe.|

### <a name="data-members"></a>Membri dei dati

| Nome | Descrizione |
|-|-|
|[m_dwRef](#dwref)|Conteggio riferimenti a un handle di riga esistente.|
|[m_iRowset](#irowset)|Indice del set di righe che rappresenta il cursore.|

## <a name="remarks"></a>Osservazioni

Un handle di riga è logicamente un tag univoco per una riga di risultati. `IRowsetImpl` Crea un nuovo oggetto `CSimpleRow` per ogni riga richiesta in [IRowsetImpl:: GetNextRows](./irowsetimpl-class.md#getnextrows). `CSimpleRow` può anche essere sostituito con la propria implementazione dell'handle di riga, poiché si tratta di un argomento di modello predefinito per `IRowsetImpl` . L'unico requisito per la sostituzione di questa classe consiste nel fare in modo che la classe di sostituzione fornisca un costruttore che accetta un solo parametro di tipo **Long**.

## <a name="csimplerowaddrefrow"></a><a name="addrefrow"></a> CSimpleRow:: AddRefRow

Aggiunge un conteggio di riferimenti a un handle di riga esistente in modo thread-safe.

### <a name="syntax"></a>Sintassi

```cpp
DWORD AddRefRow();
```

## <a name="csimplerowcompare"></a><a name="compare"></a> CSimpleRow:: compare

Confronta due righe per verificare se fanno riferimento alla stessa istanza di riga.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT Compare(CSimpleRow* pRow);
```

#### <a name="parameters"></a>Parametri

*pRow*<br/>
Puntatore a un oggetto `CSimpleRow`.

### <a name="return-value"></a>Valore restituito

Valore HRESULT, in genere S_OK, che indica che le due righe sono la stessa istanza di riga o S_FALSE, che indica che le due righe sono diverse. Per altri possibili valori restituiti, vedere [IRowsetIdentity:: IsSameRow](/previous-versions/windows/desktop/ms719629(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB* .

## <a name="csimplerowcsimplerow"></a><a name="csimplerow"></a> CSimpleRow:: CSimpleRow

Costruttore.

### <a name="syntax"></a>Sintassi

```cpp
CSimpleRow(DBCOUNTITEM iRowsetCur);
```

#### <a name="parameters"></a>Parametri

*iRowsetCur*<br/>
in Indice per il set di righe corrente.

### <a name="remarks"></a>Osservazioni

Imposta [m_iRowset](#irowset) su *iRowsetCur*.

## <a name="csimplerowreleaserow"></a><a name="releaserow"></a> CSimpleRow:: ReleaseRow

Rilascia le righe in modo thread-safe.

### <a name="syntax"></a>Sintassi

```cpp
DWORD ReleaseRow();
```

## <a name="csimplerowm_dwref"></a><a name="dwref"></a> CSimpleRow:: m_dwRef

Conteggio riferimenti a un handle di riga esistente.

### <a name="syntax"></a>Sintassi

```cpp
DWORD m_dwRef;
```

## <a name="csimplerowm_irowset"></a><a name="irowset"></a> CSimpleRow:: m_iRowset

Indice del set di righe che rappresenta il cursore.

### <a name="syntax"></a>Sintassi

```cpp
KeyType m_iRowset;
```

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
[Classe IRowsetImpl](../../data/oledb/irowsetimpl-class.md)
