---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Data.Odbc.OdbcException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "EHOdbc"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "eccezioni, ODBC"
  - "ODBC, eccezioni"
  - "OdbcException (classe)"
ms.assetid: 5f2c2167-cf7b-4634-af86-44dc71eff02d
caps.latest.revision: 17
caps.handback.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Data.Odbc.OdbcException
Un'eccezione <xref:System.Data.Odbc.OdbcException> viene generata quando viene restituito un avviso o un errore da un'origine dati ODBC.  
  
## Suggerimenti associati  
 **Verificare che le credenziali utilizzate per la connessione siano valide.**  
 Assicurarsi che le credenziali utilizzate siano corrette.  
  
 **Verificare l'esattezza del nome del server e il funzionamento del server.**  
 Assicurarsi che il nome del server utilizzato sia corretto e che il server sia raggiungibile.  
  
## Note  
 Questa eccezione viene generata ogni volta che <xref:System.Data.Odbc.OdbcDataAdapter> rileva un errore generato dal server.  
  
 Se il livello di gravità dell'errore è eccessivo, è possibile che l'istanza di <xref:System.Data.Odbc.OdbcConnection> venga chiusa dal server. L'utente può tuttavia riaprire la connessione e continuare.  
  
## Vedere anche  
 <xref:System.Data.Odbc.OdbcException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)