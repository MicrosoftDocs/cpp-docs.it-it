---
title: Parametri di output
ms.date: 10/24/2018
helpviewer_keywords:
- OLE DB, stored procedures
- stored procedures, calling
- stored procedures, parameters
- procedure calls
- procedure calls, stored procedures
ms.assetid: 4f7c2700-1c2d-42f3-8c9f-7e83962b2442
ms.openlocfilehash: 196c50ea62c3e3188b61a3b35a9e2752740c4ad5
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59027454"
---
# <a name="output-parameters"></a>Parametri di output

Chiama una stored procedure è simile all'esecuzione di un comando SQL. La differenza principale è che le stored procedure utilizzano i parametri di output (o "output") e restituiscono valori.

Nella seguente stored procedure, il primo '? 'è il valore restituito (phone) e il secondo'?' è il parametro di input (nome):

```cpp
DEFINE_COMMAND_EX(CMySProcAccessor, _T("{ ? = SELECT phone FROM shippers WHERE name = ? }"))
```

Specificare i parametri in e out nella mappa del parametro:

```cpp
BEGIN_PARAM_MAP(CMySProcAccessor)
   SET_PARAM_TYPE(DBPARAMIO_OUTPUT)
   COLUMN_ENTRY(1, m_Phone)   // Phone is the return value
   SET_PARAM_TYPE(DBPARAMIO_INPUT)
   COLUMN_ENTRY(2, m_Name)   // Name is the input parameter
END_PARAM_MAP()
```

L'applicazione deve gestire l'output restituito dalla stored procedure. Provider OLE DB diversi restituiscono parametri di output e valori restituiti in momenti diversi durante l'elaborazione dei risultati. Ad esempio, il provider Microsoft OLE DB per SQL Server (SQLOLEDB) non specificare i parametri di output e restituiscono codici di fino a quando il consumer ha recuperato o annullato i set di risultati restituiti dalla stored procedure. L'output viene restituito nell'ultimo pacchetto TDS dal server.

## <a name="row-count"></a>Conteggio delle righe

Se si usa i modelli Consumer OLE DB per eseguire una stored procedure con parametri di output, non è impostato il numero di righe finché non si chiude il set di righe.

Si consideri ad esempio una stored procedure con un set di righe e un parametro di output:

```sql
create procedure sp_test
   @_rowcount integer output
as
   select top 50 * from test
   @_rowcount = @@rowcount
return 0
```

Il `@_rowcount` parametro di output segnala quante righe sono state restituite dalla tabella dei test. Tuttavia, questa stored procedure limita il numero di righe su 50. Ad esempio, se vi sono 100 righe nel test, il conteggio delle righe sarebbero 50 (poiché questo codice recupera solo le prime 50 righe). Se si sono verificati solo 30 righe nella tabella, il conteggio delle righe sarebbero 30. Assicurarsi di chiamare `Close` o `CloseAll` per popolare il parametro di output prima di recuperare il relativo valore.

## <a name="see-also"></a>Vedere anche

[Utilizzo delle stored procedure](../../data/oledb/using-stored-procedures.md)