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
ms.openlocfilehash: c82d756690c6c2a719cb03f458c471aa44e3d5b5
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80211731"
---
# <a name="cnoaccessor-class"></a>Classe CNoAccessor

Può essere usato come argomento di modello (`TAccessor`) per le classi modello, ad esempio `CCommand` e `CTable`, che richiedono un argomento della classe della funzione di accesso.

## <a name="syntax"></a>Sintassi

```cpp
class CNoAccessor
```

## <a name="remarks"></a>Osservazioni

Utilizzare `CNoAccessor` come argomento di modello quando non si desidera che la classe supporti parametri o colonne di output.

`CNoAccessor` implementa i metodi stub seguenti, ognuno dei quali corrisponde ad altri metodi della classe della funzione di accesso:

- `BindColumns`: associa le colonne alle funzioni di accesso.

- `BindParameters`: associa i parametri creati alle colonne.

- `Bind`-crea associazioni.

- `Close`: chiude la funzione di accesso.

- `ReleaseAccessors`: rilascia le funzioni di accesso create dalla classe.

- `FreeRecordMemory` libera tutte le colonne del record corrente che devono essere liberate.

- `GetColumnInfo`-ottiene le informazioni sulla colonna dal set di righe aperto.

- `GetNumAccessors`: Recupera il numero di funzioni di accesso create dalla classe.

- `IsAutoAccessor`: restituisce true se i dati vengono recuperati automaticamente per la funzione di accesso durante un'operazione di spostamento.

- `GetHAccessor`: Recupera l'handle della funzione di accesso di una funzione di accesso specificata.

- `GetBuffer`: Recupera il puntatore al buffer dei segnalibri.

- `NoBindOnNullRowset`: impedisce data binding su set di righe vuoti.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
