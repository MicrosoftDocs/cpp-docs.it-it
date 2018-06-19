---
title: Classe CManualAccessor | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL::CManualAccessor
- ATL.CManualAccessor
- CManualAccessor
dev_langs:
- C++
helpviewer_keywords:
- CManualAccessor class
ms.assetid: a0088074-7135-465c-b228-69097a50b8cc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 7b8efc46971b1aa72f8c5e572aa540bfed250d2b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33098173"
---
# <a name="cmanualaccessor-class"></a>Classe CManualAccessor
Rappresenta un tipo di funzione di accesso progettato per l'uso avanzato.  
  
## <a name="syntax"></a>Sintassi

```cpp
class CManualAccessor : public CAccessorBase  
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[AddBindEntry](../../data/oledb/cmanualaccessor-addbindentry.md)|Aggiunge una voce di binding per le colonne di output.|  
|[AddParameterEntry](../../data/oledb/cmanualaccessor-addparameterentry.md)|Aggiunge una voce di parametro alla funzione di accesso di parametro.|  
|[CreateAccessor](../../data/oledb/cmanualaccessor-createaccessor.md)|Alloca memoria per la colonna strutture di associazione e inizializza i membri dati della colonna.|  
|[CreateParameterAccessor](../../data/oledb/cmanualaccessor-createparameteraccessor.md)|Alloca memoria per il parametro strutture di associazione e inizializza i membri di dati del parametro.|  
  
## <a name="remarks"></a>Note  
 Utilizzando `CManualAccessor`, è possibile specificare il parametro e l'associazione di colonna di output dalle chiamate di funzione di runtime.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [DBViewer](../../visual-cpp-samples.md)   
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti per i modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [CAccessor (classe)](../../data/oledb/caccessor-class.md)   
 [CDynamicAccessor (classe)](../../data/oledb/cdynamicaccessor-class.md)   
 [Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)