---
title: Classe CManualAccessor | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: ecb9f31c862f62ddc2422f201aa824a959e961a0
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
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