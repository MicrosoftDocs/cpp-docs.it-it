---
description: 'Altre informazioni su: classe CNoAccessor'
title: Classe CNoAccessor
ms.date: 11/04/2016
f1_keywords:
- ATL::CNoAccessor
- CNoAccessor
- ATL.CNoAccessor
helpviewer_keywords:
- CNoAccessor class
ms.assetid: eb669ae5-0a56-49a3-9646-c4ae6239da31
ms.openlocfilehash: 624c72c841280ec56bacf0edd29efeb4b1005988
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97170386"
---
# <a name="cnoaccessor-class"></a>Classe CNoAccessor

Può essere usato come argomento di modello ( `TAccessor` ) per le classi modello, ad esempio `CCommand` e `CTable` , che richiedono un argomento della classe della funzione di accesso.

## <a name="syntax"></a>Sintassi

```cpp
class CNoAccessor
```

## <a name="remarks"></a>Osservazioni

Utilizzare `CNoAccessor` come argomento di modello quando non si desidera che la classe supporti parametri o colonne di output.

`CNoAccessor` implementa i metodi stub seguenti, ognuno dei quali corrisponde ad altri metodi della classe di funzioni di accesso:

- `BindColumns` -Associa le colonne alle funzioni di accesso.

- `BindParameters` : Associa i parametri creati alle colonne.

- `Bind` -Crea associazioni.

- `Close` -Chiude la funzione di accesso.

- `ReleaseAccessors` : Rilascia le funzioni di accesso create dalla classe.

- `FreeRecordMemory` : Libera tutte le colonne del record corrente che devono essere liberate.

- `GetColumnInfo` -Ottiene le informazioni sulla colonna dal set di righe aperto.

- `GetNumAccessors` : Recupera il numero di funzioni di accesso create dalla classe.

- `IsAutoAccessor` : Restituisce true se i dati vengono recuperati automaticamente per la funzione di accesso durante un'operazione di spostamento.

- `GetHAccessor` : Recupera l'handle della funzione di accesso di una funzione di accesso specificata.

- `GetBuffer` : Recupera il puntatore al buffer dei segnalibri.

- `NoBindOnNullRowset` -Impedisce data binding nei set di righe vuoti.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="see-also"></a>Vedi anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimento ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
