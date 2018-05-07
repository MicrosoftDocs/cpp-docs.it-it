---
title: Classe CNoAccessor | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL::CNoAccessor
- CNoAccessor
- ATL.CNoAccessor
dev_langs:
- C++
helpviewer_keywords:
- CNoAccessor class
ms.assetid: eb669ae5-0a56-49a3-9646-c4ae6239da31
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 3110d20330d42fcb0816873ff3e8a25d1f8436ea
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cnoaccessor-class"></a>Classe CNoAccessor
Può essere utilizzato come argomento di modello (`TAccessor`) per le classi di modello, ad esempio `CCommand` e `CTable`, che richiedono un argomento di classe della funzione di accesso.  
  
## <a name="syntax"></a>Sintassi

```cpp
class CNoAccessor  
```  
  
## <a name="remarks"></a>Note  
 Utilizzare `CNoAccessor` come argomento di modello, quando non si desidera che la classe per supportare i parametri o colonne di output.  
  
 `CNoAccessor` implementa i metodi stub seguenti, ognuna delle quali corrispondono agli altri metodi di classe della funzione di accesso:  
  
-   **BindColumns** -associa le colonne per le funzioni di accesso.  
  
-   `BindParameters` -Associa i parametri creati per le colonne.  
  
-   **Associare** -consente di creare associazioni.  
  
-   **Chiudi** -chiude la funzione di accesso.  
  
-   `ReleaseAccessors` -Rilascia le funzioni di accesso creati dalla classe.  
  
-   `FreeRecordMemory` -Consente di liberare tutte le colonne nel record corrente che devono essere liberate.  
  
-   `GetColumnInfo` -Ottiene informazioni sulle colonne dal set di righe aperto.  
  
-   `GetNumAccessors` : Recupera il numero di funzioni di accesso creato dalla classe.  
  
-   `IsAutoAccessor` -Restituisce true se i dati vengono recuperati automaticamente per la funzione di accesso durante un'operazione di spostamento.  
  
-   `GetHAccessor` : Recupera l'handle della funzione di accesso di una funzione di accesso specificato.  
  
-   `GetBuffer` : Recupera il puntatore al buffer di segnalibro.  
  
-   **NoBindOnNullRowset** -impedisce l'associazione di dati nel set di righe vuoto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)