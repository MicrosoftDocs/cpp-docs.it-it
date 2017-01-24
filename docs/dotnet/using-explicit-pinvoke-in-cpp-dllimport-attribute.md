---
title: "Utilizzo esplicito di PInvoke in C++ (attributo DllImport) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "interoperabilità C++, platform invoke"
  - "marshalling dei dati [C++], platform invoke"
  - "interoperabilità [C++], platform invoke"
  - "marshalling [C++], platform invoke"
  - "platform invoke [C++], marshaling in C++"
ms.assetid: 18e5218c-6916-48a1-a127-f66e22ef15fc
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo esplicito di PInvoke in C++ (attributo DllImport)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In .NET Framework sono disponibili funzionalità esplicite di platform invoke \(PInvoke\) con l'attributo `Dllimport` per consentire alle applicazioni gestite di chiamare funzioni non gestite assemblate nelle DLL.  L'utilizzo esplicito di PInvoke è indispensabile nelle situazioni in cui le API non gestite sono assemblate come DLL e il codice sorgente non è disponibile,  ad esempio per la chiamata delle funzioni Win32.  Negli altri casi, è possibile utilizzare P{Invoke in modalità implicita. Per ulteriori informazioni, vedere [Utilizzo delle funzionalità di interoperabilità C\+\+ \(PInvoke implicito\)](../dotnet/using-cpp-interop-implicit-pinvoke.md).  
  
 Il funzionamento di PInvoke si basa sull'utilizzo di <xref:System.Runtime.InteropServices.DllImportAttribute>.  Questo attributo, che accetta il nome della DLL come primo argomento, deve essere posizionato prima di una dichiarazione di funzione per ciascun punto di ingresso DLL che verrà utilizzato.  La firma della funzione deve corrispondere al nome di una funzione esportata dalla DLL, anche se una qualche forma di conversione di tipo può essere comunque eseguita implicitamente definendo le dichiarazioni `DllImport` in termini di tipi gestiti.  
  
 Il risultato è un punto di ingresso gestito per ciascuna funzione DLL nativa che contiene il codice di transizione necessario \(thunk\) e semplici conversioni di dati.  Le funzioni gestite possono quindi effettuare una chiamata nella DLL utilizzando questi punti di ingresso.  Il codice inserito in un modulo a seguito di una chiamata PInvoke viene gestito interamente e l'utilizzo esplicito di PInvoke è supportato per le compilazioni **\/clr**, **\/clr:pure** e **\/clr:safe**.  Per ulteriori informazioni, vedere [Codice pure e verificabile](../dotnet/pure-and-verifiable-code-cpp-cli.md).  
  
## In questa sezione  
  
-   [Chiamata a funzioni native da codice gestito](../dotnet/calling-native-functions-from-managed-code.md)  
  
-   [Procedura: chiamare DLL native da codice gestito tramite PInvoke](../dotnet/how-to-call-native-dlls-from-managed-code-using-pinvoke.md)  
  
-   [Procedura: effettuare il marshalling di stringhe utilizzando PInvoke](../dotnet/how-to-marshal-strings-using-pinvoke.md)  
  
-   [Procedura: effettuare il marshalling di strutture tramite PInvoke](../dotnet/how-to-marshal-structures-using-pinvoke.md)  
  
-   [Procedura: effettuare il marshalling di matrici utilizzando PInvoke](../dotnet/how-to-marshal-arrays-using-pinvoke.md)  
  
-   [Procedura: effettuare il marshalling di puntatori a funzione utilizzando PInvoke](../dotnet/how-to-marshal-function-pointers-using-pinvoke.md)  
  
-   [Procedura: effettuare il marshalling di puntatori incorporati utilizzando PInvoke](../dotnet/how-to-marshal-embedded-pointers-using-pinvoke.md)  
  
## Vedere anche  
 [Chiamata a funzioni native da codice gestito](../dotnet/calling-native-functions-from-managed-code.md)