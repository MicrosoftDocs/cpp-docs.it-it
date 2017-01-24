---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Data.SqlClient.SqlException | Microsoft Docs"
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
  - "SqlException (classe)"
ms.assetid: 05f63457-3825-4541-ae09-0c771eb5ba35
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Data.SqlClient.SqlException
Un'eccezione <xref:System.Data.SqlClient.SqlException> viene generata quando viene restituito un avviso o un errore da SQL Server.  
  
## Suggerimenti associati  
 **Verificare che le credenziali utilizzate per la connessione siano valide.**  
 Assicurarsi che le credenziali specificate siano corrette. Per altre informazioni, vedere [How to: Access SQL Server Using Predetermined Credentials](../Topic/How%20to:%20Access%20SQL%20Server%20Using%20Predetermined%20Credentials.md).  
  
 **Verificare l'esattezza del nome del server e il funzionamento del server.**  
 Assicurarsi che il nome del server utilizzato sia corretto e che il server sia raggiungibile.  
  
### Note  
 Questa eccezione viene generata ogni volta che il provider di dati .NET Framework per SQL Server rileva un errore generato dal server.  
  
 I messaggi con livello di gravità pari o inferiore a 10 sono di tipo informativo e indicano problemi causati da errori nelle informazioni immesse da un utente. I livelli di gravità da 11 a 16 sono generati dall'utente e possono essere corretti dall'utente stesso. I livelli di gravità da 17 a 25 indicano errori del software o dell'hardware. Quando si verifica un errore con livello di gravità 17, 18 o 19, l'utente può continuare a lavorare, ma è possibile che una particolare istruzione non venga eseguita.  
  
 Se il livello di gravità è pari o inferiore a 19, l'istanza di <xref:System.Data.SqlClient.SqlConnection> rimane aperta. Quando il valore del livello di gravità è 20 o superiore, in genere il server chiude l'oggetto <xref:System.Data.SqlClient.SqlConnection>. L'utente può tuttavia riaprire la connessione e continuare. In entrambi i casi, viene generata un'eccezione <xref:System.Data.SqlClient.SqlException> dal metodo che esegue il comando.  
  
 Per informazioni sui messaggi di avviso e informativi inviati da SQL Server, vedere la sezione relativa alla risoluzione dei problemi nella documentazione online di SQL Server.  
  
## Vedere anche  
 <xref:System.Data.SqlClient.SqlException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [How to: Access SQL Server Using Predetermined Credentials](../Topic/How%20to:%20Access%20SQL%20Server%20Using%20Predetermined%20Credentials.md)