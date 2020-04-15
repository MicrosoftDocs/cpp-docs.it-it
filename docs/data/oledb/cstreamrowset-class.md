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
ms.openlocfilehash: ad4987422fd200faef141150908d4df0722f669a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366269"
---
# <a name="cstreamrowset-class"></a>Classe CStreamRowset

Utilizzato in `CCommand` `CTable` una dichiarazione o.

## <a name="syntax"></a>Sintassi

```cpp
template <class TAccessor = CAccessorBase>
class CStreamRowset
```

### <a name="parameters"></a>Parametri

*TAccesso*<br/>
Classe di accessor.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[CStreamRowset](#cstreamrowset)|Costruttore. Crea un'istanza `CStreamRowset` e inizializza l'oggetto.|
|[Chiudi](#close)|Rilascia il puntatore a interfaccia [ISequentialStream](/previous-versions/windows/desktop/ms718035(v=vs.85)) nella classe.|

## <a name="remarks"></a>Osservazioni

Utilizzare `CStreamRowset` nella `CCommand` `CTable` dichiarazione o, ad esempio:

[!code-cpp[NVC_OLEDB_Consumer#11](../../data/oledb/codesnippet/cpp/cstreamrowset-class_1.cpp)]

o

[!code-cpp[NVC_OLEDB_Consumer#12](../../data/oledb/codesnippet/cpp/cstreamrowset-class_2.cpp)]

`ICommand::Execute`restituisce `ISequentialStream` un puntatore, `m_spStream`memorizzato in . Utilizzare quindi `Read` il metodo per recuperare i dati (stringa Unicode) in formato XML. Ad esempio:

[!code-cpp[NVC_OLEDB_Consumer#13](../../data/oledb/codesnippet/cpp/cstreamrowset-class_3.cpp)]

SQL Server 2000 esegue la formattazione XML e restituisce tutte le colonne e tutte le righe del set di righe come un'unica stringa XML.

> [!NOTE]
> Questa funzionalità funziona solo con SQL Server 2000.

## <a name="cstreamrowsetcstreamrowset"></a><a name="cstreamrowset"></a>CStreamRowset::CStreamRowsetCStreamRowset::CStreamRowset

Crea un'istanza `CStreamRowset` e inizializza l'oggetto.

### <a name="syntax"></a>Sintassi

```cpp
CStreamRowset();
```

## <a name="cstreamrowsetclose"></a><a name="close"></a>CStreamRowset::Close

Rilascia il puntatore a interfaccia [ISequentialStream](/previous-versions/windows/desktop/ms718035(v=vs.85)) nella classe.

### <a name="syntax"></a>Sintassi

```cpp
void Close();
```

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)
