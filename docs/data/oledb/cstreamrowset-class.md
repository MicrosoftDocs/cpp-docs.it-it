---
title: Classe CStreamRowset
ms.date: 11/04/2016
f1_keywords:
- ATL::CStreamRowset<TAccessor>
- ATL::CStreamRowset
- CStreamRowset
- ATL.CStreamRowset<TAccessor>
- ATL.CStreamRowset
- CStreamRowset::CStreamRowset
- CStreamRowset.CStreamRowset
- ATL.CStreamRowset.CStreamRowset
- ATL::CStreamRowset::CStreamRowset
- CStreamRowset<TAccessor>::CStreamRowset
- ATL::CStreamRowset<TAccessor>::CStreamRowset
- CStreamRowset<TAccessor>.Close
- ATL.CStreamRowset<TAccessor>.Close
- CStreamRowset::Close
- CStreamRowset<TAccessor>::Close
- ATL::CStreamRowset::Close
- ATL.CStreamRowset.Close
- ATL::CStreamRowset<TAccessor>::Close
- CStreamRowset.Close
helpviewer_keywords:
- CStreamRowset class
- CStreamRowset class, constructor
- Close method
ms.assetid: a106e953-a38a-464e-8ea5-28963d9e4811
ms.openlocfilehash: 4a0e67ff1e800ff0f838b863eaaf839d4456ed82
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79441084"
---
# <a name="cstreamrowset-class"></a>Classe CStreamRowset

Utilizzato in una dichiarazione `CCommand` o `CTable`.

## <a name="syntax"></a>Sintassi

```cpp
template <class TAccessor = CAccessorBase>
class CStreamRowset
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
|[CStreamRowset](#cstreamrowset)|Costruttore. Crea un'istanza e Inizializza l'oggetto `CStreamRowset`.|
|[Close](#close)|Rilascia il puntatore all'interfaccia [ISequentialStream](/previous-versions/windows/desktop/ms718035(v=vs.85)) nella classe.|

## <a name="remarks"></a>Osservazioni

Usare `CStreamRowset` nella dichiarazione `CCommand` o `CTable`, ad esempio:

[!code-cpp[NVC_OLEDB_Consumer#11](../../data/oledb/codesnippet/cpp/cstreamrowset-class_1.cpp)]

o

[!code-cpp[NVC_OLEDB_Consumer#12](../../data/oledb/codesnippet/cpp/cstreamrowset-class_2.cpp)]

`ICommand::Execute` restituisce un puntatore `ISequentialStream`, memorizzato in `m_spStream`. Si usa quindi il metodo `Read` per recuperare i dati (stringa Unicode) in formato XML. Ad esempio:

[!code-cpp[NVC_OLEDB_Consumer#13](../../data/oledb/codesnippet/cpp/cstreamrowset-class_3.cpp)]

SQL Server 2000 esegue la formattazione XML e restituirà tutte le colonne e tutte le righe del set di righe come una stringa XML.

> [!NOTE]
>  Questa funzionalità funziona solo con SQL Server 2000.

## <a name="cstreamrowset"></a>CStreamRowset:: CStreamRowset

Crea un'istanza e Inizializza l'oggetto `CStreamRowset`.

### <a name="syntax"></a>Sintassi

```cpp
CStreamRowset();
```

## <a name="close"></a>CStreamRowset:: Close

Rilascia il puntatore all'interfaccia [ISequentialStream](/previous-versions/windows/desktop/ms718035(v=vs.85)) nella classe.

### <a name="syntax"></a>Sintassi

```cpp
void Close();
```

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)