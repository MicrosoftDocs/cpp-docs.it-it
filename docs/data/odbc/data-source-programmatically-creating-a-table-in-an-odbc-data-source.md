---
title: A livello di codice crea una tabella in un'origine dati ODBC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- programmatically creating ODBC tables [C++]
- tables [C++]
- ODBC data sources, creating tables in
- tables [C++], creating programmatically
ms.assetid: 9ca68fb5-c3df-424a-a75c-e3fb01cc1b18
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 5ea8ddc8e683c0e5f0681bdf98cbddca180e4023
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33090510"
---
# <a name="data-source-programmatically-creating-a-table-in-an-odbc-data-source"></a>Origine dati: creazione di una tabella in un'origine dati ODBC a livello di codice
In questo argomento viene illustrato come creare una tabella per i dati di origine, utilizzando il `ExecuteSQL` funzione membro di classe `CDatabase`, passando la funzione di una stringa che contiene un **CREATE TABLE** istruzione SQL.  
  
 Per informazioni generali sulle origini dati ODBC in MFC, vedere [origine dati (ODBC)](../../data/odbc/data-source-odbc.md). L'argomento [origine dati: configurazione di un'origine dati ODBC a livello di programmazione](../../data/odbc/data-source-programmatically-configuring-an-odbc-data-source.md) descrive la creazione delle origini dati.  
  
 Una volta definita l'origine dati, è possibile creare facilmente tabelle utilizzando il `ExecuteSQL` funzione membro e **CREATE TABLE** istruzione SQL. Ad esempio, se si dispone di un `CDatabase` oggetto denominato `myDB`, è possibile utilizzare il seguente codice MFC per creare una tabella:  
  
```  
myDB.ExecuteSQL("CREATE TABLE OFFICES (OfficeID TEXT(4)" ",   
                         OfficeName TEXT(10))");  
```  
  
 Questo esempio di codice crea una tabella denominata "Uffici" nella connessione all'origine dati Microsoft Access gestita da `myDB`; la tabella contiene due campi "OfficeID" e "OfficeName".  
  
> [!NOTE]
>  I tipi di campo specificati nel **CREATE TABLE** istruzione SQL può variare in base il driver ODBC in uso. Il programma Microsoft Query (distribuito con Visual C++ 1.5) è un modo per individuare quali tipi di campo sono disponibili per un'origine dati. Nella Query di Microsoft, fare clic su **File**, fare clic su **Table_Definition**, selezionare una tabella da un'origine dati e analizzare il tipo riportato nel **tipo** casella combinata. La sintassi SQL è presente anche per creare indici.  
  
## <a name="see-also"></a>Vedere anche  
 [Origine dati (ODBC)](../../data/odbc/data-source-odbc.md)