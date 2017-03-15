---
title: "Utilizzo delle stored procedure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "modelli del provider OLE DB, stored procedure"
  - "OLE DB, stored procedure"
  - "stored procedure, informazioni"
  - "stored procedure, OLE DB"
  - "stored procedure, Visual C++"
ms.assetid: 90507e4c-eca2-46c9-ad8c-07e10dc1d41b
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 16
---
# Utilizzo delle stored procedure
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una stored procedure è un oggetto eseguibile memorizzato in un database.  La chiamata a una stored procedure è simile alla chiamata a un comando SQL.  L'utilizzo di stored procedure in un'origine dati in alternativa all'esecuzione o alla preparazione di un'istruzione nell'applicazione client, può offrire diversi vantaggi, tra cui migliori prestazioni, overhead di rete ridotto e maggiore coerenza e precisione.  
  
 Una stored procedure può includere un numero qualsiasi, incluso zero, di parametri di input o output e può passare un valore restituito.  È possibile impostare i valori dei parametri a livello di codice come valori specifici oppure utilizzare un marcatore di parametro, cioè un punto di domanda "?".  
  
> [!NOTE]
>  Le stored procedure CLR SQL Server create con Visual C\+\+ devono essere compilate con l'opzione del compilatore **\/clr:safe**.  
  
 Il provider OLE DB per SQL Server \(SQLOLEDB\) supporta i seguenti meccanismi utilizzati dalle stored procedure per restituire i dati:  
  
-   Ogni istruzione SELECT della stored procedure genera un gruppo di risultati.  
  
-   La stored procedure può restituire dati tramite parametri di output.  
  
-   La stored procedure può avere codice restituito di tipo integer.  
  
> [!NOTE]
>  Non è possibile utilizzare le stored procedure con il provider OLE DB per Jet, in quanto da questo non supportate. Nelle stringhe delle query sono infatti ammesse solo costanti.  
  
## Vedere anche  
 [Utilizzo dei modelli consumer OLE DB](../../data/oledb/working-with-ole-db-consumer-templates.md)