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
- CSimpleRow
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
ms.openlocfilehash: 19b90f4454e784907366ef6cf7e3e7e1b9ada799
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62390932"
---
# <a name="csimplerow-class"></a>Classe CSimpleRow

Fornisce un'implementazione predefinita per l'handle di riga, che viene utilizzata per la [IRowsetImpl](../../data/oledb/irowsetimpl-class.md) classe.

## <a name="syntax"></a>Sintassi

```cpp
class CSimpleRow
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[AddRefRow](#addrefrow)|Aggiunge un conteggio dei riferimenti a un handle di riga esistente.|
|[Compare](#compare)|Confronta due righe per determinare se fanno riferimento alla stessa istanza di riga.|
|[CSimpleRow](#csimplerow)|Costruttore.|
|[ReleaseRow](#releaserow)|Rilascia le righe.|

### <a name="data-members"></a>Membri di dati

|||
|-|-|
|[m_dwRef](#dwref)|Conteggio dei riferimenti a un handle di riga esistente.|
|[m_iRowset](#irowset)|Un indice al set di righe che rappresenta il cursore.|

## <a name="remarks"></a>Note

Un handle di riga è logicamente un tag univoco per una riga di risultati. `IRowsetImpl` Crea un nuovo `CSimpleRow` per tutte le righe richiesti nel [IRowsetImpl:: GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md). `CSimpleRow` possono anche essere sostituite con la propria implementazione dell'handle di riga, perché è un argomento di modello predefinito per `IRowsetImpl`. L'unico requisito per la sostituzione di questa classe consiste nel disporre la classe sostitutiva di fornire un costruttore che accetta un solo parametro di tipo **lungo**.

## <a name="addrefrow"></a> CSimpleRow::AddRefRow

Aggiunge un conteggio dei riferimenti a un handle di riga esistente in modo thread-safe.

### <a name="syntax"></a>Sintassi

```cpp
DWORD AddRefRow();
```

## <a name="compare"></a> CSimpleRow::Compare

Confronta due righe per determinare se fanno riferimento alla stessa istanza di riga.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT Compare(CSimpleRow* pRow);
```

#### <a name="parameters"></a>Parametri

*pRow*<br/>
Puntatore a un oggetto `CSimpleRow` .

### <a name="return-value"></a>Valore restituito

Valore HRESULT, in genere S_OK, che indica le due righe rappresentano la stessa istanza di riga o S_FALSE, che indica le due righe sono diverse. Visualizzare [IRowsetIdentity::IsSameRow](/previous-versions/windows/desktop/ms719629(v=vs.85)) nel *riferimento per programmatori OLE DB* per altri possibili valori restituiti.

## <a name="csimplerow"></a> Csimplerow:: Csimplerow

Costruttore.

### <a name="syntax"></a>Sintassi

```cpp
CSimpleRow(DBCOUNTITEM iRowsetCur);
```

#### <a name="parameters"></a>Parametri

*iRowsetCur*<br/>
[in] Indice al set di righe corrente.

### <a name="remarks"></a>Note

Set [m_iRowset](../../data/oledb/csimplerow-m-irowset.md) al *iRowsetCur*.

## <a name="releaserow"></a> Csimplerow:: Releaserow

Rilascia le righe in modo thread-safe.

### <a name="syntax"></a>Sintassi

```cpp
DWORD ReleaseRow();
```

## <a name="dwref"></a> CSimpleRow::m_dwRef

Conteggio dei riferimenti a un handle di riga esistente.

### <a name="syntax"></a>Sintassi

```cpp
DWORD m_dwRef;
```

## <a name="irowset"></a> CSimpleRow::m_iRowset

Indice al set di righe che rappresenta il cursore.

### <a name="syntax"></a>Sintassi

```cpp
KeyType m_iRowset;
```

## <a name="see-also"></a>Vedere anche

[Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
[Classe IRowsetImpl](../../data/oledb/irowsetimpl-class.md)