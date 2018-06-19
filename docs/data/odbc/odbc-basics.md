---
title: Nozioni fondamentali su ODBC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ODBC cursor library [ODBC], ODBC components
- ODBC components
- ODBC components, required components
- ODBC, about ODBC
- ODBC, components
ms.assetid: ec529702-0fb2-4754-b8de-d1efa8eca18f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 69b3694292171f00e03cdb941def27fd9e8ffc84
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33090299"
---
# <a name="odbc-basics"></a>Nozioni fondamentali su ODBC
In questo argomento fornisce le nozioni di base di Open Database Connectivity (ODBC):  
  
-   [Funzionamento con le classi di Database ODBC](../../data/odbc/odbc-and-the-database-classes.md)  
  
-   [Funzionano di driver ODBC con dynaset](../../data/odbc/odbc-driver-requirements-for-dynasets.md)  
  
-   [È necessario ridistribuire con le applicazioni dei componenti ODBC](../../data/odbc/redistributing-odbc-components-to-your-customers.md)  
  
 È anche possibile leggere l'argomento correlato [ODBC: libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md).  
  
> [!NOTE]
>  Origini dati ODBC sono accessibili tramite le classi ODBC MFC, come descritto in questo argomento, oppure tramite le classi MFC oggetto DAO (Data Access).  
  
> [!NOTE]
>  Le classi ODBC MFC supportano Unicode e multithreading. Per ulteriori informazioni sul supporto del multithreading, vedere [classi e thread ODBC](../../data/odbc/odbc-classes-and-threads.md)  
  
 ODBC è un'interfaccia a livello di chiamata che consente alle applicazioni di accedere ai dati in qualsiasi database per cui è disponibile un driver ODBC. Utilizzo di ODBC, è possibile creare applicazioni di database con accesso a qualsiasi database per cui l'utente finale è un driver ODBC. ODBC fornisce un'API che consente all'applicazione di essere indipendenti dal sistema di gestione database (DBMS) di origine.  
  
 ODBC è la parte del database di Microsoft Windows aprire Services Architecture (WOSA), che è un'interfaccia che consente alle applicazioni in desktop basati su Windows per connettersi a più ambienti di elaborazione senza riscrivere l'applicazione per ogni piattaforma.  
  
 Di seguito sono indicati i componenti di ODBC:  
  
-   API ODBC  
  
     Chiama una libreria di funzione, un set di codici di errore e uno standard [SQL](../../data/odbc/sql.md) sintassi per l'accesso ai dati nei DBMS.  
  
-   Gestione Driver ODBC  
  
     Una libreria a collegamento dinamico (Odbc32. dll) che carica driver ODBC di database per conto di un'applicazione. Questa DLL è trasparente all'applicazione.  
  
-   Driver ODBC di database  
  
     Uno o più DLL che elaborano chiamate di funzione ODBC per DBMS specifici. Per un elenco dei driver disponibili, vedere [elenco dei Driver ODBC](../../data/odbc/odbc-driver-list.md).  
  
-   [Libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md)  
  
     Una libreria a collegamento dinamico (Odbccr32) che si trova tra gestione Driver ODBC e i driver e gestisce lo scorrimento dei dati.  
  
-   [Amministratore ODBC](../../data/odbc/odbc-administrator.md)  
  
     Uno strumento utilizzato per la configurazione di un sistema DBMS per renderlo disponibile come un'origine dati per un'applicazione.  
  
 Un'applicazione raggiunge indipendente dai DBMS funzionante tramite un driver ODBC scritto specificamente per DBMS anziché utilizzare direttamente con il sistema DBMS. Il driver converte le chiamate in comandi utilizzati dal relativo DBMS, semplificando il lavoro degli sviluppatori e rendendoli disponibili per un'ampia gamma di origini dati.  
  
 Le classi di database supportano qualsiasi origine dati per cui si dispone di un driver ODBC. Potrebbe, ad esempio trattarsi di un database relazionale, un database di Access metodo ISAM (Indexed Sequential), un foglio di calcolo di Microsoft Excel o un file di testo. Le connessioni all'origine dati di gestire i driver ODBC e SQL viene utilizzato per selezionare i record dal database.  
  
 Per un elenco dei driver ODBC inclusi in questa versione di Visual C++ e per informazioni su come ottenere i driver aggiuntivi, vedere [elenco dei Driver ODBC](../../data/odbc/odbc-driver-list.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)