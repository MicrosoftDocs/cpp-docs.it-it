---
title: Accesso a ODBC e SQL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- API calls [C++], calling DAO or ODBC directly
- Windows API [C++], calling from MFC
- ODBC API functions [C++]
- ODBC API functions [C++], calling from MFC
- SQL [C++], calling ODBC API functions
- ODBC [C++], API functions
ms.assetid: 5613d7dc-00b7-4646-99ae-1116c05c52b4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 4fb5daa988614e7e9cb058fce183c6af5b50dd30
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33087816"
---
# <a name="access-to-odbc-and-sql"></a>Accesso a ODBC e SQL
La libreria Microsoft Foundation Class incapsula molte chiamate API di Windows e ancora consente di chiamare qualsiasi funzione Windows API direttamente. Le classi di database offrono la stessa flessibilità per quanto riguarda l'API ODBC. Mentre le classi di database nascondono la complessità di ODBC, è possibile chiamare funzioni API ODBC direttamente da qualsiasi posizione nel programma.  
  
 Analogamente, le classi di database non richiedono un uso continuo di [SQL](../../data/odbc/sql.md), ma è possibile utilizzare SQL direttamente, se si desidera. È possibile personalizzare gli oggetti recordset passando un'istruzione SQL personalizzata (o parti di impostazione dell'istruzione predefinita) quando si apre il recordset. È anche possibile eseguire chiamate SQL direttamente mediante il [ExecuteSQL](../../mfc/reference/cdatabase-class.md#executesql) funzione membro di classe [CDatabase](../../mfc/reference/cdatabase-class.md).  
  
 Per ulteriori informazioni, vedere [ODBC: chiamata diretta delle funzioni API ODBC](../../data/odbc/odbc-calling-odbc-api-functions-directly.md) e [SQL: esecuzione di chiamate SQL dirette (ODBC)](../../data/odbc/sql-making-direct-sql-calls-odbc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [ODBC e MFC](../../data/odbc/odbc-and-mfc.md)