---
title: Classi e thread ODBC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- ODBC classes, and threads
- ODBC, multithreaded applications
- threading [MFC], ODBC support
ms.assetid: 16543926-7331-41a6-ba50-72288f2a61b7
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 1d1d922dfc34fa3e5530eca77a6501ad3e331fc8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="odbc-classes-and-threads"></a>Classi e thread ODBC
A partire da MFC 4.2, è il supporto multithreading per le classi ODBC MFC. Si noti tuttavia che MFC non fornisce il supporto multithreading per le classi DAO.  
  
 Supporto del multithreading per le classi ODBC presenta alcune limitazioni. Poiché queste classi eseguono il wrapping dell'API ODBC, sono limitati a supporto del multithreading dei componenti in cui vengono compilati. Ad esempio, molti driver ODBC non sono thread-safe. Pertanto, le classi ODBC MFC non sono thread-safe se utilizzati con uno di questi driver. È necessario verificare se il driver utilizzato è thread-safe.  
  
 Quando si crea un'applicazione multithreading, è necessario prestare attenzione nell'utilizzo di più thread per modificare l'oggetto stesso. Ad esempio, utilizzando lo stesso `CRecordset` oggetto in due thread può provocare problemi durante il recupero di dati; un'operazione di recupero in un thread potrebbe sovrascrivere i dati recuperati in altro thread. Le classi ODBC MFC in thread separati un utilizzo più comune è quello di condividere open `CDatabase` oggetto tra thread da utilizzare la stessa connessione ODBC, con un apposito `CRecordset` in ogni thread. Si noti che non deve passare un non aperta `CDatabase` l'oggetto in un `CRecordset` oggetto in un altro thread.  
  
> [!NOTE]
>  Se è necessario disporre di più thread per gestire lo stesso oggetto, è necessario implementare i meccanismi di sincronizzazione appropriate, ad esempio le sezioni critiche. Tenere presente che alcune operazioni, ad esempio **aprire**, non sono protetti. È necessario assicurarsi che queste operazioni non verranno chiamate simultaneamente da un thread separato.  
  
 Per ulteriori informazioni sulla creazione di applicazioni multithreading, vedere [argomenti relativi al Multithreading](../../parallel/multithreading-support-for-older-code-visual-cpp.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)   
 [Accesso ai dati di programmazione (MFC/ATL)](../../data/data-access-programming-mfc-atl.md)