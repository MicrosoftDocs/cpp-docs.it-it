---
title: Utilizzo di Stored procedure | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB, stored procedures
- stored procedures, Visual C++
- stored procedures, about stored procedures
- OLE DB provider templates, stored procedures
- stored procedures, OLE DB
ms.assetid: 90507e4c-eca2-46c9-ad8c-07e10dc1d41b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 2a79ca28b3ae509ef5e493a23222ac76ad2352c9
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="using-stored-procedures"></a>Utilizzo delle stored procedure
Una stored procedure è un oggetto eseguibile archiviato in un database. La chiamata di una stored procedure è simile alla chiamata a un comando SQL. Utilizzo di stored procedure sull'origine dati (anziché l'esecuzione o la preparazione di un'istruzione nell'applicazione client), è possibile fornire diversi vantaggi, tra cui prestazioni superiori, overhead di rete ridotto e maggiore uniformità e accuratezza.  
  
 Una stored procedure può avere un numero qualsiasi di, incluso zero, input o i parametri di output e passare il valore restituito. È anche possibile impostare i valori dei parametri hardcoded come valori specifici oppure utilizzano un marcatore di parametro (un punto interrogativo '?').  
  
> [!NOTE]
>  Le stored procedure create con Visual C++ devono essere compilate con CLR SQL Server il **/CLR: safe** l'opzione del compilatore.  
  
 Il provider OLE DB per SQL Server (SQLOLEDB) supporta i seguenti meccanismi utilizzati dalle stored procedure per restituire i dati:  
  
-   Ogni istruzione SELECT nella procedura genera un set di risultati.  
  
-   La procedura può restituire dati tramite i parametri di output.  
  
-   La procedura può avere un numero intero codice restituito.  
  
> [!NOTE]
>  È possibile utilizzare stored procedure con il provider OLE DB per Jet perché tale provider non supporta stored procedure. solo le costanti sono consentite nelle stringhe di query.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso dei modelli consumer OLE DB](../../data/oledb/working-with-ole-db-consumer-templates.md)