---
title: Classi e thread ODBC
ms.date: 11/04/2016
helpviewer_keywords:
- ODBC classes, and threads
- ODBC, multithreaded applications
- threading [MFC], ODBC support
ms.assetid: 16543926-7331-41a6-ba50-72288f2a61b7
ms.openlocfilehash: 8cb5df605bef31e177e976798f975bb4ca14ced7
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213174"
---
# <a name="odbc-classes-and-threads"></a>Classi e thread ODBC

A partire da MFC 4,2, è disponibile il supporto per il multithreading per le classi ODBC MFC. Si noti, tuttavia, che MFC non fornisce supporto per il multithreading per le classi DAO.

Il supporto del multithreading per le classi ODBC presenta alcune limitazioni. Poiché queste classi eseguono il wrapping dell'API ODBC, sono limitate al supporto per il multithreading dei componenti in cui sono compilati. Molti driver ODBC, ad esempio, non sono thread-safe. Pertanto, le classi ODBC MFC non sono thread-safe se vengono utilizzate con uno di questi driver. È necessario verificare se il driver specifico è thread-safe.

Quando si crea un'applicazione multithreading, è necessario prestare molta attenzione nell'utilizzo di più thread per modificare lo stesso oggetto. Ad esempio, l'utilizzo dello stesso oggetto `CRecordset` in due thread può causare problemi durante il recupero dei dati; un'operazione di recupero in un thread potrebbe sovrascrivere i dati recuperati nell'altro thread. Un utilizzo più comune delle classi ODBC MFC in thread separati consiste nel condividere un oggetto `CDatabase` aperto tra thread per utilizzare la stessa connessione ODBC, con un oggetto `CRecordset` separato in ogni thread. Si noti che non è necessario passare un oggetto `CDatabase` non aperto a un oggetto `CRecordset` in un altro thread.

> [!NOTE]
>  Se è necessario che più thread modifichino lo stesso oggetto, è necessario implementare i meccanismi di sincronizzazione appropriati, ad esempio le sezioni critiche. Tenere presente che alcune operazioni, ad esempio `Open`, non sono protette. È necessario assicurarsi che tali operazioni non vengano chiamate simultaneamente da thread distinti.

Per ulteriori informazioni sulla creazione di applicazioni multithread, vedere [argomenti relativi a multithreading](../../parallel/multithreading-support-for-older-code-visual-cpp.md).

## <a name="see-also"></a>Vedere anche

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)<br/>
[Programmazione dell'accesso ai dati (MFC/ATL)](../../data/data-access-programming-mfc-atl.md)
