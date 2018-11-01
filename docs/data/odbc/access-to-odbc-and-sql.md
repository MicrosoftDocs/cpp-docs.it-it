---
title: Accesso a ODBC e SQL
ms.date: 11/04/2016
helpviewer_keywords:
- API calls [C++], calling DAO or ODBC directly
- Windows API [C++], calling from MFC
- ODBC API functions [C++]
- ODBC API functions [C++], calling from MFC
- SQL [C++], calling ODBC API functions
- ODBC [C++], API functions
ms.assetid: 5613d7dc-00b7-4646-99ae-1116c05c52b4
ms.openlocfilehash: 97aa0f6318a47a93b0079a81dea772b900b5484b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50441769"
---
# <a name="access-to-odbc-and-sql"></a>Accesso a ODBC e SQL

La libreria Microsoft Foundation Class incapsula molte chiamate API di Windows e ancora consente di chiamare qualsiasi funzione API Windows direttamente. Le classi di database offrono la stessa flessibilità per quanto riguarda l'API ODBC. Mentre le classi di database nascondono la complessità di ODBC, è possibile chiamare funzioni API ODBC direttamente da qualsiasi posizione nel programma.

Allo stesso modo, le classi di database non richiedono un funzionamento molto [SQL](../../data/odbc/sql.md), ma è possibile usare SQL direttamente se si desidera. È possibile personalizzare oggetti recordset passando un'istruzione SQL personalizzata (o parti di impostazione dell'istruzione predefinita) quando si apre il recordset. È anche possibile effettuare chiamate SQL direttamente usando il [ExecuteSQL](../../mfc/reference/cdatabase-class.md#executesql) la funzione membro della classe [CDatabase](../../mfc/reference/cdatabase-class.md).

Per altre informazioni, vedere [ODBC: chiamata diretta delle funzioni API ODBC](../../data/odbc/odbc-calling-odbc-api-functions-directly.md) e [SQL: esecuzione di chiamate SQL dirette (ODBC)](../../data/odbc/sql-making-direct-sql-calls-odbc.md).

## <a name="see-also"></a>Vedere anche

[ODBC e MFC](../../data/odbc/odbc-and-mfc.md)