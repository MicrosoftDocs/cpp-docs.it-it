---
description: 'Altre informazioni su: ODBC: chiamata diretta delle funzioni API ODBC'
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
ms.openlocfilehash: 3b82e0270242d59767e9d67e6eb7491a4607990f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97161117"
---
# <a name="odbc-calling-odbc-api-functions-directly"></a>ODBC: chiamata diretta delle funzioni dell'API ODBC

Le classi di database forniscono un'interfaccia più semplice a un' [origine dati](../../data/odbc/data-source-odbc.md) rispetto a ODBC. Di conseguenza, le classi non incapsulano tutte le API ODBC. Per tutte le funzionalità che non rientrano nelle capacità delle classi, è necessario chiamare direttamente le funzioni dell'API ODBC. Ad esempio, è necessario chiamare direttamente le funzioni del catalogo ODBC ( `::SQLColumns` ,, `::SQLProcedures` `::SQLTables` e altri).

> [!NOTE]
> Le origini dati ODBC sono accessibili tramite le classi ODBC MFC, come descritto in questo argomento, oppure tramite le classi DAO (Data Access Object) MFC.

Per chiamare direttamente una funzione API ODBC, è necessario eseguire gli stessi passaggi necessari se si effettuano chiamate senza il Framework. I passaggi sono i seguenti:

- Allocare spazio di archiviazione per tutti i risultati restituiti dalla chiamata.

- Passare un oggetto ODBC `HDBC` o `HSTMT` handle, a seconda della firma del parametro della funzione. Utilizzare la macro [AFXGetHENV](../../mfc/reference/database-macros-and-globals.md#afxgethenv) per recuperare l'handle ODBC.

   `CDatabase::m_hdbc`Sono disponibili variabili membro e `CRecordset::m_hstmt` non è necessario allocarle e inizializzarle manualmente.

- È possibile, ad esempio, chiamare funzioni ODBC aggiuntive per preparare o completare la chiamata principale.

- Al termine, deallocare lo spazio di archiviazione.

Per ulteriori informazioni su questi passaggi, vedere [ODBC Programmer ' s Reference](/sql/odbc/reference/odbc-programmer-s-reference).

Oltre a questi passaggi, è necessario eseguire passaggi aggiuntivi per controllare i valori restituiti dalla funzione, verificare che il programma non sia in attesa del completamento di una chiamata asincrona e così via. È possibile semplificare questi ultimi passaggi usando le macro AFX_SQL_ASYNC e AFX_SQL_SYNC. Per ulteriori informazioni, vedere [macro MFC e globali](../../mfc/reference/mfc-macros-and-globals.md).

## <a name="see-also"></a>Vedi anche

[Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)
