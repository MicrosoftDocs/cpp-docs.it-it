---
title: Definizione delle Stored procedure | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- stored procedures, syntax
- OLE DB, stored procedures
- stored procedures, defining
- stored procedures, OLE DB
ms.assetid: 54949b81-3275-4dd9-96e4-3eda1ed755f2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 79899bb4ff2dada8f459a6c25499be25d078353e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46105375"
---
# <a name="defining-stored-procedures"></a>Definizione delle stored procedure

Prima di chiamare una stored procedure, è necessario innanzitutto definire, tramite il [DEFINE_COMMAND](../../data/oledb/define-command.md) macro. Quando si definisce il comando, indicare i parametri con un punto interrogativo (?) come marcatore di parametro:  
  
```  
DEFINE_COMMAND(CMySProcAccessor, _T("{INSERT {name, phone} into shippers  (?,?)}")  
```  
  
Si noti che la sintassi (l'uso di parentesi graffe e così via) usata negli esempi di codice in questo argomento è specifica di SQL Server. La sintassi da utilizzare nelle stored procedure può variare a seconda del provider in uso.  
  
Successivamente, nella mappa di parametri, specificare i parametri che è stato utilizzato nel comando Elenca i parametri nell'ordine in cui sono presenti nel comando:  
  
```  
BEGIN_PARAM_MAP(CMySProcAccessor)  
   SET_PARAM_TYPE(DBPARAMIO_INPUT)  
   COLUMN_ENTRY(1, m_Name)   // name corresponds to first '?' param  
   SET_PARAM_TYPE(DBPARAMIO_INPUT)  
   COLUMN_ENTRY(2, m_Phone)  // phone corresponds to second '?' param  
END_PARAM_MAP()  
```  
  
Nell'esempio precedente definisce una stored procedure durante la sua esecuzione. In genere, per un efficiente riutilizzo di codice, un database contiene un set di stored procedure già definite con nomi quali "Sales by Year" o "dt_adduserobject." È possibile visualizzare le relative definizioni usando SQL Server Enterprise Manager. Vengono chiamate come indicato di seguito (il posizionamento dei '?' parametri varia a seconda dell'interfaccia della stored procedure):  
  
```  
DEFINE_COMMAND(CMySProcAccessor, _T("{CALL \"Sales by Year\" (?,?) }")  
DEFINE_COMMAND(CMySProcAccessor, _T("{CALL dbo.dt_adduserobject (?,?) }")  
```  
  
Successivamente, dichiarare la classe di comando:  
  
```cpp  
class CMySProc : public CCommand<CAccessor<CMySProcAccessor>>  
```  
  
Infine, chiamare la stored procedure in `OpenRowset` come indicato di seguito:  
  
```cpp  
CSession m_session;  

HRESULT OpenRowset()  
{  
   return CCommand<CAccessor<CMySProcAccessor>>::Open(m_session);  
}  
```  
  
Si noti anche che è possibile definire una stored procedure utilizzando l'attributo di database [db_command](../../windows/db-command.md) come indicato di seguito:  
  
```cpp  
db_command("{ ? = CALL dbo.dt_adduserobject }")  
```  
  
## <a name="see-also"></a>Vedere anche  

[Uso delle stored procedure](../../data/oledb/using-stored-procedures.md)