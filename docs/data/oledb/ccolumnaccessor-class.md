---
title: Classe CColumnAccessor | Documenti Microsoft
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
ms.openlocfilehash: 8d211277a8354d94f1892b97ea8f808cc0b22c30
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="ccolumnaccessor-class"></a>Classe CColumnAccessor
Genera il codice consumer inserito.  
  
## <a name="syntax"></a>Sintassi

```cpp
class CColumnAccessor : public CAccessorBase  
```  
  
## <a name="remarks"></a>Note  
 Nel codice inserito, ogni colonna è associato come una funzione di accesso separato. Tenere presente che questa classe viene utilizzata l'inserimento di codice (ad esempio, che potrebbe verificarsi durante il debug), ma in genere non è necessario utilizzare direttamente il o i relativi metodi.  
  
 `CColumnAccessor` implementa i metodi stub seguenti, ognuna delle quali corrispondono funzionalità agli altri metodi di classe della funzione di accesso:  
  
-   `CColumnAccessor` Il costruttore. Crea e inizializza il `CColumnAccessor` oggetto.  
  
-   `CreateAccessor` Alloca memoria per la colonna strutture di associazione e inizializza i membri dati della colonna.  
  
-   **BindColumns** associa le colonne per le funzioni di accesso.  
  
-   **SetParameterBuffer** alloca i buffer per i parametri.  
  
-   `AddParameter` Aggiunge una voce di parametro per le strutture di voce di parametro.  
  
-   **HasOutputColumns** determina se la funzione di accesso include colonne di output  
  
-   **HasParameters** determina se la funzione di accesso dispone di parametri.  
  
-   `BindParameters` Associa i parametri creati per le colonne.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)