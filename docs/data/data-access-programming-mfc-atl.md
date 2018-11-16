---
title: Accesso ai dati (MFC-ATL) di programmazione
ms.date: 11/04/2016
helpviewer_keywords:
- MFC [C++], data access applications
- databases [C++], MFC
- OLE DB [C++], data access technologies
- data [C++], data access technologies
- data access [C++], class libraries for databases
ms.assetid: def97b2c-b5a6-445f-afeb-308050fd4852
ms.openlocfilehash: 8341cf715c96783880fd83f1b8fbb197dbff6046
ms.sourcegitcommit: b08ddf79ea76369c388173913e4e8f6fd8ad02d5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/16/2018
ms.locfileid: "51830478"
---
# <a name="data-access-programming-mfcatl"></a>Programmazione dell'accesso ai dati (MFC/ATL)

Nel corso degli anni, Visual C++ ha proposto diversi metodi per usare i database. Nel 2011 Microsoft ha annunciato la scelta di ODBC come tecnologia preferenziale per l'accesso ai prodotti SQL Server da codice nativo. ODBC è uno standard del settore e l'uso di questa tecnologica consente di ottenere la massima portabilità del codice su più piattaforme e origini dati. La maggior parte dei prodotti database SQL e molti prodotti non SQL supportano ODBC. È possibile usare ODBC chiamando direttamente le API ODBC di basso livello oppure è possibile usare le classi wrapper ODBC MFC o una libreria wrapper C++ di terze parti.

OLE DB è un'API di basso livello, ad alte prestazioni basata sulla specifica COM e supportata solo in Windows. Usare OLE DB se il programma accede a [server collegati](/sql/relational-databases/linked-servers/linked-servers-database-engine). ATL offre modelli OLE DB che rendono più semplice creare consumer e provider OLE DB personalizzati. La versione più recente di OLE DB è stata fornita con SQL Native Client 11.

Se un'applicazione legacy usa OLE DB o l'interfaccia ADO di livello più alto per connettersi a SQL Server e non si accede a server collegati, è consigliabile eseguire la migrazione a ODBC in un prossimo futuro. Se non sono richieste la portabilità tra piattaforme o le funzionalità di SQL Server più recenti, è verosimilmente possibile usare il provider Microsoft OLE DB per ODBC (MSDASQL).  MSDASQL consente alle applicazioni basate su OLE DB e ADO (che usa OLE DB internamente) di accedere alle origini dati tramite un driver ODBC. Come con qualsiasi livello di conversione, MSDASQL può influire sulle prestazioni del database. È necessario testare per determinare se l'impatto è significativo per l'applicazione. MSDASQL viene fornito con il sistema operativo Windows e Windows Server 2008 e Windows Vista SP1 sono le prime versioni di Windows a includere una versione a 64 bit della tecnologia.

Il componente SQL Native Client (SNAC), che include i driver OLE DB e ODBC in una singola DLL, è deprecato per le applicazioni ODBC. La versione di SQL Server 2012 di SNAC (SQLNCLI11.DLL) viene fornita con SQL Server 2016 perché altri componenti di SQL Server dipendono da esso. Per le nuove applicazioni C++ che si connettono a SQL Server o al database SQL di Azure tramite ODBC è tuttavia consigliabile usare il [driver ODBC più recente](https://docs.microsoft.com/sql/connect/odbc/download-odbc-driver-for-sql-server). Per altre informazioni, vedere [SQL Server Native Client Programming](/sql/relational-databases/native-client/sql-server-native-client-programming) (Programmazione con SQL Server Native Client).

Se si usa C++/CLI, è possibile continuare a usare ADO.NET come sempre. Per altre informazioni, vedere [Accesso ai dati tramite ADO.NET (C++/CLI)](../dotnet/data-access-using-adonet-cpp-cli.md) e [Accesso ai dati in Visual Studio](/visualstudio/data-tools/accessing-data-in-visual-studio).

- Oltre alle classi wrapper ODBC, MFC fornisce anche classi wrapper di oggetti DAO (Data Access) per la connessione al database di Access.  Tuttavia, DAO è obsoleto. Qualsiasi codice basato su CDaoDatabase o CDaoRecordset deve essere aggiornato.

Per altre informazioni sulla storia delle tecnologie di accesso ai dati in Microsoft Windows, vedere [Microsoft Data Access Components (Wikipedia)](https://en.wikipedia.org/wiki/Microsoft_Data_Access_Components).

## <a name="see-also"></a>Vedere anche

[Accesso ai dati](data-access-in-cpp.md)<br/>
[Microsoft Open Database Connectivity (ODBC)](https://docs.microsoft.com/sql/odbc/microsoft-open-database-connectivity-odbc)<br/>
[Data Access Technologies Road Map](https://msdn.microsoft.com/library/ms810810.aspx) (Guida di orientamento per le tecnologie di accesso ai dati)