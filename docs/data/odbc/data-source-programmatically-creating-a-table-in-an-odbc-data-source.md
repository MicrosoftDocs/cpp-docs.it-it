---
title: "Origine dati: creazione di una tabella in un&#39;origine dati ODBC a livello di codice | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ODBC (origini dati), creazione di tabelle"
  - "creazione di tabelle ODBC a livello di codice [C++]"
  - "tabelle [C++]"
  - "tabelle [C++], creazione a livello di codice"
ms.assetid: 9ca68fb5-c3df-424a-a75c-e3fb01cc1b18
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Origine dati: creazione di una tabella in un&#39;origine dati ODBC a livello di codice
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene illustrata la creazione di una tabella in un'origine dati, utilizzando la funzione membro `ExecuteSQL` della classe `CDatabase` e passando alla funzione una stringa contenente un'istruzione SQL **CREATE TABLE**.  
  
 Per informazioni generali sulle origini dati ODBC in MFC, vedere [Origine dati \(ODBC\)](../../data/odbc/data-source-odbc.md).  Nell'argomento [Origine dati: configurazione di un'origine dati ODBC a livello di codice](../../data/odbc/data-source-programmatically-configuring-an-odbc-data-source.md) viene invece descritta la creazione delle origini dati.  
  
 Una volta definita l'origine dati, è possibile creare con facilità le tabelle mediante la funzione membro `ExecuteSQL` e l'istruzione SQL **CREATE TABLE**.  Se ad esempio si dispone di un oggetto `CDatabase` denominato `myDB`, sarà possibile utilizzare il codice MFC seguente per la creazione di una tabella:  
  
```  
myDB.ExecuteSQL("CREATE TABLE OFFICES (OfficeID TEXT(4)" ",   
                         OfficeName TEXT(10))");  
```  
  
 Nell'esempio di codice viene creata una tabella definita OFFICES nella connessione all'origine dati di Microsoft Access gestita da `myDB`. La tabella contiene due campi denominati OfficeID e OfficeName.  
  
> [!NOTE]
>  I tipi di campi specificati nell'istruzione SQL **CREATE TABLE** possono variare in base al driver ODBC utilizzato.  Per individuare i campi disponibili per un'origine dati, è possibile utilizzare il programma Microsoft Query, distribuito con Visual C\+\+ 1.5.  In Microsoft Query scegliere **File**, quindi **Table\_Definition**, selezionare una tabella da un'origine dati e analizzare il tipo riportato nella casella combinata **Tipo**.  La sintassi SQL viene inoltre utilizzata per la creazione degli indici.  
  
## Vedere anche  
 [Origine dati \(ODBC\)](../../data/odbc/data-source-odbc.md)