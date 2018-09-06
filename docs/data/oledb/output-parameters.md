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
ms.openlocfilehash: 5f9e0e273df1221801a9b761cd7f45200e0b50c0
ms.sourcegitcommit: d10a2382832373b900b1780e1190ab104175397f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2018
ms.locfileid: "43895084"
---
# <a name="output-parameters"></a>Parametri di output

Chiama una stored procedure è simile a richiamare un comando SQL. La differenza principale è che le stored procedure utilizzano i parametri di output (o "output") e restituiscono valori.

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

Se si utilizza i modelli Consumer OLE DB per eseguire una stored procedure con parametri di output, il conteggio delle righe non è impostato fino a quando non si chiude il set di righe.

Si consideri ad esempio una stored procedure con un set di righe e un parametro di output:

```sql
create procedure sp_test
   @_rowcount integer output
as
   select top 50 * from test
   @_rowcount = @@rowcount
return 0
```  

Il \@parametro di output _rowcount segnala quante righe sono state effettivamente restituite dalla tabella dei test. Tuttavia, questa stored procedure consente di limitare il numero di righe a un massimo di 50. Ad esempio, se vi sono 100 righe nel test, il conteggio delle righe sarebbero 50 (poiché questo codice recupera solo le prime 50 righe). Se si sono verificati solo 30 righe nella tabella, il conteggio delle righe sarebbero 30. È necessario chiamare `Close` o `CloseAll` per popolare il parametro di output prima di recuperare il relativo valore.

## <a name="see-also"></a>Vedere anche

[Uso delle stored procedure](../../data/oledb/using-stored-procedures.md)