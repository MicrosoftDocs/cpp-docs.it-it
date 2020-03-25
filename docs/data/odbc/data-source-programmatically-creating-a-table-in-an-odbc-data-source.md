---
title: Creare una tabella in un'origine dati ODBC a livello di codice
ms.date: 11/04/2016
helpviewer_keywords:
- programmatically creating ODBC tables [C++]
- tables [C++]
- ODBC data sources, creating tables in
- tables [C++], creating programmatically
ms.assetid: 9ca68fb5-c3df-424a-a75c-e3fb01cc1b18
ms.openlocfilehash: 25c975560d6a73ce67294d97830b2f5bec9cd635
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213278"
---
# <a name="data-source-programmatically-creating-a-table-in-an-odbc-data-source"></a>Origine dati: creazione di una tabella in un'origine dati ODBC a livello di codice

In questo argomento viene illustrato come creare una tabella per l'origine dati utilizzando la funzione membro `ExecuteSQL` della classe `CDatabase`, passando alla funzione una stringa che contiene un'istruzione **Create Table** SQL.

Per informazioni generali sulle origini dati ODBC in MFC, vedere [origine dati (ODBC)](../../data/odbc/data-source-odbc.md). [Origine dati dell'argomento: la configurazione di un'origine dati ODBC a livello di](../../data/odbc/data-source-programmatically-configuring-an-odbc-data-source.md) codice descrive la creazione di origini dati.

Quando viene stabilita l'origine dati, è possibile creare facilmente tabelle utilizzando la funzione membro `ExecuteSQL` e l'istruzione SQL **Create Table** . Se, ad esempio, si dispone di un oggetto `CDatabase` denominato `myDB`, è possibile utilizzare il codice MFC seguente per creare una tabella:

```
myDB.ExecuteSQL("CREATE TABLE OFFICES (OfficeID TEXT(4)" ",
                         OfficeName TEXT(10))");
```

Questo esempio di codice crea una tabella denominata "OFFICEs" nella connessione all'origine dati di Microsoft Access gestita da `myDB`; la tabella contiene due campi "OfficeID" e "OfficeName".

> [!NOTE]
>  I tipi di campo specificati nell'istruzione SQL **Create Table** possono variare in base al driver ODBC in uso. Il programma Microsoft Query (distribuito con Visual C++ 1,5) è un modo per individuare i tipi di campo disponibili per un'origine dati. In Microsoft query fare clic su **file**, fare clic su **Table_Definition**, selezionare una tabella da un'origine dati ed esaminare il tipo visualizzato nella casella combinata **tipo** . La sintassi SQL esiste anche per la creazione degli indici.

## <a name="see-also"></a>Vedere anche

[Origine dati (ODBC)](../../data/odbc/data-source-odbc.md)
