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
ms.openlocfilehash: 81b1f6d06d909b5b046703b97c4574270efbdd46
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50591724"
---
# <a name="odbc-basics"></a>Nozioni fondamentali su ODBC

Questo argomento vengono fornite le nozioni di base di Open Database Connectivity (ODBC):

- [Funzionamento con le classi di Database ODBC](../../data/odbc/odbc-and-the-database-classes.md)

- [Funzionano dei driver ODBC con dynaset](../../data/odbc/odbc-driver-requirements-for-dynasets.md)

- [È necessario ridistribuire con le applicazioni dei componenti ODBC](../../data/odbc/redistributing-odbc-components-to-your-customers.md)

È anche possibile leggere l'argomento correlato [ODBC: libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md).

> [!NOTE]
> Origini dati ODBC sono accessibili tramite le classi ODBC MFC, come descritto in questo argomento, o tramite le classi MFC oggetto DAO (Data Access).

> [!NOTE]
> Le classi ODBC MFC il supporto Unicode e per il multithreading. Per altre informazioni sul supporto del multithreading, vedere [classi e thread ODBC](../../data/odbc/odbc-classes-and-threads.md)

ODBC è un'interfaccia a livello di chiamata che consente alle applicazioni di accedere ai dati in qualsiasi database per cui è disponibile un driver ODBC. Utilizzo di ODBC, è possibile creare applicazioni di database con accesso a qualsiasi database per cui l'utente finale ha un driver ODBC. ODBC fornisce un'API che consente all'applicazione di essere indipendente di origine database management system (DBMS).

ODBC è il database di per Microsoft WOSA Windows Open servizi architettura (), che è un'interfaccia che consente alle applicazioni di desktop basati su Windows per la connessione per diversi ambienti informatici senza riscrivere l'applicazione per ogni piattaforma.

Di seguito sono i componenti di ODBC:

- API ODBC

   Chiama una libreria di funzione, un set di codici di errore e uno standard [SQL](../../data/odbc/sql.md) sintassi per l'accesso ai dati nei DBMS.

- Gestione Driver ODBC

   Una libreria a collegamento dinamico (file Odbc32.dll) che consente di caricare i driver di database ODBC per conto di un'applicazione. Questa DLL è trasparente all'applicazione.

- Driver di database ODBC

   Una o più DLL che elaborano chiamate di funzione ODBC per DBMS specifici. Per un elenco dei driver disponibili, vedere [elenco dei Driver ODBC](../../data/odbc/odbc-driver-list.md).

- [Libreria di cursori ODBC](../../data/odbc/odbc-the-odbc-cursor-library.md)

   Una libreria a collegamento dinamico (Odbccr32) che risiede tra gestione Driver ODBC e i driver e gestisce lo scorrimento dei dati.

- [Amministratore ODBC](../../data/odbc/odbc-administrator.md)

   Strumento usato per la configurazione di un sistema DBMS per renderlo disponibile come origine dati per un'applicazione.

Un'applicazione realizza l'indipendenza da DBMS funzionante tramite un driver ODBC scritto specificamente per un sistema DBMS, anziché lavorare direttamente con il sistema DBMS. Il driver converte le chiamate in comandi che relativi DBMS possono usare, semplificando il lavoro degli sviluppatori e renderla disponibile per un'ampia gamma di origini dati.

Le classi di database supportano qualsiasi origine dati per cui si ha un driver ODBC. Potrebbe, ad esempio trattarsi di un database relazionale, un database di Access metodo ISAM (Indexed Sequential), un foglio di calcolo di Microsoft Excel o un file di testo. I driver ODBC gestiscono le connessioni all'origine dati e viene usato per selezionare record dal database SQL.

Per un elenco dei driver ODBC inclusa in questa versione di Visual C++ e per informazioni su come ottenere driver aggiuntivi, vedere [elenco dei Driver ODBC](../../data/odbc/odbc-driver-list.md).

## <a name="see-also"></a>Vedere anche

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)