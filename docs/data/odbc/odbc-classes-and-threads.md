---
title: Classi e thread ODBC
ms.date: 11/04/2016
helpviewer_keywords:
- ODBC classes, and threads
- ODBC, multithreaded applications
- threading [MFC], ODBC support
ms.assetid: 16543926-7331-41a6-ba50-72288f2a61b7
ms.openlocfilehash: 1d470e79ba5a6a73a30743a21da0462a6b89e7da
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50608169"
---
# <a name="odbc-classes-and-threads"></a>Classi e thread ODBC

A partire da MFC 4.2, vi è supporto del multithreading per le classi ODBC MFC. Si noti tuttavia che MFC non fornisce il supporto del multithreading per le classi DAO.

Il supporto del multithreading per le classi ODBC presenta alcune limitazioni. Poiché queste classi eseguono il wrapping dell'API ODBC, sono limitate a supporto del multithreading dei componenti in cui vengono compilati. Ad esempio, molti driver ODBC non sono thread-safe. di conseguenza, le classi ODBC MFC non sono thread-safe se vengono usati con uno di questi driver. È necessario verificare se il driver utilizzato è thread-safe.

Quando si crea un'applicazione multithreading, è necessario prestare attenzione nell'utilizzo di più thread per modificare l'oggetto stesso. Ad esempio, usando lo stesso `CRecordset` oggetto in due thread potrebbe però verificarsi problemi durante il recupero dei dati, un'operazione di recupero in un thread potrebbe sovrascrivere i dati recuperati da altro thread. Un uso più comune delle classi ODBC MFC in thread separati è quello di condividere un oggetto aperto `CDatabase` oggetto in più thread da usare la stessa connessione ODBC, con un oggetto separato `CRecordset` in ogni thread. Tenere presente che evita di passare un non aperte `CDatabase` dell'oggetto a un `CRecordset` oggetto in un altro thread.

> [!NOTE]
>  Se è necessario disporre di più thread per gestire lo stesso oggetto, è necessario implementare i meccanismi di sincronizzazione appropriata, ad esempio le sezioni critiche. Tenere presente che alcune operazioni, ad esempio `Open`, non sono protette. È necessario assicurarsi che queste operazioni non verranno chiamate simultaneamente da thread distinti.

Per altre informazioni sulla creazione di applicazioni multithreading, vedere [argomenti relativi al Multithreading](../../parallel/multithreading-support-for-older-code-visual-cpp.md).

## <a name="see-also"></a>Vedere anche

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)<br/>
[Accesso ai dati (MFC/ATL) di programmazione](../../data/data-access-programming-mfc-atl.md)