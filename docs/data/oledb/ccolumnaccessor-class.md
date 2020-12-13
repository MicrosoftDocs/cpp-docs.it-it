---
description: 'Altre informazioni su: classe CColumnAccessor'
title: Classe CColumnAccessor
ms.date: 11/04/2016
f1_keywords:
- CColumnAccessor
- ATL::CColumnAccessor
- ATL.CColumnAccessor
helpviewer_keywords:
- CColumnAccessor class
ms.assetid: 6ce1e67f-6a20-490d-9326-c168b43eee7e
ms.openlocfilehash: 7551f39d34bb4f13b4ffae358db05aede2adb9e5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97335527"
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

- `CColumnAccessor` Costruttore. Crea un'istanza dell'oggetto e lo inizializza `CColumnAccessor` .

- `CreateAccessor` Alloca memoria per le strutture di associazione di colonna e inizializza i membri dati della colonna.

- `BindColumns` Associa colonne alle funzioni di accesso.

- `SetParameterBuffer` Alloca buffer per i parametri.

- `AddParameter` Aggiunge una voce di parametro alle strutture di immissione dei parametri.

- `HasOutputColumns` Determina se la funzione di accesso include colonne di output

- `HasParameters` Determina se la funzione di accesso dispone di parametri.

- `BindParameters` Associa i parametri creati alle colonne.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldbcli.h

## <a name="see-also"></a>Vedi anche

[Modelli di consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimento ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
