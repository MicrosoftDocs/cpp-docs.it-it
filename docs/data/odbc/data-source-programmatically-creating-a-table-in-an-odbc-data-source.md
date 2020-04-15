---
title: Creare una tabella a livello di codice in un'origine dati ODBCProgrammatically Create a Table in an ODBC Data Source
ms.date: 11/04/2016
helpviewer_keywords:
- programmatically creating ODBC tables [C++]
- tables [C++]
- ODBC data sources, creating tables in
- tables [C++], creating programmatically
ms.assetid: 9ca68fb5-c3df-424a-a75c-e3fb01cc1b18
ms.openlocfilehash: 6cf26cad7fe39f374daf371902525087b446658c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81358831"
---
# <a name="data-source-programmatically-creating-a-table-in-an-odbc-data-source"></a>Origine dati: creazione di una tabella in un'origine dati ODBC a livello di codice

In questo argomento viene illustrato come creare una `ExecuteSQL` tabella per `CDatabase`l'origine dati, utilizzando la funzione membro di class , passando alla funzione una stringa contenente un'istruzione **SQL CREATE TABLE.**

Per informazioni generali sulle origini dati ODBC in MFC, vedere [Origine dati (ODBC)](../../data/odbc/data-source-odbc.md). Nell'argomento [Origine dati: Configurazione a livello di codice di un'origine dati ODBC](../../data/odbc/data-source-programmatically-configuring-an-odbc-data-source.md) viene descritta la creazione di origini dati.

Una volta stabilita l'origine dati, è `ExecuteSQL` possibile creare facilmente tabelle utilizzando la funzione membro e l'istruzione **SQL CREATE TABLE.** Se ad esempio si `CDatabase` dispone `myDB`di un oggetto denominato , è possibile utilizzare il codice MFC seguente per creare una tabella:

```
myDB.ExecuteSQL("CREATE TABLE OFFICES (OfficeID TEXT(4)" ",
                         OfficeName TEXT(10))");
```

Nell'esempio di codice riportato di seguito viene creata `myDB`una tabella denominata "OFFICES" nella connessione all'origine dati di Microsoft Access gestita da ; la tabella contiene due campi "OfficeID" e "OfficeName".

> [!NOTE]
> I tipi di campo specificati nell'istruzione **SQL CREATE TABLE** possono variare in base al driver ODBC in uso. Il programma di Microsoft Query (distribuito con Visual Cè 1.5) è un modo per scoprire quali tipi di campo sono disponibili per un'origine dati. In Microsoft Query fare clic su **File**, **Table_Definition**, selezionare una tabella da un'origine dati ed esaminare il tipo visualizzato nella casella combinata **Tipo.** La sintassi SQL esiste anche per creare indici.

## <a name="see-also"></a>Vedere anche

[Origine dati (ODBC)](../../data/odbc/data-source-odbc.md)
