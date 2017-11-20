---
title: Accesso ai dati tramite ADO.NET (C + + CLI) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- ADO.NET [C++]
- .NET Framework [C++], data access
- databases [C++], accessing in C++
- data access [C++], ADO.NET
- data [C++], ADO.NET
ms.assetid: b0cd987d-1ea7-4f76-ba01-cbd52503d06d
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: f243b18b2666c21a6d83eabe35ecd6ad9df5905c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="data-access-using-adonet-ccli"></a>Accesso ai dati tramite ADO.NET (C++/CLI)
ADO.NET è l'API di .NET Framework per accedere ai dati e offre potenza e la facilità di utilizzo non corrispondente da soluzioni di accesso ai dati precedenti. In questa sezione vengono descritti alcuni problemi relativi ad ADO.NET che sono univoci per gli utenti di Visual C++, ad esempio il marshalling di tipi nativi.  
  
 ADO.NET viene eseguito in Common Language Runtime (CLR). Pertanto, qualsiasi applicazione che interagisce con ADO.NET deve utilizzare anche CLR. Tuttavia ciò non significa che le applicazioni native non è possibile utilizzare ADO.NET. Questi esempi verranno illustrato come interagire con un database ADO.NET dal codice nativo.  
  
## <a name="in-this-section"></a>Contenuto della sezione  
 [Procedura: Effettuare il marshalling di stringhe ANSI per ADO.NET (C++/CLI)](../dotnet/how-to-marshal-ansi-strings-for-adonet-cpp-cli.md)  
  
 [Procedura: Effettuare il marshalling di stringhe BSTR per ADO.NET (C++/CLI)](../dotnet/how-to-marshal-bstr-strings-for-adonet-cpp-cli.md)  
  
 [Procedura: Effettuare il marshalling di stringhe Unicode per ADO.NET (C++/CLI)](../dotnet/how-to-marshal-unicode-strings-for-adonet-cpp-cli.md)  
  
 [Procedura: Effettuare il marshalling di VARIANT per ADO.NET (C++/CLI)](../dotnet/how-to-marshal-a-variant-for-adonet-cpp-cli.md)  
  
 [Procedura: Effettuare il marshalling di SAFEARRAY per ADO.NET (C++/CLI)](../dotnet/how-to-marshal-a-safearray-for-adonet-cpp-cli.md)  
  
## <a name="related-sections"></a>Sezioni correlate  
  
|Sezione|Descrizione|  
|-------------|-----------------|  
|[ADO.NET](/dotnet/framework/data/adonet/index)|Viene fornita una panoramica di ADO.NET, un set di classi che espongono servizi di accesso ai dati al programmatore .NET.|  
  
## <a name="see-also"></a>Vedere anche  
 [Programmazione .NET con C + + CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)   
 [Interoperabilità .NET e nativa](../dotnet/native-and-dotnet-interoperability.md)