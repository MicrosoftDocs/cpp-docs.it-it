---
title: Accesso ai dati in Visual C++
ms.date: 03/28/2017
helpviewer_keywords:
- Visual C++, data access applications
- databases [C++]
- OLE DB [C++], data access technologies
- data [C++], data access technologies
- data access [C++], class libraries for databases
ms.assetid: 95da6237-bbe2-480a-ae50-3a520051ceff
ms.openlocfilehash: a56c15f76b83620e4f67c188450a6b5d2f68c22f
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58766040"
---
# <a name="data-access-in-visual-c"></a>Accesso ai dati in Visual C++

Praticamente tutti i prodotti database, SQL e NoSQL, offrono un'interfaccia per applicazioni C++ native. L'interfaccia standard del settore, ODBC, è supportata da tutti i principali prodotti database SQL e da molti prodotti NoSQL. Per altre informazioni su prodotti non Microsoft, rivolgersi al fornitore. Sono disponibili anche librerie di terze parti con varie condizioni di licenza.

Dal 2011 Microsoft si è allineata a ODBC, adottando questa interfaccia come standard per le applicazioni native di connessione ai database Microsoft SQL Server, sia locali che nel cloud. Per altre informazioni, vedere [Programmazione dell'accesso ai dati \(MFC-ATL\)](data-access-programming-mfc-atl.md). Le librerie C++/CLI possono usare i driver ODBC nativi o ADO.NET. Per altre informazioni, vedere [Accesso ai dati tramite ADO.NET (C++/CLI)](../dotnet/data-access-using-adonet-cpp-cli.md) e [Accesso ai dati in Visual Studio](https://docs.microsoft.com/visualstudio/data-tools/accessing-data-in-visual-studio).

## <a name="in-this-section"></a>In questa sezione

[Accesso ai dati (MFC/ATL) di programmazione](data-access-programming-mfc-atl.md)<br/>
Descrive la programmazione dell'accesso ai dati legacy in Visual C++, dove la modalità consigliata consiste nell'uso di una delle librerie di classi quali la libreria ATL (Active Template Class Library) o la libreria MFC (Microsoft Foundation Class), che semplifica le operazioni con le API di database.

[Open Database Connectivity (ODBC)](odbc/open-database-connectivity-odbc.md)<br/>
La libreria MFC (Microsoft Foundation Classes) fornisce le classi per la programmazione con ODBC (Open Database Connectivity).

[Programmazione con OLE DB](oledb/ole-db-programming.md)<br/>
Un'interfaccia principalmente legacy che è comunque necessaria in alcuni scenari, in particolare quando si programma in server collegati.

## <a name="related-topics"></a>Argomenti correlati

[Connettersi al Database SQL tramite C e C++](/azure/sql-database/sql-database-develop-cplusplus-simple)<br/>
Connettersi al Database SQL di Azure dalle applicazioni C o C++.

[Libreria Client di archiviazione di Microsoft Azure per C++](https://github.com/Azure/azure-storage-cpp)<br/>
[Archiviazione di Azure](/azure/storage/storage-introduction) è una soluzione di archiviazione cloud per applicazioni moderne in grado di garantire affidabilità, disponibilità e scalabilità per soddisfare le esigenze dei clienti. Per connettersi ad Archiviazione di Azure da C++ è possibile usare la libreria client di archiviazione di Azure per C++.

[ODBC Driver 13.1 for SQL Server - Windows rilasciato](https://blogs.msdn.microsoft.com/sqlnativeclient/2016/08/01/announcing-the-odbc-driver-13-1-for-sql-server)<br/>
Il driver ODBC più recente garantisce accesso stabile ai dati dei database SQL di Microsoft Azure in ambiente Microsoft SQL Server 2016 per le applicazioni basate su C/C++. Fornisce supporto per funzionalità quali always encrypted, Azure Active Directory e i gruppi di disponibilità AlwaysOn. Disponibile anche per MacOS e Linux.

[SQL Server Native Client](/sql/relational-databases/native-client/sql-server-native-client-programming)<br/>
SQL Server Native Client è un'API (Application Programming Interface) autonoma di accesso ai dati usata sia in OLE DB che in ODBC e supporta SQL Server dalla versione 2005 alla versione 2014. Le nuove applicazioni devono usare il driver ODBC 13.1 per SQL Server.

[Centro per sviluppatori di C++ e C di Microsoft Azure](https://azure.microsoft.com/develop/cpp/)<br/>
Azure semplifica la creazione di applicazioni C++ garantendo flessibilità, scalabilità e affidabilità maggiori con gli strumenti preferiti.

[Come usare archiviazione Blob da C++](https://docs.microsoft.com/azure/storage/storage-c-plus-plus-how-to-use-blobs)<br/>
Archiviazione BLOB di Azure è un servizio che archivia dati non strutturati nel cloud come oggetti/BLOB. Archiviazione BLOB può archiviare qualsiasi tipo di dati di testo o binari, ad esempio un documento, un file multimediale o il programma di installazione di un'applicazione. Il servizio Archiviazione BLOB è detto anche archiviazione di oggetti.

[ Riferimento per programmatori ODBC](https://docs.microsoft.com/sql/odbc/reference/odbc-programmer-s-reference)<br/>
L'interfaccia ODBC è progettata per essere usata con il linguaggio di programmazione C. Uso dell'interfaccia ODBC si estende su tre aree: Le istruzioni SQL, chiamate di funzione ODBC e programmazione C.

## <a name="see-also"></a>Vedere anche

[Visual C++](../overview/visual-cpp-in-visual-studio.md)
