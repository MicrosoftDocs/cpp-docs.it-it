---
title: Conversione di applicazioni dati | Microsoft Docs
ms.custom: 
ms.date: 05/12/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- MFC [C++], data access applications
- databases [C++], MFC
- OLE DB [C++], data access technologies
- data [C++], data access technologies
- data access [C++], class libraries for databases
ms.assetid: 8d10c285-c13f-4e6e-a09e-5ee0f2666b44
caps.latest.revision: 0
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: Human Translation
ms.sourcegitcommit: 0fa935667ed1ec0410e8981758dce25b88324718
ms.openlocfilehash: b8599f7220554984453bfabe988b95209f5a82a0
ms.contentlocale: it-it
ms.lasthandoff: 05/24/2017

---

# <a name="porting-data-applications"></a>Conversione di applicazioni dati
Nel corso degli anni, Visual C++ ha proposto diversi metodi per usare i database. Nel 2011 Microsoft ha annunciato la scelta di ODBC come tecnologia preferenziale per l'accesso ai prodotti SQL Server da codice nativo. ODBC è uno standard del settore e l'uso di questa tecnologica consente di ottenere la massima portabilità del codice su più piattaforme e origini dati. La maggior parte dei prodotti database SQL e molti prodotti non SQL supportano ODBC. È possibile usare ODBC chiamando direttamente le API ODBC di basso livello oppure è possibile usare le classi wrapper ODBC MFC o una libreria wrapper C++ di terze parti. 

OLE DB è un'API di basso livello, ad alte prestazioni basata sulla specifica COM e supportata solo in Windows. Usare OLE DB se il programma accede a [server collegati](https://msdn.microsoft.com/library/ms188279.aspx). ATL offre modelli OLE DB che rendono più semplice creare consumer e provider OLE DB personalizzati. La versione più recente di OLE DB è stata fornita con SQL Native Client 11.  

Se un'applicazione legacy usa OLE DB o l'interfaccia ADO di livello più alto per connettersi a SQL Server e non si accede a server collegati, è consigliabile eseguire la migrazione a ODBC in un prossimo futuro. Se non sono richieste la portabilità tra piattaforme o le funzionalità di SQL Server più recenti, è verosimilmente possibile usare il provider Microsoft OLE DB per ODBC (MSDASQL).  MSDASQL consente alle applicazioni basate su OLE DB e ADO (che usa OLE DB internamente) di accedere alle origini dati tramite un driver ODBC. Come per qualsiasi livello di conversione, MSDASQL può avere un impatto negativo sulle prestazioni del database. È consigliabile eseguire test per stabilire se l'impatto è significativo per l'applicazione specifica. MSDASQL viene fornito con il sistema operativo Windows e Windows Server 2008 e Windows Vista SP1 sono le prime versioni di Windows a includere una versione a 64 bit della tecnologia.

Il componente SQL Native Client (SNAC), che include i driver OLE DB e ODBC in una singola DLL, è deprecato per le applicazioni ODBC. La versione di SQL Server 2012 di SNAC (SQLNCLI11.DLL) viene fornita con SQL Server 2016 perché altri componenti di SQL Server dipendono da esso. Per le nuove applicazioni C++ che si connettono a SQL Server o al database SQL di Azure tramite ODBC è tuttavia consigliabile usare il [driver ODBC più recente](https://docs.microsoft.com/en-us/sql/connect/odbc/download-odbc-driver-for-sql-server). Per altre informazioni, vedere [SQL Server Native Client Programming](https://msdn.microsoft.com/en-us/library/ms130892.aspx) (Programmazione con SQL Server Native Client).

Se si usa C++/CLI, è possibile continuare a usare ADO.NET come sempre. Per altre informazioni, vedere [Accesso ai dati tramite ADO.NET (C++/CLI)](../dotnet/data-access-using-adonet-cpp-cli.md) e [Accesso ai dati in Visual Studio](/visualstudio/data-tools/accessing-data-in-visual-studio).  
  
-   Oltre alle classi wrapper ODBC, MFC fornisce anche classi wrapper DAO (Data Access Objects) per la connessione a database di Access.  Tuttavia, DAO è obsoleto. Qualsiasi codice basato su CDaoDatabase o CDaoRecordset deve essere aggiornato. 

Per altre informazioni sulla storia delle tecnologie di accesso ai dati in Microsoft Windows, vedere [Microsoft Data Access Components (Wikipedia)](https://en.wikipedia.org/wiki/Microsoft_Data_Access_Components).  

## <a name="see-also"></a>Vedere anche  
 [Accesso ai dati in Visual C++](../data/data-access-in-cpp.md)  
 [Microsoft Open Database Connectivity (ODBC)](https://docs.microsoft.com/sql/odbc/microsoft-open-database-connectivity-odbc)  
 [Data Access Technologies Road Map](https://msdn.microsoft.com/en-us/library/ms810810.aspx) (Guida di orientamento per le tecnologie di accesso ai dati)  