---
title: "ODBC: chiamata diretta delle funzioni dell'API ODBC"
ms.date: 11/04/2016
helpviewer_keywords:
- ODBC API functions [C++], calling
- ODBC [C++], catalog functions
- ODBC API functions [C++]
- APIs [C++], calling
- ODBC classes [C++], vs. ODBC API
- direct ODBC API calls
- catalog functions (ODBC)
- catalog functions (ODBC), calling
- ODBC [C++], API functions
ms.assetid: 4295f1d9-4528-4d2e-bd6a-c7569953c7fa
ms.openlocfilehash: 8c6781e0ff49b026e3b969f062f01e9923eb0a6c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50665699"
---
# <a name="odbc-calling-odbc-api-functions-directly"></a>ODBC: chiamata diretta delle funzioni dell'API ODBC

Le classi di database forniscono un'interfaccia più semplice a un [zdroj dat](../../data/odbc/data-source-odbc.md) rispetto a ODBC. Di conseguenza, le classi non includono tutte le API ODBC. Per tutte le funzionalità non è compresa la capacità delle classi, è necessario chiamare direttamente le funzioni API ODBC. Ad esempio, è necessario chiamare le funzioni di catalogo ODBC (`::SQLColumns`, `::SQLProcedures`, `::SQLTables`e altri ancora) direttamente.

> [!NOTE]
>  Origini dati ODBC sono accessibili tramite le classi ODBC MFC, come descritto in questo argomento, o tramite le classi MFC oggetto DAO (Data Access).

Per chiamare una funzione API ODBC direttamente, è necessario eseguire gli stessi passaggi da eseguire se si sono effettuando le chiamate senza il framework. Essi sono passaggi:

- Allocare spazio di archiviazione per la chiamata restituisce risultati.

- Passare un database ODBC `HDBC` o `HSTMT` gestire, a seconda della firma di parametro della funzione. Usare la [AFXGetHENV](../../mfc/reference/database-macros-and-globals.md#afxgethenv) macro per recuperare l'handle ODBC.

   Le variabili membro `CDatabase::m_hdbc` e `CRecordset::m_hstmt` sono disponibili in modo che non è necessario allocare e inizializzare manualmente.

- Forse chiamare altre funzioni ODBC per prima o dopo la chiamata principale.

- Al termine, deallocare spazio di archiviazione.

Per altre informazioni su questi passaggi, vedere la [Open Database Connectivity (ODBC)](/previous-versions/windows/desktop/ms710252) SDK nella documentazione MSDN.

Oltre a questi passaggi, è necessario eseguire passaggi aggiuntivi per verificare i valori restituiti di funzione, assicurarsi che il programma non è in attesa di una chiamata asincrona terminare e così via. È possibile semplificare questi ultimi passaggi usando le macro macro AFX_SQL_ASYNC e AFX_SQL_SYNC. Per altre informazioni, vedere [macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md) nel *riferimento MFC*.

## <a name="see-also"></a>Vedere anche

[Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)
