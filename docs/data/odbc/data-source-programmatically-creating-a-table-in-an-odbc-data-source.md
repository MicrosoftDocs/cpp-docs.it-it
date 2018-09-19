---
title: A livello di codice crea una tabella in un'origine dati ODBC | Microsoft Docs
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
ms.openlocfilehash: b4db77aae6050f5612c7da14c061e49db142669e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46106012"
---
# <a name="data-source-programmatically-creating-a-table-in-an-odbc-data-source"></a>Origine dati: creazione di una tabella in un'origine dati ODBC a livello di codice

Questo argomento illustra come creare una tabella per i dati di origine, tramite il `ExecuteSQL` funzione membro della classe `CDatabase`, passando una stringa che contiene la funzione di un **CREATE TABLE** istruzione SQL.  
  
Per informazioni generali sulle origini dati ODBC in MFC, vedere [origine dati (ODBC)](../../data/odbc/data-source-odbc.md). L'argomento [Zdroj dat: a livello di codice la configurazione di un'origine dati ODBC](../../data/odbc/data-source-programmatically-configuring-an-odbc-data-source.md) descrive la creazione delle origini dati.  
  
Dopo aver stabilito l'origine di dati, è possibile creare facilmente tabelle utilizzando il `ExecuteSQL` funzione membro e il **CREATE TABLE** istruzione SQL. Ad esempio, se si dispone di un `CDatabase` oggetto chiamato `myDB`, è possibile utilizzare il seguente codice MFC per creare una tabella:  
  
```  
myDB.ExecuteSQL("CREATE TABLE OFFICES (OfficeID TEXT(4)" ",   
                         OfficeName TEXT(10))");  
```  
  
Questo esempio di codice crea una tabella denominata "Uffici" nella connessione all'origine dati Microsoft Access cura `myDB`; la tabella contiene due campi "OfficeID" e "OfficeName."  
  
> [!NOTE]
>  I tipi di campo specificati nel **CREATE TABLE** istruzione SQL può variare in base al driver ODBC in uso. Il programma Microsoft Query (distribuito in Visual C++ 1.5) è un modo per scoprire quali tipi di campo sono disponibili per un'origine dati. Nella Query di Microsoft, fare clic su **File**, fare clic su **Table_Definition**, selezionare una tabella da un'origine dati e analizzare il tipo visualizzato nei **tipo** casella combinata. Esiste anche la sintassi SQL per creare gli indici.  
  
## <a name="see-also"></a>Vedere anche  

[Origine dati (ODBC)](../../data/odbc/data-source-odbc.md)