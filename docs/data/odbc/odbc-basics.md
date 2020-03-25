---
title: Nozioni fondamentali su ODBC
ms.date: 11/04/2016
helpviewer_keywords:
- ODBC cursor library [ODBC], ODBC components
- ODBC components
- ODBC components, required components
- ODBC, about ODBC
- ODBC, components
ms.assetid: ec529702-0fb2-4754-b8de-d1efa8eca18f
ms.openlocfilehash: 042b1ce6d12e4f4a2be57c0e2e8e01d9750f5357
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213213"
---
# <a name="odbc-basics"></a>Nozioni fondamentali su ODBC

In questo argomento vengono fornite le nozioni di base di Open Database Connectivity (ODBC):

- [Funzionamento di ODBC con le classi di database](../../data/odbc/odbc-and-the-database-classes.md)

- [Funzionamento dei driver ODBC con i dynaset](../../data/odbc/odbc-driver-requirements-for-dynasets.md)

- [Quali componenti ODBC è necessario ridistribuire con le applicazioni](../../data/odbc/redistributing-odbc-components-to-your-customers.md)

Sarà inoltre necessario leggere l'argomento correlato [ODBC: la libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md).

> [!NOTE]
> Le origini dati ODBC sono accessibili tramite le classi ODBC MFC, come descritto in questo argomento, oppure tramite le classi DAO (Data Access Object) MFC.

> [!NOTE]
> Le classi ODBC MFC supportano il multithreading e Unicode. Per ulteriori informazioni sul supporto del multithreading, vedere [classi e thread ODBC](../../data/odbc/odbc-classes-and-threads.md) .

ODBC è un'interfaccia a livello di chiamata che consente alle applicazioni di accedere ai dati in qualsiasi database per cui è presente un driver ODBC. Con ODBC è possibile creare applicazioni di database con accesso a qualsiasi database per il quale l'utente finale dispone di un driver ODBC. ODBC fornisce un'API che consente all'applicazione di essere indipendente dal sistema di gestione di database (DBMS) di origine.

ODBC è la parte del database di Microsoft Windows Open Services Architecture (WOSA), un'interfaccia che consente alle applicazioni desktop basate su Windows di connettersi a più ambienti di elaborazione senza riscrivere l'applicazione per ogni piattaforma.

Di seguito sono riportati i componenti di ODBC:

- API ODBC

   Una libreria di chiamate di funzione, un set di codici di errore e una sintassi [SQL](../../data/odbc/sql.md) standard per l'accesso ai dati nei DBMS.

- Gestione driver ODBC

   Libreria a collegamento dinamico (odbc32. dll) che carica i driver del database ODBC per conto di un'applicazione. Questa DLL è trasparente per l'applicazione.

- Driver di database ODBC

   Una o più DLL che elaborano chiamate di funzione ODBC per DBMS specifici. Per un elenco di driver forniti, vedere [elenco dei driver ODBC](../../data/odbc/odbc-driver-list.md).

- [Libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md)

   Una libreria a collegamento dinamico (Odbccr32. dll) che risiede tra Gestione driver ODBC e i driver e gestisce lo scorrimento dei dati.

- [Amministratore ODBC](../../data/odbc/odbc-administrator.md)

   Strumento utilizzato per configurare un DBMS per renderlo disponibile come origine dati per un'applicazione.

Un'applicazione consente di ottenere l'indipendenza dai sistemi DBMS mediante un driver ODBC scritto specificamente per un sistema DBMS, anziché lavorare direttamente con il sistema DBMS. Il driver converte le chiamate in comandi che possono essere utilizzati dal sistema DBMS, semplificando il lavoro dello sviluppatore e rendendolo disponibile per un'ampia gamma di origini dati.

Le classi di database supportano qualsiasi origine dati per la quale si dispone di un driver ODBC. Questo potrebbe includere, ad esempio, un database relazionale, un database di metodo di accesso sequenziale indicizzato (ISAM), un foglio di calcolo di Microsoft Excel o un file di testo. I driver ODBC gestiscono le connessioni all'origine dati e SQL viene utilizzato per selezionare i record dal database.

Per un elenco dei driver ODBC inclusi in questa versione di Visual C++ e informazioni su come ottenere driver aggiuntivi, vedere [Elenco dei driver ODBC](../../data/odbc/odbc-driver-list.md).

## <a name="see-also"></a>Vedere anche

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)
