---
title: Classe CColumnAccessor
ms.date: 11/04/2016
f1_keywords:
- CColumnAccessor
- ATL::CColumnAccessor
- ATL.CColumnAccessor
helpviewer_keywords:
- CColumnAccessor class
ms.assetid: 6ce1e67f-6a20-490d-9326-c168b43eee7e
ms.openlocfilehash: 2a3b1dac51a8300a915a7177c36f15512b583fa0
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80212110"
---
# <a name="ccolumnaccessor-class"></a>Classe CColumnAccessor

Genera il codice del consumer inserito.

## <a name="syntax"></a>Sintassi

```cpp
class CColumnAccessor : public CAccessorBase
```

## <a name="remarks"></a>Osservazioni

Nel codice inserito ogni colonna è associata come funzione di accesso separata. È necessario tenere presente che questa classe viene usata nel codice inserito (ad esempio, potrebbe verificarsi durante il debug), ma in genere non è necessario usarla direttamente o i relativi metodi.

`CColumnAccessor` implementa i metodi stub seguenti, ognuno dei quali corrisponde alla funzionalità ad altri metodi della classe di funzione di accesso:

- `CColumnAccessor` il costruttore; Crea un'istanza e Inizializza l'oggetto `CColumnAccessor`.

- `CreateAccessor` alloca memoria per le strutture di associazione di colonna e inizializza i membri dati della colonna.

- `BindColumns` associa le colonne alle funzioni di accesso.

- `SetParameterBuffer` alloca i buffer per i parametri.

- `AddParameter` aggiunge una voce di parametro alle strutture di immissione dei parametri.

- `HasOutputColumns` determina se la funzione di accesso include colonne di output

- `HasParameters` determina se la funzione di accesso dispone di parametri.

- `BindParameters` associa i parametri creati alle colonne.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="see-also"></a>Vedere anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
