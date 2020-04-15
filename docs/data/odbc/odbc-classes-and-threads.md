---
title: Classi e thread ODBC
ms.date: 11/04/2016
helpviewer_keywords:
- ODBC classes, and threads
- ODBC, multithreaded applications
- threading [MFC], ODBC support
ms.assetid: 16543926-7331-41a6-ba50-72288f2a61b7
ms.openlocfilehash: aaf54a3a1d616cde5742dad45955bd415f612d60
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368694"
---
# <a name="odbc-classes-and-threads"></a>Classi e thread ODBC

A partire da MFC 4.2, è disponibile il supporto multithreading per le classi ODBC MFC. Si noti, tuttavia, che MFC non fornisce il supporto multithreading per le classi DAO.

Il supporto del multithreading per le classi ODBC presenta alcune limitazioni. Poiché queste classi eseguono il wrapping dell'API ODBC, sono limitate al supporto multithreading dei componenti su cui sono compilate. Ad esempio, molti driver ODBC non sono thread-safe; pertanto, le classi ODBC MFC non sono thread-safe se vengono utilizzate con uno di questi driver. È necessario verificare se il driver specifico è thread-safe.

Quando si crea un'applicazione multithreading, è necessario prestare molta attenzione nell'utilizzo di più thread per modificare lo stesso oggetto. Ad esempio, l'utilizzo dello stesso `CRecordset` oggetto in due thread potrebbe causare problemi durante il recupero dei dati; un'operazione di recupero in un thread potrebbe sovrascrivere i dati recuperati nell'altro thread. Un utilizzo più comune delle classi ODBC MFC in `CDatabase` thread separati consiste nel condividere un `CRecordset` oggetto aperto tra thread per utilizzare la stessa connessione ODBC, con un oggetto separato in ogni thread. Si noti che non `CDatabase` è necessario `CRecordset` passare un oggetto non aperto a un oggetto in un altro thread.

> [!NOTE]
> Se è necessario che più thread modificherà lo stesso oggetto, è necessario implementare i meccanismi di sincronizzazione appropriati, ad esempio le sezioni critiche. Tenere presente che alcune `Open`operazioni, ad esempio , non sono protette. È necessario assicurarsi che queste operazioni non verranno chiamate contemporaneamente da thread separati.

Per ulteriori informazioni sulla creazione di applicazioni multithreading, vedere Argomenti relativi al [multithreading](../../parallel/multithreading-support-for-older-code-visual-cpp.md).

## <a name="see-also"></a>Vedere anche

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)<br/>
[Programmazione dell'accesso ai dati (MFC/ATL)Data Access Programming (MFC/ATL)](../../data/data-access-programming-mfc-atl.md)
