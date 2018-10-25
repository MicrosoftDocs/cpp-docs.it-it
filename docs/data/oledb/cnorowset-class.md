---
title: Classe CNoRowset | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL.CNoRowset
- ATL::CNoRowset<TAccessor>
- CNoRowset
- ATL.CNoRowset<TAccessor>
- ATL::CNoRowset
dev_langs:
- C++
helpviewer_keywords:
- CNoRowset class
ms.assetid: 55c6c7a4-9e3a-4775-a2dd-c8b333012fa6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: f14ad79e1cbd2207b4eb1582cb80e0107d68ec39
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50064238"
---
# <a name="cnorowset-class"></a>Classe CNoRowset

Può essere utilizzato come argomento di modello (`TRowset`) per [CCommand](../../data/oledb/ccommand-class.md) oppure [CTable](../../data/oledb/ctable-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <class TAccessor = CAccessorBase>
class CNoRowset
```

### <a name="parameters"></a>Parametri

*TAccessor*<br/>
Una classe di funzione di accesso. Il valore predefinito è `CAccessorBase`.

## <a name="remarks"></a>Note

Usare `CNoRowset` come argomento di modello, se il comando non restituisce un set di righe.

`CNoRowset` implementa i metodi stub seguenti, ognuno dei quali corrisponde a altri metodi della classe della funzione di accesso:

- `BindFinished` -Indica se l'associazione è completa (restituisce `S_OK`).

- `Close` -Rilascia le righe e l'interfaccia IRowset corrente.

- `GetIID` -Recupera l'ID di interfaccia di un punto di connessione.

- `GetInterface` : Recupera un'interfaccia.

- `GetInterfacePtr` : Recupera un puntatore a interfaccia incapsulato.

- `SetAccessor` -Imposta un puntatore alla funzione di accesso.

- `SetupOptionalRowsetInterfaces` -Imposta interfacce facoltative per il set di righe.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="see-also"></a>Vedere anche

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)