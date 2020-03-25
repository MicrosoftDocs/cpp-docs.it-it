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
ms.openlocfilehash: 0b590ce9309cbbe95285001cc5befe70a1d1961f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213330"
---
# <a name="access-to-odbc-and-sql"></a>Accesso a ODBC e SQL

Il libreria Microsoft Foundation Class incapsula molte chiamate API Windows e consente comunque di chiamare direttamente qualsiasi funzione API di Windows. Le classi di database offrono la stessa flessibilità per quanto riguarda l'API ODBC. Sebbene le classi di database proteggano la maggior parte della complessità di ODBC, è possibile chiamare le funzioni API ODBC direttamente da qualsiasi punto del programma.

Analogamente, le classi di database proteggono dalla necessità di lavorare molto con [SQL](../../data/odbc/sql.md), ma è possibile usare direttamente SQL se lo si desidera. È possibile personalizzare gli oggetti recordset passando un'istruzione SQL personalizzata o impostando parti dell'istruzione predefinita quando si apre il recordset. È anche possibile effettuare chiamate SQL direttamente usando la funzione membro [ExecuteSQL](../../mfc/reference/cdatabase-class.md#executesql) della classe [CDatabase](../../mfc/reference/cdatabase-class.md).

Per ulteriori informazioni, vedere [ODBC: chiamata di funzioni API ODBC direttamente](../../data/odbc/odbc-calling-odbc-api-functions-directly.md) e [SQL: esecuzione di chiamate SQL dirette (ODBC)](../../data/odbc/sql-making-direct-sql-calls-odbc.md).

## <a name="see-also"></a>Vedere anche

[ODBC e MFC](../../data/odbc/odbc-and-mfc.md)
