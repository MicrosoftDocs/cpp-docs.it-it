---
title: "Utilizzo di assembly verificabili con SQL Server (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
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
  - "assembly verificabili [C++], con SQL Server"
ms.assetid: 5248a60d-aa88-4ff3-b30a-b791c3ea2de9
caps.latest.revision: 21
caps.handback.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di assembly verificabili con SQL Server (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le stored procedure estese, in package come librerie a collegamento dinamico \(DLL\), consentono di estendere le funzionalità di SQL Server attraverso funzioni sviluppate con [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)].  Tali stored procedure sono implementate come funzioni all'interno delle DLL.  Oltre alle funzioni, le stored procedure estese possono inoltre definire [tipi definiti dall'utente](../cpp/classes-and-structs-cpp.md) e [funzioni di aggregazione](http://msdn.microsoft.com/it-it/de255454-f45e-4281-81f9-bc61893ac5da) \(ad esempio, SUM o AVG\).  
  
 Quando si esegue una stored procedure estesa in un client, in SQL Server viene cercata e caricata la DLL associata.  La stored procedure estesa richiesta viene chiamata in SQL Server ed eseguita in un contesto di sicurezza specificato.  La stored procedure estesa passa quindi gruppi di risultati e restituisce parametri al server.  
  
 [!INCLUDE[sqprsqlong](../dotnet/includes/sqprsqlong_md.md)] fornisce a Transact\-SQL \(T\-SQL\) estensioni per consentire l'installazione di assembly verificabili in SQL Server.  Il set di autorizzazioni di SQL Server specifica il contesto di sicurezza caratterizzato dai livelli riportati di seguito:  
  
-   Modalità non limitata: il codice viene eseguito sotto la responsabilità dell'utente e non deve essere codice indipendente dai tipi verificabile.  
  
-   Modalità sicura: viene eseguito codice indipendente dai tipi verificabile, compilato con \/clr:safe.  
  
 Per la modalità sicura è necessario che gli assembly eseguiti siano verificabili come indipendenti dai tipi.  
  
 Per creare e caricare un assembly verificabile in SQL Server, utilizzare i comandi CREATE ASSEMBLY e DROP ASSEMBLY di Transact\-SQL come descritto di seguito:  
  
```  
CREATE ASSEMBLY <assemblyName> FROM <'Assembly UNC Path'> WITH   
  PERMISSION_SET <permissions>  
DROP ASSEMBLY <assemblyName>  
```  
  
 Il comando PERMISSION\_SET consente di specificare il contesto di sicurezza. I valori ad esso associati sono UNRESTRICTED, SAFE oppure EXTENDED.  
  
 È inoltre possibile utilizzare il comando CREATE FUNCTION per associare nomi di metodi in una classe:  
  
```  
CREATE FUNCTION <FunctionName>(<FunctionParams>)  
RETURNS returnType  
[EXTERNAL NAME <AssemblyName>:<ClassName>::<StaticMethodName>]  
```  
  
## Esempio  
 Nello script SQL riportato di seguito \(ad esempio, denominato "MyScript.sql"\) viene caricato un assembly in SQL Server e viene reso disponibile un metodo di una classe:  
  
```  
-- Create assembly without external access  
drop assembly stockNoEA  
go  
create assembly stockNoEA  
from   
'c:\stockNoEA.dll'  
with permission_set safe  
  
-- Create function on assembly with no external access  
drop function GetQuoteNoEA  
go  
create function GetQuoteNoEA(@sym nvarchar(10))  
returns real  
external name stockNoEA:StockQuotes::GetQuote  
go  
  
-- To call the function  
select dbo.GetQuoteNoEA('MSFT')  
go  
```  
  
 Gli script SQL possono essere eseguiti in modo interattivo in Query Analyzer di SQL oppure nella riga di comando tramite l'utilità sqlcmd.exe.  La riga di comando riportata di seguito consente di connettersi a MyServer, utilizzare il database predefinito, utilizzare una connessione trusted, creare MyScript.sql e generare il file MyResult.txt come output.  
  
```  
sqlcmd –S MyServer -E –i myScript.sql –o myResult.txt  
```  
  
## Vedere anche  
 [Procedura: migrare a \/clr:safe](../dotnet/how-to-migrate-to-clr-safe-cpp-cli.md)   
 [Classi e struct](../cpp/classes-and-structs-cpp.md)