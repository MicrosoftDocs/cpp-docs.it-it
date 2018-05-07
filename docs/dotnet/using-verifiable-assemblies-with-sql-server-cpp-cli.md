---
title: Utilizzo di assembly verificabili con SQL Server (C + + CLI) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- verifiable assemblies [C++], with SQL Server
ms.assetid: 5248a60d-aa88-4ff3-b30a-b791c3ea2de9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: f172eea3108771e129636e9aa95d721d45c99609
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="using-verifiable-assemblies-with-sql-server-ccli"></a>Utilizzo di assembly verificabili con SQL Server (C++/CLI)
Stored procedure estese, incluse le librerie a collegamento dinamico (DLL), consentono di estendere le funzionalità di SQL Server attraverso funzioni sviluppate con Visual C++. Stored procedure estese vengono implementate come funzioni nelle DLL. Oltre alle funzioni, stored procedure estese possono inoltre definire [tipi definiti dall'utente](../cpp/classes-and-structs-cpp.md) e [funzioni di aggregazione](http://msdn.microsoft.com/en-us/de255454-f45e-4281-81f9-bc61893ac5da) (ad esempio SUM o AVG).  
  
 Quando un client esegue una stored procedure estesa, le ricerche di SQL Server per la DLL associata a una stored procedure estesa e carica la DLL. SQL Server chiama la stored procedure estesa richiesta e viene eseguito in un contesto di sicurezza specificato. La stored procedure estesa passa risultato imposta e restituisce parametri al server.  
  
 [!INCLUDE[sqprsqlong](../dotnet/includes/sqprsqlong_md.md)] fornisce le estensioni di Transact-SQL (T-SQL) per consentire l'installazione di assembly verificabili in SQL Server. Il set di autorizzazioni di SQL Server specifica il contesto di sicurezza, con i livelli di sicurezza seguenti:  
  
-   Modalità non limitata: eseguire il codice a proprio rischio; codice non deve essere indipendente dai tipi verificabile.  
  
-   Modalità provvisoria: eseguire effettivamente il codice indipendente dai tipi. compilato con /CLR: safe.  
  
 Modalità provvisoria richiede gli assembly eseguiti come indipendente dai tipi.  
  
 Per creare e caricare un assembly verificabile in SQL Server, utilizzare i comandi Transact-SQL CREATE ASSEMBLY e DROP ASSEMBLY come segue:  
  
```  
CREATE ASSEMBLY <assemblyName> FROM <'Assembly UNC Path'> WITH   
  PERMISSION_SET <permissions>  
DROP ASSEMBLY <assemblyName>  
```  
  
 Il comando PERMISSION_SET specifica il contesto di sicurezza e può avere i valori senza restrizioni, SAFE o estesa.  
  
 Inoltre, è possibile utilizzare il comando CREATE FUNCTION per associare ai nomi di metodo in una classe:  
  
```  
CREATE FUNCTION <FunctionName>(<FunctionParams>)  
RETURNS returnType  
[EXTERNAL NAME <AssemblyName>:<ClassName>::<StaticMethodName>]  
```  
  
## <a name="example"></a>Esempio  
 Il seguente script SQL (ad esempio, denominata "MyScript.sql") carica un assembly in SQL Server e rende disponibile un metodo di una classe:  
  
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
  
 Script SQL possono essere eseguiti in modo interattivo in SQL Query Analyzer o dalla riga di comando con l'utilità sqlcmd.exe. La seguente riga di comando connettersi a Server1, utilizza il database predefinito, utilizza una connessione trusted, Myscript e MyResult.  
  
```  
sqlcmd -S MyServer -E -i myScript.sql -o myResult.txt  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: eseguire la migrazione a /CLR: safe (C + c++ /CLI)](../dotnet/how-to-migrate-to-clr-safe-cpp-cli.md)   
 [Classi e struct](../cpp/classes-and-structs-cpp.md)