---
title: Classe CColumnAccessor | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CColumnAccessor
- ATL::CColumnAccessor
- ATL.CColumnAccessor
dev_langs:
- C++
helpviewer_keywords:
- CColumnAccessor class
ms.assetid: 6ce1e67f-6a20-490d-9326-c168b43eee7e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: b1843b6279cb7c86762cc6d975a2a7e67d3d278d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46055637"
---
# <a name="ccolumnaccessor-class"></a>Classe CColumnAccessor

Genera il codice inserito consumer.  
  
## <a name="syntax"></a>Sintassi

```cpp
class CColumnAccessor : public CAccessorBase  
```  
  
## <a name="remarks"></a>Note  

Nel codice inserito, ogni colonna è associata come una funzione di accesso separato. È necessario essere consapevoli che questa classe viene utilizzata l'inserimento di codice (ad esempio, che potrebbe verificarsi durante il debug), ma in genere non è necessario usare direttamente o i relativi metodi.  
  
`CColumnAccessor` implementa i metodi stub seguenti, ognuno dei quali corrispondono funzionalità agli altri metodi di classe della funzione di accesso:  
  
- `CColumnAccessor` Il costruttore. Crea e inizializza il `CColumnAccessor` oggetto.  
  
- `CreateAccessor` Alloca memoria per la colonna di strutture di associazione e inizializza i membri di dati di colonna.  
  
- `BindColumns` Associa le colonne per le funzioni di accesso.  
  
- `SetParameterBuffer` Alloca i buffer per i parametri.  
  
- `AddParameter` Aggiunge una voce di parametro alle strutture di voce di parametro.  
  
- `HasOutputColumns` Determina se la funzione di accesso include colonne di output  
  
- `HasParameters` Determina se la funzione di accesso dispone di parametri.  
  
- `BindParameters` Associa i parametri creati per le colonne.  
  
## <a name="requirements"></a>Requisiti  

**Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  

[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)