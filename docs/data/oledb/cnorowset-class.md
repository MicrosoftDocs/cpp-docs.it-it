---
description: 'Altre informazioni su: Classe CNoRowset'
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
ms.openlocfilehash: 4cdb4631b63ec1f013183713900ffd9574d90fc3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97307561"
---
# <a name="cnorowset-class"></a>Classe CNoRowset

Può essere usato come argomento di modello ( `TRowset` ) per [CCommand](../../data/oledb/ccommand-class.md) o [CTable](../../data/oledb/ctable-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <class TAccessor = CAccessorBase>
class CNoRowset
```

### <a name="parameters"></a>Parametri

*TAccessor*<br/>
Classe della funzione di accesso. Il valore predefinito è `CAccessorBase`.

## <a name="remarks"></a>Commenti

Utilizzare `CNoRowset` come argomento di modello se il comando non restituisce un set di righe.

`CNoRowset` implementa i metodi stub seguenti, ognuno dei quali corrisponde ad altri metodi della classe di funzioni di accesso:

- `BindFinished` : Indica quando l'associazione è completa (restituisce `S_OK` ).

- `Close` : Rilascia le righe e l'interfaccia IRowset corrente.

- `GetIID` : Recupera l'ID di interfaccia di un punto di connessione.

- `GetInterface` : Recupera un'interfaccia.

- `GetInterfacePtr` : Recupera un puntatore a interfaccia incapsulato.

- `SetAccessor` : Imposta un puntatore alla funzione di accesso.

- `SetupOptionalRowsetInterfaces` : Configura le interfacce facoltative per il set di righe.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="see-also"></a>Vedi anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimento ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
