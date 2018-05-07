---
title: CXMLAccessor (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL::CXMLAccessor
- CXMLAccessor
- ATL.CXMLAccessor
dev_langs:
- C++
helpviewer_keywords:
- CXMLAccessor class
ms.assetid: c88c082c-ec2f-4351-8947-a330b15e448a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 916e9dbe4e142192e4e716f57f97d5bd6865c709
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cxmlaccessor-class"></a>Classe CXMLAccessor
Consente di accedere alle origini dati come dati stringa quando non si dispone di alcuna conoscenza dello schema dell'archivio dati (struttura sottostante).  
  
## <a name="syntax"></a>Sintassi

```cpp
class CXMLAccessor : public CDynamicStringAccessorW  
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[GetXMLColumnData](../../data/oledb/cxmlaccessor-getxmlcolumndata.md)|Recupera le informazioni di colonna.|  
|[GetXMLRowData](../../data/oledb/cxmlaccessor-getxmlrowdata.md)|Recupera l'intero contenuto di una tabella da righe.|  
  
## <a name="remarks"></a>Note  
 Tuttavia, `CXMLAccessor` è diverso da `CDynamicStringAccessorW` in quanto la conversione di tutti i dati dall'archivio dati in formato XML (tag). Ciò è particolarmente utile per l'output a pagine Web che supportano XML. I nomi di tag XML corrisponderanno quanto più accuratamente possibile i nomi delle colonne dell'archivio dati.  
  
 Utilizzare `CDynamicAccessor` metodi per ottenere informazioni di colonna. Utilizzare queste informazioni di colonna per creare una funzione di accesso in modo dinamico in fase di esecuzione.  
  
 Le informazioni di colonna vengono archiviate in un buffer creato e gestito da questa classe. Ottenere informazioni della colonna con [GetXMLColumnData](../../data/oledb/cxmlaccessor-getxmlcolumndata.md) o per ottenere dati della colonna, le righe mediante [GetXMLRowData](../../data/oledb/cxmlaccessor-getxmlrowdata.md).  
  
## <a name="example"></a>Esempio  
 [!code-cpp[NVC_OLEDB_Consumer#14](../../data/oledb/codesnippet/cpp/cxmlaccessor-class_1.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione**: atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti per i modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [CAccessor (classe)](../../data/oledb/caccessor-class.md)   
 [CDynamicAccessor (classe)](../../data/oledb/cdynamicaccessor-class.md)   
 [CDynamicParameterAccessor (classe)](../../data/oledb/cdynamicparameteraccessor-class.md)   
 [Classe CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md)   
 [Classe CDynamicStringAccessorA](../../data/oledb/cdynamicstringaccessora-class.md)   
 [Classe CDynamicStringAccessorW](../../data/oledb/cdynamicstringaccessorw-class.md)   
 [Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)