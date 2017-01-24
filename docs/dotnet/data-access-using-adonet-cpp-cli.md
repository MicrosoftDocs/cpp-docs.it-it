---
title: "Accesso ai dati tramite ADO.NET (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
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
  - "..NET Framework [C++], accesso ai dati"
  - "ADO.NET [C++]"
  - "dati [C++], ADO.NET"
  - "accesso ai dati [C++], ADO.NET"
  - "database [C++], accesso in C++"
ms.assetid: b0cd987d-1ea7-4f76-ba01-cbd52503d06d
caps.latest.revision: 12
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Accesso ai dati tramite ADO.NET (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

ADO.NET, l'API di .NET Framework per l'accesso ai dati, garantisce livelli di efficienza e semplicità di utilizzo decisamente superiori a quelli offerti dalle precedenti soluzioni di accesso ai dati.  In questa sezione sono illustrati alcuni problemi relativi ad ADO.NET specifici per gli utenti di Visual C\+\+, ad esempio il marshalling dei tipi nativi.  
  
 ADO.NET viene eseguito in Common Language Runtime \(CLR\).  Di conseguenza, qualsiasi applicazione che interagisce con ADO.NET deve utilizzare anche CLR.  Tuttavia, ciò non significa che le applicazioni native non possano utilizzare ADO.NET.  In questi esempi viene illustrato come interagire con il database ADO.NET dal codice nativo.  
  
## In questa sezione  
 [Procedura: effettuare il marshalling di stringhe ANSI per ADO.NET](../dotnet/how-to-marshal-ansi-strings-for-adonet-cpp-cli.md)  
  
 [Procedura: effettuare il marshalling di stringhe BSTR per ADO.NET](../dotnet/how-to-marshal-bstr-strings-for-adonet-cpp-cli.md)  
  
 [Procedura: eseguire il marshalling di stringhe Unicode per ADO.NET](../dotnet/how-to-marshal-unicode-strings-for-adonet-cpp-cli.md)  
  
 [Procedura: eseguire il marshalling di VARIANT per ADO.NET](../dotnet/how-to-marshal-a-variant-for-adonet-cpp-cli.md)  
  
 [Procedura: eseguire il marshalling di SAFEARRAY per ADO.NET](../dotnet/how-to-marshal-a-safearray-for-adonet-cpp-cli.md)  
  
## Sezioni correlate  
  
|Sezione|Descrizione|  
|-------------|-----------------|  
|[ADO.NET](../Topic/ADO.NET.md)|Fornisce una panoramica di ADO.NET, un set di classi che espongono i servizi di accesso ai dati al programmatore .NET.|  
|[Creating SQL Server 2005 Objects In Managed Code](http://msdn.microsoft.com/it-it/5358a825-e19b-49aa-8214-674ce5fed1da)|Illustra come utilizzare i linguaggi .NET, incluso Visual C\+\+, per creare oggetti di database, ad esempio stored procedure, funzioni di aggregazione, trigger, funzioni definite dall'utente e tipi definiti dall'utente, e recuperare ed aggiornare i dati per i database Microsoft SQL Server 2005.|  
  
## Vedere anche  
 [Programmazione .NET con C\+\+\/CLI](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)   
 [Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)