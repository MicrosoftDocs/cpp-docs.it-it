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
ms.openlocfilehash: 208749438f40eef746a638dd12373397c426d454
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368661"
---
# <a name="odbc-calling-odbc-api-functions-directly"></a>ODBC: chiamata diretta delle funzioni dell'API ODBC

Le classi di database forniscono un'interfaccia più semplice a [un'origine dati](../../data/odbc/data-source-odbc.md) rispetto a ODBC. Di conseguenza, le classi non incapsulano tutte le API ODBC. Per qualsiasi funzionalità che non rientra nelle capacità delle classi, è necessario chiamare direttamente le funzioni dell'API ODBC. Ad esempio, è necessario chiamare`::SQLColumns`direttamente `::SQLProcedures` `::SQLTables`le funzioni di catalogo ODBC ( , , e altri).

> [!NOTE]
> Le origini dati ODBC sono accessibili tramite le classi ODBC MFC, come descritto in questo argomento o tramite le classi DAO (Data Access Object) MFC.

Per chiamare direttamente una funzione dell'API ODBC, è necessario eseguire gli stessi passaggi da eseguire se si effettuassero le chiamate senza il framework. I passi sono:

- Allocare spazio di archiviazione per tutti i risultati restituiti dalla chiamata.

- Passare un `HDBC` `HSTMT` ODBC o un handle, a seconda della firma del parametro della funzione. Utilizzare la macro [AFXGetHENV](../../mfc/reference/database-macros-and-globals.md#afxgethenv) per recuperare l'handle ODBC.

   Variabili `CDatabase::m_hdbc` membro `CRecordset::m_hstmt` e sono disponibili in modo che non è necessario allocare e inizializzare queste.

- È possibile chiamare funzioni ODBC aggiuntive per preparare o seguire la chiamata principale.

- Al termine, deallocare lo spazio di archiviazione.

Per ulteriori informazioni su questi passaggi, vedere l'SDK [Open Database Connectivity (ODBC)](/sql/odbc/microsoft-open-database-connectivity-odbc) nella documentazione MSDN.

Oltre a questi passaggi, è necessario eseguire passaggi aggiuntivi per controllare i valori restituiti della funzione, assicurarsi che il programma non sia in attesa del completamento di una chiamata asincrona e così via. È possibile semplificare questi ultimi passaggi utilizzando le macro AFX_SQL_ASYNC e AFX_SQL_SYNC. Per ulteriori informazioni, vedere [Macro e variabili globali](../../mfc/reference/mfc-macros-and-globals.md) in Riferimenti a *MFC*.

## <a name="see-also"></a>Vedere anche

[Nozioni di base su ODBCODBC Basics](../../data/odbc/odbc-basics.md)
