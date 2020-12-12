---
description: 'Altre informazioni su: parametri di output'
title: Parametri di output
ms.date: 10/24/2018
helpviewer_keywords:
- OLE DB, stored procedures
- stored procedures, calling
- stored procedures, parameters
- procedure calls
- procedure calls, stored procedures
ms.assetid: 4f7c2700-1c2d-42f3-8c9f-7e83962b2442
ms.openlocfilehash: c52877483d40d7de1a8313eb806769ce92af7337
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97316934"
---
# <a name="output-parameters"></a>Parametri di output

La chiamata di un stored procedure è simile all'esecuzione di un comando SQL. La differenza principale consiste nel fatto che le stored procedure utilizzano parametri di output (o "OutParameters") e valori restituiti.

Nel seguente stored procedure, il primo '?' è il valore restituito (Phone) e il secondo '?' è il parametro di input (nome):

```cpp
DEFINE_COMMAND_EX(CMySProcAccessor, _T("{ ? = SELECT phone FROM shippers WHERE name = ? }"))
```

Specificare i parametri in e out nella mappa dei parametri:

```cpp
BEGIN_PARAM_MAP(CMySProcAccessor)
   SET_PARAM_TYPE(DBPARAMIO_OUTPUT)
   COLUMN_ENTRY(1, m_Phone)   // Phone is the return value
   SET_PARAM_TYPE(DBPARAMIO_INPUT)
   COLUMN_ENTRY(2, m_Name)   // Name is the input parameter
END_PARAM_MAP()
```

L'applicazione deve gestire l'output restituito dalle stored procedure. Provider OLE DB diversi restituiscono parametri di output e valori in momenti diversi durante l'elaborazione dei risultati. Ad esempio, il provider Microsoft OLE DB per SQL Server (SQLOLEDB) non fornisce parametri di output e codici restituiti fino a quando il consumer non ha recuperato o annullato i set di risultati restituiti dal stored procedure. L'output viene restituito nell'ultimo pacchetto TDS dal server.

## <a name="row-count"></a>Row Count

Se si usa il OLE DB modelli di consumer per eseguire una stored procedure con OutParameters, il conteggio delle righe non viene impostato fino a quando non si chiude il set di righe.

Si consideri, ad esempio, un stored procedure con un set di righe e un outparameter:

```sql
create procedure sp_test
   @_rowcount integer output
as
   select top 50 * from test
   @_rowcount = @@rowcount
return 0
```

Il `@_rowcount` parametro outparameter indica il numero di righe restituite dalla tabella di test. Questo stored procedure tuttavia limita il numero di righe a 50. Se ad esempio sono presenti 100 righe nel test, il conteggio delle righe sarà 50 (poiché questo codice recupera solo le prime 50 righe). Se nella tabella sono presenti solo 30 righe, il conteggio delle righe sarà 30. Assicurarsi di chiamare `Close` o `CloseAll` per popolare l'outparameter prima di recuperare il relativo valore.

## <a name="see-also"></a>Vedi anche

[Utilizzo di stored procedure](../../data/oledb/using-stored-procedures.md)
