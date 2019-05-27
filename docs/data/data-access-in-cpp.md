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
ms.openlocfilehash: e9222f16ef6356c2d89401690bda7e6d27f8aba6
ms.sourcegitcommit: fc1de63a39f7fcbfe2234e3f372b5e1c6a286087
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/15/2019
ms.locfileid: "65708022"
---
# <a name="data-access-in-visual-c"></a>Accesso ai dati in Visual C++

Praticamente tutti i prodotti database, SQL e NoSQL, offrono un'interfaccia per applicazioni C++ native. L'interfaccia standard del settore, ODBC, è supportata da tutti i principali prodotti database SQL e da molti prodotti NoSQL. Per altre informazioni su prodotti non Microsoft, rivolgersi al fornitore. Sono disponibili anche librerie di terze parti con varie condizioni di licenza.

Dal 2011 Microsoft si è allineata a ODBC, adottando questa interfaccia come standard per le applicazioni native di connessione ai database Microsoft SQL Server, sia locali che nel cloud. Per altre informazioni, vedere [Programmazione dell'accesso ai dati \(MFC-ATL\)](data-access-programming-mfc-atl.md). Le librerie C++/CLI possono usare i driver ODBC nativi o ADO.NET. Per altre informazioni, vedere [Accesso ai dati tramite ADO.NET (C++/CLI)](../dotnet/data-access-using-adonet-cpp-cli.md) e [Accesso ai dati in Visual Studio](https://docs.microsoft.com/visualstudio/data-tools/accessing-data-in-visual-studio).

## <a name="in-this-section"></a>In questa sezione

[Programmazione dell'accesso ai dati (MFC/ATL)](data-access-programming-mfc-atl.md)<br/>
Descrive la programmazione dell'accesso ai dati legacy in Visual C++, dove la modalità consigliata consiste nell'uso di una delle librerie di classi quali la libreria ATL (Active Template Class Library) o la libreria MFC (Microsoft Foundation Class), che semplifica le operazioni con le API di database.

[Open Database Connectivity (ODBC)](odbc/open-database-connectivity-odbc.md)<br/>
La libreria MFC (Microsoft Foundation Classes) fornisce le classi per la programmazione con ODBC (Open Database Connectivity).

[Programmazione con OLE DB](oledb/ole-db-programming.md)<br/>
Un'interfaccia principalmente legacy che è ancora necessaria in alcuni scenari, in particolare per la programmazione per server collegati.

## <a name="related-topics"></a>Argomenti correlati

[Connettersi a un database SQL tramite C e C++](/azure/sql-database/sql-database-develop-cplusplus-simple)<br/>
Connettersi a un database SQL di Azure da applicazioni C o C++.

[Libreria client di Archiviazione di Microsoft Azure per C++](https://github.com/Azure/azure-storage-cpp)<br/>
[Archiviazione di Azure](/azure/storage/storage-introduction) è una soluzione di archiviazione cloud per applicazioni moderne in grado di garantire affidabilità, disponibilità e scalabilità per soddisfare le esigenze dei clienti. Per connettersi ad Archiviazione di Azure da C++ è possibile usare la libreria client di archiviazione di Azure per C++.

[Driver ODBC per SQL Server](/sql/connect/odbc/microsoft-odbc-driver-for-sql-server)<br/>
Il driver ODBC più recente garantisce accesso stabile ai dati dei database SQL di Microsoft Azure e Microsoft SQL Server per le applicazioni basate su C/C++. Offre inoltre il supporto per funzionalità quali Always Encrypted, Azure Active Directory e Gruppi di disponibilità AlwaysOn. Disponibile anche per MacOS e Linux.

[OLE DB Driver for SQL Server](/sql/connect/oledb/oledb-driver-for-sql-server)<br/>
Il driver OLE DB più recente è un'API (Application Programming Interface) autonoma di accesso ai dati che supporta Microsoft SQL Server e il database SQL di Microsoft Azure.

[Centro per sviluppatori C++ e C di Microsoft Azure](https://azure.microsoft.com/develop/cpp/)<br/>
Azure semplifica la creazione di applicazioni C++ garantendo flessibilità, scalabilità e affidabilità maggiori con gli strumenti preferiti.

[Come usare Archiviazione BLOB da C++](https://docs.microsoft.com/azure/storage/storage-c-plus-plus-how-to-use-blobs)<br/>
Archiviazione BLOB di Azure è un servizio che archivia dati non strutturati nel cloud come oggetti/BLOB. Archiviazione BLOB può archiviare qualsiasi tipo di dati di testo o binari, ad esempio un documento, un file multimediale o il programma di installazione di un'applicazione. Il servizio Archiviazione BLOB è detto anche archiviazione di oggetti.

[ Informazioni di riferimento per programmatori ODBC](https://docs.microsoft.com/sql/odbc/reference/odbc-programmer-s-reference)<br/>
L'interfaccia ODBC è progettata per essere usata con il linguaggio di programmazione C. L'uso dell'interfaccia ODBC si estende su tre aree: istruzioni SQL, chiamate di funzione ODBC e programmazione C.

## <a name="see-also"></a>Vedere anche

[C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md)
