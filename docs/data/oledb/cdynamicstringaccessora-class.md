---
title: Classe CDynamicStringAccessorA | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CDynamicStringAccessorA
dev_langs:
- C++
helpviewer_keywords:
- CDynamicStringAccessorA class
ms.assetid: ed0d9821-a655-41f1-a902-43c3042ac49c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: d6d05ac97846f55cf65d4010179b28d2b543ef66
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33096483"
---
# <a name="cdynamicstringaccessora-class"></a>Classe CDynamicStringAccessorA
Consente di accedere a un'origine dati quando si ha alcuna conoscenza dello schema del database (struttura sottostante).  
  
## <a name="syntax"></a>Sintassi

```cpp
typedef CDynamicStringAccessorT<CHAR, DBTYPE_STR> CDynamicStringAccessorA;  
```  
  
## <a name="remarks"></a>Note  
 Entrambi richiedono che il provider recuperi tutti i dati dall'archivio dati come dati di tipo stringa, ma `CDynamicStringAccessor` richieste ANSI della stringa di dati.  
  
 `CDynamicStringAccessorA` eredita **GetString** e `SetString` da `CDynamicStringAccessor`. Quando si utilizzano questi metodi in un `CDynamicStringAccessorA` oggetto ***BaseType*** è **CHAR**.  
  
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