---
title: Classe CAccessorBase | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CAccessorBase
dev_langs:
- C++
helpviewer_keywords:
- CAccessorBase class
ms.assetid: 389b65be-11ca-4ae0-9290-60c621c4982b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: f598f49d279085b23e0bd3b94c48620363b5a816
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="caccessorbase-class"></a>Classe CAccessorBase
Tutte le funzioni di accesso nei modelli OLE DB derivano da questa classe. `CAccessorBase` consente a un set di righe per la gestione di più funzioni di accesso. Fornisce inoltre l'associazione per i parametri e colonne di output.  
  
## <a name="syntax"></a>Sintassi

```cpp
// Replace with syntax  
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[Chiudi](../../data/oledb/caccessorbase-close.md)|Chiude le funzioni di accesso.|  
|[GetHAccessor](../../data/oledb/caccessorbase-gethaccessor.md)|Recupera l'handle della funzione di accesso.|  
|[GetNumAccessors](../../data/oledb/caccessorbase-getnumaccessors.md)|Recupera il numero di funzioni di accesso creato dalla classe.|  
|[IsAutoAccessor](../../data/oledb/caccessorbase-isautoaccessor.md)|Verifica se la funzione di accesso specificato è un sia automatica o meno.|  
|[ReleaseAccessors](../../data/oledb/caccessorbase-releaseaccessors.md)|Rilascia le funzioni di accesso.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)