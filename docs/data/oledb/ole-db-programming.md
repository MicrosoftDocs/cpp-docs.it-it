---
title: Programmazione con OLE DB | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB [C++]
- data access [C++], OLE DB programming
- OLE DB [C++], about OLE DB
ms.assetid: 52a80d66-17a9-43a1-9b90-392ae43cea2b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: fb77c5b7d7f6de91f74e83c395d0fcc13ebf70e0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33107178"
---
# <a name="ole-db-programming"></a>Programmazione con OLE DB
Microsoft OLE DB è una tecnologia legacy. per le nuove applicazioni è l'API di accesso ai dati necessari per i server collegati di SQL. Tutte le altre nuove applicazioni devono utilizzare ODBC. Il provider OLE DB corrente per SQL Server è SQLNCLI11. DLL. Il provider è ancora shipping in SQL Server 2016. Questa documentazione è destinata agli sviluppatori che mantiene le applicazioni esistenti che già utilizzano OLE DB.
  
 I modelli OLE DB sono modelli C++ che semplificano l'uso della tecnologia per database OLE DB ad alte prestazioni tramite classi che implementano molte delle interfacce OLE DB maggiormente usate. Questa libreria contiene modelli consumer e modelli provider.  
  
 In Visual C++ sono anche supportate procedure guidate per la creazione di applicazioni di base OLE DB.  
  
 Inoltre, è possibile usare gli attributi per implementare i modelli consumer OLE DB.  
  
|Per altre informazioni|Vedere|  
|-------------------------|---------|  
|Uso dei modelli consumer OLE DB (concetti)|[Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)|  
|Uso dei modelli provider OLE DB (concetti)|[Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)|  
|Classi e macro dei modelli OLE DB|[Riferimenti ai modelli OLE DB](../../data/oledb/ole-db-templates.md) (Visual C++)|  
|Attributi del consumer OLE DB|[Attributi del consumer OLE DB](../../windows/ole-db-consumer-attributes.md)|  
|Interfacce OLE DB|[Riferimento per programmatori OLE DB](https://msdn.microsoft.com/en-us/library/ms713643.aspx) (in Windows SDK)|  
|Esempi di modelli OLE DB|[Esempi di modelli OLE DB](http://msdn.microsoft.com/en-us/08958863-0b5f-41ad-ae99-fca7440c553c)| 
|Cenni preliminari sulla programmazione dell'accesso ai dati (Visual C++)|[Programmazione dell'accesso ai dati](../../data/data-access-programming-mfc-atl.md)|  
|Argomenti concettuali su ODBC|[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)|  

  
## <a name="see-also"></a>Vedere anche  
 [Accesso ai dati](../data-access-in-cpp.md)