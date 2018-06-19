---
title: 'ODBC: Chiamata di API ODBC direttamente le funzioni | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 55b95c5dd48631f9c724aebd163ce948c3469850
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33089718"
---
# <a name="odbc-calling-odbc-api-functions-directly"></a>ODBC: chiamata diretta delle funzioni dell'API ODBC
Le classi di database forniscono un'interfaccia più semplice per un [origine dati](../../data/odbc/data-source-odbc.md) rispetto a ODBC. Di conseguenza, le classi non includono tutte le API ODBC. Per tutte le funzionalità non è compresa la capacità delle classi, è necessario chiamare direttamente le funzioni API ODBC. Ad esempio, è necessario chiamare le funzioni di catalogo ODBC (**:: SQLColumns**, **:: SQLProcedures**, **:: SQLTables**e altri) direttamente.  
  
> [!NOTE]
>  Origini dati ODBC sono accessibili tramite le classi ODBC MFC, come descritto in questo argomento, oppure tramite le classi MFC oggetto DAO (Data Access).  
  
 Per chiamare una funzione API ODBC direttamente, è necessario eseguire gli stessi passaggi da eseguire se si sono effettuando chiamate senza il framework. Essi sono passaggi:  
  
-   Allocare spazio di archiviazione per i risultati che della chiamata.  
  
-   Passare a un database ODBC **HDBC** o **HSTMT** gestire, a seconda della firma di parametro della funzione. Utilizzare il [AFXGetHENV](../../mfc/reference/database-macros-and-globals.md#afxgethenv) (macro) per recuperare l'handle ODBC.  
  
     Variabili membro **CDatabase:: M_hdbc** e **CRecordset:: M_hstmt** sono disponibili in modo che non è necessaria allocare e inizializzare manualmente.  
  
-   Ad esempio chiamare funzioni ODBC aggiuntive prima o dopo la chiamata principale.  
  
-   Al termine, deallocare spazio di archiviazione.  
  
 Per ulteriori informazioni su questi passaggi, vedere il [Open Database Connectivity (ODBC)](https://msdn.microsoft.com/en-us/library/ms710252.aspx) SDK nella documentazione di MSDN.  
  
 Oltre a questi passaggi, è necessario eseguire passaggi aggiuntivi per controllare i valori restituiti dalla funzione, assicurarsi che il programma non è in attesa di una chiamata asincrona alla fine e così via. È possibile semplificare queste ultime operazioni utilizzando il `AFX_SQL_ASYNC` e `AFX_SQL_SYNC` macro. Per ulteriori informazioni, vedere [macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md) nel *riferimenti alla libreria MFC*.  

  
## <a name="see-also"></a>Vedere anche  
 [Nozioni fondamentali su ODBC](../../data/odbc/odbc-basics.md)
