---
title: Definizione delle Stored procedure | Microsoft Docs
ms.custom: ''
ms.date: 10/24/2018
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
ms.openlocfilehash: a9d5cbe04ac5ad23fef09d53e747dab8c4c4b53b
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50053137"
---
# <a name="defining-stored-procedures"></a>Definizione delle stored procedure

Prima di chiamare una stored procedure, è necessario innanzitutto definire, tramite il [DEFINE_COMMAND](../../data/oledb/define-command.md) macro. Quando si definisce il comando, indicare i parametri con un punto interrogativo (?) come marcatore di parametro:

```cpp
DEFINE_COMMAND_EX(CMySProcAccessor, _T("{INSERT {name, phone} INTO shippers (?,?)}"))
```

La sintassi (l'utilizzo di parentesi graffe e così via) usata negli esempi di codice in questo argomento è specifica di SQL Server. La sintassi da utilizzare nelle stored procedure può variare a seconda del provider in uso.

Successivamente, nella mappa di parametri, specificare i parametri che è stato utilizzato nel comando Elenca i parametri nell'ordine in cui sono presenti nel comando:

```cpp
BEGIN_PARAM_MAP(CMySProcAccessor)
   SET_PARAM_TYPE(DBPARAMIO_INPUT)
   COLUMN_ENTRY(1, m_Name)   // name corresponds to first '?' param
   SET_PARAM_TYPE(DBPARAMIO_INPUT)
   COLUMN_ENTRY(2, m_Phone)  // phone corresponds to second '?' param
END_PARAM_MAP()
```

Nell'esempio precedente definisce una stored procedure durante la sua esecuzione. In genere, per un efficiente riutilizzo di codice, un database contiene un set di stored procedure già definite con nomi, ad esempio `Sales by Year` o `dt_adduserobject`. È possibile visualizzare le relative definizioni usando SQL Server Enterprise Manager. Vengono chiamate come indicato di seguito (il posizionamento del *?* parametri variano a seconda dell'interfaccia della stored procedure):

```cpp
DEFINE_COMMAND_EX(CMySProcAccessor, _T("{CALL \"Sales by Year\" (?,?) }"))
DEFINE_COMMAND_EX(CMySProcAccessor, _T("{CALL dbo.dt_adduserobject (?,?) }"))
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