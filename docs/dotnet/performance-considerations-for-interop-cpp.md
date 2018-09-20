---
title: Considerazioni sulle prestazioni per l'interoperabilità (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- /clr compiler option [C++], interop performance considerations
- platform invoke [C++], interoperability
- interop [C++], performance consideraitons
- mixed assemblies [C++], performance considerations
- interoperability [C++], performance considerations
ms.assetid: bb9a282e-c3f8-40eb-a2fa-45d80d578932
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: ce27ac6e5194842ab0b9cf2237fbde1a1b636fba
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46415993"
---
# <a name="performance-considerations-for-interop-c"></a>Considerazioni sulle prestazioni per l'interoperabilità (C++)

In questo argomento vengono fornite linee guida per ridurre l'effetto delle transizioni di interoperabilità gestito e sulle prestazioni in fase di esecuzione.

Visual C++ supporta gli stessi meccanismi di interoperabilità negli altri linguaggi .NET, ad esempio Visual Basic e c# (P/Invoke), ma fornisce inoltre il supporto di interoperabilità che è specifico di Visual C++ (interoperabilità C++). Per le applicazioni critiche per le prestazioni, è importante comprendere le implicazioni sulle prestazioni di ogni tecnica interoperabilità.

Indipendentemente dalla tecnica di interoperabilità utilizzata, le sequenze di transizione speciale, chiamate thunk, sono necessari ogni volta che una funzione gestita chiama un versa non gestito (funzione) e viceversa. I thunk vengono inseriti automaticamente dal compilatore Visual C++, ma è importante tenere presente che App ha complessivamente, le transizioni possono essere costose in termini di prestazioni.

## <a name="reducing-transitions"></a>Riducendo le transizioni

Un modo per evitare o ridurre il costo del thunk è eseguire il refactoring le interfacce coinvolti per ridurre al minimo le transizioni gestiti/non gestiti. Miglioramento delle prestazioni può accadere indicando come destinazione le interfacce "frammentate", che sono quelli che eseguono chiamate frequenti oltre i limiti gestiti/non gestiti. Una funzione gestita che chiama una funzione non gestita in un ciclo ridotto, ad esempio, è un buon candidato per il refactoring. Se il ciclo viene spostato al lato non gestito o se un'alternativa gestita per la chiamata non gestita viene creata (ad esempio essere Accodamento dei dati sul lato gestito e quindi marshalling per le API non gestita in una sola volta dopo il ciclo), il numero di transizioni può essere ridotto sign ificantly.

## <a name="pinvoke-vs-c-interop"></a>Visual Studio di P/Invoke. interoperabilità C++

Per i linguaggi .NET, ad esempio Visual Basic e c#, il metodo prescritto per l'ineroperabilità con i componenti nativi è P/Invoke. Poiché P/Invoke è supportato da .NET Framework, Visual C++ supporta anche, ma Visual C++ fornisce anche il proprio supporto per l'interoperabilità, che è considerato interoperabilità C++. Interoperabilità C++ è preferibile rispetto P/Invoke P/Invoke non è indipendente dai tipi. Di conseguenza, gli errori vengono segnalati principalmente in fase di esecuzione, ma l'interoperabilità C++ dispone anche di ottenere prestazioni migliori rispetto P/Invoke.

Entrambe le tecniche richiedono diversi aspetti da verifica ogni volta che una funzione gestita chiama una funzione non gestita:

- Gli argomenti della funzione chiamata vengono effettuato il marshalling da CLR a tipi nativi.

- Viene eseguito un thunk a gestito.

- Viene chiamata la funzione non gestita (tramite le versioni native di argomenti).

- Viene eseguito un thunk non gestito a gestito.

- Il tipo restituito ed eventuali "out" o "in, out" argomenti vengono effettuato il marshalling da codice nativo a tipi CLR.

Il thunk gestito e non sono necessarie per l'interoperabilità a funziona affatto, ma il marshalling dei dati che è necessario dipende da tipi di dati coinvolti, la firma della funzione e modalità di utilizzo dei dati.

Il marshalling dei dati eseguite tramite l'interoperabilità C++ è la forma più semplice possibile: i parametri vengono semplicemente copiati oltre i limiti gestiti/non gestiti in modo bit per bit; Nessuna trasformazione viene eseguita affatto. Per P/Invoke, questo vale solo se tutti i parametri sono semplici, tipi copiabili da blt. In caso contrario, P/Invoke esegue operazioni molto complesse per convertire ogni parametro gestito in un tipo nativo appropriato, e viceversa se gli argomenti sono contrassegnati come "out", o "in, out".

In altre parole, interoperabilità C++ Usa il metodo più veloce possibile effettuare il marshalling dei dati, mentre P/Invoke Usa il metodo più efficace. Ciò significa che l'interoperabilità C++ (in un modo tipico per C++) offre prestazioni ottimali per impostazione predefinita, e il programmatore è responsabile di risolvere i casi in cui questo comportamento non appropriato o sicuri.

Interoperabilità C++ richiede pertanto che il marshalling dei dati è necessario specificare in modo esplicito, ma il vantaggio è che il programmatore è gratuito decidere quali risulta appropriato, in base alla tipologia dei dati e come sia possibile utilizzare. Inoltre, anche se può essere modificato il comportamento di marshalling dei dati di P/Invoke in personalizzate in una certa misura, interoperabilità C++ permette per essere personalizzati in base a una singola chiamata a marshalling dei dati. Questo non è possibile con P/Invoke.

Per altre informazioni sulle funzionalità di interoperabilità C++, vedere [con funzionalità di interoperabilità C++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md).

## <a name="see-also"></a>Vedere anche

[Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)