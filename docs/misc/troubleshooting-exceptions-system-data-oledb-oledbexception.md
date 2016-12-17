---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Data.OleDb.OleDbException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "OLEDB"
  - "OleDbException (classe)"
  - "eccezioni, OLEDB"
ms.assetid: f50077cf-e411-41f0-b73e-19eef83036c1
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Data.OleDb.OleDbException
Un'eccezione <xref:System.Data.OleDb.OleDbException> viene generata quando viene restituito un avviso o un errore da un'origine dati OLE DB.  
  
## Suggerimenti associati  
 **Verificare che le credenziali utilizzate per la connessione siano valide.**  
 Assicurarsi che le credenziali specificate siano corrette. Per altre informazioni, vedere <xref:System.Data.OleDb.OleDbErrorCollection>.  
  
 **Verificare l'esattezza del nome del server e il funzionamento del server.**  
 Assicurarsi che il nome del server utilizzato sia corretto e che il server sia raggiungibile. Per altre informazioni, vedere <xref:System.Data.OleDb.OleDbErrorCollection>.  
  
### Note  
 Questa eccezione viene generata ogni volta che il provider di dati .NET Framework per OLE DB rileva un errore generato dal server.  
  
 Se il livello di gravità dell'errore è eccessivo, è possibile che l'istanza di <xref:System.Data.OleDb.OleDbConnection> venga chiusa dal server. L'utente può tuttavia riaprire la connessione e continuare.  
  
## Vedere anche  
 <xref:System.Data.OleDb.OleDbException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)