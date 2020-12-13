---
description: "Altre informazioni su: programmazione dell'accesso ai dati (MFC/ATL)"
title: Programmazione dell'accesso ai dati (MFC-ATL)
ms.date: 11/16/2018
helpviewer_keywords:
- MFC [C++], data access applications
- databases [C++], MFC
- OLE DB [C++], data access technologies
- data [C++], data access technologies
- data access [C++], class libraries for databases
ms.assetid: def97b2c-b5a6-445f-afeb-308050fd4852
ms.openlocfilehash: 7785eb65bd26c6c8bf4b60d5a8a919097627f20c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97136474"
---
# <a name="data-access-programming-mfcatl"></a>Programmazione dell'accesso ai dati (MFC/ATL)

Nel corso degli anni, Visual C++ ha proposto diversi metodi per usare i database. In 2011 Microsoft ha annunciato che è allineato a Open Database Connectivity (ODBC) come la tecnologia preferita per accedere ai prodotti SQL Server dal codice nativo. ODBC è uno standard del settore e l'uso di questa tecnologica consente di ottenere la massima portabilità del codice su più piattaforme e origini dati. La maggior parte dei prodotti database SQL e molti prodotti non SQL supportano ODBC. È possibile usare ODBC chiamando direttamente le API ODBC di basso livello oppure è possibile usare le classi wrapper ODBC MFC o una libreria wrapper C++ di terze parti.

OLE DB è un'API di basso livello, ad alte prestazioni basata sulla specifica COM e supportata solo in Windows. Usare OLE DB se il programma accede a [server collegati](/sql/relational-databases/linked-servers/linked-servers-database-engine). ATL offre modelli OLE DB che rendono più semplice creare consumer e provider OLE DB personalizzati. Il provider più recente per Microsoft SQL Server è disponibile nella documentazione relativa al [Driver OLE DB per SQL Server](/sql/connect/oledb/oledb-driver-for-sql-server).

## <a name="porting-data-applications"></a>Porting di applicazioni dati

Se l'applicazione legacy USA OLE DB o l'interfaccia ADO di livello superiore per connettersi a SQL Server, è consigliabile prendere in considerazione la migrazione al driver di OLE DB più recente [per SQL Server](/sql/connect/oledb/oledb-driver-for-sql-server) per sfruttare le funzionalità di SQL Server più recenti. Un'altra alternativa, se non è necessaria la portabilità multipiattaforma o le funzionalità di SQL Server più recenti, è possibile utilizzare Microsoft OLE DB provider per ODBC (MSDASQL).  MSDASQL consente alle applicazioni basate su OLE DB e ADO (che usa OLE DB internamente) di accedere alle origini dati tramite un driver ODBC. Come qualsiasi livello di conversione, MSDASQL può avere un impatto negativo sulle prestazioni del database. È consigliabile eseguire test per stabilire se l'impatto è significativo per l'applicazione specifica. MSDASQL viene fornito con il sistema operativo Windows e Windows Server 2008 e Windows Vista SP1 sono le prime versioni di Windows a includere una versione a 64 bit della tecnologia.

Se l'applicazione C++ si connette a SQL Server o al database SQL di Azure tramite ODBC, deve utilizzare [il driver ODBC più recente](/sql/connect/odbc/download-odbc-driver-for-sql-server).

Se si usa C++/CLI, è possibile continuare a usare ADO.NET come sempre. Per altre informazioni, vedere [Accesso ai dati tramite ADO.NET (C++/CLI)](../dotnet/data-access-using-adonet-cpp-cli.md) e [Accesso ai dati in Visual Studio](/visualstudio/data-tools/accessing-data-in-visual-studio).

- Oltre alle classi wrapper ODBC, MFC include classi wrapper DAO (Data Access Objects) per la connessione a database di Access.  Tuttavia, DAO è obsoleto. Qualsiasi codice basato su CDaoDatabase o CDaoRecordset deve essere aggiornato.

Per altre informazioni sulla storia delle tecnologie di accesso ai dati in Microsoft Windows, vedere [Microsoft Data Access Components (Wikipedia)](https://en.wikipedia.org/wiki/Microsoft_Data_Access_Components).

## <a name="see-also"></a>Vedi anche

[Accesso ai dati](data-access-in-cpp.md)<br/>
[Microsoft Open Database Connectivity (ODBC)](/sql/odbc/microsoft-open-database-connectivity-odbc)<br/>
