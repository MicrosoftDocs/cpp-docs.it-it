---
title: Accesso ai dati in Visual C++ | Documenti Microsoft
ms.custom: 
ms.date: 03/28/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- Visual C++, data access applications
- databases [C++]
- OLE DB [C++], data access technologies
- data [C++], data access technologies
- data access [C++], class libraries for databases
ms.assetid: 95da6237-bbe2-480a-ae50-3a520051ceff
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: eaefb5f3ed8bd0c586e42527d47918dbb0dd5a57
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="data-access-in-visual-c"></a>Accesso ai dati in Visual C++

Praticamente tutti i prodotti database, SQL e NoSQL, offrono un'interfaccia per applicazioni C++ native. L'interfaccia standard del settore, ODBC, è supportata da tutti i principali prodotti database SQL e da molti prodotti NoSQL. Per altre informazioni su prodotti non Microsoft, rivolgersi al fornitore. Sono disponibili anche librerie di terze parti con varie condizioni di licenza.

Dal 2011 Microsoft si è allineata a ODBC, adottando questa interfaccia come standard per le applicazioni native di connessione ai database Microsoft SQL Server, sia locali che nel cloud. Per altre informazioni, vedere [Programmazione dell'accesso ai dati \(MFC-ATL\)](data-access-programming-mfc-atl.md). Le librerie C++/CLI possono usare i driver ODBC nativi o ADO.NET. Per altre informazioni, vedere [Accesso ai dati tramite ADO.NET (C++/CLI)](/dotnet/data-access-using-adonet-cpp-cli.md) e [Accesso ai dati in Visual Studio](https://docs.microsoft.com/visualstudio/data-tools/accessing-data-in-visual-studio).

## <a name="in-this-section"></a>In questa sezione
[Programmazione di accesso ai dati (MFC/ATL)](data-access-programming-mfc-atl.md) programmazione in Visual C++, in cui il metodo migliore consiste nell'utilizzare uno delle librerie di classi, quali il modello di classe della libreria ATL (Active) o la libreria MFC Microsoft Foundation Class (), dell'accesso ai dati legacy descrive che semplificano l'utilizzo con le API di database.

[Aprire Database Connectivity (ODBC)](odbc/open-database-connectivity-odbc.md) libreria Microsoft Foundation Classes (MFC) fornisce le classi per la programmazione con Open Database Connectivity (ODBC).

[Programmazione con OLE DB](oledb/ole-db-programming.md) un'interfaccia principalmente legacy che è ancora necessario in alcuni scenari, in particolare quando si programma con i server collegati.

## <a name="related-topics"></a>Argomenti correlati
[Connetti al Database SQL utilizzando C e C++](/azure/sql-database/sql-database-develop-cplusplus-simple) Connetti al Database SQL di Azure da applicazioni C o C++.

[Libreria Client di archiviazione Microsoft Azure per C++](https://github.com/Azure/azure-storage-cpp)
[di archiviazione di Azure](/azure/storage/storage-introduction) è una soluzione di archiviazione cloud per le applicazioni moderne basate sulla durata, disponibilità e scalabilità per soddisfare le esigenze di loro clienti. Per connettersi ad Archiviazione di Azure da C++ è possibile usare la libreria client di archiviazione di Azure per C++.

[ODBC Driver 13.1 for SQL Server - Windows rilasciata](https://blogs.msdn.microsoft.com/sqlnativeclient/2016/08/01/announcing-the-odbc-driver-13-1-for-sql-server) il driver ODBC fornisce affidabile accesso ai dati del Database SQL di Microsoft SQL Server 2016 Microsoft Azure per applicazioni basate su C/C++. Fornisce il supporto per funzionalità tra cui crittografia sempre attiva, Azure Active Directory e i gruppi di disponibilità AlwaysOn. Disponibile anche per MacOS e Linux.     
 
[SQL Server Native Client](/sql/relational-databases/native-client/sql-server-native-client-programming) SQL Server Native Client è una dati autonomo accesso application programming interface (API), utilizzata per OLE DB e ODBC, che supporta SQL Server 2005 tramite SQL Server 2014. Le nuove applicazioni devono usare il driver ODBC 13.1 per SQL Server.

[Microsoft Azure C e C++ Developer Center](https://azure.microsoft.com/develop/cpp/) Azure semplifica la compilazione di applicazioni C++ con una maggiore flessibilità, scalabilità e affidabilità utilizzando gli strumenti ti piace.    

[Come usare l'archiviazione di Blob da C++](https://docs.microsoft.com/azure/storage/storage-c-plus-plus-how-to-use-blobs) archiviazione Blob di Azure è un servizio che archivia i dati non strutturati nel cloud come oggetti/BLOB. Archiviazione BLOB può archiviare qualsiasi tipo di dati di testo o binari, ad esempio un documento, un file multimediale o il programma di installazione di un'applicazione. Il servizio Archiviazione BLOB è detto anche archiviazione di oggetti.

[Riferimento per programmatori ODBC](https://docs.microsoft.com/sql/odbc/reference/odbc-programmer-s-reference) ODBC l'interfaccia è progettata per l'utilizzo con il linguaggio di programmazione C. L'uso dell'interfaccia ODBC si estende su tre aree: istruzioni SQL, chiamate di funzione ODBC e programmazione C.

## <a name="see-also"></a>Vedere anche
[Visual C++](../visual-cpp-in-visual-studio.md)
