---
description: 'Altre informazioni su: classe CStreamRowset'
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
ms.openlocfilehash: 278f85b36a2b4ec1c3d6b3c2bd5ecc5b47c5ef73
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97287814"
---
# <a name="cstreamrowset-class"></a>Classe CStreamRowset

Utilizzato in una `CCommand` `CTable` dichiarazione o.

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

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

| Nome | Description |
|-|-|
|[CStreamRowset](#cstreamrowset)|Costruttore. Crea un'istanza dell'oggetto e lo inizializza `CStreamRowset` .|
|[Close](#close)|Rilascia il puntatore all'interfaccia [ISequentialStream](/previous-versions/windows/desktop/ms718035(v=vs.85)) nella classe.|

## <a name="remarks"></a>Commenti

Usare `CStreamRowset` nella `CCommand` dichiarazione o `CTable` , ad esempio:

[!code-cpp[NVC_OLEDB_Consumer#11](../../data/oledb/codesnippet/cpp/cstreamrowset-class_1.cpp)]

oppure

[!code-cpp[NVC_OLEDB_Consumer#12](../../data/oledb/codesnippet/cpp/cstreamrowset-class_2.cpp)]

`ICommand::Execute` Restituisce un `ISequentialStream` puntatore, archiviato in `m_spStream` . Si usa quindi il `Read` metodo per recuperare i dati (stringa Unicode) in formato XML. Ad esempio:

[!code-cpp[NVC_OLEDB_Consumer#13](../../data/oledb/codesnippet/cpp/cstreamrowset-class_3.cpp)]

SQL Server 2000 esegue la formattazione XML e restituirà tutte le colonne e tutte le righe del set di righe come una stringa XML.

> [!NOTE]
> Questa funzionalità funziona solo con SQL Server 2000.

## <a name="cstreamrowsetcstreamrowset"></a><a name="cstreamrowset"></a> CStreamRowset:: CStreamRowset

Crea un'istanza dell'oggetto e lo inizializza `CStreamRowset` .

### <a name="syntax"></a>Sintassi

```cpp
CStreamRowset();
```

## <a name="cstreamrowsetclose"></a><a name="close"></a> CStreamRowset:: Close

Rilascia il puntatore all'interfaccia [ISequentialStream](/previous-versions/windows/desktop/ms718035(v=vs.85)) nella classe.

### <a name="syntax"></a>Sintassi

```cpp
void Close();
```

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimento ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
