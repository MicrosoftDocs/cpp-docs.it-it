---
title: Classe CSimpleRow | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSimpleRow
- ATL::CSimpleRow
- ATL.CSimpleRow
dev_langs:
- C++
helpviewer_keywords:
- CSimpleRow class
ms.assetid: 06d9621d-60cc-4508-8b0c-528d1b1a809b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: efd6773edd5eaae8a53041eaab06e597fe029635
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="csimplerow-class"></a>Classe CSimpleRow
Fornisce un'implementazione predefinita per l'handle di riga, viene utilizzata la [IRowsetImpl](../../data/oledb/irowsetimpl-class.md) classe.  
  
## <a name="syntax"></a>Sintassi

```cpp
class CSimpleRow  
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[AddRefRow](../../data/oledb/csimplerow-addrefrow.md)|Aggiunge un conteggio dei riferimenti a un handle di riga esistente.|  
|[Compare](../../data/oledb/csimplerow-compare.md)|Confronta due righe per determinare se fanno riferimento alla stessa istanza di riga.|  
|[CSimpleRow](../../data/oledb/csimplerow-csimplerow.md)|Costruttore.|  
|[ReleaseRow](../../data/oledb/csimplerow-releaserow.md)|Rilascia le righe.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[m_dwRef](../../data/oledb/csimplerow-m-dwref.md)|Conteggio dei riferimenti a un handle di riga esistente.|  
|[m_iRowset](../../data/oledb/csimplerow-m-irowset.md)|Un indice al set di righe che rappresenta il cursore.|  
  
## <a name="remarks"></a>Note  
 Un handle di riga è logicamente un identificatore univoco per una riga di risultati. `IRowsetImpl` Crea un nuovo `CSimpleRow` per ogni riga richiesti [IRowsetImpl:: GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md). `CSimpleRow` può anche essere sostituiti con la propria implementazione dell'handle di riga, perché è un argomento di modello predefinito di `IRowsetImpl`. L'unico requisito per la sostituzione di questa classe è di fornire un costruttore che accetta un singolo parametro di tipo della classe di sostituzione **lungo**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Classe IRowsetImpl](../../data/oledb/irowsetimpl-class.md)