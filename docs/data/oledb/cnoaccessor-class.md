---
title: Classe CNoAccessor
ms.date: 11/04/2016
f1_keywords:
- ATL::CNoAccessor
- CNoAccessor
- ATL.CNoAccessor
helpviewer_keywords:
- CNoAccessor class
ms.assetid: eb669ae5-0a56-49a3-9646-c4ae6239da31
ms.openlocfilehash: 0cf1b47cc03d1839ae5c547393c3c193dab439d4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62230464"
---
# <a name="cnoaccessor-class"></a>Classe CNoAccessor

Può essere utilizzato come argomento di modello (`TAccessor`) per le classi modello, ad esempio `CCommand` e `CTable`, che richiedono un argomento di classe della funzione di accesso.

## <a name="syntax"></a>Sintassi

```cpp
class CNoAccessor
```

## <a name="remarks"></a>Note

Usare `CNoAccessor` come argomento di modello quando non si desidera la classe per supportare i parametri o colonne di output.

`CNoAccessor` implementa i metodi stub seguenti, ognuno dei quali corrisponde a altri metodi della classe della funzione di accesso:

- `BindColumns` -Associa le colonne per le funzioni di accesso.

- `BindParameters` -Associa i parametri creati per le colonne.

- `Bind` -Creazione di associazioni.

- `Close` -Chiude la funzione di accesso.

- `ReleaseAccessors` -Rilascia le funzioni di accesso creati dalla classe.

- `FreeRecordMemory` -Libera tutte le colonne nel record corrente che devono essere liberate.

- `GetColumnInfo` : Ottiene informazioni sulle colonne dal set di righe aperto.

- `GetNumAccessors` -Recupera il numero di funzioni di accesso creato dalla classe.

- `IsAutoAccessor` : Restituisce true se i dati vengono recuperati automaticamente per la funzione di accesso durante un'operazione di spostamento.

- `GetHAccessor` -Recupera l'handle della funzione di accesso di una funzione di accesso specificato.

- `GetBuffer` -Recupera il puntatore al buffer di segnalibro.

- `NoBindOnNullRowset` -Impedisce l'associazione dati in set di righe vuoto.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="see-also"></a>Vedere anche

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)