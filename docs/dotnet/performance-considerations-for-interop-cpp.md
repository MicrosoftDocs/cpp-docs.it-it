---
description: "Altre informazioni su: considerazioni sulle prestazioni per l'interoperabilità (C++)"
title: Considerazioni sulle prestazioni per l'interoperabilità (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- /clr compiler option [C++], interop performance considerations
- platform invoke [C++], interoperability
- interop [C++], performance consideraitons
- mixed assemblies [C++], performance considerations
- interoperability [C++], performance considerations
ms.assetid: bb9a282e-c3f8-40eb-a2fa-45d80d578932
ms.openlocfilehash: 29723f0ea5c7b745100ab4c7abb7f59abce47db6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97255561"
---
# <a name="performance-considerations-for-interop-c"></a>Considerazioni sulle prestazioni per l'interoperabilità (C++)

In questo argomento vengono fornite linee guida per ridurre l'effetto delle transizioni di interoperabilità gestite/non gestite sulle prestazioni in fase di esecuzione.

Visual C++ supporta gli stessi meccanismi di interoperabilità di altri linguaggi .NET, ad esempio Visual Basic e C# (P/Invoke), ma fornisce anche il supporto per l'interoperabilità specifico per Visual C++ (interoperabilità C++). Per le applicazioni critiche per le prestazioni, è importante comprendere le implicazioni relative alle prestazioni di ogni tecnica di interoperabilità.

Indipendentemente dalla tecnica di interoperabilità utilizzata, le sequenze di transizione speciali, denominate thunk, sono necessarie ogni volta che una funzione gestita chiama una funzione non gestita e viceversa. Questi thunk vengono inseriti automaticamente dal compilatore Microsoft C++, ma è importante tenere presente che cumulativamente tali transizioni possono risultare costose in termini di prestazioni.

## <a name="reducing-transitions"></a>Riduzione delle transizioni

Un modo per evitare o ridurre il costo dei thunk di interoperabilità consiste nel effettuare il refactoring delle interfacce necessarie per ridurre al minimo le transizioni gestite/non gestite. I miglioramenti significativi delle prestazioni possono essere apportati selezionando interfacce loquaci, ovvero quelle che coinvolgono chiamate frequenti attraverso il limite gestito/non gestito. Una funzione gestita che chiama una funzione non gestita in un ciclo stretto, ad esempio, è un buon candidato per il refactoring. Se il ciclo stesso viene spostato sul lato non gestito o se viene creata un'alternativa gestita alla chiamata non gestita (ad esempio, accodare i dati sul lato gestito e quindi eseguirne il marshalling all'API non gestita in una sola volta dopo il ciclo), il numero di transizioni può essere ridotto in modo significativo.

## <a name="pinvoke-vs-c-interop"></a>Interoperabilità P/Invoke e C++

Per i linguaggi .NET, ad esempio Visual Basic e C#, il metodo prescritto per l'interoperabilità con i componenti nativi è P/Invoke. Poiché P/Invoke è supportato dal .NET Framework, Visual C++ lo supporta anche, ma Visual C++ fornisce anche il proprio supporto di interoperabilità, denominato interoperabilità C++. L'interoperabilità C++ è preferibile rispetto a P/Invoke perché P/Invoke non è indipendente dai tipi. Di conseguenza, gli errori vengono segnalati principalmente in fase di esecuzione, ma anche l'interoperabilità C++ presenta vantaggi in termini di prestazioni rispetto a P/Invoke.

Entrambe le tecniche richiedono che vengano eseguite diverse operazioni ogni volta che una funzione gestita chiama una funzione non gestita:

- Viene eseguito il marshalling degli argomenti della chiamata di funzione da CLR ai tipi nativi.

- Viene eseguito un thunk gestito a non gestito.

- La funzione non gestita viene chiamata, usando le versioni native degli argomenti.

- Viene eseguito un thunk non gestito.

- Viene eseguito il marshalling del tipo restituito e degli argomenti "out" o "in uscita" da tipi nativi a CLR.

I thunk gestiti/non gestiti sono necessari per il funzionamento dell'interoperabilità, ma il marshalling dei dati richiesto dipende dai tipi di dati interessati, dalla firma della funzione e dal modo in cui i dati verranno utilizzati.

Il marshalling dei dati eseguito dall'interoperabilità C++ è il formato possibile più semplice: i parametri vengono semplicemente copiati attraverso il limite gestito/non gestito in modo bit per bit. Nessuna trasformazione viene eseguita. Per P/Invoke, questo è vero solo se tutti i parametri sono tipi semplici e copiabili. In caso contrario, P/Invoke esegue passaggi molto affidabili per convertire ogni parametro gestito in un tipo nativo appropriato e viceversa se gli argomenti sono contrassegnati come "out" o "in, out".

In altre parole, l'interoperabilità C++ usa il metodo più veloce possibile per il marshalling dei dati, mentre P/Invoke usa il metodo più affidabile. Ciò significa che l'interoperabilità C++ (in un modo tipico per C++) fornisce prestazioni ottimali per impostazione predefinita e il programmatore è responsabile dell'indirizzamento dei casi in cui questo comportamento non è sicuro o appropriato.

Per l'interoperabilità C++ è quindi necessario che il marshalling dei dati venga fornito in modo esplicito, ma il vantaggio è che il programmatore è libero di decidere quali sono i dati appropriati, a seconda della natura dei dati e del modo in cui devono essere usati. Inoltre, anche se il comportamento del marshalling dei dati P/Invoke può essere modificato in un livello personalizzato, l'interoperabilità C++ consente di personalizzare i marshalling dei dati in base a una chiamata. Questa operazione non è possibile con P/Invoke.

Per ulteriori informazioni sull'interoperabilità C++, vedere [utilizzo di interoperabilità c++ (PInvoke implicito)](../dotnet/using-cpp-interop-implicit-pinvoke.md).

## <a name="see-also"></a>Vedi anche

[Assembly misti (nativi e gestiti)](../dotnet/mixed-native-and-managed-assemblies.md)
