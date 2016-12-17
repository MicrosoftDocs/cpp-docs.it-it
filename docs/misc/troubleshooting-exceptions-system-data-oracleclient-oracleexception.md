---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Data.OracleClient.OracleException | Microsoft Docs"
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
  - "OracleException (classe)"
  - "Oracle"
  - "eccezioni, Oracle"
ms.assetid: 08b9206e-baa9-4caa-b0c7-ece2118f6e2d
caps.latest.revision: 18
caps.handback.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Data.OracleClient.OracleException
Un'eccezione <xref:System.Data.OracleClient.OracleException> viene generata quando viene restituito un avviso o un errore da un database di Oracle o dal provider di dati .NET Framework per Oracle.  
  
## Suggerimenti associati  
 **Verificare che le credenziali utilizzate per la connessione siano valide.**  
 Assicurarsi che le credenziali specificate siano corrette.  
  
 **Verificare l'esattezza del nome del server e il funzionamento del server.**  
 Assicurarsi che il nome del server utilizzato sia corretto e che il server sia raggiungibile.  
  
## Note  
 Questa eccezione viene generata ogni volta che <xref:System.Data.OracleClient.OracleDataAdapter> rileva un errore generato dal server.  
  
 Se il livello di gravità dell'errore è eccessivo, è possibile che l'istanza di <xref:System.Data.OracleClient.OracleConnection> venga chiusa dal server. L'utente può tuttavia riaprire la connessione e continuare.  
  
## Vedere anche  
 <xref:System.Data.OracleClient.OracleException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)