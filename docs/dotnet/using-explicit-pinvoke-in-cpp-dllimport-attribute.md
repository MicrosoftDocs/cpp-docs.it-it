---
description: 'Altre informazioni su: uso di PInvoke esplicito in C++ (attributo DllImport)'
title: Utilizzo esplicito di PInvoke in C++ (attributo DllImport)
ms.date: 11/04/2016
helpviewer_keywords:
- marshaling [C++], platform invoke
- C++ Interop, platform invoke
- interop [C++], platform invoke
- platform invoke [C++], marshaling in C++
- data marshaling [C++], platform invoke
ms.assetid: 18e5218c-6916-48a1-a127-f66e22ef15fc
ms.openlocfilehash: 6c49195cdb677474809435a5bd826808260680e7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97305473"
---
# <a name="using-explicit-pinvoke-in-c-dllimport-attribute"></a>Utilizzo esplicito di PInvoke in C++ (attributo DllImport)

Il .NET Framework fornisce funzionalità esplicite di Platform Invoke (o PInvoke) con l' `Dllimport` attributo per consentire alle applicazioni gestite di chiamare funzioni non gestite incluse in dll. PInvoke esplicito è necessario per le situazioni in cui le API non gestite vengono assemblate come dll e il codice sorgente non è disponibile. La chiamata di funzioni Win32, ad esempio, richiede PInvoke. In caso contrario, utilizzare il linguaggio P {Invoke implicito. per ulteriori informazioni, vedere [utilizzo di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md) .

PInvoke funziona usando <xref:System.Runtime.InteropServices.DllImportAttribute> . Questo attributo, che accetta il nome della DLL come primo argomento, viene inserito prima di una dichiarazione di funzione per ogni punto di ingresso della DLL che verrà usato. La firma della funzione deve corrispondere al nome di una funzione esportata dalla DLL, ma è possibile eseguire in modo implicito una conversione di tipi definendo le `DllImport` dichiarazioni in termini di tipi gestiti.

Il risultato è un punto di ingresso gestito per ogni funzione DLL nativa che contiene il codice di transizione necessario (o thunk) e le conversioni di dati semplici. Le funzioni gestite possono quindi eseguire chiamate nella DLL tramite questi punti di ingresso. Il codice inserito in un modulo come risultato di PInvoke è interamente gestito.

## <a name="in-this-section"></a>Contenuto della sezione

- [Chiamata di funzioni native da codice gestito](../dotnet/calling-native-functions-from-managed-code.md)

- [Procedura: chiamare DLL native da codice gestito tramite PInvoke](../dotnet/how-to-call-native-dlls-from-managed-code-using-pinvoke.md)

- [Procedura: effettuare il marshalling di stringhe utilizzando PInvoke](../dotnet/how-to-marshal-strings-using-pinvoke.md)

- [Procedura: effettuare il marshalling di strutture tramite PInvoke](../dotnet/how-to-marshal-structures-using-pinvoke.md)

- [Procedura: effettuare il marshalling di matrici utilizzando PInvoke](../dotnet/how-to-marshal-arrays-using-pinvoke.md)

- [Procedura: effettuare il marshalling di puntatori a funzione utilizzando PInvoke](../dotnet/how-to-marshal-function-pointers-using-pinvoke.md)

- [Procedura: effettuare il marshalling di puntatori incorporati utilizzando PInvoke](../dotnet/how-to-marshal-embedded-pointers-using-pinvoke.md)

## <a name="see-also"></a>Vedi anche

[Chiamata di funzioni native da codice gestito](../dotnet/calling-native-functions-from-managed-code.md)
