---
title: Utilizzo esplicito di PInvoke in C++ (attributo DllImport) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- marshaling [C++], platform invoke
- C++ Interop, platform invoke
- interop [C++], platform invoke
- platform invoke [C++], marshaling in C++
- data marshaling [C++], platform invoke
ms.assetid: 18e5218c-6916-48a1-a127-f66e22ef15fc
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: d05c88167629bcb6bf86dc600afde0ea3162064f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-explicit-pinvoke-in-c-dllimport-attribute"></a>Utilizzo esplicito di PInvoke in C++ (attributo DllImport)
.NET Framework sono disponibili funzionalità esplicite di Platform Invoke (PInvoke) con il `Dllimport` attributo per consentire alle applicazioni gestite di chiamare funzioni non gestite assemblate nelle DLL. Utilizzo esplicito di PInvoke è obbligatorio per le situazioni in cui l'API non gestite vengono impacchettate come DLL e il codice sorgente non è disponibile. Chiamare le funzioni Win32, ad esempio, richiede PInvoke. In caso contrario, utilizzare P implicita {Invoke, vedere [utilizzando l'interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md) per ulteriori informazioni.  
  
 PInvoke funziona utilizzando <xref:System.Runtime.InteropServices.DllImportAttribute>. Questo attributo, che accetta il nome della DLL come primo argomento, viene inserito prima di una dichiarazione di funzione per ogni punto di ingresso DLL che verrà utilizzato. La firma della funzione deve corrispondere al nome di una funzione esportata dalla DLL (ma alcuni conversione del tipo può essere eseguita in modo implicito mediante la definizione di `DllImport` dichiarazioni in termini di tipi gestiti.)  
  
 Il risultato è un punto di ingresso gestito per ogni funzione DLL native che contiene il codice di transizione necessario (o thunk) e le conversioni di dati semplice. Tramite questi punti di ingresso DLL quindi possono chiamare funzioni gestite. Il codice inserito in un modulo, come il risultato di una chiamata PInvoke viene gestito interamente e l'utilizzo esplicito di PInvoke è supportato per **/clr**, **/clr: pure**, e **/CLR: safe** compilazioni. Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015. Per ulteriori informazioni, vedere [codice Pure e verificabile (C + + CLI)](../dotnet/pure-and-verifiable-code-cpp-cli.md).  
  
## <a name="in-this-section"></a>In questa sezione  
  
-   [Chiamata di funzioni native da codice gestito](../dotnet/calling-native-functions-from-managed-code.md)  
  
-   [Procedura: Chiamare DLL native da codice gestito tramite PInvoke](../dotnet/how-to-call-native-dlls-from-managed-code-using-pinvoke.md)  
  
-   [Procedura: Effettuare il marshalling di stringhe tramite PInvoke](../dotnet/how-to-marshal-strings-using-pinvoke.md)  
  
-   [Procedura: Effettuare il marshalling di strutture tramite PInvoke](../dotnet/how-to-marshal-structures-using-pinvoke.md)  
  
-   [Procedura: Effettuare il marshalling di matrici tramite PInvoke](../dotnet/how-to-marshal-arrays-using-pinvoke.md)  
  
-   [Procedura: Effettuare il marshalling di puntatori a funzione tramite PInvoke](../dotnet/how-to-marshal-function-pointers-using-pinvoke.md)  
  
-   [Procedura: Effettuare il marshalling di puntatori incorporati tramite PInvoke](../dotnet/how-to-marshal-embedded-pointers-using-pinvoke.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Chiamata di funzioni native da codice gestito](../dotnet/calling-native-functions-from-managed-code.md)