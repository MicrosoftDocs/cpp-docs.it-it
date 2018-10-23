---
title: I parametri di output | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB, stored procedures
- stored procedures, calling
- stored procedures, parameters
- procedure calls
- procedure calls, stored procedures
ms.assetid: 4f7c2700-1c2d-42f3-8c9f-7e83962b2442
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 4a17ff7e6e78b21267b71ba495ba10a98e29cfe7
ms.sourcegitcommit: 0164af5615389ffb1452ccc432eb55f6dc931047
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/23/2018
ms.locfileid: "49808851"
---
# <a name="output-parameters"></a>Parametri di output

Chiama una stored procedure è simile all'esecuzione di un comando SQL. La differenza principale è che le stored procedure utilizzano i parametri di output (o "output") e restituiscono valori.

Nella seguente stored procedure, il primo '? 'è il valore restituito (phone) e il secondo'?' è il parametro di input (nome):

```  
DEFINE_COMMAND(CMySProcAccessor, _T("{ ? = SELECT phone FROM shippers WHERE name = ? }")  
```  

Specificare i parametri in e out nella mappa del parametro:

```  
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

Il \@parametro di output _rowcount segnala quante righe sono state restituite dalla tabella dei test. Tuttavia, questa stored procedure limita il numero di righe su 50. Ad esempio, se vi sono 100 righe nel test, il conteggio delle righe sarebbero 50 (poiché questo codice recupera solo le prime 50 righe). Se si sono verificati solo 30 righe nella tabella, il conteggio delle righe sarebbero 30. Assicurarsi di chiamare `Close` o `CloseAll` per popolare il parametro di output prima di recuperare il relativo valore.

## <a name="see-also"></a>Vedere anche

[Uso delle stored procedure](../../data/oledb/using-stored-procedures.md)