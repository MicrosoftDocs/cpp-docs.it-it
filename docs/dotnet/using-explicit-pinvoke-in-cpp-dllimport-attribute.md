---
title: Utilizzo esplicito di PInvoke in C++ (attributo DllImport)
ms.date: 11/04/2016
helpviewer_keywords:
- marshaling [C++], platform invoke
- C++ Interop, platform invoke
- interop [C++], platform invoke
- platform invoke [C++], marshaling in C++
- data marshaling [C++], platform invoke
ms.assetid: 18e5218c-6916-48a1-a127-f66e22ef15fc
ms.openlocfilehash: ee9d77920f04f7eba5112c66a906b02b7fc4a658
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62384426"
---
# <a name="using-explicit-pinvoke-in-c-dllimport-attribute"></a>Utilizzo esplicito di PInvoke in C++ (attributo DllImport)

.NET Framework offre funzionalità di Platform Invoke (PInvoke) esplicita con il `Dllimport` attributo per consentire alle applicazioni gestite di chiamare funzioni non gestite inserite all'interno di DLL. Esplicito di PInvoke è obbligatorio per le situazioni in cui le API non gestite vengono impacchettate come DLL e il codice sorgente non è disponibile. Chiamare le funzioni Win32, ad esempio, richiede PInvoke. In caso contrario, utilizzare P implicita {Invoke, vedere [con funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md) per altre informazioni.

PInvoke funziona usando <xref:System.Runtime.InteropServices.DllImportAttribute>. Questo attributo, che accetta il nome della DLL come primo argomento, viene inserito prima una dichiarazione di funzione per ogni punto di ingresso DLL che verrà utilizzato. La firma della funzione deve corrispondere al nome di una funzione esportata dalla DLL (ma alcuni conversione del tipo può essere eseguita in modo implicito tramite la definizione di `DllImport` dichiarazioni in termini di tipi gestiti.)

Il risultato è un punto di ingresso gestito per ogni funzione di DLL native che contiene il codice di transizione necessario (o thunk) e le conversioni di dati semplici. Funzioni gestite possono quindi chiamare nella DLL tramite questi punti di ingresso. Il codice inserito in un modulo come risultato di PInvoke è interamente gestito.

## <a name="in-this-section"></a>In questa sezione

- [Chiamata di funzioni native da codice gestito](../dotnet/calling-native-functions-from-managed-code.md)

- [Procedura: Chiamare DLL native da codice gestito tramite PInvoke](../dotnet/how-to-call-native-dlls-from-managed-code-using-pinvoke.md)

- [Procedura: Effettuare il marshalling di stringhe tramite PInvoke](../dotnet/how-to-marshal-strings-using-pinvoke.md)

- [Procedura: Effettuare il marshalling di strutture tramite PInvoke](../dotnet/how-to-marshal-structures-using-pinvoke.md)

- [Procedura: Effettuare il marshalling di matrici tramite PInvoke](../dotnet/how-to-marshal-arrays-using-pinvoke.md)

- [Procedura: Effettuare il marshalling di puntatori a funzione tramite PInvoke](../dotnet/how-to-marshal-function-pointers-using-pinvoke.md)

- [Procedura: Effettuare il marshalling di puntatori incorporati tramite PInvoke](../dotnet/how-to-marshal-embedded-pointers-using-pinvoke.md)

## <a name="see-also"></a>Vedere anche

[Chiamata di funzioni native da codice gestito](../dotnet/calling-native-functions-from-managed-code.md)
