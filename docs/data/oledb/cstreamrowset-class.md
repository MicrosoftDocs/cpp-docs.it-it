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
- CStreamRowset
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
ms.openlocfilehash: 44fb2dab939a0180df2faa1b8b889048619f4c02
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57412965"
---
# <a name="cstreamrowset-class"></a>Classe CStreamRowset

Utilizzato in una `CCommand` o `CTable` dichiarazione.

## <a name="syntax"></a>Sintassi

```cpp
template <class TAccessor = CAccessorBase>
class CStreamRowset
```

### <a name="parameters"></a>Parametri

*TAccessor*<br/>
Una classe di funzione di accesso.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[CStreamRowset](#cstreamrowset)|Costruttore. Crea e inizializza il `CStreamRowset` oggetto.|
|[Chiudi](#close)|Rilascia il [ISequentialStream](/previous-versions/windows/desktop/ms718035(v=vs.85)) puntatore a interfaccia nella classe.|

## <a name="remarks"></a>Note

Uso `CStreamRowset` nella `CCommand` o `CTable` dichiarazione, ad esempio:

[!code-cpp[NVC_OLEDB_Consumer#11](../../data/oledb/codesnippet/cpp/cstreamrowset-class_1.cpp)]

oppure

[!code-cpp[NVC_OLEDB_Consumer#12](../../data/oledb/codesnippet/cpp/cstreamrowset-class_2.cpp)]

`ICommand::Execute` Restituisce un `ISequentialStream` puntatore che viene archiviato in `m_spStream`. È quindi possibile usare il `Read` metodo per recuperare i dati (stringa Unicode) in formato XML. Ad esempio:

[!code-cpp[NVC_OLEDB_Consumer#13](../../data/oledb/codesnippet/cpp/cstreamrowset-class_3.cpp)]

SQL Server 2000 esegue il formattazione XML e restituirà tutte le colonne e tutte le righe del set di righe in un'unica stringa XML.

> [!NOTE]
>  Questa funzionalità funziona solo con SQL Server 2000.

## <a name="cstreamrowset"></a> CStreamRowset::CStreamRowset

Crea e inizializza il `CStreamRowset` oggetto.

### <a name="syntax"></a>Sintassi

```cpp
CStreamRowset();
```

## <a name="close"></a> CStreamRowset::Close

Rilascia il [ISequentialStream](/previous-versions/windows/desktop/ms718035(v=vs.85)) puntatore a interfaccia nella classe.

### <a name="syntax"></a>Sintassi

```cpp
void Close();
```

## <a name="see-also"></a>Vedere anche

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)