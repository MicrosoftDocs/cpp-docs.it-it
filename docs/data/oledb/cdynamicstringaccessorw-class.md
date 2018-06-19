---
title: Classe CDynamicStringAccessorW | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CDynamicStringAccessorW
dev_langs:
- C++
helpviewer_keywords:
- CDynamicStringAccessorW class
ms.assetid: 9b7fd5cc-3a9b-4b57-b907-f1e35de2c98f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 767add2be1f9f5266a6a66ce4455dec172f63e45
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33095742"
---
# <a name="cdynamicstringaccessorw-class"></a>Classe CDynamicStringAccessorW
Consente di accedere a un'origine dati quando si ha alcuna conoscenza dello schema del database (struttura sottostante).  
  
## <a name="syntax"></a>Sintassi

```cpp
typedef CDynamicStringAccessorT<WCHAR, DBTYPE_WSTR> CDynamicStringAccessorW;  
```  
  
## <a name="remarks"></a>Note  
 Entrambi richiedono che il provider recuperi tutti i dati dall'archivio dati come dati di tipo stringa, ma `CDynamicStringAccessor` richiede i dati stringa Unicode.  
  
 `CDynamicStringAccessorW` eredita **GetString** e `SetString` da `CDynamicStringAccessor`. Quando si utilizzano questi metodi in un `CDynamicStringAccessorW` oggetto ***BaseType*** è **WCHAR**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione**: atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti per i modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [CAccessor (classe)](../../data/oledb/caccessor-class.md)   
 [CDynamicParameterAccessor (classe)](../../data/oledb/cdynamicparameteraccessor-class.md)   
 [Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)   
 [CDynamicAccessor (classe)](../../data/oledb/cdynamicaccessor-class.md)   
 [Classe CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md)