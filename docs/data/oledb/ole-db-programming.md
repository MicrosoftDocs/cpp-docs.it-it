---
title: Programmazione con OLE DB
ms.date: 10/22/2018
helpviewer_keywords:
- OLE DB [C++]
- data access [C++], OLE DB programming
- OLE DB [C++], about OLE DB
ms.assetid: 52a80d66-17a9-43a1-9b90-392ae43cea2b
ms.openlocfilehash: ac74f94b4cdc738237c2994646f7602f7f5118ca
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59031647"
---
# <a name="ole-db-programming"></a>Programmazione con OLE DB

Microsoft OLE DB è una tecnologia legacy; per le nuove applicazioni è l'API di accesso ai dati necessari per i server SQL collegati. Tutte le altre nuove applicazioni devono utilizzare ODBC. Il provider OLE DB corrente per SQL Server è SQLNCLI11. DLL. Il provider è ancora shipping in SQL Server 2016. Questa documentazione è destinata agli sviluppatori che gestiscono le applicazioni esistenti che già utilizzano OLE DB.

I modelli OLE DB sono modelli C++ che semplificano l'uso della tecnologia per database OLE DB ad alte prestazioni tramite classi che implementano molte delle interfacce OLE DB maggiormente usate. Questa libreria contiene modelli consumer e modelli provider.

In Visual C++ sono anche supportate procedure guidate per la creazione di applicazioni di base OLE DB.

Inoltre, è possibile utilizzare gli attributi per implementare i modelli consumer OLE DB.

|Per altre informazioni|Vedere|
|-------------------------|---------|
|Uso dei modelli consumer OLE DB (concetti)|[Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)|
|Uso dei modelli provider OLE DB (concetti)|[Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)|
|Classi e macro dei modelli OLE DB|[Riferimenti ai modelli OLE DB](../../data/oledb/ole-db-templates.md) (Visual C++)|
|Attributi del consumer OLE DB|[Attributi del consumer OLE DB](../../windows/ole-db-consumer-attributes.md)|
|Interfacce OLE DB|[Riferimento per programmatori OLE DB](/sql/connect/oledb/oledb-driver-for-sql-server) (in Windows SDK)|
|Esempi di modelli OLE DB|[Esempi di modelli OLE DB](https://github.com/Microsoft/VCSamples)|
|Cenni preliminari sulla programmazione dell'accesso ai dati (Visual C++)|[Programmazione dell'accesso ai dati](../../data/data-access-programming-mfc-atl.md)|
|Argomenti concettuali su ODBC|[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)|

## <a name="see-also"></a>Vedere anche

[Accesso ai dati](../data-access-in-cpp.md)