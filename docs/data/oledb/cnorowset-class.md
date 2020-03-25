---
title: Classe CNoRowset
ms.date: 11/04/2016
f1_keywords:
- ATL.CNoRowset
- ATL::CNoRowset<TAccessor>
- CNoRowset
- ATL.CNoRowset<TAccessor>
- ATL::CNoRowset
helpviewer_keywords:
- CNoRowset class
ms.assetid: 55c6c7a4-9e3a-4775-a2dd-c8b333012fa6
ms.openlocfilehash: 19a1e01fd29c74cf1c44081c24bf384704cf2acd
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80211472"
---
# <a name="cnorowset-class"></a>Classe CNoRowset

Può essere usato come argomento di modello (`TRowset`) per [CCommand](../../data/oledb/ccommand-class.md) o [CTable](../../data/oledb/ctable-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <class TAccessor = CAccessorBase>
class CNoRowset
```

### <a name="parameters"></a>Parametri

*TAccessor*<br/>
Classe della funzione di accesso. Il valore predefinito è `CAccessorBase`.

## <a name="remarks"></a>Osservazioni

Usare `CNoRowset` come argomento di modello se il comando non restituisce un set di righe.

`CNoRowset` implementa i metodi stub seguenti, ognuno dei quali corrisponde ad altri metodi della classe della funzione di accesso:

- `BindFinished`: indica quando l'associazione è completa (restituisce `S_OK`).

- `Close`: rilascia le righe e l'interfaccia IRowset corrente.

- `GetIID`: Recupera l'ID di interfaccia di un punto di connessione.

- `GetInterface`: Recupera un'interfaccia.

- `GetInterfacePtr`: Recupera un puntatore a interfaccia incapsulato.

- `SetAccessor`-imposta un puntatore alla funzione di accesso.

- `SetupOptionalRowsetInterfaces`: configura le interfacce facoltative per il set di righe.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
