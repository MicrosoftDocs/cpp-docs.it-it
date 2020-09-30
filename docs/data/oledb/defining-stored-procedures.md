---
title: Definizione delle stored procedure
ms.date: 10/24/2018
helpviewer_keywords:
- stored procedures, syntax
- OLE DB, stored procedures
- stored procedures, defining
- stored procedures, OLE DB
ms.assetid: 54949b81-3275-4dd9-96e4-3eda1ed755f2
ms.openlocfilehash: 47f68bcf5c62aa54cc5ee60de166e1085f5a3fc5
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91500931"
---
# <a name="defining-stored-procedures"></a>Definizione delle stored procedure

Prima di chiamare una stored procedure, è necessario prima definirla usando la macro [DEFINE_COMMAND](./macros-and-global-functions-for-ole-db-consumer-templates.md#define_command) . Quando si definisce il comando, indicare i parametri con un punto interrogativo (?) come marcatore di parametro:

```cpp
DEFINE_COMMAND_EX(CMySProcAccessor, _T("{INSERT {name, phone} INTO shippers (?,?)}"))
```

La sintassi (l'utilizzo di parentesi graffe e così via) utilizzata negli esempi di codice in questo argomento è specifica per SQL Server. La sintassi utilizzata nelle stored procedure può variare in base al provider utilizzato.

Quindi, nella mappa dei parametri, specificare i parametri usati nel comando, elencando i parametri nell'ordine in cui si trovano nel comando:

```cpp
BEGIN_PARAM_MAP(CMySProcAccessor)
   SET_PARAM_TYPE(DBPARAMIO_INPUT)
   COLUMN_ENTRY(1, m_Name)   // name corresponds to first '?' param
   SET_PARAM_TYPE(DBPARAMIO_INPUT)
   COLUMN_ENTRY(2, m_Phone)  // phone corresponds to second '?' param
END_PARAM_MAP()
```

Nell'esempio precedente viene definito un stored procedure mentre viene eseguito. In genere, per un riutilizzo efficiente del codice, un database contiene un set di stored procedure predefinite con nomi quali `Sales by Year` o `dt_adduserobject` . È possibile visualizzare le relative definizioni usando SQL Server Enterprise Manager. È possibile chiamarli come indicato di seguito (posizione di *?* i parametri dipendono dall'interfaccia del stored procedure):

```cpp
DEFINE_COMMAND_EX(CMySProcAccessor, _T("{CALL \"Sales by Year\" (?,?) }"))
DEFINE_COMMAND_EX(CMySProcAccessor, _T("{CALL dbo.dt_adduserobject (?,?) }"))
```

Dichiarare quindi la classe Command:

```cpp
class CMySProc : public CCommand<CAccessor<CMySProcAccessor>>
```

Infine, chiamare il stored procedure in `OpenRowset` come indicato di seguito:

```cpp
CSession m_session;

HRESULT OpenRowset()
{
   return CCommand<CAccessor<CMySProcAccessor>>::Open(m_session);
}
```

Si noti anche che è possibile definire un stored procedure usando l'attributo database [db_command](../../windows/attributes/db-command.md) come indicato di seguito:

```cpp
db_command("{ ? = CALL dbo.dt_adduserobject }")
```

## <a name="see-also"></a>Vedere anche

[Utilizzo di stored procedure](../../data/oledb/using-stored-procedures.md)
