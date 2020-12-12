---
description: 'Altre informazioni su: uso degli assembly verificabili con SQL Server (C++/CLI)'
title: Utilizzo di assembly verificabili con SQL Server (C++/CLI)
ms.date: 10/17/2018
helpviewer_keywords:
- verifiable assemblies [C++], with SQL Server
ms.assetid: 5248a60d-aa88-4ff3-b30a-b791c3ea2de9
ms.openlocfilehash: b155fb0360fb373f5931f51de3af557d06858a71
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97204199"
---
# <a name="using-verifiable-assemblies-with-sql-server-ccli"></a>Utilizzo di assembly verificabili con SQL Server (C++/CLI)

Le stored procedure estese, assemblate come librerie a collegamento dinamico (dll), consentono di estendere SQL Server funzionalità tramite funzioni sviluppate con Visual C++. Le stored procedure estese vengono implementate come funzioni all'interno di dll. Oltre alle funzioni, le stored procedure estese possono definire anche [tipi definiti dall'utente](../cpp/classes-and-structs-cpp.md) e funzioni di aggregazione, ad esempio Sum o AVG.

Quando un client esegue una stored procedure estesa, SQL Server cerca la DLL associata al stored procedure esteso e carica la DLL. SQL Server chiama la stored procedure estesa richiesta e la esegue in un contesto di sicurezza specificato. Il stored procedure esteso passa quindi i set di risultati e restituisce i parametri al server.

SQL Server fornisce estensioni a Transact-SQL (T-SQL) per consentire l'installazione di assembly verificabili in SQL Server. Il set di autorizzazioni SQL Server specifica il contesto di sicurezza, con i livelli di sicurezza seguenti:

- Modalità senza restrizioni: esecuzione del codice a proprio rischio. non è necessario che il codice sia indipendente dai tipi verificabile.

- Modalità provvisoria: eseguire codice indipendente dai tipi verificabile; compilato con/CLR: safe.

> [!IMPORTANT]
> Visual Studio 2015 deprecato e Visual Studio 2017 non supporta la creazione di progetti verificabili **/CLR: pure** e **/CLR: safe** . Se è necessario codice verificabile, è consigliabile convertire il codice in C#.

Per creare e caricare un assembly verificabile in SQL Server, usare i comandi Transact-SQL CREATE ASSEMBLY e DROP ASSEMBLY come indicato di seguito:

```sql
CREATE ASSEMBLY <assemblyName> FROM <'Assembly UNC Path'> WITH
  PERMISSION_SET <permissions>
DROP ASSEMBLY <assemblyName>
```

Tramite il comando PERMISSION_SET viene specificato il contesto di sicurezza e i valori possono essere Unrestricted, SAFE o EXTENDed.

Inoltre, è possibile usare il comando CREATE FUNCTION per associare i nomi dei metodi in una classe:

```sql
CREATE FUNCTION <FunctionName>(<FunctionParams>)
RETURNS returnType
[EXTERNAL NAME <AssemblyName>:<ClassName>::<StaticMethodName>]
```

## <a name="example"></a>Esempio

Lo script SQL seguente (ad esempio, denominato "script. SQL") carica un assembly in SQL Server e rende disponibile un metodo di una classe:

```sql
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

Gli script SQL possono essere eseguiti in modo interattivo in SQL Query Analyzer o dalla riga di comando con l'utilità sqlcmd.exe. La seguente riga di comando si connette a MyServer, utilizza il database predefinito, utilizza una connessione trusted, immette script. SQL e restituisce MyResult.txt.

```cmd
sqlcmd -S MyServer -E -i myScript.sql -o myResult.txt
```

## <a name="see-also"></a>Vedi anche

[Classi e struct](../cpp/classes-and-structs-cpp.md)
