---
title: I parametri di output | Documenti Microsoft
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
ms.openlocfilehash: 8733b967ddab7e6f68fcbee1c80e78500a679f96
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33104386"
---
# <a name="output-parameters"></a>Parametri di output
La chiamata di una stored procedure è simile alla chiamata a un comando SQL. La differenza principale è che le stored procedure utilizzano parametri di output (o "output") e valori restituiscono.  
  
 Nella seguente stored procedure, il primo '? 'è il valore restituito (phone) e il secondo'?' è il parametro di input (nome):  
  
```  
DEFINE_COMMAND(CMySProcAccessor, _T("{ ? = SELECT phone FROM shippers WHERE name = ? }")  
```  
  
 Specificare i parametri di input e nella mappa di parametri:  
  
```  
BEGIN_PARAM_MAP(CMySProcAccessor)  
   SET_PARAM_TYPE(DBPARAMIO_OUTPUT)  
   COLUMN_ENTRY(1, m_Phone)   // Phone is the return value  
   SET_PARAM_TYPE(DBPARAMIO_INPUT)  
   COLUMN_ENTRY(2, m_Name)   // Name is the input parameter  
END_PARAM_MAP()  
```  
  
 L'applicazione deve gestire l'output restituito dalle stored procedure. Provider OLE DB diversi restituiscono parametri di output e restituire valori in momenti diversi durante l'elaborazione dei risultati. Il provider Microsoft OLE DB per SQL Server (SQLOLEDB), ad esempio, non fornire i parametri di output e codice restituito fino a quando il consumer ha recuperato o annullato i set di risultati restituiti dalla stored procedure. L'output viene restituito nell'ultimo pacchetto TDS dal server.  
  
## <a name="row-count"></a>Conteggio delle righe  
 Se si utilizza i modelli Consumer OLE DB per eseguire una stored procedure con parametri di output, non è impostato il numero di righe finché non si chiude il set di righe.  
  
 Si consideri ad esempio una stored procedure con un set di righe e un parametro di output:  
  
```  
create procedure sp_test  
   @_rowcount integer output  
as  
   select top 50 * from test  
   @_rowcount = @@rowcount  
return 0  
```  
  
 Il @_rowcount parametro di output restituisce il numero di righe effettivamente restituito dalla tabella di prova. Tuttavia, questa stored procedure limita il numero di righe da un massimo di 50. Ad esempio, se vi sono 100 righe nel test, il conteggio delle righe sarebbe 50 (perché il codice recupera solo le prime 50 righe). Se sono stati solo 30 righe nella tabella, il conteggio delle righe sarebbe 30. È necessario chiamare **Chiudi** o **CloseAll** per popolare il parametro di output prima di recuperare il relativo valore.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle stored procedure](../../data/oledb/using-stored-procedures.md)