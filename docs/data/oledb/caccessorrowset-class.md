---
title: Classe CAccessorRowset
ms.date: 11/04/2016
f1_keywords:
- CAccessorRowset
- ATL.CAccessorRowset
- ATL::CAccessorRowset
- CAccessorRowset.Bind
- CAccessorRowset::Bind
- CAccessorRowset::CAccessorRowset
- CAccessorRowset.CAccessorRowset
- ATL.CAccessorRowset.CAccessorRowset
- ATL::CAccessorRowset::CAccessorRowset
- CAccessorRowset.Close
- CAccessorRowset::Close
- CAccessorRowset::FreeRecordMemory
- CAccessorRowset.FreeRecordMemory
- CAccessorRowset.GetColumnInfo
- CAccessorRowset::GetColumnInfo
helpviewer_keywords:
- CAccessorRowset class
- CAccessorRowset class, methods
- CAccessorRowset class, members
- Bind method
- CAccessorRowset class, constructor
- Close method
- FreeRecordMemory method
- GetColumnInfo method
ms.assetid: bd4f58ed-cebf-4d43-8985-1e5fcbf06953
ms.openlocfilehash: 42b7d385877d68db22ccaf6665e8043dbfe2ee44
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233483"
---
# <a name="caccessorrowset-class"></a>Classe CAccessorRowset

Incapsula un set di righe e le funzioni di accesso associate in un'unica classe.

## <a name="syntax"></a>Sintassi

```cpp
template <class TAccessor = CNoAccessor,
   template <typename T> class TRowset = CRowset>
class CAccessorRowset : public TAccessor, public TRowset<TAccessor>
```

### <a name="parameters"></a>Parametri

*TAccessor*<br/>
Classe della funzione di accesso.

*TRowset*<br/>
Classe del set di righe.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[Associare](#bind)|Crea associazioni (utilizzate quando `bBind` viene specificato come **`false`** in [CCommand:: Open](../../data/oledb/ccommand-open.md)).|
|[CAccessorRowset](#caccessorrowset)|Costruttore.|
|[Close](#close)|Chiude il set di righe e le funzioni di accesso.|
|[FreeRecordMemory](#freerecordmemory)|Libera tutte le colonne del record corrente che devono essere liberate.|
|[GetColumnInfo](#getcolumninfo)|Implementa [IColumnsInfo:: GetColumnInfo](/previous-versions/windows/desktop/ms722704\(v=vs.85\)).|

## <a name="remarks"></a>Osservazioni

`TAccessor`La classe gestisce la funzione di accesso. La classe *TRowset* gestisce il set di righe.

## <a name="caccessorrowsetbind"></a><a name="bind"></a>CAccessorRowset:: bind

Crea le associazioni se è stato specificato `bBind` come **`false`** in [CCommand:: Open](../../data/oledb/ccommand-open.md).

### <a name="syntax"></a>Sintassi

```cpp
HRESULT Bind();
```

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="caccessorrowsetcaccessorrowset"></a><a name="caccessorrowset"></a>CAccessorRowset:: CAccessorRowset

Inizializza l'oggetto `CAccessorRowset`.

### <a name="syntax"></a>Sintassi

```cpp
CAccessorRowset();
```

## <a name="caccessorrowsetclose"></a><a name="close"></a>CAccessorRowset:: Close

Rilascia tutte le funzioni di accesso attive e il set di righe.

### <a name="syntax"></a>Sintassi

```cpp
void Close();
```

### <a name="remarks"></a>Osservazioni

Rilascia qualsiasi memoria associata.

## <a name="caccessorrowsetfreerecordmemory"></a><a name="freerecordmemory"></a>CAccessorRowset:: FreeRecordMemory

Libera tutte le colonne del record corrente che devono essere liberate.

### <a name="syntax"></a>Sintassi

```cpp
void FreeRecordMemory();
```

## <a name="caccessorrowsetgetcolumninfo"></a><a name="getcolumninfo"></a>CAccessorRowset:: GetColumnInfo

Ottiene le informazioni sulla colonna dal set di righe aperto.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT GetColumnInfo(DBORDINAL* pulColumns,
   DBCOLUMNINFO** ppColumnInfo,
   LPOLESTR* ppStrings) const;

HRESULT GetColumnInfo(DBORDINAL* pColumns,
   DBCOLUMNINFO** ppColumnInfo);
```

#### <a name="parameters"></a>Parametri

Vedere [IColumnsInfo:: GetColumnInfo](/previous-versions/windows/desktop/ms722704\(v=vs.85\)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'utente deve liberare le informazioni sulle colonne restituite e il buffer di stringa. Utilizzare la seconda versione di questo metodo quando si utilizza [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) ed è necessario eseguire l'override delle associazioni.

Per ulteriori informazioni, vedere [IColumnsInfo:: GetColumnInfo](/previous-versions/windows/desktop/ms722704\(v=vs.85\)) nella Guida *di riferimento per programmatori OLE DB*.

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimento ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
