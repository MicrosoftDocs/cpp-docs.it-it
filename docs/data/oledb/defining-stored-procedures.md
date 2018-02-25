---
title: Definizione delle Stored procedure | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- stored procedures, syntax
- OLE DB, stored procedures
- stored procedures, defining
- stored procedures, OLE DB
ms.assetid: 54949b81-3275-4dd9-96e4-3eda1ed755f2
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 3262396bcaafd1522278d0ac53be5d715966b9d2
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="defining-stored-procedures"></a>Definizione delle stored procedure
Prima di chiamare una stored procedure, è necessario innanzitutto definire, utilizzando il [DEFINE_COMMAND](../../data/oledb/define-command.md) (macro). Quando si definisce il comando, è possibile indicare i parametri con un punto interrogativo (?) come marcatore di parametro:  
  
```  
DEFINE_COMMAND(CMySProcAccessor, _T("{INSERT {name, phone} into shippers  (?,?)}")  
```  
  
 Si noti che la sintassi (l'utilizzo di parentesi graffe e così via) utilizzata negli esempi di codice in questo argomento è specifica di SQL Server. La sintassi utilizzata nelle stored procedure possono variare a seconda del provider in uso.  
  
 Successivamente, nella mappa di parametri, specificare i parametri utilizzati nel comando, Elenca i parametri nell'ordine in cui sono presenti nel comando:  
  
```  
BEGIN_PARAM_MAP(CMySProcAccessor)  
   SET_PARAM_TYPE(DBPARAMIO_INPUT)  
   COLUMN_ENTRY(1, m_Name)   // name corresponds to first '?' param  
   SET_PARAM_TYPE(DBPARAMIO_INPUT)  
   COLUMN_ENTRY(2, m_Phone)  // phone corresponds to second '?' param  
END_PARAM_MAP()  
```  
  
 L'esempio precedente definisce una stored procedure durante la sua esecuzione. Per un efficiente riutilizzo del codice, in genere, un database contiene un set di stored procedure già definite con nomi quali "Sales by Year" o "dt_adduserobject". È possibile visualizzare le relative definizioni utilizzando SQL Server Enterprise Manager. Si chiama come indicato di seguito (il posizionamento del '?' parametri dipende dall'interfaccia della stored procedure):  
  
```  
DEFINE_COMMAND(CMySProcAccessor, _T("{CALL \"Sales by Year\" (?,?) }")  
DEFINE_COMMAND(CMySProcAccessor, _T("{CALL dbo.dt_adduserobject (?,?) }")  
```  
  
 Successivamente, dichiarare la classe di comando:  
  
```  
class CMySProc : public CCommand<CAccessor<CMySProcAccessor>>  
```  
  
 Infine, chiamare la stored procedure in `OpenRowset` come indicato di seguito:  
  
```  
CSession m_session;  

HRESULT OpenRowset()  
{  
   return CCommand<CAccessor<CMySProcAccessor>>::Open(m_session);  
}  
```  
  
 Si noti inoltre che è possibile definire una stored procedure utilizzando l'attributo database [db_command](../../windows/db-command.md) come indicato di seguito:  
  
```  
db_command("{ ? = CALL dbo.dt_adduserobject }")  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle stored procedure](../../data/oledb/using-stored-procedures.md)